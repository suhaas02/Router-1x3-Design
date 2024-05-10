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
static const char *ng0 = "/home/suhaas/Documents/Verilog_labs/Router-1x3-Design/RTL/router_fifo.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {0U, 255U};
static int ng7[] = {8, 0};



static void Always_235_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t60[8];
    char t66[8];
    char t99[8];
    char t103[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t100;
    char *t101;
    char *t102;
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
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    int t120;
    int t121;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 5752);
    *((int *)t2) = 1;
    t3 = (t0 + 4472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(236, ng0);

LAB5:    xsi_set_current_line(238, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t38 = (~(t18));
    t39 = (t15 & t38);
    if (t39 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t4) = 1;

LAB33:    memset(t21, 0, 8);
    t13 = (t4 + 4);
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t42 = *((unsigned int *)t4);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t13) != 0)
        goto LAB36;

LAB37:    t20 = (t21 + 4);
    t45 = *((unsigned int *)t21);
    t46 = *((unsigned int *)t20);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB38;

LAB39:    memcpy(t66, t21, 8);

LAB40:    t93 = (t66 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t66);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(260, ng0);

LAB58:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 0LL);

LAB54:
LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(239, ng0);

LAB13:    xsi_set_current_line(240, ng0);
    xsi_set_current_line(240, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);

LAB14:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(241, ng0);

LAB17:    xsi_set_current_line(242, ng0);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 3208);
    t20 = (t0 + 3208);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 3208);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 3368);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t21, t22, t24, t27, 2, 1, t30, 32, 1);
    t31 = (t21 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    t33 = (t22 + 4);
    t15 = *((unsigned int *)t33);
    t34 = (!(t15));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB14;

LAB18:    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t36 = (t16 - t17);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, *((unsigned int *)t22), t37, 0LL);
    goto LAB19;

LAB20:    xsi_set_current_line(247, ng0);

LAB23:    xsi_set_current_line(248, ng0);
    xsi_set_current_line(248, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB24:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB22;

LAB25:    xsi_set_current_line(249, ng0);

LAB27:    xsi_set_current_line(250, ng0);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 3208);
    t20 = (t0 + 3208);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 3208);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 3368);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t21, t22, t24, t27, 2, 1, t30, 32, 1);
    t31 = (t21 + 4);
    t14 = *((unsigned int *)t31);
    t32 = (!(t14));
    t33 = (t22 + 4);
    t15 = *((unsigned int *)t33);
    t34 = (!(t15));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB24;

LAB28:    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t36 = (t16 - t17);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, *((unsigned int *)t22), t37, 0LL);
    goto LAB29;

LAB32:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t21) = 1;
    goto LAB37;

LAB36:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB37;

LAB38:    t23 = (t0 + 2328U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t25 = (t24 + 4);
    t26 = (t23 + 4);
    t48 = *((unsigned int *)t24);
    t49 = *((unsigned int *)t23);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t25);
    t52 = *((unsigned int *)t26);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t25);
    t56 = *((unsigned int *)t26);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB44;

LAB41:    if (t57 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t22) = 1;

LAB44:    memset(t60, 0, 8);
    t28 = (t22 + 4);
    t61 = *((unsigned int *)t28);
    t62 = (~(t61));
    t63 = *((unsigned int *)t22);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t28) != 0)
        goto LAB47;

LAB48:    t67 = *((unsigned int *)t21);
    t68 = *((unsigned int *)t60);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t30 = (t21 + 4);
    t31 = (t60 + 4);
    t33 = (t66 + 4);
    t70 = *((unsigned int *)t30);
    t71 = *((unsigned int *)t31);
    t72 = (t70 | t71);
    *((unsigned int *)t33) = t72;
    t73 = *((unsigned int *)t33);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB43:    t27 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t60) = 1;
    goto LAB48;

LAB47:    t29 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB48;

LAB49:    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t33);
    *((unsigned int *)t66) = (t75 | t76);
    t77 = (t21 + 4);
    t78 = (t60 + 4);
    t79 = *((unsigned int *)t21);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t60);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t32 = (t80 & t82);
    t34 = (t84 & t86);
    t87 = (~(t32));
    t88 = (~(t34));
    t89 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t89 & t87);
    t90 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t90 & t88);
    t91 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t91 & t87);
    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & t88);
    goto LAB51;

LAB52:    xsi_set_current_line(255, ng0);

LAB55:    xsi_set_current_line(256, ng0);
    t100 = (t0 + 1848U);
    t101 = *((char **)t100);
    t100 = (t0 + 2008U);
    t102 = *((char **)t100);
    xsi_vlogtype_concat(t99, 9, 9, 2U, t102, 1, t101, 8);
    t100 = (t0 + 3208);
    t105 = (t0 + 3208);
    t106 = (t105 + 72U);
    t107 = *((char **)t106);
    t108 = (t0 + 3208);
    t109 = (t108 + 64U);
    t110 = *((char **)t109);
    t111 = (t0 + 3048);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    xsi_vlog_generic_convert_array_indices(t103, t104, t107, t110, 2, 1, t113, 5, 2);
    t114 = (t103 + 4);
    t115 = *((unsigned int *)t114);
    t35 = (!(t115));
    t116 = (t104 + 4);
    t117 = *((unsigned int *)t116);
    t36 = (!(t117));
    t37 = (t35 && t36);
    if (t37 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);
    goto LAB54;

LAB56:    t118 = *((unsigned int *)t103);
    t119 = *((unsigned int *)t104);
    t120 = (t118 - t119);
    t121 = (t120 + 1);
    xsi_vlogvar_wait_assign_value(t100, t99, 0, *((unsigned int *)t104), t121, 0LL);
    goto LAB57;

}

static void Always_267_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t99[8];
    char t106[8];
    char t118[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
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
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 5768);
    *((int *)t2) = 1;
    t3 = (t0 + 4720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(268, ng0);

LAB5:    xsi_set_current_line(269, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB21;

LAB18:    if (t18 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t4) = 1;

LAB21:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t13) != 0)
        goto LAB24;

LAB25:    t20 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t20);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB26;

LAB27:    memcpy(t58, t23, 8);

LAB28:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t4) = 1;

LAB47:    t20 = (t4 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(288, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(292, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 5, 0LL);

LAB54:
LAB50:
LAB42:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(270, ng0);

LAB13:    xsi_set_current_line(271, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(275, ng0);

LAB17:    xsi_set_current_line(276, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB16;

LAB20:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t23) = 1;
    goto LAB25;

LAB24:    t19 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    t32 = (t0 + 2168U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng3)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB32;

LAB29:    if (t46 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t34) = 1;

LAB32:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t51) != 0)
        goto LAB35;

LAB36:    t59 = *((unsigned int *)t23);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t23 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB31:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t50) = 1;
    goto LAB36;

LAB35:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB36;

LAB37:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t23 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t23);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB39;

LAB40:    xsi_set_current_line(280, ng0);

LAB43:    xsi_set_current_line(281, ng0);
    t96 = (t0 + 3208);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t100 = (t0 + 3208);
    t101 = (t100 + 72U);
    t102 = *((char **)t101);
    t103 = (t0 + 3208);
    t104 = (t103 + 64U);
    t105 = *((char **)t104);
    t107 = (t0 + 2888);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    memset(t106, 0, 8);
    t110 = (t106 + 4);
    t111 = (t109 + 4);
    t112 = *((unsigned int *)t109);
    t113 = (t112 >> 0);
    *((unsigned int *)t106) = t113;
    t114 = *((unsigned int *)t111);
    t115 = (t114 >> 0);
    *((unsigned int *)t110) = t115;
    t116 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t116 & 31U);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t117 & 31U);
    xsi_vlog_generic_get_array_select_value(t99, 9, t98, t102, t105, 2, 1, t106, 5, 2);
    memset(t118, 0, 8);
    t119 = (t118 + 4);
    t120 = (t99 + 4);
    t121 = *((unsigned int *)t99);
    t122 = (t121 >> 0);
    *((unsigned int *)t118) = t122;
    t123 = *((unsigned int *)t120);
    t124 = (t123 >> 0);
    *((unsigned int *)t119) = t124;
    t125 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t125 & 255U);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t126 & 255U);
    t127 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t127, t118, 0, 0, 8, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);
    goto LAB42;

LAB46:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(285, ng0);

LAB51:    xsi_set_current_line(286, ng0);
    t32 = ((char*)((ng6)));
    t33 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 8, 0LL);
    goto LAB50;

LAB52:    xsi_set_current_line(289, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB54;

}

static void Always_296_2(char *t0)
{
    char t4[8];
    char t23[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t99[8];
    char t106[8];
    char t118[8];
    char t124[8];
    char t149[8];
    char t156[8];
    char t168[8];
    char t178[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
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
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t179;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(296, ng0);
    t2 = (t0 + 5784);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(297, ng0);

LAB5:    xsi_set_current_line(298, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(302, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(306, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB21;

LAB18:    if (t18 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t4) = 1;

LAB21:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t13) != 0)
        goto LAB24;

LAB25:    t20 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t20);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB26;

LAB27:    memcpy(t58, t23, 8);

LAB28:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 7, 0LL);

LAB42:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(299, ng0);

LAB13:    xsi_set_current_line(300, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(303, ng0);

LAB17:    xsi_set_current_line(304, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 7, 0LL);
    goto LAB16;

LAB20:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t23) = 1;
    goto LAB25;

LAB24:    t19 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    t32 = (t0 + 2168U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB32;

LAB29:    if (t46 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t34) = 1;

LAB32:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t51) != 0)
        goto LAB35;

LAB36:    t59 = *((unsigned int *)t23);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t23 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB31:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t50) = 1;
    goto LAB36;

LAB35:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB36;

LAB37:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t23 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t23);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB39;

LAB40:    xsi_set_current_line(307, ng0);

LAB43:    xsi_set_current_line(308, ng0);
    t96 = (t0 + 3208);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t100 = (t0 + 3208);
    t101 = (t100 + 72U);
    t102 = *((char **)t101);
    t103 = (t0 + 3208);
    t104 = (t103 + 64U);
    t105 = *((char **)t104);
    t107 = (t0 + 2888);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    memset(t106, 0, 8);
    t110 = (t106 + 4);
    t111 = (t109 + 4);
    t112 = *((unsigned int *)t109);
    t113 = (t112 >> 0);
    *((unsigned int *)t106) = t113;
    t114 = *((unsigned int *)t111);
    t115 = (t114 >> 0);
    *((unsigned int *)t110) = t115;
    t116 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t116 & 31U);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t117 & 31U);
    xsi_vlog_generic_get_array_select_value(t99, 9, t98, t102, t105, 2, 1, t106, 5, 2);
    t119 = (t0 + 3208);
    t120 = (t119 + 72U);
    t121 = *((char **)t120);
    t122 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t118, 32, t99, t121, 2, t122, 32, 1);
    t123 = ((char*)((ng4)));
    memset(t124, 0, 8);
    t125 = (t118 + 4);
    t126 = (t123 + 4);
    t127 = *((unsigned int *)t118);
    t128 = *((unsigned int *)t123);
    t129 = (t127 ^ t128);
    t130 = *((unsigned int *)t125);
    t131 = *((unsigned int *)t126);
    t132 = (t130 ^ t131);
    t133 = (t129 | t132);
    t134 = *((unsigned int *)t125);
    t135 = *((unsigned int *)t126);
    t136 = (t134 | t135);
    t137 = (~(t136));
    t138 = (t133 & t137);
    if (t138 != 0)
        goto LAB47;

LAB44:    if (t136 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t124) = 1;

LAB47:    t140 = (t124 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t124);
    t144 = (t143 & t142);
    t145 = (t144 != 0);
    if (t145 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(312, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB53;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB55:    t20 = (t4 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(315, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 7, 0LL);

LAB58:
LAB50:    goto LAB42;

LAB46:    t139 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(309, ng0);

LAB51:    xsi_set_current_line(310, ng0);
    t146 = (t0 + 3208);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    t150 = (t0 + 3208);
    t151 = (t150 + 72U);
    t152 = *((char **)t151);
    t153 = (t0 + 3208);
    t154 = (t153 + 64U);
    t155 = *((char **)t154);
    t157 = (t0 + 2888);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memset(t156, 0, 8);
    t160 = (t156 + 4);
    t161 = (t159 + 4);
    t162 = *((unsigned int *)t159);
    t163 = (t162 >> 0);
    *((unsigned int *)t156) = t163;
    t164 = *((unsigned int *)t161);
    t165 = (t164 >> 0);
    *((unsigned int *)t160) = t165;
    t166 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t166 & 31U);
    t167 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t167 & 31U);
    xsi_vlog_generic_get_array_select_value(t149, 9, t148, t152, t155, 2, 1, t156, 5, 2);
    memset(t168, 0, 8);
    t169 = (t168 + 4);
    t170 = (t149 + 4);
    t171 = *((unsigned int *)t149);
    t172 = (t171 >> 2);
    *((unsigned int *)t168) = t172;
    t173 = *((unsigned int *)t170);
    t174 = (t173 >> 2);
    *((unsigned int *)t169) = t174;
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t175 & 63U);
    t176 = *((unsigned int *)t169);
    *((unsigned int *)t169) = (t176 & 63U);
    t177 = ((char*)((ng5)));
    memset(t178, 0, 8);
    xsi_vlog_unsigned_add(t178, 7, t168, 7, t177, 7);
    t179 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t179, t178, 0, 0, 7, 0LL);
    goto LAB50;

LAB53:    *((unsigned int *)t4) = 1;
    goto LAB55;

LAB54:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(313, ng0);
    t32 = (t0 + 3528);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng5)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 7, t35, 7, t36, 7);
    t49 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t49, t23, 0, 0, 7, 0LL);
    goto LAB58;

}

static void Cont_323_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
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
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 3048);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2888);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB7;

LAB4:    if (t22 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t10) = 1;

LAB7:    memset(t4, 0, 8);
    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t26) != 0)
        goto LAB10;

LAB11:    t33 = (t4 + 4);
    t34 = *((unsigned int *)t4);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB12;

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t33) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 5896);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 0);
    t56 = (t0 + 5800);
    *((int *)t56) = 1;

LAB1:    return;
LAB6:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t32 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB11;

LAB12:    t37 = ((char*)((ng5)));
    goto LAB13;

LAB14:    t42 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t37, 1, t42, 1);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

}

static void Cont_324_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t19[8];
    char t28[8];
    char t44[8];
    char t56[8];
    char t68[8];
    char t80[8];
    char t96[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 3048);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 4);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = (t0 + 2888);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 4);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 4);
    t27 = (t26 & 1);
    *((unsigned int *)t20) = t27;
    memset(t28, 0, 8);
    t29 = (t7 + 4);
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t19);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB5;

LAB4:    if (t40 != 0)
        goto LAB6;

LAB7:    memset(t44, 0, 8);
    t45 = (t28 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t45) != 0)
        goto LAB10;

LAB11:    t52 = (t44 + 4);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t52);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB12;

LAB13:    memcpy(t104, t44, 8);

LAB14:    memset(t4, 0, 8);
    t136 = (t104 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t104);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t136) != 0)
        goto LAB28;

LAB29:    t143 = (t4 + 4);
    t144 = *((unsigned int *)t4);
    t145 = *((unsigned int *)t143);
    t146 = (t144 || t145);
    if (t146 > 0)
        goto LAB30;

LAB31:    t148 = *((unsigned int *)t4);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (t149 || t150);
    if (t151 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t143) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t152, 8);

LAB38:    t153 = (t0 + 5960);
    t154 = (t153 + 56U);
    t155 = *((char **)t154);
    t156 = (t155 + 56U);
    t157 = *((char **)t156);
    memset(t157, 0, 8);
    t158 = 1U;
    t159 = t158;
    t160 = (t3 + 4);
    t161 = *((unsigned int *)t3);
    t158 = (t158 & t161);
    t162 = *((unsigned int *)t160);
    t159 = (t159 & t162);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t164 | t158);
    t165 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t165 | t159);
    xsi_driver_vfirst_trans(t153, 0, 0);
    t166 = (t0 + 5816);
    *((int *)t166) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t28) = 1;
    goto LAB7;

LAB6:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t44) = 1;
    goto LAB11;

LAB10:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB11;

LAB12:    t57 = (t0 + 3048);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memset(t56, 0, 8);
    t60 = (t56 + 4);
    t61 = (t59 + 4);
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 0);
    *((unsigned int *)t56) = t63;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 0);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t66 & 15U);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 & 15U);
    t69 = (t0 + 2888);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memset(t68, 0, 8);
    t72 = (t68 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t68) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t72) = t77;
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 15U);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 & 15U);
    memset(t80, 0, 8);
    t81 = (t56 + 4);
    t82 = (t68 + 4);
    t83 = *((unsigned int *)t56);
    t84 = *((unsigned int *)t68);
    t85 = (t83 ^ t84);
    t86 = *((unsigned int *)t81);
    t87 = *((unsigned int *)t82);
    t88 = (t86 ^ t87);
    t89 = (t85 | t88);
    t90 = *((unsigned int *)t81);
    t91 = *((unsigned int *)t82);
    t92 = (t90 | t91);
    t93 = (~(t92));
    t94 = (t89 & t93);
    if (t94 != 0)
        goto LAB18;

LAB15:    if (t92 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t80) = 1;

LAB18:    memset(t96, 0, 8);
    t97 = (t80 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t80);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t97) != 0)
        goto LAB21;

LAB22:    t105 = *((unsigned int *)t44);
    t106 = *((unsigned int *)t96);
    t107 = (t105 & t106);
    *((unsigned int *)t104) = t107;
    t108 = (t44 + 4);
    t109 = (t96 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t95 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t96) = 1;
    goto LAB22;

LAB21:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB22;

LAB23:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t44 + 4);
    t119 = (t96 + 4);
    t120 = *((unsigned int *)t44);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (~(t122));
    t124 = *((unsigned int *)t96);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (~(t126));
    t128 = (t121 & t123);
    t129 = (t125 & t127);
    t130 = (~(t128));
    t131 = (~(t129));
    t132 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t131);
    t134 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t134 & t130);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t131);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t142 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB29;

LAB30:    t147 = ((char*)((ng5)));
    goto LAB31;

LAB32:    t152 = ((char*)((ng3)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 1, t147, 1, t152, 1);
    goto LAB38;

LAB36:    memcpy(t3, t147, 8);
    goto LAB38;

}


extern void work_m_01398000774767851340_2775274865_init()
{
	static char *pe[] = {(void *)Always_235_0,(void *)Always_267_1,(void *)Always_296_2,(void *)Cont_323_3,(void *)Cont_324_4};
	xsi_register_didat("work_m_01398000774767851340_2775274865", "isim/router_top_tb_isim_beh.exe.sim/work/m_01398000774767851340_2775274865.didat");
	xsi_register_executes(pe);
}
