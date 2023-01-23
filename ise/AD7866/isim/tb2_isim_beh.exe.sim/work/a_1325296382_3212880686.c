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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xilinx/project/AD7866/AD7866_model_single.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1325296382_3212880686_p_0(char *t0)
{
    char t42[16];
    char t45[16];
    char t47[16];
    char t52[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    char *t44;
    char *t46;
    int t48;
    int t49;
    char *t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB8};

LAB0:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5784);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 5656);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 5784);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 5848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 5912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(40, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    t5 = (t0 + 1672U);
    t7 = *((char **)t5);
    t3 = *((unsigned char *)t7);
    *((unsigned char *)t2) = t3;
    t2 = (t2 + 1U);
    *((unsigned char *)t2) = (unsigned char)2;
    t2 = (t2 + 1U);
    t5 = (t0 + 1832U);
    t8 = *((char **)t5);
    t4 = *((unsigned char *)t8);
    *((unsigned char *)t2) = t4;
    t5 = (t0 + 5976);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 9397);
    t13 = xsi_mem_cmp(t1, t2, 3U);
    if (t13 == 1)
        goto LAB10;

LAB19:    t7 = (t0 + 9400);
    t14 = xsi_mem_cmp(t7, t2, 3U);
    if (t14 == 1)
        goto LAB11;

LAB20:    t9 = (t0 + 9403);
    t15 = xsi_mem_cmp(t9, t2, 3U);
    if (t15 == 1)
        goto LAB12;

LAB21:    t11 = (t0 + 9406);
    t16 = xsi_mem_cmp(t11, t2, 3U);
    if (t16 == 1)
        goto LAB13;

LAB22:    t17 = (t0 + 9409);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB14;

LAB23:    t20 = (t0 + 9412);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB15;

LAB24:    t23 = (t0 + 9415);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB16;

LAB25:    t26 = (t0 + 9418);
    t28 = xsi_mem_cmp(t26, t2, 3U);
    if (t28 == 1)
        goto LAB17;

LAB26:
LAB18:    xsi_set_current_line(60, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t2 = t1;
    memset(t2, (unsigned char)2, 15U);
    t5 = (t0 + 6040);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_delta(t5, 0U, 15U, 0LL);

LAB9:    goto LAB5;

LAB7:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1472U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB44;

LAB46:
LAB45:    goto LAB5;

LAB8:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 5784);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB10:    xsi_set_current_line(43, ng0);
    t29 = (t0 + 2472U);
    t30 = *((char **)t29);
    t31 = (2 - 2);
    t32 = (t31 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t29 = (t30 + t34);
    t3 = *((unsigned char *)t29);
    t35 = (t0 + 2472U);
    t36 = *((char **)t35);
    t37 = (0 - 2);
    t38 = (t37 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t35 = (t36 + t40);
    t4 = *((unsigned char *)t35);
    t43 = ((IEEE_P_2592010699) + 4024);
    t41 = xsi_base_array_concat(t41, t42, t43, (char)99, t3, (char)99, t4, (char)101);
    t46 = ((IEEE_P_2592010699) + 4024);
    t44 = xsi_base_array_concat(t44, t45, t46, (char)97, t41, t42, (char)99, (unsigned char)2, (char)101);
    t48 = (3000 * 4095);
    t49 = (t48 / 4095);
    t50 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t47, t49, 12);
    t53 = ((IEEE_P_2592010699) + 4024);
    t51 = xsi_base_array_concat(t51, t52, t53, (char)97, t44, t45, (char)97, t50, t47, (char)101);
    t54 = (1U + 1U);
    t55 = (t54 + 1U);
    t56 = (t55 + 12U);
    t6 = (15U != t56);
    if (t6 == 1)
        goto LAB28;

LAB29:    t57 = (t0 + 6040);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memcpy(t61, t51, 15U);
    xsi_driver_first_trans_delta(t57, 0U, 15U, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t32 = (t13 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t1 = (t2 + t34);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2472U);
    t7 = *((char **)t5);
    t14 = (0 - 2);
    t38 = (t14 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t5 = (t7 + t40);
    t4 = *((unsigned char *)t5);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t42, t9, (char)99, t3, (char)99, t4, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_base_array_concat(t10, t45, t11, (char)97, t8, t42, (char)99, (unsigned char)2, (char)101);
    t15 = (3000 * 4095);
    t16 = (t15 / 4095);
    t12 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t47, t16, 12);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t52, t18, (char)97, t10, t45, (char)97, t12, t47, (char)101);
    t54 = (1U + 1U);
    t55 = (t54 + 1U);
    t20 = (t47 + 12U);
    t56 = *((unsigned int *)t20);
    t56 = (t56 * 1U);
    t62 = (t55 + t56);
    t6 = (15U != t62);
    if (t6 == 1)
        goto LAB30;

LAB31:    t21 = (t0 + 6040);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 15U);
    xsi_driver_first_trans_delta(t21, 0U, 15U, 0LL);
    goto LAB9;

LAB12:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t32 = (t13 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t1 = (t2 + t34);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2472U);
    t7 = *((char **)t5);
    t14 = (0 - 2);
    t38 = (t14 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t5 = (t7 + t40);
    t4 = *((unsigned char *)t5);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t42, t9, (char)99, t3, (char)99, t4, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_base_array_concat(t10, t45, t11, (char)97, t8, t42, (char)99, (unsigned char)2, (char)101);
    t15 = (3000 * 4095);
    t16 = (t15 / 4095);
    t19 = (t16 / 2);
    t12 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t47, t19, 12);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t52, t18, (char)97, t10, t45, (char)97, t12, t47, (char)101);
    t54 = (1U + 1U);
    t55 = (t54 + 1U);
    t20 = (t47 + 12U);
    t56 = *((unsigned int *)t20);
    t56 = (t56 * 1U);
    t62 = (t55 + t56);
    t6 = (15U != t62);
    if (t6 == 1)
        goto LAB32;

LAB33:    t21 = (t0 + 6040);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 15U);
    xsi_driver_first_trans_delta(t21, 0U, 15U, 0LL);
    goto LAB9;

LAB13:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t32 = (t13 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t1 = (t2 + t34);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2472U);
    t7 = *((char **)t5);
    t14 = (0 - 2);
    t38 = (t14 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t5 = (t7 + t40);
    t4 = *((unsigned char *)t5);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t42, t9, (char)99, t3, (char)99, t4, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_base_array_concat(t10, t45, t11, (char)97, t8, t42, (char)99, (unsigned char)2, (char)101);
    t15 = (3000 * 4095);
    t16 = (t15 / 4095);
    t12 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t47, t16, 12);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t52, t18, (char)97, t10, t45, (char)97, t12, t47, (char)101);
    t54 = (1U + 1U);
    t55 = (t54 + 1U);
    t20 = (t47 + 12U);
    t56 = *((unsigned int *)t20);
    t56 = (t56 * 1U);
    t62 = (t55 + t56);
    t6 = (15U != t62);
    if (t6 == 1)
        goto LAB34;

LAB35:    t21 = (t0 + 6040);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 15U);
    xsi_driver_first_trans_delta(t21, 0U, 15U, 0LL);
    goto LAB9;

LAB14:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t32 = (t13 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t1 = (t2 + t34);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2472U);
    t7 = *((char **)t5);
    t14 = (0 - 2);
    t38 = (t14 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t5 = (t7 + t40);
    t4 = *((unsigned char *)t5);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t42, t9, (char)99, t3, (char)99, t4, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_base_array_concat(t10, t45, t11, (char)97, t8, t42, (char)99, (unsigned char)2, (char)101);
    t15 = (40 * 4095);
    t16 = (t15 / 4095);
    t12 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t47, t16, 12);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t52, t18, (char)97, t10, t45, (char)97, t12, t47, (char)101);
    t54 = (1U + 1U);
    t55 = (t54 + 1U);
    t20 = (t47 + 12U);
    t56 = *((unsigned int *)t20);
    t56 = (t56 * 1U);
    t62 = (t55 + t56);
    t6 = (15U != t62);
    if (t6 == 1)
        goto LAB36;

LAB37:    t21 = (t0 + 6040);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 15U);
    xsi_driver_first_trans_delta(t21, 0U, 15U, 0LL);
    goto LAB9;

LAB15:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t32 = (t13 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t1 = (t2 + t34);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2472U);
    t7 = *((char **)t5);
    t14 = (0 - 2);
    t38 = (t14 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t5 = (t7 + t40);
    t4 = *((unsigned char *)t5);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t42, t9, (char)99, t3, (char)99, t4, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_base_array_concat(t10, t45, t11, (char)97, t8, t42, (char)99, (unsigned char)2, (char)101);
    t15 = (40 * 4095);
    t16 = (t15 / 4095);
    t12 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t47, t16, 12);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t52, t18, (char)97, t10, t45, (char)97, t12, t47, (char)101);
    t54 = (1U + 1U);
    t55 = (t54 + 1U);
    t20 = (t47 + 12U);
    t56 = *((unsigned int *)t20);
    t56 = (t56 * 1U);
    t62 = (t55 + t56);
    t6 = (15U != t62);
    if (t6 == 1)
        goto LAB38;

LAB39:    t21 = (t0 + 6040);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 15U);
    xsi_driver_first_trans_delta(t21, 0U, 15U, 0LL);
    goto LAB9;

LAB16:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t32 = (t13 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t1 = (t2 + t34);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2472U);
    t7 = *((char **)t5);
    t14 = (0 - 2);
    t38 = (t14 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t5 = (t7 + t40);
    t4 = *((unsigned char *)t5);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t42, t9, (char)99, t3, (char)99, t4, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_base_array_concat(t10, t45, t11, (char)97, t8, t42, (char)99, (unsigned char)2, (char)101);
    t15 = (40 * 4095);
    t16 = (t15 / 4095);
    t19 = (t16 / 2);
    t12 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t47, t19, 12);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t52, t18, (char)97, t10, t45, (char)97, t12, t47, (char)101);
    t54 = (1U + 1U);
    t55 = (t54 + 1U);
    t20 = (t47 + 12U);
    t56 = *((unsigned int *)t20);
    t56 = (t56 * 1U);
    t62 = (t55 + t56);
    t6 = (15U != t62);
    if (t6 == 1)
        goto LAB40;

LAB41:    t21 = (t0 + 6040);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 15U);
    xsi_driver_first_trans_delta(t21, 0U, 15U, 0LL);
    goto LAB9;

LAB17:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = (2 - 2);
    t32 = (t13 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t1 = (t2 + t34);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 2472U);
    t7 = *((char **)t5);
    t14 = (0 - 2);
    t38 = (t14 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t5 = (t7 + t40);
    t4 = *((unsigned char *)t5);
    t9 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t42, t9, (char)99, t3, (char)99, t4, (char)101);
    t11 = ((IEEE_P_2592010699) + 4024);
    t10 = xsi_base_array_concat(t10, t45, t11, (char)97, t8, t42, (char)99, (unsigned char)2, (char)101);
    t15 = (40 * 4095);
    t16 = (t15 / 4095);
    t12 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t47, t16, 12);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t52, t18, (char)97, t10, t45, (char)97, t12, t47, (char)101);
    t54 = (1U + 1U);
    t55 = (t54 + 1U);
    t20 = (t47 + 12U);
    t56 = *((unsigned int *)t20);
    t56 = (t56 * 1U);
    t62 = (t55 + t56);
    t6 = (15U != t62);
    if (t6 == 1)
        goto LAB42;

LAB43:    t21 = (t0 + 6040);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 15U);
    xsi_driver_first_trans_delta(t21, 0U, 15U, 0LL);
    goto LAB9;

LAB27:;
LAB28:    xsi_size_not_matching(15U, t56, 0);
    goto LAB29;

LAB30:    xsi_size_not_matching(15U, t62, 0);
    goto LAB31;

LAB32:    xsi_size_not_matching(15U, t62, 0);
    goto LAB33;

LAB34:    xsi_size_not_matching(15U, t62, 0);
    goto LAB35;

LAB36:    xsi_size_not_matching(15U, t62, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(15U, t62, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(15U, t62, 0);
    goto LAB41;

LAB42:    xsi_size_not_matching(15U, t62, 0);
    goto LAB43;

LAB44:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t14 = (t13 + 1);
    t2 = (t0 + 5912);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t14;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t14 = (15 - t13);
    t15 = (t14 - 15);
    t32 = (t15 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t14);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t1 = (t2 + t34);
    t3 = *((unsigned char *)t1);
    t7 = (t0 + 5848);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 15);
    if (t3 != 0)
        goto LAB47;

LAB49:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 7);
    if (t3 != 0)
        goto LAB50;

LAB51:
LAB48:    goto LAB45;

LAB47:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t32 = (15 - 15);
    t33 = (t32 * 1U);
    t34 = (0 + t33);
    t1 = (t5 + t34);
    t7 = (t0 + 6040);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 15U);
    xsi_driver_first_trans_delta(t7, 0U, 15U, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 5912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 6104);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB48;

LAB50:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t1 = (t0 + 5976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t4;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB48;

}

static void work_a_1325296382_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 2952U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 6168);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t16 = (t0 + 5672);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6168);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1325296382_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (1 - 15);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6232);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_delta(t8, 15U, 1, 0LL);

LAB2:    t13 = (t0 + 5688);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1325296382_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6296);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5704);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1325296382_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1325296382_3212880686_p_0,(void *)work_a_1325296382_3212880686_p_1,(void *)work_a_1325296382_3212880686_p_2,(void *)work_a_1325296382_3212880686_p_3};
	xsi_register_didat("work_a_1325296382_3212880686", "isim/tb2_isim_beh.exe.sim/work/a_1325296382_3212880686.didat");
	xsi_register_executes(pe);
}
