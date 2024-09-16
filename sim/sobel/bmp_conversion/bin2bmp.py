def create_bmp_from_raw_with_padding(raw_bytes_file, output_file, width=512, height=512):
    # BMP Header for a grayscale image
    file_size = 14 + 40 + width * height  # BMP header size (14) + DIB header size (40) + pixel data size
    bmp_header = bytearray([
        0x42, 0x4D,  # Signature "BM"
        file_size & 0xFF, (file_size >> 8) & 0xFF, (file_size >> 16) & 0xFF, (file_size >> 24) & 0xFF,  # File size
        0x00, 0x00,  # Reserved
        0x00, 0x00,  # Reserved
        0x36, 0x00, 0x00, 0x00,  # Offset to start of pixel data (54 bytes)
    ])

    # DIB Header (BITMAPINFOHEADER format)
    dib_header = bytearray([
        0x28, 0x00, 0x00, 0x00,  # Header size (40 bytes)
        width & 0xFF, (width >> 8) & 0xFF, (width >> 16) & 0xFF, (width >> 24) & 0xFF,  # Image width
        height & 0xFF, (height >> 8) & 0xFF, (height >> 16) & 0xFF, (height >> 24) & 0xFF,  # Image height
        0x01, 0x00,  # Number of color planes (must be 1)
        0x08, 0x00,  # Bits per pixel (8 bits for grayscale)
        0x00, 0x00, 0x00, 0x00,  # Compression (0 = none)
        (width * height) & 0xFF, ((width * height) >> 8) & 0xFF, ((width * height) >> 16) & 0xFF, ((width * height) >> 24) & 0xFF,  # Image size (no compression)
        0x13, 0x0B, 0x00, 0x00,  # Horizontal resolution (2835 pixels/meter)
        0x13, 0x0B, 0x00, 0x00,  # Vertical resolution (2835 pixels/meter)
        0x00, 0x00, 0x00, 0x00,  # Number of colors in palette (0 = default 256)
        0x00, 0x00, 0x00, 0x00,  # Important colors (0 = all)
    ])

    # Grayscale palette (256 shades from black to white)
    palette = bytearray()
    for i in range(256):
        palette.extend([i, i, i, 0])  # RGBQUAD for grayscale (B, G, R, Reserved)

    # Read raw binary data
    pixel_data = bytearray()
    with open(raw_bytes_file, 'r') as f:
        for line in f:
            try:
                # Convert binary string to integer and append to pixel data
                byte = int(line.strip(), 2)  # Base 2 for binary
                pixel_data.append(byte)
            except ValueError as e:
                print(f"Error converting line '{line.strip()}': {e}")
                continue  # Skip any lines that cause a conversion error

    # Calculate the required number of pixels
    required_size = width * height

    # Add padding if the pixel data is shorter than required
    if len(pixel_data) < required_size:
        padding_size = required_size - len(pixel_data)
        print(f"Padding with {padding_size} bytes.")
        pixel_data.extend([0] * padding_size)

    # Trim the pixel data if it exceeds the required size
    elif len(pixel_data) > required_size:
        print("Warning: Pixel data size exceeds the required image size, trimming extra bytes.")
        pixel_data = pixel_data[:required_size]

    # Combine all parts and write to the output BMP file
    with open(output_file, 'wb') as f:
        f.write(bmp_header)
        f.write(dib_header)
        f.write(palette)
        f.write(pixel_data)

# Example usage
raw_bytes_file = 'filtered_lena_bin.txt'  # Input file with raw BMP bytes in binary format
output_file = 'output.bmp'        # Output BMP file
create_bmp_from_raw_with_padding(raw_bytes_file, output_file)
