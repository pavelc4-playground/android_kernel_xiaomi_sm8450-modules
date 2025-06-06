/*
 * Copyright (c) 2011-2021 The Linux Foundation. All rights reserved.
 * Copyright (c) 2021-2025 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * This file was originally distributed by Qualcomm Atheros, Inc.
 * under proprietary terms before Copyright ownership was assigned
 * to the Linux Foundation.
 */

#ifndef _WLAN_MODULE_IDS_H_
#define _WLAN_MODULE_IDS_H_

/* Wlan module ids , global across all the modules */
typedef enum {
  WLAN_MODULE_ID_MIN = 0,
  WLAN_MODULE_INF = WLAN_MODULE_ID_MIN, /* 0x0 */
  WLAN_MODULE_WMI,                      /* 0x1 */
  WLAN_MODULE_STA_PWRSAVE,              /* 0x2 */
  WLAN_MODULE_WHAL,                     /* 0x3 */
  WLAN_MODULE_COEX,                     /* 0x4 */
  WLAN_MODULE_ROAM,                     /* 0x5 */
  WLAN_MODULE_RESMGR_CHAN_MANAGER,      /* 0x6 */
  WLAN_MODULE_RESMGR,                   /* 0x7 */
  WLAN_MODULE_VDEV_MGR,                 /* 0x8 */
  WLAN_MODULE_SCAN,                     /* 0x9 */
  WLAN_MODULE_RATECTRL,                 /* 0xa */
  WLAN_MODULE_AP_PWRSAVE,               /* 0xb */
  WLAN_MODULE_BLOCKACK,                 /* 0xc */
  WLAN_MODULE_MGMT_TXRX,                /* 0xd */
  WLAN_MODULE_DATA_TXRX,                /* 0xe */
  WLAN_MODULE_HTT,                      /* 0xf */
  WLAN_MODULE_HOST,                     /* 0x10 */
  WLAN_MODULE_BEACON,                   /* 0x11 */
  WLAN_MODULE_OFFLOAD,                  /* 0x12 */
  WLAN_MODULE_WAL,                      /* 0x13 */
  WAL_MODULE_DE,                        /* 0x14 */
  WLAN_MODULE_PCIELP,                   /* 0x15 */
  WLAN_MODULE_RTT,                      /* 0x16 */
  WLAN_MODULE_RESOURCE,                 /* 0x17 */
  WLAN_MODULE_DCS,                      /* 0x18 */
  WLAN_MODULE_CACHEMGR,                 /* 0x19 */
  WLAN_MODULE_ANI,                      /* 0x1a */
  WLAN_MODULE_P2P,                      /* 0x1b */
  WLAN_MODULE_CSA,                      /* 0x1c */
  WLAN_MODULE_NLO,                      /* 0x1d */
  WLAN_MODULE_CHATTER,                  /* 0x1e */
  WLAN_MODULE_WOW,                      /* 0x1f */
  WLAN_MODULE_WAL_VDEV,                 /* 0x20 */
  WLAN_MODULE_WAL_PDEV,                 /* 0x21 */
  WLAN_MODULE_TEST,                     /* 0x22 */
  WLAN_MODULE_STA_SMPS,                 /* 0x23 */
  WLAN_MODULE_SWBMISS,                  /* 0x24 */
  WLAN_MODULE_WMMAC,                    /* 0x25 */
  WLAN_MODULE_TDLS,                     /* 0x26 */
  WLAN_MODULE_HB,                       /* 0x27 */
  WLAN_MODULE_TXBF,                     /* 0x28 */
  WLAN_MODULE_BATCH_SCAN,               /* 0x29 */
  WLAN_MODULE_THERMAL_MGR,              /* 0x2a */
  WLAN_MODULE_PHYERR_DFS,               /* 0x2b */
  WLAN_MODULE_RMC,                      /* 0x2c */
  WLAN_MODULE_STATS,                    /* 0x2d */
  WLAN_MODULE_NAN,                      /* 0x2e */
  WLAN_MODULE_IBSS_PWRSAVE,             /* 0x2f */
  WLAN_MODULE_HIF_UART,                 /* 0x30 */
  WLAN_MODULE_LPI,                      /* 0x31 */
  WLAN_MODULE_EXTSCAN,                  /* 0x32 */
  WLAN_MODULE_UNIT_TEST,                /* 0x33 */
  WLAN_MODULE_MLME,                     /* 0x34 */
  WLAN_MODULE_SUPPL,                    /* 0x35 */
  WLAN_MODULE_ERE,                      /* 0x36 */
  WLAN_MODULE_OCB,                      /* 0x37 */
  WLAN_MODULE_RSSI_MONITOR,             /* 0x38 */
  WLAN_MODULE_WPM,                      /* 0x39 */
  WLAN_MODULE_CSS,                      /* 0x3a */
  WLAN_MODULE_PPS,                      /* 0x3b */
  WLAN_MODULE_SCAN_CH_PREDICT,          /* 0x3c */
  WLAN_MODULE_MAWC,                     /* 0x3d */
  WLAN_MODULE_CMC_QMIC,                 /* 0x3e */
  WLAN_MODULE_EGAP,                     /* 0x3f */
  WLAN_MODULE_NAN20,                    /* 0x40 */
  WLAN_MODULE_QBOOST,                   /* 0x41 */
  WLAN_MODULE_P2P_LISTEN_OFFLOAD,       /* 0x42 */
  WLAN_MODULE_HALPHY,                   /* 0x43 */
  WAL_MODULE_ENQ,                       /* 0x44 */
  WLAN_MODULE_GNSS,                     /* 0x45 */
  WLAN_MODULE_WAL_MEM,                  /* 0x46 */
  WLAN_MODULE_SCHED_ALGO,               /* 0x47 */
  WLAN_MODULE_TX,                       /* 0x48 */
  WLAN_MODULE_RX,                       /* 0x49 */
  WLAN_MODULE_WLM,                      /* 0x4a */
  WLAN_MODULE_RU_ALLOCATOR,             /* 0x4b */
  WLAN_MODULE_11K_OFFLOAD,              /* 0x4c */
  WLAN_MODULE_STA_TWT,                  /* 0x4d */
  WLAN_MODULE_AP_TWT,                   /* 0x4e */
  WLAN_MODULE_UL_OFDMA,                 /* 0x4f */
  WLAN_MODULE_HPCS_PULSE,               /* 0x50 */
  WLAN_MODULE_DTF,                      /* 0x51 */ /* Deterministic Test Framework */
  WLAN_MODULE_QUIET_IE,                 /* 0x52 */
  WLAN_MODULE_SHMEM_MGR,                /* 0x53 */
  WLAN_MODULE_CFIR,                     /* 0x54 */ /* Channel Capture */
  WLAN_MODULE_CODE_COVER,               /* 0x55 */ /* code coverage */
  WLAN_MODULE_SHO,                      /* 0x56 */ /* SAP HW offload */
  WLAN_MODULE_MLO_MGR,                  /* 0x57 */ /* MLO manager */
  WLAN_MODULE_PEER_INIT,                /* 0x58 */ /* peer init connection handling */
  WLAN_MODULE_STA_MLO_PS,               /* 0x59 */ /* MLO PS manager */
  WLAN_MODULE_MLO_SYNC_SEQ_NUM,         /* 0x5a */ /* sync seq num after rm MPDU */
  WLAN_MODULE_PLCMGR,                   /* 0x5b */ /* Policy Manager */
  /* OEM module IDs:
   * Reserve a small series of module IDs for use in OEM WLAN FW that
   * interacts with WLAN FW SDK.
   */
  WLAN_MODULE_OEM0,                     /* 0x5c */
  WLAN_MODULE_OEM1,                     /* 0x5d */
  WLAN_MODULE_OEM2,                     /* 0x5e */
  WLAN_MODULE_OEM3,                     /* 0x5f */
  WLAN_MODULE_OEM4,                     /* 0x60 */
  WLAN_MODULE_OEM5,                     /* 0x61 */
  WLAN_MODULE_OEM6,                     /* 0x62 */
  WLAN_MODULE_OEM7,                     /* 0x63 */

  WLAN_MODULE_T2LM,                     /* 0x64 */
  WLAN_MODULE_HEALTH_MON,               /* 0x65 */
  WLAN_MODULE_XGAP,                     /* 0x66 */
  WLAN_MODULE_MLO_OWNERSHIP_UPDATE,     /* 0x67 */

  WLAN_MODULE_SCHED_ALGO_TXBF,          /* 0x68 */
  WLAN_MODULE_SCHED_ALGO_DL_MU_MIMO,    /* 0x69 */
  WLAN_MODULE_SCHED_ALGO_UL_MU_MIMO,    /* 0x6a */
  WLAN_MODULE_SCHED_ALGO_DL_MU_OFDMA,   /* 0x6b */
  WLAN_MODULE_SCHED_ALGO_UL_MU_OFDMA,   /* 0x6c */
  WLAN_MODULE_SCHED_ALGO_SU,            /* 0x6d */
  WLAN_MODULE_SCHED_ALGO_MLO,           /* 0x6e */
  WLAN_MODULE_SCHED_ALGO_SAWF,          /* 0x6f */
  WLAN_MODULE_BAR,                      /* 0x70 */
  WLAN_MODULE_SMART_TX,                 /* 0x71 */
  WLAN_MODULE_BRIDGE_PEER,              /* 0x72 */
  WLAN_MODULE_AUX_MAC_MGR,              /* 0x73 */
  WLAN_MODULE_TCAM,                     /* 0x74 */
  WLAN_MODULE_P2P_R2,                   /* 0x75 */
  WLAN_MODULE_SYSSW,                    /* 0x76 */

  /* HDL MODULE IDS */
  WLAN_MODULE_PHYLIB_RXDCOCAL,          /* 0x77 */
  WLAN_MODULE_PHYLIB_COMBCAL,           /* 0x78 */
  WLAN_MODULE_PHYLIB_TPCCAL,            /* 0x79 */
  WLAN_MODULE_PHYLIB_BBFILTCAL,         /* 0x7a */
  WLAN_MODULE_PHYLIB_PKTDETCAL,         /* 0x7b */
  WLAN_MODULE_PHYLIB_PAPRDCAL,          /* 0x7c */
  WLAN_MODULE_PHYLIB_NFCAL,             /* 0x7d */
  WLAN_MODULE_PHYLIB_ADCCAL,            /* 0x7e */
  WLAN_MODULE_PHYLIB_DACCAL,            /* 0x7f */
  WLAN_MODULE_PHYLIB_PALCAL,            /* 0x80 */
  WLAN_MODULE_PHYLIB_RXGAINCAL,         /* 0x81 */
  WLAN_MODULE_PHYLIB_CALUTILS,          /* 0x82 */
  WLAN_MODULE_PHYLIB_PHYRESET,          /* 0x83 */
  WLAN_MODULE_PHYLIB_RFACONFIG,         /* 0x84 */
  WLAN_MODULE_PHYLIB_SETCHAINMASK,      /* 0x85 */
  WLAN_MODULE_PHYLIB_SETXBAR,           /* 0x86 */
  WLAN_MODULE_PHYLIB_M3,                /* 0x87 */
  WLAN_MODULE_PHYLIB_COMMON,            /* 0x88 */
  WLAN_MODULE_PHYLIB_SPURMITT,          /* 0x89 */
  WLAN_MODULE_PHYLIB_RTT,               /* 0x8a */
  WLAN_MODULE_PHYLIB_FTPG,              /* 0x8b */
  WLAN_MODULE_PHYLIB_RSTCAL,            /* 0x8c */
  WLAN_MODULE_PHYLIB_RXBBFCAL,          /* 0x8d */
  WLAN_MODULE_PHYLIB_TIADCCAL,          /* 0x8e */
  WLAN_MODULE_PHYLIB_IM2CAL,            /* 0x8f */
  WLAN_MODULE_PHYLIB_PACCAL,            /* 0x90 */
  WLAN_MODULE_PHYLIB_PDCCAL,            /* 0x91 */
  WLAN_MODULE_PHYLIB_SPURCAL,           /* 0x92 */
  WLAN_MODULE_PHYLIB_PHYDBG,            /* 0x93 */
  WLAN_MODULE_PHYLIB_RRI,               /* 0x94 */
  WLAN_MODULE_PHYLIB_SSCAN,             /* 0x95 */
  WLAN_MODULE_PHYLIB_RSVD,              /* 0x96 */

  WLAN_MODULE_USD,                      /* 0x97 */
  WLAN_MODULE_C2C,                      /* 0x98 */
  WLAN_MODULE_VBSS,                     /* 0x99 */
  WLAN_MODULE_OPT_DATA,                 /* 0x9a */
  WLAN_MODULE_ASD,                      /* 0x9b */

  WLAN_MODULE_ID_MAX,
  WLAN_MODULE_ID_INVALID = WLAN_MODULE_ID_MAX,
  WLAN_MODULE_ID_ALL = 0xffff /* wildcard to indicate all modules */
} WLAN_MODULE_ID;


#endif /* _WLAN_MODULE_IDS_H_ */
