/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/sim/sobel/main/sobel_main.v";
static const char *ng1 = "img_bin.txt";
static const char *ng2 = "sobel_img_bin.txt";
static const char *ng3 = "w";
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {2, 0};
static int ng10[] = {95, 0};
static unsigned int ng11[] = {255U, 0U};
static const char *ng12 = "%b\n";
static unsigned int ng13[] = {3U, 0U};



static void Initial_62_0(char *t0)
{
    char t2[8];
    char *t1;
    char *t3;

LAB0:    xsi_set_current_line(63, ng0);

LAB2:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3376);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(65, ng0);
    *((int *)t2) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t1 = (t2 + 4);
    *((int *)t1) = 0;
    t3 = (t0 + 5616);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB1:    return;
}

static void Always_68_1(char *t0)
{
    char t13[8];
    char t32[8];
    char t59[8];
    char t60[8];
    char t74[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;

LAB0:    t1 = (t0 + 6776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 7344);
    *((int *)t2) = 1;
    t3 = (t0 + 6808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2976U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(77, ng0);

LAB9:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB21;

LAB18:    if (t18 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t13) = 1;

LAB21:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB92;

LAB89:    if (t18 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t13) = 1;

LAB92:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB24:
LAB16:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(70, ng0);

LAB8:    xsi_set_current_line(71, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 4016);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    goto LAB7;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(79, ng0);

LAB17:    xsi_set_current_line(80, ng0);
    t28 = (t0 + 4176);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 4016);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 2, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 9, 0LL);
    goto LAB16;

LAB20:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(86, ng0);

LAB25:    xsi_set_current_line(87, ng0);
    t28 = (t0 + 4336);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB29;

LAB26:    if (t44 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t32) = 1;

LAB29:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t11 = *((char **)t5);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t32, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB50;

LAB49:    t21 = (t13 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t4) < *((unsigned int *)t13))
        goto LAB51;

LAB52:    t28 = (t32 + 4);
    t6 = *((unsigned int *)t28);
    t7 = (~(t6));
    t8 = *((unsigned int *)t32);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(120, ng0);

LAB73:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t11 = *((char **)t5);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t32, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB75;

LAB74:    t21 = (t13 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t4) < *((unsigned int *)t13))
        goto LAB76;

LAB77:    t28 = (t32 + 4);
    t6 = *((unsigned int *)t28);
    t7 = (~(t6));
    t8 = *((unsigned int *)t32);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(124, ng0);

LAB82:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 10, t5, 32);
    t11 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 10, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);

LAB81:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3376);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 3376);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4336);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t31, 10, t33, 32);
    t34 = (t0 + 744);
    t47 = *((char **)t34);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_multiply(t59, 32, t32, 32, t47, 32);
    t34 = (t0 + 4656);
    t48 = (t34 + 56U);
    t54 = *((char **)t48);
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 32, t59, 32, t54, 9);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t28, 2, 1, t60, 32, 2);
    t55 = (t0 + 3536);
    t56 = (t0 + 3536);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t61 = (t0 + 3536);
    t62 = (t61 + 64U);
    t63 = *((char **)t62);
    t64 = (t0 + 4656);
    t70 = (t64 + 56U);
    t71 = *((char **)t70);
    xsi_vlog_generic_convert_array_indices(t74, t81, t58, t63, 2, 1, t71, 9, 2);
    t72 = (t74 + 4);
    t6 = *((unsigned int *)t72);
    t76 = (!(t6));
    t73 = (t81 + 4);
    t7 = *((unsigned int *)t73);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB83;

LAB84:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3376);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 3376);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4336);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 744);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_multiply(t32, 32, t31, 10, t34, 32);
    t33 = (t0 + 4656);
    t47 = (t33 + 56U);
    t48 = *((char **)t47);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t32, 32, t48, 9);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t28, 2, 1, t59, 32, 2);
    t54 = (t0 + 3696);
    t55 = (t0 + 3696);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = (t0 + 3696);
    t61 = (t58 + 64U);
    t62 = *((char **)t61);
    t63 = (t0 + 4656);
    t64 = (t63 + 56U);
    t70 = *((char **)t64);
    xsi_vlog_generic_convert_array_indices(t60, t74, t57, t62, 2, 1, t70, 9, 2);
    t71 = (t60 + 4);
    t6 = *((unsigned int *)t71);
    t76 = (!(t6));
    t72 = (t74 + 4);
    t7 = *((unsigned int *)t72);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB85;

LAB86:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3856);
    t4 = (t0 + 3856);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3856);
    t21 = (t12 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 4656);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t13, t32, t11, t22, 2, 1, t30, 9, 2);
    t31 = (t13 + 4);
    t6 = *((unsigned int *)t31);
    t76 = (!(t6));
    t33 = (t32 + 4);
    t7 = *((unsigned int *)t33);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB87;

LAB88:
LAB56:
LAB32:    goto LAB24;

LAB28:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(88, ng0);

LAB33:    xsi_set_current_line(89, ng0);
    t54 = (t0 + 4656);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t0 + 744);
    t58 = *((char **)t57);
    t57 = ((char*)((ng7)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_minus(t59, 32, t58, 32, t57, 32);
    memset(t60, 0, 8);
    t61 = (t56 + 4);
    if (*((unsigned int *)t61) != 0)
        goto LAB35;

LAB34:    t62 = (t59 + 4);
    if (*((unsigned int *)t62) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t56) < *((unsigned int *)t59))
        goto LAB36;

LAB37:    t64 = (t60 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(92, ng0);

LAB42:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);

LAB41:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3536);
    t4 = (t0 + 3536);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3536);
    t21 = (t12 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 4656);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t13, t32, t11, t22, 2, 1, t30, 9, 2);
    t31 = (t13 + 4);
    t6 = *((unsigned int *)t31);
    t76 = (!(t6));
    t33 = (t32 + 4);
    t7 = *((unsigned int *)t33);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3376);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 3376);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4336);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 744);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_multiply(t32, 32, t31, 10, t34, 32);
    t33 = (t0 + 4656);
    t47 = (t33 + 56U);
    t48 = *((char **)t47);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t32, 32, t48, 9);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t28, 2, 1, t59, 32, 2);
    t54 = (t0 + 3696);
    t55 = (t0 + 3696);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = (t0 + 3696);
    t61 = (t58 + 64U);
    t62 = *((char **)t61);
    t63 = (t0 + 4656);
    t64 = (t63 + 56U);
    t70 = *((char **)t64);
    xsi_vlog_generic_convert_array_indices(t60, t74, t57, t62, 2, 1, t70, 9, 2);
    t71 = (t60 + 4);
    t6 = *((unsigned int *)t71);
    t76 = (!(t6));
    t72 = (t74 + 4);
    t7 = *((unsigned int *)t72);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3376);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 3376);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4336);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t31, 10, t33, 32);
    t34 = (t0 + 744);
    t47 = *((char **)t34);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_multiply(t59, 32, t32, 32, t47, 32);
    t34 = (t0 + 4656);
    t48 = (t34 + 56U);
    t54 = *((char **)t48);
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 32, t59, 32, t54, 9);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t28, 2, 1, t60, 32, 2);
    t55 = (t0 + 3856);
    t56 = (t0 + 3856);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t61 = (t0 + 3856);
    t62 = (t61 + 64U);
    t63 = *((char **)t62);
    t64 = (t0 + 4656);
    t70 = (t64 + 56U);
    t71 = *((char **)t70);
    xsi_vlog_generic_convert_array_indices(t74, t81, t58, t63, 2, 1, t71, 9, 2);
    t72 = (t74 + 4);
    t6 = *((unsigned int *)t72);
    t76 = (!(t6));
    t73 = (t81 + 4);
    t7 = *((unsigned int *)t73);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB47;

LAB48:    goto LAB32;

LAB35:    t63 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t60) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(90, ng0);
    t70 = (t0 + 4656);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng7)));
    memset(t74, 0, 8);
    xsi_vlog_unsigned_add(t74, 32, t72, 9, t73, 32);
    t75 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t75, t74, 0, 0, 9, 0LL);
    goto LAB41;

LAB43:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t32);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t32), t80, 0LL);
    goto LAB44;

LAB45:    t8 = *((unsigned int *)t60);
    t9 = *((unsigned int *)t74);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t54, t13, 0, *((unsigned int *)t74), t80, 0LL);
    goto LAB46;

LAB47:    t8 = *((unsigned int *)t74);
    t9 = *((unsigned int *)t81);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t55, t13, 0, *((unsigned int *)t81), t80, 0LL);
    goto LAB48;

LAB50:    t22 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB52;

LAB51:    *((unsigned int *)t32) = 1;
    goto LAB52;

LAB54:    xsi_set_current_line(104, ng0);

LAB57:    xsi_set_current_line(105, ng0);
    t29 = (t0 + 4656);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 744);
    t34 = *((char **)t33);
    t33 = ((char*)((ng7)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_minus(t59, 32, t34, 32, t33, 32);
    memset(t60, 0, 8);
    t47 = (t31 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB59;

LAB58:    t48 = (t59 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t31) < *((unsigned int *)t59))
        goto LAB60;

LAB61:    t55 = (t60 + 4);
    t14 = *((unsigned int *)t55);
    t15 = (~(t14));
    t16 = *((unsigned int *)t60);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(108, ng0);

LAB66:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 10, t5, 32);
    t11 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 10, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);

LAB65:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3376);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 3376);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4336);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t31, 10, t33, 32);
    t34 = (t0 + 744);
    t47 = *((char **)t34);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_multiply(t59, 32, t32, 32, t47, 32);
    t34 = (t0 + 4656);
    t48 = (t34 + 56U);
    t54 = *((char **)t48);
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 32, t59, 32, t54, 9);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t28, 2, 1, t60, 32, 2);
    t55 = (t0 + 3536);
    t56 = (t0 + 3536);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t61 = (t0 + 3536);
    t62 = (t61 + 64U);
    t63 = *((char **)t62);
    t64 = (t0 + 4656);
    t70 = (t64 + 56U);
    t71 = *((char **)t70);
    xsi_vlog_generic_convert_array_indices(t74, t81, t58, t63, 2, 1, t71, 9, 2);
    t72 = (t74 + 4);
    t6 = *((unsigned int *)t72);
    t76 = (!(t6));
    t73 = (t81 + 4);
    t7 = *((unsigned int *)t73);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3376);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 3376);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4336);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 744);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_multiply(t32, 32, t31, 10, t34, 32);
    t33 = (t0 + 4656);
    t47 = (t33 + 56U);
    t48 = *((char **)t47);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t32, 32, t48, 9);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t28, 2, 1, t59, 32, 2);
    t54 = (t0 + 3696);
    t55 = (t0 + 3696);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = (t0 + 3696);
    t61 = (t58 + 64U);
    t62 = *((char **)t61);
    t63 = (t0 + 4656);
    t64 = (t63 + 56U);
    t70 = *((char **)t64);
    xsi_vlog_generic_convert_array_indices(t60, t74, t57, t62, 2, 1, t70, 9, 2);
    t71 = (t60 + 4);
    t6 = *((unsigned int *)t71);
    t76 = (!(t6));
    t72 = (t74 + 4);
    t7 = *((unsigned int *)t72);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3376);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = (t0 + 3376);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 4336);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t31, 10, t33, 32);
    t34 = (t0 + 744);
    t47 = *((char **)t34);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_multiply(t59, 32, t32, 32, t47, 32);
    t34 = (t0 + 4656);
    t48 = (t34 + 56U);
    t54 = *((char **)t48);
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 32, t59, 32, t54, 9);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t28, 2, 1, t60, 32, 2);
    t55 = (t0 + 3856);
    t56 = (t0 + 3856);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t61 = (t0 + 3856);
    t62 = (t61 + 64U);
    t63 = *((char **)t62);
    t64 = (t0 + 4656);
    t70 = (t64 + 56U);
    t71 = *((char **)t70);
    xsi_vlog_generic_convert_array_indices(t74, t81, t58, t63, 2, 1, t71, 9, 2);
    t72 = (t74 + 4);
    t6 = *((unsigned int *)t72);
    t76 = (!(t6));
    t73 = (t81 + 4);
    t7 = *((unsigned int *)t73);
    t77 = (!(t7));
    t78 = (t76 && t77);
    if (t78 == 1)
        goto LAB71;

LAB72:    goto LAB56;

LAB59:    t54 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB61;

LAB60:    *((unsigned int *)t60) = 1;
    goto LAB61;

LAB63:    xsi_set_current_line(106, ng0);
    t56 = (t0 + 4656);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t61 = ((char*)((ng7)));
    memset(t74, 0, 8);
    xsi_vlog_unsigned_add(t74, 32, t58, 9, t61, 32);
    t62 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t62, t74, 0, 0, 9, 0LL);
    goto LAB65;

LAB67:    t8 = *((unsigned int *)t74);
    t9 = *((unsigned int *)t81);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t55, t13, 0, *((unsigned int *)t81), t80, 0LL);
    goto LAB68;

LAB69:    t8 = *((unsigned int *)t60);
    t9 = *((unsigned int *)t74);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t54, t13, 0, *((unsigned int *)t74), t80, 0LL);
    goto LAB70;

LAB71:    t8 = *((unsigned int *)t74);
    t9 = *((unsigned int *)t81);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t55, t13, 0, *((unsigned int *)t81), t80, 0LL);
    goto LAB72;

LAB75:    t22 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB77;

LAB76:    *((unsigned int *)t32) = 1;
    goto LAB77;

LAB79:    xsi_set_current_line(122, ng0);
    t29 = (t0 + 4656);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t33 = ((char*)((ng7)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t31, 9, t33, 32);
    t34 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t34, t59, 0, 0, 9, 0LL);
    goto LAB81;

LAB83:    t8 = *((unsigned int *)t74);
    t9 = *((unsigned int *)t81);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t55, t13, 0, *((unsigned int *)t81), t80, 0LL);
    goto LAB84;

LAB85:    t8 = *((unsigned int *)t60);
    t9 = *((unsigned int *)t74);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t54, t13, 0, *((unsigned int *)t74), t80, 0LL);
    goto LAB86;

LAB87:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t32);
    t79 = (t8 - t9);
    t80 = (t79 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t32), t80, 0LL);
    goto LAB88;

LAB91:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(137, ng0);

LAB96:    xsi_set_current_line(138, ng0);
    t28 = (t0 + 4176);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 4016);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 2, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 9, 0LL);
    goto LAB95;

}

static void Always_145_2(char *t0)
{
    char t9[8];
    char t35[8];
    char t46[8];
    char t47[8];
    char t53[8];
    char t64[8];
    char t65[8];
    char t66[8];
    char t67[8];
    char t72[8];
    char t83[8];
    char t84[8];
    char t85[8];
    char t99[8];
    char t104[8];
    char t115[8];
    char t116[8];
    char t117[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;

LAB0:    t1 = (t0 + 7024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 7360);
    *((int *)t2) = 1;
    t3 = (t0 + 7056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(146, ng0);

LAB5:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 4016);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4176);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4496);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 10);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4816);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(154, ng0);

LAB14:    xsi_set_current_line(155, ng0);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 4176);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    goto LAB13;

LAB9:    xsi_set_current_line(160, ng0);

LAB15:    xsi_set_current_line(161, ng0);
    t3 = (t0 + 4656);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB19;

LAB16:    if (t21 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t9) = 1;

LAB19:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4656);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 744);
    t7 = *((char **)t6);
    t6 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t7, 32, t6, 32);
    memset(t35, 0, 8);
    t10 = (t5 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB27;

LAB24:    if (t21 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t35) = 1;

LAB27:    t25 = (t35 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t35);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(172, ng0);

LAB32:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3536);
    t7 = (t6 + 72U);
    t10 = *((char **)t7);
    t11 = (t0 + 3536);
    t24 = (t11 + 64U);
    t25 = *((char **)t24);
    t31 = (t0 + 4656);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng7)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t33, 9, t34, 32);
    xsi_vlog_generic_get_array_select_value(t9, 32, t5, t10, t25, 2, 1, t35, 32, 2);
    t36 = (t0 + 3536);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t0 + 3536);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 3536);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 4656);
    t48 = (t45 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng7)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t49, 9, t50, 32);
    xsi_vlog_generic_get_array_select_value(t46, 32, t38, t41, t44, 2, 1, t47, 32, 2);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t9, 32, t46, 32);
    t51 = ((char*)((ng9)));
    t52 = (t0 + 3696);
    t54 = (t52 + 56U);
    t55 = *((char **)t54);
    t56 = (t0 + 3696);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 3696);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 4656);
    t63 = (t62 + 56U);
    t68 = *((char **)t63);
    t69 = ((char*)((ng7)));
    memset(t65, 0, 8);
    xsi_vlog_unsigned_minus(t65, 32, t68, 9, t69, 32);
    xsi_vlog_generic_get_array_select_value(t64, 32, t55, t58, t61, 2, 1, t65, 32, 2);
    t70 = (t0 + 3696);
    t71 = (t70 + 56U);
    t73 = *((char **)t71);
    t74 = (t0 + 3696);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 3696);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t80 = (t0 + 4656);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t86 = ((char*)((ng7)));
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 32, t82, 9, t86, 32);
    xsi_vlog_generic_get_array_select_value(t66, 32, t73, t76, t79, 2, 1, t67, 32, 2);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_minus(t72, 32, t64, 32, t66, 32);
    memset(t83, 0, 8);
    xsi_vlog_unsigned_multiply(t83, 32, t51, 32, t72, 32);
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 32, t53, 32, t83, 32);
    t87 = (t0 + 3856);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t0 + 3856);
    t91 = (t90 + 72U);
    t92 = *((char **)t91);
    t93 = (t0 + 3856);
    t94 = (t93 + 64U);
    t95 = *((char **)t94);
    t96 = (t0 + 4656);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t100 = ((char*)((ng7)));
    memset(t99, 0, 8);
    xsi_vlog_unsigned_minus(t99, 32, t98, 9, t100, 32);
    xsi_vlog_generic_get_array_select_value(t85, 32, t89, t92, t95, 2, 1, t99, 32, 2);
    t101 = (t0 + 3856);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t105 = (t0 + 3856);
    t106 = (t105 + 72U);
    t107 = *((char **)t106);
    t108 = (t0 + 3856);
    t109 = (t108 + 64U);
    t110 = *((char **)t109);
    t111 = (t0 + 4656);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    t114 = ((char*)((ng7)));
    memset(t115, 0, 8);
    xsi_vlog_unsigned_add(t115, 32, t113, 9, t114, 32);
    xsi_vlog_generic_get_array_select_value(t104, 32, t103, t107, t110, 2, 1, t115, 32, 2);
    memset(t116, 0, 8);
    xsi_vlog_unsigned_minus(t116, 32, t85, 32, t104, 32);
    memset(t117, 0, 8);
    xsi_vlog_unsigned_add(t117, 32, t84, 32, t116, 32);
    t118 = (t0 + 4976);
    xsi_vlogvar_assign_value(t118, t117, 0, 0, 11);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3536);
    t7 = (t6 + 72U);
    t10 = *((char **)t7);
    t11 = (t0 + 3536);
    t24 = (t11 + 64U);
    t25 = *((char **)t24);
    t31 = (t0 + 4656);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng7)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t33, 9, t34, 32);
    xsi_vlog_generic_get_array_select_value(t9, 32, t5, t10, t25, 2, 1, t35, 32, 2);
    t36 = (t0 + 3856);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t0 + 3856);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 3856);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 4656);
    t48 = (t45 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng7)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t49, 9, t50, 32);
    xsi_vlog_generic_get_array_select_value(t46, 32, t38, t41, t44, 2, 1, t47, 32, 2);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t9, 32, t46, 32);
    t51 = ((char*)((ng9)));
    t52 = (t0 + 3536);
    t54 = (t52 + 56U);
    t55 = *((char **)t54);
    t56 = (t0 + 3536);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 3536);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 4656);
    t63 = (t62 + 56U);
    t68 = *((char **)t63);
    xsi_vlog_generic_get_array_select_value(t64, 32, t55, t58, t61, 2, 1, t68, 9, 2);
    t69 = (t0 + 3856);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t73 = (t0 + 3856);
    t74 = (t73 + 72U);
    t75 = *((char **)t74);
    t76 = (t0 + 3856);
    t77 = (t76 + 64U);
    t78 = *((char **)t77);
    t79 = (t0 + 4656);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    xsi_vlog_generic_get_array_select_value(t65, 32, t71, t75, t78, 2, 1, t81, 9, 2);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_minus(t66, 32, t64, 32, t65, 32);
    memset(t67, 0, 8);
    xsi_vlog_unsigned_multiply(t67, 32, t51, 32, t66, 32);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_add(t72, 32, t53, 32, t67, 32);
    t82 = (t0 + 3536);
    t86 = (t82 + 56U);
    t87 = *((char **)t86);
    t88 = (t0 + 3536);
    t89 = (t88 + 72U);
    t90 = *((char **)t89);
    t91 = (t0 + 3536);
    t92 = (t91 + 64U);
    t93 = *((char **)t92);
    t94 = (t0 + 4656);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = ((char*)((ng7)));
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 32, t96, 9, t97, 32);
    xsi_vlog_generic_get_array_select_value(t83, 32, t87, t90, t93, 2, 1, t84, 32, 2);
    t98 = (t0 + 3856);
    t100 = (t98 + 56U);
    t101 = *((char **)t100);
    t102 = (t0 + 3856);
    t103 = (t102 + 72U);
    t105 = *((char **)t103);
    t106 = (t0 + 3856);
    t107 = (t106 + 64U);
    t108 = *((char **)t107);
    t109 = (t0 + 4656);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    t112 = ((char*)((ng7)));
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 32, t111, 9, t112, 32);
    xsi_vlog_generic_get_array_select_value(t85, 32, t101, t105, t108, 2, 1, t99, 32, 2);
    memset(t104, 0, 8);
    xsi_vlog_unsigned_minus(t104, 32, t83, 32, t85, 32);
    memset(t115, 0, 8);
    xsi_vlog_unsigned_add(t115, 32, t72, 32, t104, 32);
    t113 = (t0 + 5136);
    xsi_vlogvar_assign_value(t113, t115, 0, 0, 11);

LAB30:
LAB22:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t46, 0, 8);
    xsi_vlog_signed_less(t46, 32, t5, 11, t6, 32);
    memset(t35, 0, 8);
    t7 = (t46 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t46);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t7) != 0)
        goto LAB35;

LAB36:    t11 = (t35 + 4);
    t17 = *((unsigned int *)t35);
    t18 = *((unsigned int *)t11);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB37;

LAB38:    t20 = *((unsigned int *)t35);
    t21 = (~(t20));
    t22 = *((unsigned int *)t11);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t11) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t35) > 0)
        goto LAB43;

LAB44:    memcpy(t9, t34, 8);

LAB45:    t36 = (t0 + 5136);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng5)));
    memset(t65, 0, 8);
    xsi_vlog_signed_less(t65, 32, t38, 11, t39, 32);
    memset(t64, 0, 8);
    t40 = (t65 + 4);
    t26 = *((unsigned int *)t40);
    t27 = (~(t26));
    t28 = *((unsigned int *)t65);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t40) != 0)
        goto LAB48;

LAB49:    t42 = (t64 + 4);
    t119 = *((unsigned int *)t64);
    t120 = *((unsigned int *)t42);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB50;

LAB51:    t122 = *((unsigned int *)t64);
    t123 = (~(t122));
    t124 = *((unsigned int *)t42);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t42) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t64) > 0)
        goto LAB56;

LAB57:    memcpy(t53, t50, 8);

LAB58:    memset(t67, 0, 8);
    xsi_vlog_signed_add(t67, 11, t9, 11, t53, 11);
    t51 = (t0 + 5296);
    xsi_vlogvar_assign_value(t51, t67, 0, 0, 11);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 5296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greater(t9, 32, t5, 11, t6, 32);
    t7 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB61:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 5616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5456);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng12, 2, t0, (char)118, t10, 8);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 880);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB63;

LAB62:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB64;

LAB65:    t24 = (t9 + 4);
    t12 = *((unsigned int *)t24);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(196, ng0);

LAB79:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4656);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 744);
    t7 = *((char **)t6);
    t6 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t7, 32, t6, 32);
    memset(t35, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB81;

LAB80:    t11 = (t9 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t5) < *((unsigned int *)t9))
        goto LAB82;

LAB83:    t25 = (t35 + 4);
    t12 = *((unsigned int *)t25);
    t13 = (~(t12));
    t14 = *((unsigned int *)t35);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(200, ng0);

LAB88:    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);

LAB87:
LAB69:    goto LAB13;

LAB11:    xsi_set_current_line(208, ng0);

LAB89:    xsi_set_current_line(209, ng0);
    t3 = (t0 + 5616);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t6));
    xsi_set_current_line(210, ng0);
    xsi_vlog_stop(1);
    goto LAB13;

LAB18:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(162, ng0);

LAB23:    xsi_set_current_line(163, ng0);
    t31 = ((char*)((ng5)));
    t32 = (t0 + 3536);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t36 = (t0 + 3536);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t39 = (t0 + 3536);
    t40 = (t39 + 64U);
    t41 = *((char **)t40);
    t42 = (t0 + 4656);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng7)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t44, 9, t45, 32);
    xsi_vlog_generic_get_array_select_value(t35, 32, t34, t38, t41, 2, 1, t46, 32, 2);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t31, 32, t35, 32);
    t48 = ((char*)((ng9)));
    t49 = ((char*)((ng5)));
    t50 = (t0 + 3696);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t54 = (t0 + 3696);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 3696);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 4656);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = ((char*)((ng7)));
    memset(t64, 0, 8);
    xsi_vlog_unsigned_add(t64, 32, t62, 9, t63, 32);
    xsi_vlog_generic_get_array_select_value(t53, 32, t52, t56, t59, 2, 1, t64, 32, 2);
    memset(t65, 0, 8);
    xsi_vlog_unsigned_minus(t65, 32, t49, 32, t53, 32);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_multiply(t66, 32, t48, 32, t65, 32);
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 32, t47, 32, t66, 32);
    t68 = ((char*)((ng5)));
    t69 = (t0 + 3856);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t73 = (t0 + 3856);
    t74 = (t73 + 72U);
    t75 = *((char **)t74);
    t76 = (t0 + 3856);
    t77 = (t76 + 64U);
    t78 = *((char **)t77);
    t79 = (t0 + 4656);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng7)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t81, 9, t82, 32);
    xsi_vlog_generic_get_array_select_value(t72, 32, t71, t75, t78, 2, 1, t83, 32, 2);
    memset(t84, 0, 8);
    xsi_vlog_unsigned_minus(t84, 32, t68, 32, t72, 32);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 32, t67, 32, t84, 32);
    t86 = (t0 + 4976);
    xsi_vlogvar_assign_value(t86, t85, 0, 0, 11);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3856);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3856);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t24 = (t0 + 3856);
    t25 = (t24 + 64U);
    t31 = *((char **)t25);
    t32 = (t0 + 4656);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t11, t31, 2, 1, t34, 9, 2);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t2, 32, t9, 32);
    t36 = ((char*)((ng9)));
    t37 = (t0 + 3536);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 3536);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 3536);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t48 = (t0 + 4656);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_get_array_select_value(t46, 32, t39, t42, t45, 2, 1, t50, 9, 2);
    t51 = (t0 + 3856);
    t52 = (t51 + 56U);
    t54 = *((char **)t52);
    t55 = (t0 + 3856);
    t56 = (t55 + 72U);
    t57 = *((char **)t56);
    t58 = (t0 + 3856);
    t59 = (t58 + 64U);
    t60 = *((char **)t59);
    t61 = (t0 + 4656);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    xsi_vlog_generic_get_array_select_value(t47, 32, t54, t57, t60, 2, 1, t63, 9, 2);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t46, 32, t47, 32);
    memset(t64, 0, 8);
    xsi_vlog_unsigned_multiply(t64, 32, t36, 32, t53, 32);
    memset(t65, 0, 8);
    xsi_vlog_unsigned_add(t65, 32, t35, 32, t64, 32);
    t68 = (t0 + 3536);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t0 + 3536);
    t73 = (t71 + 72U);
    t74 = *((char **)t73);
    t75 = (t0 + 3536);
    t76 = (t75 + 64U);
    t77 = *((char **)t76);
    t78 = (t0 + 4656);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng7)));
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 32, t80, 9, t81, 32);
    xsi_vlog_generic_get_array_select_value(t66, 32, t70, t74, t77, 2, 1, t67, 32, 2);
    t82 = (t0 + 3856);
    t86 = (t82 + 56U);
    t87 = *((char **)t86);
    t88 = (t0 + 3856);
    t89 = (t88 + 72U);
    t90 = *((char **)t89);
    t91 = (t0 + 3856);
    t92 = (t91 + 64U);
    t93 = *((char **)t92);
    t94 = (t0 + 4656);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = ((char*)((ng7)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_add(t83, 32, t96, 9, t97, 32);
    xsi_vlog_generic_get_array_select_value(t72, 32, t87, t90, t93, 2, 1, t83, 32, 2);
    memset(t84, 0, 8);
    xsi_vlog_unsigned_minus(t84, 32, t66, 32, t72, 32);
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 32, t65, 32, t84, 32);
    t98 = (t0 + 5136);
    xsi_vlogvar_assign_value(t98, t85, 0, 0, 11);
    goto LAB22;

LAB26:    t24 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(167, ng0);

LAB31:    xsi_set_current_line(168, ng0);
    t31 = (t0 + 3536);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 3536);
    t36 = (t34 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 3536);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = (t0 + 4656);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng7)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t43, 9, t44, 32);
    xsi_vlog_generic_get_array_select_value(t46, 32, t33, t37, t40, 2, 1, t47, 32, 2);
    t45 = ((char*)((ng5)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t46, 32, t45, 32);
    t48 = ((char*)((ng9)));
    t49 = (t0 + 3696);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t0 + 3696);
    t54 = (t52 + 72U);
    t55 = *((char **)t54);
    t56 = (t0 + 3696);
    t57 = (t56 + 64U);
    t58 = *((char **)t57);
    t59 = (t0 + 4656);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng7)));
    memset(t65, 0, 8);
    xsi_vlog_unsigned_minus(t65, 32, t61, 9, t62, 32);
    xsi_vlog_generic_get_array_select_value(t64, 32, t51, t55, t58, 2, 1, t65, 32, 2);
    t63 = ((char*)((ng5)));
    memset(t66, 0, 8);
    xsi_vlog_unsigned_minus(t66, 32, t64, 32, t63, 32);
    memset(t67, 0, 8);
    xsi_vlog_unsigned_multiply(t67, 32, t48, 32, t66, 32);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_add(t72, 32, t53, 32, t67, 32);
    t68 = (t0 + 3856);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t0 + 3856);
    t73 = (t71 + 72U);
    t74 = *((char **)t73);
    t75 = (t0 + 3856);
    t76 = (t75 + 64U);
    t77 = *((char **)t76);
    t78 = (t0 + 4656);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng7)));
    memset(t84, 0, 8);
    xsi_vlog_unsigned_minus(t84, 32, t80, 9, t81, 32);
    xsi_vlog_generic_get_array_select_value(t83, 32, t70, t74, t77, 2, 1, t84, 32, 2);
    t82 = ((char*)((ng5)));
    memset(t85, 0, 8);
    xsi_vlog_unsigned_minus(t85, 32, t83, 32, t82, 32);
    memset(t99, 0, 8);
    xsi_vlog_unsigned_add(t99, 32, t72, 32, t85, 32);
    t86 = (t0 + 4976);
    xsi_vlogvar_assign_value(t86, t99, 0, 0, 11);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 3536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3536);
    t7 = (t6 + 72U);
    t10 = *((char **)t7);
    t11 = (t0 + 3536);
    t24 = (t11 + 64U);
    t25 = *((char **)t24);
    t31 = (t0 + 4656);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng7)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t33, 9, t34, 32);
    xsi_vlog_generic_get_array_select_value(t9, 32, t5, t10, t25, 2, 1, t35, 32, 2);
    t36 = (t0 + 3856);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t0 + 3856);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 3856);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 4656);
    t48 = (t45 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng7)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t49, 9, t50, 32);
    xsi_vlog_generic_get_array_select_value(t46, 32, t38, t41, t44, 2, 1, t47, 32, 2);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t9, 32, t46, 32);
    t51 = ((char*)((ng9)));
    t52 = (t0 + 3536);
    t54 = (t52 + 56U);
    t55 = *((char **)t54);
    t56 = (t0 + 3536);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 3536);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 4656);
    t63 = (t62 + 56U);
    t68 = *((char **)t63);
    xsi_vlog_generic_get_array_select_value(t64, 32, t55, t58, t61, 2, 1, t68, 9, 2);
    t69 = (t0 + 3856);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t73 = (t0 + 3856);
    t74 = (t73 + 72U);
    t75 = *((char **)t74);
    t76 = (t0 + 3856);
    t77 = (t76 + 64U);
    t78 = *((char **)t77);
    t79 = (t0 + 4656);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    xsi_vlog_generic_get_array_select_value(t65, 32, t71, t75, t78, 2, 1, t81, 9, 2);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_minus(t66, 32, t64, 32, t65, 32);
    memset(t67, 0, 8);
    xsi_vlog_unsigned_multiply(t67, 32, t51, 32, t66, 32);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_add(t72, 32, t53, 32, t67, 32);
    t82 = ((char*)((ng5)));
    t86 = ((char*)((ng5)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t82, 32, t86, 32);
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 32, t72, 32, t83, 32);
    t87 = (t0 + 5136);
    xsi_vlogvar_assign_value(t87, t84, 0, 0, 11);
    goto LAB30;

LAB33:    *((unsigned int *)t35) = 1;
    goto LAB36;

LAB35:    t10 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB36;

LAB37:    t24 = (t0 + 4976);
    t25 = (t24 + 56U);
    t31 = *((char **)t25);
    memset(t47, 0, 8);
    xsi_vlog_signed_unary_minus(t47, 11, t31, 11);
    goto LAB38;

LAB39:    t32 = (t0 + 4976);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t9, 11, t47, 11, t34, 11);
    goto LAB45;

LAB43:    memcpy(t9, t47, 8);
    goto LAB45;

LAB46:    *((unsigned int *)t64) = 1;
    goto LAB49;

LAB48:    t41 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB49;

LAB50:    t43 = (t0 + 5136);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t66, 0, 8);
    xsi_vlog_signed_unary_minus(t66, 11, t45, 11);
    goto LAB51;

LAB52:    t48 = (t0 + 5136);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t53, 11, t66, 11, t50, 11);
    goto LAB58;

LAB56:    memcpy(t53, t66, 8);
    goto LAB58;

LAB59:    xsi_set_current_line(180, ng0);
    t10 = ((char*)((ng11)));
    t11 = (t0 + 5456);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 8);
    goto LAB61;

LAB63:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t9) = 1;
    goto LAB65;

LAB67:    xsi_set_current_line(187, ng0);
    t25 = (t0 + 4656);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 744);
    t34 = *((char **)t33);
    t33 = ((char*)((ng7)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t34, 32, t33, 32);
    memset(t46, 0, 8);
    t36 = (t32 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB71;

LAB70:    t37 = (t35 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t32) < *((unsigned int *)t35))
        goto LAB72;

LAB73:    t39 = (t46 + 4);
    t17 = *((unsigned int *)t39);
    t18 = (~(t17));
    t19 = *((unsigned int *)t46);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(190, ng0);

LAB78:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);

LAB77:    goto LAB69;

LAB71:    t38 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t46) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(188, ng0);
    t40 = (t0 + 4656);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng7)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t42, 9, t43, 32);
    t44 = (t0 + 4816);
    xsi_vlogvar_assign_value(t44, t47, 0, 0, 9);
    goto LAB77;

LAB81:    t24 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB83;

LAB82:    *((unsigned int *)t35) = 1;
    goto LAB83;

LAB85:    xsi_set_current_line(198, ng0);
    t31 = (t0 + 4656);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng7)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_add(t46, 32, t33, 9, t34, 32);
    t36 = (t0 + 4816);
    xsi_vlogvar_assign_value(t36, t46, 0, 0, 9);
    goto LAB87;

}


extern void work_m_03089342320563874344_2528434943_init()
{
	static char *pe[] = {(void *)Initial_62_0,(void *)Always_68_1,(void *)Always_145_2};
	xsi_register_didat("work_m_03089342320563874344_2528434943", "isim/main_test_isim_beh.exe.sim/work/m_03089342320563874344_2528434943.didat");
	xsi_register_executes(pe);
}
