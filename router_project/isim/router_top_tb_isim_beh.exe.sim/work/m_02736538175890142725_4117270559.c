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
static const char *ng0 = "/home/suhaas/Documents/Verilog_labs/Router-1x3-Design/TB/router_top_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {14U, 0U};
static int ng5[] = {256, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {16U, 0U};
static unsigned int ng8[] = {6U, 0U};



static int sp_reset(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(22, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t1 + 5208);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(24, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 5208);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB4;

}

static int sp_initialize(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 4888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    t6 = (t1 + 5688);
    xsi_vlogvar_assign_value(t6, t4, 1, 0, 1);
    t7 = (t1 + 5528);
    xsi_vlogvar_assign_value(t7, t4, 2, 0, 1);
    t8 = (t1 + 5368);
    xsi_vlogvar_assign_value(t8, t4, 3, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_pkt_gen_14(char *t1, char *t2)
{
    char t8[8];
    char t45[8];
    char t55[8];
    char t56[8];
    char t59[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t57;
    char *t58;
    char *t60;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(43, ng0);

LAB7:    t9 = (t1 + 4328U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t9) == 0)
        goto LAB8;

LAB10:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t8 + 4);
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t8 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB15;

LAB14:    t33 = (t2 + 88U);
    t34 = *((char **)t33);
    t35 = (t34 + 16U);
    xsi_wp_set_status(t35, 1);
    t36 = (t2 + 48U);
    *((char **)t36) = &&LAB7;
    goto LAB1;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB15:    t37 = (t2 + 88U);
    t38 = *((char **)t37);
    t39 = (t38 + 16U);
    xsi_wp_set_status(t39, 0);
    xsi_set_current_line(44, ng0);
    t40 = (t2 + 88U);
    t41 = *((char **)t40);
    t42 = (t41 + 32U);
    xsi_wp_set_status(t42, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(45, ng0);
    t43 = ((char*)((ng4)));
    t44 = (t1 + 6488);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 6);
    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 6648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(47, ng0);
    t4 = (t1 + 6648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6488);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t8, 8, 8, 2U, t10, 6, t6, 2);
    t16 = (t1 + 6328);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 6168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(49, ng0);
    t4 = (t1 + 6328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t4 = (t1 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6328);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t18 = (t8 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t19 = (t14 | t15);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB17;

LAB18:
LAB19:    t27 = (t1 + 6168);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB17:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB19;

LAB20:    xsi_set_current_line(53, ng0);

LAB21:    t7 = (t1 + 4328U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t7) == 0)
        goto LAB22;

LAB24:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;

LAB25:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB27;

LAB26:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1U);
    t18 = (t8 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB29;

LAB28:    t27 = (t2 + 88U);
    t33 = *((char **)t27);
    t34 = (t33 + 64U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 48U);
    *((char **)t35) = &&LAB21;
    goto LAB1;

LAB22:    *((unsigned int *)t8) = 1;
    goto LAB25;

LAB27:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t23 | t24);
    goto LAB26;

LAB29:    t36 = (t2 + 88U);
    t37 = *((char **)t36);
    t38 = (t37 + 64U);
    xsi_wp_set_status(t38, 0);
    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t39 = ((char*)((ng3)));
    t40 = (t1 + 5848);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);

LAB30:    t4 = (t1 + 5848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6488);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB32;

LAB31:    t17 = (t10 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB33;

LAB34:    t27 = (t8 + 4);
    t11 = *((unsigned int *)t27);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(62, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 112U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB52;
    goto LAB1;

LAB32:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(55, ng0);

LAB38:    xsi_set_current_line(56, ng0);
    t33 = (t2 + 88U);
    t34 = *((char **)t33);
    t35 = (t34 + 80U);
    xsi_wp_set_status(t35, 1);
    *((char **)t3) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(57, ng0);

LAB40:    t36 = (t1 + 4328U);
    t37 = *((char **)t36);
    memset(t45, 0, 8);
    t36 = (t37 + 4);
    t19 = *((unsigned int *)t36);
    t20 = (~(t19));
    t21 = *((unsigned int *)t37);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t36) == 0)
        goto LAB41;

LAB43:    t38 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t38) = 1;

LAB44:    t39 = (t45 + 4);
    t40 = (t37 + 4);
    t24 = *((unsigned int *)t37);
    t25 = (~(t24));
    *((unsigned int *)t45) = t25;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB46;

LAB45:    t31 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t31 & 1U);
    t32 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t32 & 1U);
    t41 = (t45 + 4);
    t46 = *((unsigned int *)t41);
    t47 = (~(t46));
    t48 = *((unsigned int *)t45);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB48;

LAB47:    t42 = (t2 + 88U);
    t43 = *((char **)t42);
    t44 = (t43 + 96U);
    xsi_wp_set_status(t44, 1);
    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB40;
    goto LAB1;

LAB41:    *((unsigned int *)t45) = 1;
    goto LAB44;

LAB46:    t26 = *((unsigned int *)t45);
    t28 = *((unsigned int *)t40);
    *((unsigned int *)t45) = (t26 | t28);
    t29 = *((unsigned int *)t39);
    t30 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t29 | t30);
    goto LAB45;

LAB48:    t52 = (t2 + 88U);
    t53 = *((char **)t52);
    t54 = (t53 + 96U);
    xsi_wp_set_status(t54, 0);
    xsi_set_current_line(58, ng0);
    *((int *)t56) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t57 = (t56 + 4);
    *((int *)t57) = 0;
    xsi_vlogtype_concat(t55, 32, 32, 1U, t56, 32);
    t58 = ((char*)((ng5)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_mod(t59, 32, t55, 32, t58, 32);
    t60 = (t1 + 6008);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 8);
    xsi_set_current_line(59, ng0);
    t4 = (t1 + 6008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t4 = (t1 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6008);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t18 = (t8 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t19 = (t14 | t15);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB49;

LAB50:
LAB51:    t27 = (t1 + 6168);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t4 = (t1 + 5848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 5848);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB30;

LAB49:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB51;

LAB52:    xsi_set_current_line(63, ng0);

LAB53:    t7 = (t1 + 4328U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t7) == 0)
        goto LAB54;

LAB56:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;

LAB57:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB59;

LAB58:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1U);
    t18 = (t8 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB61;

LAB60:    t27 = (t2 + 88U);
    t33 = *((char **)t27);
    t34 = (t33 + 128U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 48U);
    *((char **)t35) = &&LAB53;
    goto LAB1;

LAB54:    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB59:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t23 | t24);
    goto LAB58;

LAB61:    t36 = (t2 + 88U);
    t37 = *((char **)t36);
    t38 = (t37 + 128U);
    xsi_wp_set_status(t38, 0);
    xsi_set_current_line(64, ng0);
    t39 = ((char*)((ng3)));
    t40 = (t1 + 4888);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t4 = (t1 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 144U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(68, ng0);
    t7 = ((char*)((ng1)));
    t9 = (t1 + 5528);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(70, ng0);

LAB63:    t4 = (t1 + 13344);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 40U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB65;

LAB64:    t9 = (t2 + 88U);
    t10 = *((char **)t9);
    t16 = (t10 + 160U);
    xsi_wp_set_status(t16, 1);
    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB63;
    goto LAB1;

LAB65:    t18 = (t2 + 88U);
    t27 = *((char **)t18);
    t33 = (t27 + 160U);
    xsi_wp_set_status(t33, 0);
    xsi_set_current_line(71, ng0);
    t34 = (t2 + 88U);
    t35 = *((char **)t34);
    t36 = (t35 + 176U);
    xsi_wp_set_status(t36, 1);
    *((char **)t3) = &&LAB66;
    goto LAB1;

LAB66:    xsi_set_current_line(72, ng0);
    t37 = ((char*)((ng2)));
    t38 = (t1 + 5528);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    goto LAB4;

}

static int sp_pkt_gen_16(char *t1, char *t2)
{
    char t8[8];
    char t45[8];
    char t55[8];
    char t56[8];
    char t59[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t57;
    char *t58;
    char *t60;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(83, ng0);

LAB7:    t9 = (t1 + 4328U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t9) == 0)
        goto LAB8;

LAB10:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t8 + 4);
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t8 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB15;

LAB14:    t33 = (t2 + 88U);
    t34 = *((char **)t33);
    t35 = (t34 + 16U);
    xsi_wp_set_status(t35, 1);
    t36 = (t2 + 48U);
    *((char **)t36) = &&LAB7;
    goto LAB1;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB15:    t37 = (t2 + 88U);
    t38 = *((char **)t37);
    t39 = (t38 + 16U);
    xsi_wp_set_status(t39, 0);
    xsi_set_current_line(84, ng0);
    t40 = (t2 + 88U);
    t41 = *((char **)t40);
    t42 = (t41 + 32U);
    xsi_wp_set_status(t42, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(85, ng0);
    t43 = ((char*)((ng7)));
    t44 = (t1 + 7288);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 6);
    xsi_set_current_line(86, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 7448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(87, ng0);
    t4 = (t1 + 7448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7288);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t8, 8, 8, 2U, t10, 6, t6, 2);
    t16 = (t1 + 7128);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 8);
    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 6968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t4 = (t1 + 7128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t4 = (t1 + 6968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7128);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t18 = (t8 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t19 = (t14 | t15);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB17;

LAB18:
LAB19:    t27 = (t1 + 6968);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 8);
    xsi_set_current_line(92, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB17:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB19;

LAB20:    xsi_set_current_line(93, ng0);

LAB21:    t7 = (t1 + 4328U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t7) == 0)
        goto LAB22;

LAB24:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;

LAB25:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB27;

LAB26:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1U);
    t18 = (t8 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB29;

LAB28:    t27 = (t2 + 88U);
    t33 = *((char **)t27);
    t34 = (t33 + 64U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 48U);
    *((char **)t35) = &&LAB21;
    goto LAB1;

LAB22:    *((unsigned int *)t8) = 1;
    goto LAB25;

LAB27:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t23 | t24);
    goto LAB26;

LAB29:    t36 = (t2 + 88U);
    t37 = *((char **)t36);
    t38 = (t37 + 64U);
    xsi_wp_set_status(t38, 0);
    xsi_set_current_line(94, ng0);
    xsi_set_current_line(94, ng0);
    t39 = ((char*)((ng3)));
    t40 = (t1 + 5848);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);

LAB30:    t4 = (t1 + 5848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7288);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB32;

LAB31:    t17 = (t10 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB33;

LAB34:    t27 = (t8 + 4);
    t11 = *((unsigned int *)t27);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(102, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 112U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB52;
    goto LAB1;

LAB32:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(95, ng0);

LAB38:    xsi_set_current_line(96, ng0);
    t33 = (t2 + 88U);
    t34 = *((char **)t33);
    t35 = (t34 + 80U);
    xsi_wp_set_status(t35, 1);
    *((char **)t3) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(97, ng0);

LAB40:    t36 = (t1 + 4328U);
    t37 = *((char **)t36);
    memset(t45, 0, 8);
    t36 = (t37 + 4);
    t19 = *((unsigned int *)t36);
    t20 = (~(t19));
    t21 = *((unsigned int *)t37);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t36) == 0)
        goto LAB41;

LAB43:    t38 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t38) = 1;

LAB44:    t39 = (t45 + 4);
    t40 = (t37 + 4);
    t24 = *((unsigned int *)t37);
    t25 = (~(t24));
    *((unsigned int *)t45) = t25;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB46;

LAB45:    t31 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t31 & 1U);
    t32 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t32 & 1U);
    t41 = (t45 + 4);
    t46 = *((unsigned int *)t41);
    t47 = (~(t46));
    t48 = *((unsigned int *)t45);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB48;

LAB47:    t42 = (t2 + 88U);
    t43 = *((char **)t42);
    t44 = (t43 + 96U);
    xsi_wp_set_status(t44, 1);
    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB40;
    goto LAB1;

LAB41:    *((unsigned int *)t45) = 1;
    goto LAB44;

LAB46:    t26 = *((unsigned int *)t45);
    t28 = *((unsigned int *)t40);
    *((unsigned int *)t45) = (t26 | t28);
    t29 = *((unsigned int *)t39);
    t30 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t29 | t30);
    goto LAB45;

LAB48:    t52 = (t2 + 88U);
    t53 = *((char **)t52);
    t54 = (t53 + 96U);
    xsi_wp_set_status(t54, 0);
    xsi_set_current_line(98, ng0);
    *((int *)t56) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t57 = (t56 + 4);
    *((int *)t57) = 0;
    xsi_vlogtype_concat(t55, 32, 32, 1U, t56, 32);
    t58 = ((char*)((ng5)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_mod(t59, 32, t55, 32, t58, 32);
    t60 = (t1 + 6808);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t4 = (t1 + 6968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6808);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t18 = (t8 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t19 = (t14 | t15);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB49;

LAB50:
LAB51:    t27 = (t1 + 6968);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t4 = (t1 + 5848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 5848);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB30;

LAB49:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB51;

LAB52:    xsi_set_current_line(103, ng0);

LAB53:    t7 = (t1 + 4328U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t7) == 0)
        goto LAB54;

LAB56:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;

LAB57:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB59;

LAB58:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1U);
    t18 = (t8 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB61;

LAB60:    t27 = (t2 + 88U);
    t33 = *((char **)t27);
    t34 = (t33 + 128U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 48U);
    *((char **)t35) = &&LAB53;
    goto LAB1;

LAB54:    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB59:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t23 | t24);
    goto LAB58;

LAB61:    t36 = (t2 + 88U);
    t37 = *((char **)t36);
    t38 = (t37 + 128U);
    xsi_wp_set_status(t38, 0);
    xsi_set_current_line(104, ng0);
    t39 = ((char*)((ng3)));
    t40 = (t1 + 4888);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t4 = (t1 + 6968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 144U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(108, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t1 + 5528);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(109, ng0);

LAB63:    t4 = (t1 + 13368);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 40U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB65;

LAB64:    t9 = (t2 + 88U);
    t10 = *((char **)t9);
    t16 = (t10 + 160U);
    xsi_wp_set_status(t16, 1);
    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB63;
    goto LAB1;

LAB65:    t18 = (t2 + 88U);
    t27 = *((char **)t18);
    t33 = (t27 + 160U);
    xsi_wp_set_status(t33, 0);
    xsi_set_current_line(110, ng0);
    t34 = (t2 + 88U);
    t35 = *((char **)t34);
    t36 = (t35 + 176U);
    xsi_wp_set_status(t36, 1);
    *((char **)t3) = &&LAB66;
    goto LAB1;

LAB66:    xsi_set_current_line(111, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t1 + 5528);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    goto LAB4;

}

static int sp_pkt_gen_6(char *t1, char *t2)
{
    char t8[8];
    char t45[8];
    char t55[8];
    char t56[8];
    char t59[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t57;
    char *t58;
    char *t60;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(122, ng0);

LAB7:    t9 = (t1 + 4328U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t9) == 0)
        goto LAB8;

LAB10:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t8 + 4);
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t8 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB15;

LAB14:    t33 = (t2 + 88U);
    t34 = *((char **)t33);
    t35 = (t34 + 16U);
    xsi_wp_set_status(t35, 1);
    t36 = (t2 + 48U);
    *((char **)t36) = &&LAB7;
    goto LAB1;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB15:    t37 = (t2 + 88U);
    t38 = *((char **)t37);
    t39 = (t38 + 16U);
    xsi_wp_set_status(t39, 0);
    xsi_set_current_line(123, ng0);
    t40 = (t2 + 88U);
    t41 = *((char **)t40);
    t42 = (t41 + 32U);
    xsi_wp_set_status(t42, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(124, ng0);
    t43 = ((char*)((ng8)));
    t44 = (t1 + 8088);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 6);
    xsi_set_current_line(125, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 8248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(126, ng0);
    t4 = (t1 + 8248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8088);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t8, 8, 8, 2U, t10, 6, t6, 2);
    t16 = (t1 + 7928);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 8);
    xsi_set_current_line(127, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 7768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(128, ng0);
    t4 = (t1 + 7928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7928);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t18 = (t8 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t19 = (t14 | t15);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB17;

LAB18:
LAB19:    t27 = (t1 + 7768);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 8);
    xsi_set_current_line(131, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB17:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB19;

LAB20:    xsi_set_current_line(132, ng0);

LAB21:    t7 = (t1 + 4328U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t7) == 0)
        goto LAB22;

LAB24:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;

LAB25:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB27;

LAB26:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1U);
    t18 = (t8 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB29;

LAB28:    t27 = (t2 + 88U);
    t33 = *((char **)t27);
    t34 = (t33 + 64U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 48U);
    *((char **)t35) = &&LAB21;
    goto LAB1;

LAB22:    *((unsigned int *)t8) = 1;
    goto LAB25;

LAB27:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t23 | t24);
    goto LAB26;

LAB29:    t36 = (t2 + 88U);
    t37 = *((char **)t36);
    t38 = (t37 + 64U);
    xsi_wp_set_status(t38, 0);
    xsi_set_current_line(133, ng0);
    xsi_set_current_line(133, ng0);
    t39 = ((char*)((ng3)));
    t40 = (t1 + 5848);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);

LAB30:    t4 = (t1 + 5848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8088);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB32;

LAB31:    t17 = (t10 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB33;

LAB34:    t27 = (t8 + 4);
    t11 = *((unsigned int *)t27);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(141, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 112U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB52;
    goto LAB1;

LAB32:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(134, ng0);

LAB38:    xsi_set_current_line(135, ng0);
    t33 = (t2 + 88U);
    t34 = *((char **)t33);
    t35 = (t34 + 80U);
    xsi_wp_set_status(t35, 1);
    *((char **)t3) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(136, ng0);

LAB40:    t36 = (t1 + 4328U);
    t37 = *((char **)t36);
    memset(t45, 0, 8);
    t36 = (t37 + 4);
    t19 = *((unsigned int *)t36);
    t20 = (~(t19));
    t21 = *((unsigned int *)t37);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t36) == 0)
        goto LAB41;

LAB43:    t38 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t38) = 1;

LAB44:    t39 = (t45 + 4);
    t40 = (t37 + 4);
    t24 = *((unsigned int *)t37);
    t25 = (~(t24));
    *((unsigned int *)t45) = t25;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB46;

LAB45:    t31 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t31 & 1U);
    t32 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t32 & 1U);
    t41 = (t45 + 4);
    t46 = *((unsigned int *)t41);
    t47 = (~(t46));
    t48 = *((unsigned int *)t45);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB48;

LAB47:    t42 = (t2 + 88U);
    t43 = *((char **)t42);
    t44 = (t43 + 96U);
    xsi_wp_set_status(t44, 1);
    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB40;
    goto LAB1;

LAB41:    *((unsigned int *)t45) = 1;
    goto LAB44;

LAB46:    t26 = *((unsigned int *)t45);
    t28 = *((unsigned int *)t40);
    *((unsigned int *)t45) = (t26 | t28);
    t29 = *((unsigned int *)t39);
    t30 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t29 | t30);
    goto LAB45;

LAB48:    t52 = (t2 + 88U);
    t53 = *((char **)t52);
    t54 = (t53 + 96U);
    xsi_wp_set_status(t54, 0);
    xsi_set_current_line(137, ng0);
    *((int *)t56) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t57 = (t56 + 4);
    *((int *)t57) = 0;
    xsi_vlogtype_concat(t55, 32, 32, 1U, t56, 32);
    t58 = ((char*)((ng5)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_mod(t59, 32, t55, 32, t58, 32);
    t60 = (t1 + 7608);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 8);
    xsi_set_current_line(138, ng0);
    t4 = (t1 + 7608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(139, ng0);
    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7608);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t18 = (t8 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t19 = (t14 | t15);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB49;

LAB50:
LAB51:    t27 = (t1 + 7768);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 8);
    xsi_set_current_line(133, ng0);
    t4 = (t1 + 5848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 5848);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB30;

LAB49:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB51;

LAB52:    xsi_set_current_line(142, ng0);

LAB53:    t7 = (t1 + 4328U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t7) == 0)
        goto LAB54;

LAB56:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;

LAB57:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB59;

LAB58:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1U);
    t18 = (t8 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB61;

LAB60:    t27 = (t2 + 88U);
    t33 = *((char **)t27);
    t34 = (t33 + 128U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 48U);
    *((char **)t35) = &&LAB53;
    goto LAB1;

LAB54:    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB59:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t23 | t24);
    goto LAB58;

LAB61:    t36 = (t2 + 88U);
    t37 = *((char **)t36);
    t38 = (t37 + 128U);
    xsi_wp_set_status(t38, 0);
    xsi_set_current_line(143, ng0);
    t39 = ((char*)((ng3)));
    t40 = (t1 + 4888);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t4 = (t1 + 7768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(146, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 144U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB62;
    goto LAB1;

LAB62:    xsi_set_current_line(147, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t1 + 5528);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(148, ng0);

LAB63:    t4 = (t1 + 13392);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 40U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB65;

LAB64:    t9 = (t2 + 88U);
    t10 = *((char **)t9);
    t16 = (t10 + 160U);
    xsi_wp_set_status(t16, 1);
    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB63;
    goto LAB1;

LAB65:    t18 = (t2 + 88U);
    t27 = *((char **)t18);
    t33 = (t27 + 160U);
    xsi_wp_set_status(t33, 0);
    xsi_set_current_line(149, ng0);
    t34 = (t2 + 88U);
    t35 = *((char **)t34);
    t36 = (t35 + 176U);
    xsi_wp_set_status(t36, 1);
    *((char **)t3) = &&LAB66;
    goto LAB1;

LAB66:    xsi_set_current_line(150, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t1 + 5528);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    goto LAB4;

}

static void Initial_11_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 9160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);

LAB4:    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 8968);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 5048);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 5048);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_154_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 9408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);

LAB4:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 9216);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 9312);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 9312);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 9216);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 9216);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB13:    t5 = (t0 + 9312);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB15:    if (t13 != 0)
        goto LAB16;

LAB11:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB12:    t14 = (t0 + 9312);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 9216);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 9216);
    t3 = (t0 + 1712);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB19:    t5 = (t0 + 9312);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB21:    if (t13 != 0)
        goto LAB22;

LAB17:    t6 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t6);

LAB18:    t14 = (t0 + 9312);
    t15 = *((char **)t14);
    t14 = (t0 + 1712);
    t16 = (t0 + 9216);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 9216);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB23;

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 9408U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t5 = (t0 + 9408U);
    *((char **)t5) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t5 = (t0 + 9408U);
    *((char **)t5) = &&LAB19;
    goto LAB1;

LAB23:    goto LAB1;

}

static void Initial_168_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 9656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 9464);
    xsi_process_wait(t2, 300000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(168, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_02736538175890142725_4117270559_init()
{
	static char *pe[] = {(void *)Initial_11_0,(void *)Initial_154_1,(void *)Initial_168_2};
	static char *se[] = {(void *)sp_reset,(void *)sp_initialize,(void *)sp_pkt_gen_14,(void *)sp_pkt_gen_16,(void *)sp_pkt_gen_6};
	xsi_register_didat("work_m_02736538175890142725_4117270559", "isim/router_top_tb_isim_beh.exe.sim/work/m_02736538175890142725_4117270559.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
