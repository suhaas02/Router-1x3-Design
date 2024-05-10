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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_01398000774767851340_2775274865_init();
    work_m_02092878456435089771_0535140239_init();
    work_m_16990793882921668277_2849853989_init();
    work_m_14846310159524291718_1321141568_init();
    work_m_15619558072774371080_0856560831_init();
    work_m_02736538175890142725_4117270559_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_02736538175890142725_4117270559");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
