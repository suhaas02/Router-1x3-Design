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
static const char *ng0 = "/home/suhaas/Documents/Verilog_labs/Router-1x3-Design/TB/router_reg_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static int ng7[] = {256, 0};
static int ng8[] = {46, 0};



static int sp_rst(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(132, ng0);
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

LAB6:    xsi_set_current_line(133, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t1 + 3952);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(135, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 3952);
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1416);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(140, ng0);

LAB5:    xsi_set_current_line(141, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 4112);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4272);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4432);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4592);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4752);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 4912);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5072);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 5232);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_good_pkt_gen_reg(char *t1, char *t2)
{
    char t10[8];
    char t28[8];
    char t29[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
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
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(158, ng0);

LAB5:    xsi_set_current_line(159, ng0);
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

LAB6:    xsi_set_current_line(160, ng0);
    t8 = ((char*)((ng3)));
    t9 = (t1 + 6192);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 6);
    xsi_set_current_line(161, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6352);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(162, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 4112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 4432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t4 = (t1 + 6352);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6192);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t10, 8, 8, 2U, t9, 6, t6, 2);
    t11 = (t1 + 6032);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 8);
    xsi_set_current_line(165, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 6032);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    *((unsigned int *)t10) = t14;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB7;

LAB8:
LAB9:    t22 = (t1 + 5872);
    xsi_vlogvar_assign_value(t22, t10, 0, 0, 8);
    xsi_set_current_line(166, ng0);
    t4 = (t1 + 6032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5392);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(167, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB10;
    goto LAB1;

LAB7:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB9;

LAB10:    xsi_set_current_line(168, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 5072);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    xsi_set_current_line(173, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 5552);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB11:    t4 = (t1 + 5552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6192);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB13;

LAB12:    t22 = (t9 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB14;

LAB15:    t24 = (t10 + 4);
    t12 = *((unsigned int *)t24);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(182, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB24;
    goto LAB1;

LAB13:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    *((unsigned int *)t10) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(174, ng0);

LAB19:    xsi_set_current_line(175, ng0);
    t25 = (t2 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 32U);
    xsi_wp_set_status(t27, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(176, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 5072);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 4592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    *((int *)t28) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t4 = (t28 + 4);
    *((int *)t4) = 0;
    xsi_vlogtype_concat(t10, 32, 32, 1U, t28, 32);
    t5 = ((char*)((ng7)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_mod(t29, 32, t10, 32, t5, 32);
    t6 = (t1 + 5712);
    xsi_vlogvar_assign_value(t6, t29, 0, 0, 8);
    xsi_set_current_line(179, ng0);
    t4 = (t1 + 5712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5392);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(180, ng0);
    t4 = (t1 + 5872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5392);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    *((unsigned int *)t10) = t14;
    t11 = (t6 + 4);
    t22 = (t9 + 4);
    t23 = (t10 + 4);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t22);
    t17 = (t15 | t16);
    *((unsigned int *)t23) = t17;
    t18 = *((unsigned int *)t23);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB21;

LAB22:
LAB23:    t24 = (t1 + 5872);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 8);
    xsi_set_current_line(173, ng0);
    t4 = (t1 + 5552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 5552);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB11;

LAB21:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t23);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB23;

LAB24:    xsi_set_current_line(183, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t4 = (t1 + 5872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5392);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(185, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 64U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(186, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

}

static int sp_bad_pkt_gen_reg(char *t1, char *t2)
{
    char t10[8];
    char t28[8];
    char t29[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
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
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(196, ng0);

LAB5:    xsi_set_current_line(197, ng0);
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

LAB6:    xsi_set_current_line(198, ng0);
    t8 = ((char*)((ng3)));
    t9 = (t1 + 6992);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 6);
    xsi_set_current_line(199, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 7152);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(200, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 4112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 4432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t4 = (t1 + 7152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6992);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t10, 8, 8, 2U, t9, 6, t6, 2);
    t11 = (t1 + 6832);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 8);
    xsi_set_current_line(203, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 6832);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    *((unsigned int *)t10) = t14;
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t11 = (t10 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB7;

LAB8:
LAB9:    t22 = (t1 + 6672);
    xsi_vlogvar_assign_value(t22, t10, 0, 0, 8);
    xsi_set_current_line(204, ng0);
    t4 = (t1 + 6832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5392);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(205, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB10;
    goto LAB1;

LAB7:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB9;

LAB10:    xsi_set_current_line(206, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(207, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 5072);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    xsi_set_current_line(211, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 5552);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB11:    t4 = (t1 + 5552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6992);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB13;

LAB12:    t22 = (t9 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB14;

LAB15:    t24 = (t10 + 4);
    t12 = *((unsigned int *)t24);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(220, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB24;
    goto LAB1;

LAB13:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    *((unsigned int *)t10) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(212, ng0);

LAB19:    xsi_set_current_line(213, ng0);
    t25 = (t2 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 32U);
    xsi_wp_set_status(t27, 1);
    *((char **)t3) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(214, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 5072);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(215, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 4592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    *((int *)t28) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t4 = (t28 + 4);
    *((int *)t4) = 0;
    xsi_vlogtype_concat(t10, 32, 32, 1U, t28, 32);
    t5 = ((char*)((ng7)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_mod(t29, 32, t10, 32, t5, 32);
    t6 = (t1 + 6512);
    xsi_vlogvar_assign_value(t6, t29, 0, 0, 8);
    xsi_set_current_line(217, ng0);
    t4 = (t1 + 6512);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5392);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(218, ng0);
    t4 = (t1 + 6672);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5392);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    *((unsigned int *)t10) = t14;
    t11 = (t6 + 4);
    t22 = (t9 + 4);
    t23 = (t10 + 4);
    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t22);
    t17 = (t15 | t16);
    *((unsigned int *)t23) = t17;
    t18 = *((unsigned int *)t23);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB21;

LAB22:
LAB23:    t24 = (t1 + 6672);
    xsi_vlogvar_assign_value(t24, t10, 0, 0, 8);
    xsi_set_current_line(211, ng0);
    t4 = (t1 + 5552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 5552);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB11;

LAB21:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t23);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB23;

LAB24:    xsi_set_current_line(221, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(222, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 5392);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(223, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 64U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(224, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 4592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

}

static void Initial_124_0(char *t0)
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

LAB0:    t1 = (t0 + 8064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);

LAB4:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);

LAB5:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 7872);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 3792);
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
    t24 = (t0 + 3792);
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

static void Initial_228_1(char *t0)
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

LAB0:    t1 = (t0 + 8312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(229, ng0);

LAB4:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 8120);
    t3 = (t0 + 984);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 8216);
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

LAB5:    t6 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 8216);
    t15 = *((char **)t14);
    t14 = (t0 + 984);
    t16 = (t0 + 8120);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 8120);
    t3 = (t0 + 1416);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB13:    t5 = (t0 + 8216);
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

LAB11:    t6 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t6);

LAB12:    t14 = (t0 + 8216);
    t15 = *((char **)t14);
    t14 = (t0 + 1416);
    t16 = (t0 + 8120);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 8120);
    t3 = (t0 + 1848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB19:    t5 = (t0 + 8216);
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

LAB17:    t6 = (t0 + 1848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB18:    t14 = (t0 + 8216);
    t15 = *((char **)t14);
    t14 = (t0 + 1848);
    t16 = (t0 + 8120);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 8120);
    t3 = (t0 + 984);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB25:    t5 = (t0 + 8216);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB27:    if (t13 != 0)
        goto LAB28;

LAB23:    t6 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t6);

LAB24:    t14 = (t0 + 8216);
    t15 = *((char **)t14);
    t14 = (t0 + 984);
    t16 = (t0 + 8120);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 8120);
    t3 = (t0 + 2280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB31:    t5 = (t0 + 8216);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB33:    if (t13 != 0)
        goto LAB34;

LAB29:    t6 = (t0 + 2280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB30:    t14 = (t0 + 8216);
    t15 = *((char **)t14);
    t14 = (t0 + 2280);
    t16 = (t0 + 8120);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 8120);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB35;

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 8312U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t5 = (t0 + 8312U);
    *((char **)t5) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t5 = (t0 + 8312U);
    *((char **)t5) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t5 = (t0 + 8312U);
    *((char **)t5) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t5 = (t0 + 8312U);
    *((char **)t5) = &&LAB31;
    goto LAB1;

LAB35:    xsi_set_current_line(236, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_10492837859469556094_2756641925_init()
{
	static char *pe[] = {(void *)Initial_124_0,(void *)Initial_228_1};
	static char *se[] = {(void *)sp_rst,(void *)sp_initialize,(void *)sp_good_pkt_gen_reg,(void *)sp_bad_pkt_gen_reg};
	xsi_register_didat("work_m_10492837859469556094_2756641925", "isim/router_reg_tb_isim_beh.exe.sim/work/m_10492837859469556094_2756641925.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
