/*
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

// clang-format off
#ifdef SUPPORT_GEN10
DEVICE( ICNL_5x8_DESK_DEVICE_F0_ID,       CNL_2x5x8, GTTYPE_GT2 )
DEVICE( ICNL_5x8_DESKTOP_DEVICE_F0_ID,    CNL_2x5x8, GTTYPE_GT2 )
DEVICE( ICNL_5x8_HALO_DEVICE_F0_ID,       CNL_2x5x8, GTTYPE_GT2 )
DEVICE( ICNL_5x8_SUPERSKU_DEVICE_F0_ID,   CNL_2x5x8, GTTYPE_GT2 )
DEVICE( ICNL_5x8_ULX_DEVICE_F0_ID,        CNL_2x5x8, GTTYPE_GT2 )
DEVICE( ICNL_5x8_ULT_DEVICE_F0_ID,        CNL_2x5x8, GTTYPE_GT2 )
DEVICE( ICNL_4x8_ULT_DEVICE_F0_ID,        CNL_2x4x8, GTTYPE_GT2 )
DEVICE( ICNL_4x8_ULX_DEVICE_F0_ID,        CNL_2x4x8, GTTYPE_GT2 )
DEVICE( ICNL_4x8_HALO_DEVICE_F0_ID,       CNL_2x4x8, GTTYPE_GT2 )

DEVICE( ICNL_3x8_DESK_DEVICE_F0_ID,       CNL_1x3x8, GTTYPE_GT1 )
DEVICE( ICNL_3x8_ULT_DEVICE_F0_ID,        CNL_1x3x8, GTTYPE_GT1 )
DEVICE( ICNL_2x8_ULT_DEVICE_F0_ID ,       CNL_1x2x8, GTTYPE_GT1 )
DEVICE( ICNL_3x8_HALO_DEVICE_F0_ID,       CNL_1x3x8, GTTYPE_GT1 )
DEVICE( ICNL_3x8_DESKTOP_DEVICE_F0_ID,    CNL_1x3x8, GTTYPE_GT1 )
DEVICE( ICNL_3x8_ULX_DEVICE_F0_ID,        CNL_1x3x8, GTTYPE_GT1 )
DEVICE( ICNL_2x8_ULX_DEVICE_F0_ID,        CNL_1x2x8, GTTYPE_GT1 )
DEVICE( ICNL_2x8_HALO_DEVICE_F0_ID,       CNL_1x2x8, GTTYPE_GT1 )

DEVICE( ICNL_9x8_DESK_DEVICE_F0_ID,       CNL_4x9x8, GTTYPE_GT3 )
DEVICE( ICNL_9x8_ULT_DEVICE_F0_ID,        CNL_4x9x8, GTTYPE_GT3 )
DEVICE( ICNL_9x8_SUPERSKU_DEVICE_F0_ID,   CNL_4x9x8, GTTYPE_GT3 )
#endif

#ifdef SUPPORT_GEN9
#ifdef SUPPORT_SKL
// GT1
DEVICE( ISKL_GT1_DESK_DEVICE_F0_ID,         SKL_1x2x6,  GTTYPE_GT1 )
DEVICE( ISKL_GT1_DT_DEVICE_F0_ID,           SKL_1x2x6,  GTTYPE_GT1 )
DEVICE( ISKL_GT1_HALO_MOBL_DEVICE_F0_ID,    SKL_1x2x6,  GTTYPE_GT1 )
DEVICE( ISKL_GT1_SERV_DEVICE_F0_ID,         SKL_1x2x6,  GTTYPE_GT1 )
DEVICE( ISKL_GT1_ULT_DEVICE_F0_ID,          SKL_1x2x6,  GTTYPE_GT1 )
DEVICE( ISKL_GT1_ULX_DEVICE_F0_ID,          SKL_1x2x6,  GTTYPE_GT1 )
// GT1_5
DEVICE( ISKL_GT1_5_DT_DEVICE_F0_ID,         SKL_1x3x6,  GTTYPE_GT1_5 )
DEVICE( ISKL_GT1_5_ULT_DEVICE_F0_ID,        SKL_1x3x6,  GTTYPE_GT1_5 )
DEVICE( ISKL_GT1_5_ULX_DEVICE_F0_ID,        SKL_1x3x6,  GTTYPE_GT1_5 )
// GT2
DEVICE( ISKL_GT2_DESK_DEVICE_F0_ID,         SKL_1x3x8,  GTTYPE_GT2 )
DEVICE( ISKL_GT2_DT_DEVICE_F0_ID,           SKL_1x3x8,  GTTYPE_GT2 )
DEVICE( ISKL_GT2_HALO_MOBL_DEVICE_F0_ID,    SKL_1x3x8,  GTTYPE_GT2 )
DEVICE( ISKL_GT2_SERV_DEVICE_F0_ID,         SKL_1x3x8,  GTTYPE_GT2 )
DEVICE( ISKL_GT2_ULT_DEVICE_F0_ID,          SKL_1x3x8,  GTTYPE_GT2 )
DEVICE( ISKL_GT2_ULX_DEVICE_F0_ID,          SKL_1x3x8,  GTTYPE_GT2 )
DEVICE( ISKL_GT2_WRK_DEVICE_F0_ID,          SKL_1x3x8,  GTTYPE_GT2 )
DEVICE( ISKL_GT2F_ULT_DEVICE_F0_ID,         SKL_1x3x8,  GTTYPE_GT2 )
DEVICE( ISKL_LP_DEVICE_F0_ID,               SKL_1x3x8,  GTTYPE_GT2 )
// GT3
DEVICE( ISKL_GT3_DESK_DEVICE_F0_ID,         SKL_2x3x8,  GTTYPE_GT3 )
DEVICE( ISKL_GT3_HALO_MOBL_DEVICE_F0_ID,    SKL_2x3x8,  GTTYPE_GT3 )
DEVICE( ISKL_GT3_MEDIA_SERV_DEVICE_F0_ID,   SKL_2x3x8,  GTTYPE_GT3 )
DEVICE( ISKL_GT3_SERV_DEVICE_F0_ID,         SKL_2x3x8,  GTTYPE_GT3 )
DEVICE( ISKL_GT3_ULT_DEVICE_F0_ID,          SKL_2x3x8,  GTTYPE_GT3 )
DEVICE( ISKL_GT3e_ULT_DEVICE_F0_ID_540,     SKL_2x3x8,  GTTYPE_GT3 )
DEVICE( ISKL_GT3e_ULT_DEVICE_F0_ID_550,     SKL_2x3x8,  GTTYPE_GT3 )
// GT4
DEVICE( ISKL_GT4_DESK_DEVICE_F0_ID,         SKL_3x3x8,  GTTYPE_GT4 )
DEVICE( ISKL_GT4_DT_DEVICE_F0_ID,           SKL_3x3x8,  GTTYPE_GT4 )
DEVICE( ISKL_GT4_HALO_MOBL_DEVICE_F0_ID,    SKL_3x3x8,  GTTYPE_GT4 )
DEVICE( ISKL_GT4_SERV_DEVICE_F0_ID,         SKL_3x3x8,  GTTYPE_GT4 )
DEVICE( ISKL_GT4_WRK_DEVICE_F0_ID,          SKL_3x3x8,  GTTYPE_GT4 )
#endif

#ifdef SUPPORT_KBL
// GT1
DEVICE( IKBL_GT1_DT_DEVICE_F0_ID,            KBL_1x2x6,  GTTYPE_GT1 )
DEVICE( IKBL_GT1_HALO_DEVICE_F0_ID,          KBL_1x2x6,  GTTYPE_GT1 )
DEVICE( IKBL_GT1_SERV_DEVICE_F0_ID,          KBL_1x2x6,  GTTYPE_GT1 )
DEVICE( IKBL_GT1_ULT_DEVICE_F0_ID,           KBL_1x2x6,  GTTYPE_GT1 )
DEVICE( IKBL_GT1_ULX_DEVICE_F0_ID,           KBL_1x3x6,  GTTYPE_GT1 )
DEVICE( IKBL_GT1F_HALO_DEVICE_F0_ID,         KBL_1x2x6,  GTTYPE_GT1 )
// GT1_5
DEVICE( IKBL_GT1_5_ULT_DEVICE_F0_ID,         KBL_1x3x6,  GTTYPE_GT1_5 )
DEVICE( IKBL_GT1_5_ULX_DEVICE_F0_ID,         KBL_1x2x6,  GTTYPE_GT1_5 )
// GT2
DEVICE( IKBL_GT2_DT_DEVICE_F0_ID,            KBL_1x3x8,  GTTYPE_GT2 )
DEVICE( IKBL_GT2_HALO_DEVICE_F0_ID,          KBL_1x3x8,  GTTYPE_GT2 )
DEVICE( IKBL_GT2_R_ULT_DEVICE_F0_ID,         KBL_1x3x8,  GTTYPE_GT2 )
DEVICE( IKBL_GT2_SERV_DEVICE_F0_ID,          KBL_1x3x8,  GTTYPE_GT2 )
DEVICE( IKBL_GT2_ULT_DEVICE_F0_ID,           KBL_1x3x8,  GTTYPE_GT2 )
DEVICE( IKBL_GT2_ULX_DEVICE_F0_ID,           KBL_1x3x8,  GTTYPE_GT2 )
DEVICE( IKBL_GT2_WRK_DEVICE_F0_ID,           KBL_1x3x8,  GTTYPE_GT2 )
DEVICE( IKBL_GT2_R_ULX_DEVICE_F0_ID,         KBL_1x3x8,  GTTYPE_GT2 )
DEVICE( IKBL_GT2F_ULT_DEVICE_F0_ID,          KBL_1x3x8,  GTTYPE_GT2 )
// GT3
DEVICE( IKBL_GT3_15W_ULT_DEVICE_F0_ID,       KBL_2x3x8,  GTTYPE_GT3 )
DEVICE( IKBL_GT3_28W_ULT_DEVICE_F0_ID,       KBL_2x3x8,  GTTYPE_GT3 )
DEVICE( IKBL_GT3_HALO_DEVICE_F0_ID,          KBL_2x3x8,  GTTYPE_GT3 )
DEVICE( IKBL_GT3_SERV_DEVICE_F0_ID,          KBL_2x3x8,  GTTYPE_GT3 )
DEVICE( IKBL_GT3_ULT_DEVICE_F0_ID,           KBL_2x3x8,  GTTYPE_GT3 )
// GT4
DEVICE( IKBL_GT4_DT_DEVICE_F0_ID,            KBL_3x3x8,  GTTYPE_GT4 )
DEVICE( IKBL_GT4_HALO_DEVICE_F0_ID,          KBL_3x3x8,  GTTYPE_GT4 )
DEVICE( IKBL_GT4_SERV_DEVICE_F0_ID,          KBL_3x3x8,  GTTYPE_GT4 )
DEVICE( IKBL_GT4_WRK_DEVICE_F0_ID,           KBL_3x3x8,  GTTYPE_GT4 )
#endif

#ifdef SUPPORT_CFL
// GT1
DEVICE( ICFL_GT1_DT_DEVICE_F0_ID,               CFL_1x2x6,  GTTYPE_GT1 )
DEVICE( ICFL_GT1_S41_DT_DEVICE_F0_ID,           CFL_1x2x6,  GTTYPE_GT1 )
DEVICE( ICFL_GT1_S61_DT_DEVICE_F0_ID,           CFL_1x2x6,  GTTYPE_GT1 )
DEVICE( ICFL_GT1_41F_2F1F_ULT_DEVICE_F0_ID,     CFL_1x2x6,  GTTYPE_GT1 )
DEVICE( ICFL_GT1_S6_S4_S2_F1F_DT_DEVICE_F0_ID,  CFL_1x2x6,  GTTYPE_GT1 )
DEVICE( ICFL_GT1_U41F_U2F1F_ULT_DEVICE_F0_ID,   CFL_1x2x6,  GTTYPE_GT1 )
// GT2
DEVICE( ICFL_GT2_DT_DEVICE_F0_ID,               CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_HALO_DEVICE_F0_ID,             CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_HALO_WS_DEVICE_F0_ID,          CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_S42_DT_DEVICE_F0_ID,           CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_S62_DT_DEVICE_F0_ID,           CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_SERV_DEVICE_F0_ID,             CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_S82_S6F2_DT_DEVICE_F0_ID,      CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_U42F_U2F1F_ULT_DEVICE_F0_ID,   CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_U42F_U2F2F_ULT_DEVICE_F0_ID,   CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_U42F_U2F2_ULT_DEVICE_F0_ID,    CFL_1x3x8,  GTTYPE_GT2 )
DEVICE( ICFL_GT2_S8_S2_DT_DEVICE_F0_ID,         CFL_1x3x8,  GTTYPE_GT2 )
// GT3
DEVICE( ICFL_HALO_DEVICE_F0_ID,                 CFL_2x3x8,  GTTYPE_GT3 )
DEVICE( ICFL_GT3_ULT_15W_DEVICE_F0_ID,          CFL_2x3x8,  GTTYPE_GT3 )
DEVICE( ICFL_GT3_ULT_15W_42EU_DEVICE_F0_ID,     CFL_2x3x8,  GTTYPE_GT3 )
DEVICE( ICFL_GT3_ULT_28W_DEVICE_F0_ID,          CFL_2x3x8,  GTTYPE_GT3 )
DEVICE( ICFL_GT3_ULT_DEVICE_F0_ID,              CFL_2x3x8,  GTTYPE_GT3 )
DEVICE( ICFL_GT3_U43_ULT_DEVICE_F0_ID,          CFL_2x3x8,  GTTYPE_GT3 )
#endif

#ifdef SUPPORT_GLK
DEVICE( IGLK_GT2_ULT_18EU_DEVICE_F0_ID,      GLK_1x3x6, GTTYPE_GTA )
DEVICE( IGLK_GT2_ULT_12EU_DEVICE_F0_ID,      GLK_1x2x6, GTTYPE_GTA )
#endif

#ifdef SUPPORT_BXT
DEVICE(IBXT_A_DEVICE_F0_ID,                 BXT_1x3x6,  GTTYPE_GTA)
DEVICE(IBXT_C_DEVICE_F0_ID,                 BXT_1x3x6,  GTTYPE_GTA)
DEVICE(IBXT_GT_3x6_DEVICE_ID,               BXT_1x3x6,  GTTYPE_GTA)
DEVICE(IBXT_P_3x6_DEVICE_ID,                BXT_1x3x6,  GTTYPE_GTA)   //18EU APL
DEVICE(IBXT_P_12EU_3x6_DEVICE_ID,           BXT_1x2x6,  GTTYPE_GTA)   //12EU APL
DEVICE(IBXT_PRO_12EU_3x6_DEVICE_ID,         BXT_1x2x6,  GTTYPE_GTA)   //12EU APL
DEVICE(IBXT_PRO_3x6_DEVICE_ID,              BXT_1x3x6,  GTTYPE_GTA)
DEVICE(IBXT_X_DEVICE_F0_ID,                 BXT_1x3x6,  GTTYPE_GTA)
#endif
#endif

#ifdef SUPPORT_GEN8
// GT1
DEVICE( IBDW_GT1_DESK_DEVICE_F0_ID,         BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( IBDW_GT1_HALO_MOBL_DEVICE_F0_ID,    BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( IBDW_GT1_SERV_DEVICE_F0_ID,         BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( IBDW_GT1_ULT_MOBL_DEVICE_F0_ID,     BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( IBDW_GT1_ULX_DEVICE_F0_ID,          BDW_1x2x6,  GTTYPE_GT1 )
DEVICE( IBDW_GT1_WRK_DEVICE_F0_ID,          BDW_1x2x6,  GTTYPE_GT1 )
// GT2
DEVICE( IBDW_GT2_DESK_DEVICE_F0_ID,         BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( IBDW_GT2_HALO_MOBL_DEVICE_F0_ID,    BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( IBDW_GT2_SERV_DEVICE_F0_ID,         BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( IBDW_GT2_ULT_MOBL_DEVICE_F0_ID,     BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( IBDW_GT2_ULX_DEVICE_F0_ID,          BDW_1x3x8,  GTTYPE_GT2 )
DEVICE( IBDW_GT2_WRK_DEVICE_F0_ID,          BDW_1x3x8,  GTTYPE_GT2 )
// GT3
DEVICE( IBDW_GT3_DESK_DEVICE_F0_ID,         BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( IBDW_GT3_HALO_MOBL_DEVICE_F0_ID,    BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( IBDW_GT3_SERV_DEVICE_F0_ID,         BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( IBDW_GT3_ULT_MOBL_DEVICE_F0_ID,     BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( IBDW_GT3_ULT25W_MOBL_DEVICE_F0_ID,  BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( IBDW_GT3_ULX_DEVICE_F0_ID,          BDW_2x3x8,  GTTYPE_GT3 )
DEVICE( IBDW_GT3_WRK_DEVICE_F0_ID,          BDW_2x3x8,  GTTYPE_GT3 )
#endif
// clang-format on
