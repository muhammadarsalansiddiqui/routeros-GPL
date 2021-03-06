/*
 * Copyright 2013 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */



#ifndef __ARCH_MPIPE_SHM_DEF_H__
#define __ARCH_MPIPE_SHM_DEF_H__

#ifdef __ASSEMBLER__
#define _64bit(x) x
#else /* __ASSEMBLER__ */
#ifdef __tile__
#define _64bit(x) x ## UL
#else /* __tile__ */
#define _64bit(x) x ## ULL
#endif /* __tile__ */
#endif /* __ASSEMBLER */

/*
 * MPIPE eDMA Descriptor.
 * The eDMA descriptor is written by software and consumed by hardware.  It
 * is used to specify the location of egress packet data to be sent out of
 * the chip via one of the packet interfaces.
 */

#define MPIPE_EDMA_DESC_WORD0__GEN_SHIFT 0
#define MPIPE_EDMA_DESC_WORD0__GEN_WIDTH 1
#define MPIPE_EDMA_DESC_WORD0__GEN_RMASK 0x1
#define MPIPE_EDMA_DESC_WORD0__GEN_MASK  0x1
#define MPIPE_EDMA_DESC_WORD0__GEN_FIELD 0,0

#define MPIPE_EDMA_DESC_WORD0__EFIFO_SEL_SHIFT 1
#define MPIPE_EDMA_DESC_WORD0__EFIFO_SEL_WIDTH 6
#define MPIPE_EDMA_DESC_WORD0__EFIFO_SEL_RMASK 0x3f
#define MPIPE_EDMA_DESC_WORD0__EFIFO_SEL_MASK  0x7e
#define MPIPE_EDMA_DESC_WORD0__EFIFO_SEL_FIELD 1,6

#define MPIPE_EDMA_DESC_WORD0__R0_SHIFT 7
#define MPIPE_EDMA_DESC_WORD0__R0_WIDTH 1
#define MPIPE_EDMA_DESC_WORD0__R0_RMASK 0x1
#define MPIPE_EDMA_DESC_WORD0__R0_MASK  0x80
#define MPIPE_EDMA_DESC_WORD0__R0_FIELD 7,7

#define MPIPE_EDMA_DESC_WORD0__CSUM_SHIFT 8
#define MPIPE_EDMA_DESC_WORD0__CSUM_WIDTH 1
#define MPIPE_EDMA_DESC_WORD0__CSUM_RMASK 0x1
#define MPIPE_EDMA_DESC_WORD0__CSUM_MASK  0x100
#define MPIPE_EDMA_DESC_WORD0__CSUM_FIELD 8,8

#define MPIPE_EDMA_DESC_WORD0__NS_SHIFT 9
#define MPIPE_EDMA_DESC_WORD0__NS_WIDTH 1
#define MPIPE_EDMA_DESC_WORD0__NS_RMASK 0x1
#define MPIPE_EDMA_DESC_WORD0__NS_MASK  0x200
#define MPIPE_EDMA_DESC_WORD0__NS_FIELD 9,9

#define MPIPE_EDMA_DESC_WORD0__NOTIF_SHIFT 10
#define MPIPE_EDMA_DESC_WORD0__NOTIF_WIDTH 1
#define MPIPE_EDMA_DESC_WORD0__NOTIF_RMASK 0x1
#define MPIPE_EDMA_DESC_WORD0__NOTIF_MASK  0x400
#define MPIPE_EDMA_DESC_WORD0__NOTIF_FIELD 10,10

#define MPIPE_EDMA_DESC_WORD0__BOUND_SHIFT 11
#define MPIPE_EDMA_DESC_WORD0__BOUND_WIDTH 1
#define MPIPE_EDMA_DESC_WORD0__BOUND_RMASK 0x1
#define MPIPE_EDMA_DESC_WORD0__BOUND_MASK  0x800
#define MPIPE_EDMA_DESC_WORD0__BOUND_FIELD 11,11

#define MPIPE_EDMA_DESC_WORD0__R1_SHIFT 12
#define MPIPE_EDMA_DESC_WORD0__R1_WIDTH 4
#define MPIPE_EDMA_DESC_WORD0__R1_RMASK 0xf
#define MPIPE_EDMA_DESC_WORD0__R1_MASK  0xf000
#define MPIPE_EDMA_DESC_WORD0__R1_FIELD 12,15

#define MPIPE_EDMA_DESC_WORD0__XFER_SIZE_SHIFT 16
#define MPIPE_EDMA_DESC_WORD0__XFER_SIZE_WIDTH 14
#define MPIPE_EDMA_DESC_WORD0__XFER_SIZE_RMASK 0x3fff
#define MPIPE_EDMA_DESC_WORD0__XFER_SIZE_MASK  0x3fff0000
#define MPIPE_EDMA_DESC_WORD0__XFER_SIZE_FIELD 16,29

#define MPIPE_EDMA_DESC_WORD0__R2_SHIFT 30
#define MPIPE_EDMA_DESC_WORD0__R2_WIDTH 2
#define MPIPE_EDMA_DESC_WORD0__R2_RMASK 0x3
#define MPIPE_EDMA_DESC_WORD0__R2_MASK  0xc0000000
#define MPIPE_EDMA_DESC_WORD0__R2_FIELD 30,31

#define MPIPE_EDMA_DESC_WORD0__CSUM_DEST_SHIFT 32
#define MPIPE_EDMA_DESC_WORD0__CSUM_DEST_WIDTH 8
#define MPIPE_EDMA_DESC_WORD0__CSUM_DEST_RMASK 0xff
#define MPIPE_EDMA_DESC_WORD0__CSUM_DEST_MASK  _64bit(0xff00000000)
#define MPIPE_EDMA_DESC_WORD0__CSUM_DEST_FIELD 32,39

#define MPIPE_EDMA_DESC_WORD0__CSUM_START_SHIFT 40
#define MPIPE_EDMA_DESC_WORD0__CSUM_START_WIDTH 8
#define MPIPE_EDMA_DESC_WORD0__CSUM_START_RMASK 0xff
#define MPIPE_EDMA_DESC_WORD0__CSUM_START_MASK  _64bit(0xff0000000000)
#define MPIPE_EDMA_DESC_WORD0__CSUM_START_FIELD 40,47

#define MPIPE_EDMA_DESC_WORD0__CSUM_SEED_SHIFT 48
#define MPIPE_EDMA_DESC_WORD0__CSUM_SEED_WIDTH 16
#define MPIPE_EDMA_DESC_WORD0__CSUM_SEED_RMASK 0xffff
#define MPIPE_EDMA_DESC_WORD0__CSUM_SEED_MASK  _64bit(0xffff000000000000)
#define MPIPE_EDMA_DESC_WORD0__CSUM_SEED_FIELD 48,63



#define MPIPE_EDMA_DESC_WORD1__VA_SHIFT 0
#define MPIPE_EDMA_DESC_WORD1__VA_WIDTH 42
#define MPIPE_EDMA_DESC_WORD1__VA_RMASK _64bit(0x3ffffffffff)
#define MPIPE_EDMA_DESC_WORD1__VA_MASK  _64bit(0x3ffffffffff)
#define MPIPE_EDMA_DESC_WORD1__VA_FIELD 0,41

#define MPIPE_EDMA_DESC_WORD1__STACK_IDX_SHIFT 48
#define MPIPE_EDMA_DESC_WORD1__STACK_IDX_WIDTH 5
#define MPIPE_EDMA_DESC_WORD1__STACK_IDX_RMASK 0x1f
#define MPIPE_EDMA_DESC_WORD1__STACK_IDX_MASK  _64bit(0x1f000000000000)
#define MPIPE_EDMA_DESC_WORD1__STACK_IDX_FIELD 48,52

#define MPIPE_EDMA_DESC_WORD1__INST_SHIFT 56
#define MPIPE_EDMA_DESC_WORD1__INST_WIDTH 2
#define MPIPE_EDMA_DESC_WORD1__INST_RMASK 0x3
#define MPIPE_EDMA_DESC_WORD1__INST_MASK  _64bit(0x300000000000000)
#define MPIPE_EDMA_DESC_WORD1__INST_FIELD 56,57

#define MPIPE_EDMA_DESC_WORD1__HWB_SHIFT 58
#define MPIPE_EDMA_DESC_WORD1__HWB_WIDTH 1
#define MPIPE_EDMA_DESC_WORD1__HWB_RMASK 0x1
#define MPIPE_EDMA_DESC_WORD1__HWB_MASK  _64bit(0x400000000000000)
#define MPIPE_EDMA_DESC_WORD1__HWB_FIELD 58,58

#define MPIPE_EDMA_DESC_WORD1__SIZE_SHIFT 59
#define MPIPE_EDMA_DESC_WORD1__SIZE_WIDTH 3
#define MPIPE_EDMA_DESC_WORD1__SIZE_RMASK 0x7
#define MPIPE_EDMA_DESC_WORD1__SIZE_MASK  _64bit(0x3800000000000000)
#define MPIPE_EDMA_DESC_WORD1__SIZE_FIELD 59,61

#define MPIPE_EDMA_DESC_WORD1__C_SHIFT 62
#define MPIPE_EDMA_DESC_WORD1__C_WIDTH 2
#define MPIPE_EDMA_DESC_WORD1__C_RMASK 0x3
#define MPIPE_EDMA_DESC_WORD1__C_MASK  _64bit(0xc000000000000000)
#define MPIPE_EDMA_DESC_WORD1__C_FIELD 62,63
#define MPIPE_EDMA_DESC_WORD1__C_VAL_UNCHAINED 0x0
#define MPIPE_EDMA_DESC_WORD1__C_VAL_CHAINED 0x1
#define MPIPE_EDMA_DESC_WORD1__C_VAL_NOT_RDY 0x2
#define MPIPE_EDMA_DESC_WORD1__C_VAL_INVALID 0x3


/*
 * MPIPE Packet Descriptor.
 * The packet descriptor is filled by the mPIPE's classification,
 * load-balancing, and buffer management services.  Some fields are consumed
 * by mPIPE hardware, and others are consumed by Tile software.
 */

#define MPIPE_PDESC_WORD0__NOTIF_RING_SHIFT 0
#define MPIPE_PDESC_WORD0__NOTIF_RING_WIDTH 8
#define MPIPE_PDESC_WORD0__NOTIF_RING_RMASK 0xff
#define MPIPE_PDESC_WORD0__NOTIF_RING_MASK  0xff
#define MPIPE_PDESC_WORD0__NOTIF_RING_FIELD 0,7

#define MPIPE_PDESC_WORD0__CHANNEL_SHIFT 8
#define MPIPE_PDESC_WORD0__CHANNEL_WIDTH 5
#define MPIPE_PDESC_WORD0__CHANNEL_RMASK 0x1f
#define MPIPE_PDESC_WORD0__CHANNEL_MASK  0x1f00
#define MPIPE_PDESC_WORD0__CHANNEL_FIELD 8,12

#define MPIPE_PDESC_WORD0__ME_SHIFT 14
#define MPIPE_PDESC_WORD0__ME_WIDTH 1
#define MPIPE_PDESC_WORD0__ME_RMASK 0x1
#define MPIPE_PDESC_WORD0__ME_MASK  0x4000
#define MPIPE_PDESC_WORD0__ME_FIELD 14,14

#define MPIPE_PDESC_WORD0__TR_SHIFT 15
#define MPIPE_PDESC_WORD0__TR_WIDTH 1
#define MPIPE_PDESC_WORD0__TR_RMASK 0x1
#define MPIPE_PDESC_WORD0__TR_MASK  0x8000
#define MPIPE_PDESC_WORD0__TR_FIELD 15,15

#define MPIPE_PDESC_WORD0__L2_SIZE_SHIFT 16
#define MPIPE_PDESC_WORD0__L2_SIZE_WIDTH 14
#define MPIPE_PDESC_WORD0__L2_SIZE_RMASK 0x3fff
#define MPIPE_PDESC_WORD0__L2_SIZE_MASK  0x3fff0000
#define MPIPE_PDESC_WORD0__L2_SIZE_FIELD 16,29

#define MPIPE_PDESC_WORD0__CE_SHIFT 30
#define MPIPE_PDESC_WORD0__CE_WIDTH 1
#define MPIPE_PDESC_WORD0__CE_RMASK 0x1
#define MPIPE_PDESC_WORD0__CE_MASK  0x40000000
#define MPIPE_PDESC_WORD0__CE_FIELD 30,30

#define MPIPE_PDESC_WORD0__CT_SHIFT 31
#define MPIPE_PDESC_WORD0__CT_WIDTH 1
#define MPIPE_PDESC_WORD0__CT_RMASK 0x1
#define MPIPE_PDESC_WORD0__CT_MASK  0x80000000
#define MPIPE_PDESC_WORD0__CT_FIELD 31,31

#define MPIPE_PDESC_WORD0__BUCKET_ID_SHIFT 32
#define MPIPE_PDESC_WORD0__BUCKET_ID_WIDTH 13
#define MPIPE_PDESC_WORD0__BUCKET_ID_RMASK 0x1fff
#define MPIPE_PDESC_WORD0__BUCKET_ID_MASK  _64bit(0x1fff00000000)
#define MPIPE_PDESC_WORD0__BUCKET_ID_FIELD 32,44

#define MPIPE_PDESC_WORD0__CS_SHIFT 48
#define MPIPE_PDESC_WORD0__CS_WIDTH 1
#define MPIPE_PDESC_WORD0__CS_RMASK 0x1
#define MPIPE_PDESC_WORD0__CS_MASK  _64bit(0x1000000000000)
#define MPIPE_PDESC_WORD0__CS_FIELD 48,48

#define MPIPE_PDESC_WORD0__NR_SHIFT 49
#define MPIPE_PDESC_WORD0__NR_WIDTH 1
#define MPIPE_PDESC_WORD0__NR_RMASK 0x1
#define MPIPE_PDESC_WORD0__NR_MASK  _64bit(0x2000000000000)
#define MPIPE_PDESC_WORD0__NR_FIELD 49,49

#define MPIPE_PDESC_WORD0__DEST_SHIFT 50
#define MPIPE_PDESC_WORD0__DEST_WIDTH 2
#define MPIPE_PDESC_WORD0__DEST_RMASK 0x3
#define MPIPE_PDESC_WORD0__DEST_MASK  _64bit(0xc000000000000)
#define MPIPE_PDESC_WORD0__DEST_FIELD 50,51
#define MPIPE_PDESC_WORD0__DEST_VAL_DROP 0x0
#define MPIPE_PDESC_WORD0__DEST_VAL_BUFFER_AND_DESC 0x1
#define MPIPE_PDESC_WORD0__DEST_VAL_DESC_ONLY 0x2

#define MPIPE_PDESC_WORD0__SQ_SHIFT 52
#define MPIPE_PDESC_WORD0__SQ_WIDTH 1
#define MPIPE_PDESC_WORD0__SQ_RMASK 0x1
#define MPIPE_PDESC_WORD0__SQ_MASK  _64bit(0x10000000000000)
#define MPIPE_PDESC_WORD0__SQ_FIELD 52,52

#define MPIPE_PDESC_WORD0__TS_SHIFT 53
#define MPIPE_PDESC_WORD0__TS_WIDTH 1
#define MPIPE_PDESC_WORD0__TS_RMASK 0x1
#define MPIPE_PDESC_WORD0__TS_MASK  _64bit(0x20000000000000)
#define MPIPE_PDESC_WORD0__TS_FIELD 53,53

#define MPIPE_PDESC_WORD0__PS_SHIFT 54
#define MPIPE_PDESC_WORD0__PS_WIDTH 1
#define MPIPE_PDESC_WORD0__PS_RMASK 0x1
#define MPIPE_PDESC_WORD0__PS_MASK  _64bit(0x40000000000000)
#define MPIPE_PDESC_WORD0__PS_FIELD 54,54

#define MPIPE_PDESC_WORD0__BE_SHIFT 55
#define MPIPE_PDESC_WORD0__BE_WIDTH 1
#define MPIPE_PDESC_WORD0__BE_RMASK 0x1
#define MPIPE_PDESC_WORD0__BE_MASK  _64bit(0x80000000000000)
#define MPIPE_PDESC_WORD0__BE_FIELD 55,55

#define MPIPE_PDESC_WORD0__CTR0_SHIFT 56
#define MPIPE_PDESC_WORD0__CTR0_WIDTH 5
#define MPIPE_PDESC_WORD0__CTR0_RMASK 0x1f
#define MPIPE_PDESC_WORD0__CTR0_MASK  _64bit(0x1f00000000000000)
#define MPIPE_PDESC_WORD0__CTR0_FIELD 56,60



#define MPIPE_PDESC_WORD1__CTR1_SHIFT 0
#define MPIPE_PDESC_WORD1__CTR1_WIDTH 5
#define MPIPE_PDESC_WORD1__CTR1_RMASK 0x1f
#define MPIPE_PDESC_WORD1__CTR1_MASK  0x1f
#define MPIPE_PDESC_WORD1__CTR1_FIELD 0,4

#define MPIPE_PDESC_WORD1__CSUM_START_SHIFT 8
#define MPIPE_PDESC_WORD1__CSUM_START_WIDTH 8
#define MPIPE_PDESC_WORD1__CSUM_START_RMASK 0xff
#define MPIPE_PDESC_WORD1__CSUM_START_MASK  0xff00
#define MPIPE_PDESC_WORD1__CSUM_START_FIELD 8,15

#define MPIPE_PDESC_WORD1__CSUM_SEED_VAL_SHIFT 16
#define MPIPE_PDESC_WORD1__CSUM_SEED_VAL_WIDTH 16
#define MPIPE_PDESC_WORD1__CSUM_SEED_VAL_RMASK 0xffff
#define MPIPE_PDESC_WORD1__CSUM_SEED_VAL_MASK  0xffff0000
#define MPIPE_PDESC_WORD1__CSUM_SEED_VAL_FIELD 16,31

#define MPIPE_PDESC_WORD1__CUSTOM0_SHIFT 32
#define MPIPE_PDESC_WORD1__CUSTOM0_WIDTH 32
#define MPIPE_PDESC_WORD1__CUSTOM0_RMASK 0xffffffff
#define MPIPE_PDESC_WORD1__CUSTOM0_MASK  _64bit(0xffffffff00000000)
#define MPIPE_PDESC_WORD1__CUSTOM0_FIELD 32,63



#define MPIPE_PDESC_WORD2__CUSTOM1_SHIFT 0
#define MPIPE_PDESC_WORD2__CUSTOM1_WIDTH 64
#define MPIPE_PDESC_WORD2__CUSTOM1_RMASK _64bit(0xffffffffffffffff)
#define MPIPE_PDESC_WORD2__CUSTOM1_MASK  _64bit(0xffffffffffffffff)
#define MPIPE_PDESC_WORD2__CUSTOM1_FIELD 0,63



#define MPIPE_PDESC_WORD3__CUSTOM2_SHIFT 0
#define MPIPE_PDESC_WORD3__CUSTOM2_WIDTH 64
#define MPIPE_PDESC_WORD3__CUSTOM2_RMASK _64bit(0xffffffffffffffff)
#define MPIPE_PDESC_WORD3__CUSTOM2_MASK  _64bit(0xffffffffffffffff)
#define MPIPE_PDESC_WORD3__CUSTOM2_FIELD 0,63



#define MPIPE_PDESC_WORD4__CUSTOM3_SHIFT 0
#define MPIPE_PDESC_WORD4__CUSTOM3_WIDTH 64
#define MPIPE_PDESC_WORD4__CUSTOM3_RMASK _64bit(0xffffffffffffffff)
#define MPIPE_PDESC_WORD4__CUSTOM3_MASK  _64bit(0xffffffffffffffff)
#define MPIPE_PDESC_WORD4__CUSTOM3_FIELD 0,63



#define MPIPE_PDESC_WORD5__GP_SQN_SHIFT 0
#define MPIPE_PDESC_WORD5__GP_SQN_WIDTH 16
#define MPIPE_PDESC_WORD5__GP_SQN_RMASK 0xffff
#define MPIPE_PDESC_WORD5__GP_SQN_MASK  0xffff
#define MPIPE_PDESC_WORD5__GP_SQN_FIELD 0,15

#define MPIPE_PDESC_WORD5__PACKET_SQN_SHIFT 16
#define MPIPE_PDESC_WORD5__PACKET_SQN_WIDTH 48
#define MPIPE_PDESC_WORD5__PACKET_SQN_RMASK _64bit(0xffffffffffff)
#define MPIPE_PDESC_WORD5__PACKET_SQN_MASK  _64bit(0xffffffffffff0000)
#define MPIPE_PDESC_WORD5__PACKET_SQN_FIELD 16,63



#define MPIPE_PDESC_WORD6__TIME_STAMP_NS_SHIFT 0
#define MPIPE_PDESC_WORD6__TIME_STAMP_NS_WIDTH 32
#define MPIPE_PDESC_WORD6__TIME_STAMP_NS_RMASK 0xffffffff
#define MPIPE_PDESC_WORD6__TIME_STAMP_NS_MASK  0xffffffff
#define MPIPE_PDESC_WORD6__TIME_STAMP_NS_FIELD 0,31

#define MPIPE_PDESC_WORD6__TIME_STAMP_SEC_SHIFT 32
#define MPIPE_PDESC_WORD6__TIME_STAMP_SEC_WIDTH 32
#define MPIPE_PDESC_WORD6__TIME_STAMP_SEC_RMASK 0xffffffff
#define MPIPE_PDESC_WORD6__TIME_STAMP_SEC_MASK  _64bit(0xffffffff00000000)
#define MPIPE_PDESC_WORD6__TIME_STAMP_SEC_FIELD 32,63



#define MPIPE_PDESC_WORD7__VA_SHIFT 0
#define MPIPE_PDESC_WORD7__VA_WIDTH 42
#define MPIPE_PDESC_WORD7__VA_RMASK _64bit(0x3ffffffffff)
#define MPIPE_PDESC_WORD7__VA_MASK  _64bit(0x3ffffffffff)
#define MPIPE_PDESC_WORD7__VA_FIELD 0,41

#define MPIPE_PDESC_WORD7__STACK_IDX_SHIFT 48
#define MPIPE_PDESC_WORD7__STACK_IDX_WIDTH 5
#define MPIPE_PDESC_WORD7__STACK_IDX_RMASK 0x1f
#define MPIPE_PDESC_WORD7__STACK_IDX_MASK  _64bit(0x1f000000000000)
#define MPIPE_PDESC_WORD7__STACK_IDX_FIELD 48,52

#define MPIPE_PDESC_WORD7__INST_SHIFT 56
#define MPIPE_PDESC_WORD7__INST_WIDTH 2
#define MPIPE_PDESC_WORD7__INST_RMASK 0x3
#define MPIPE_PDESC_WORD7__INST_MASK  _64bit(0x300000000000000)
#define MPIPE_PDESC_WORD7__INST_FIELD 56,57

#define MPIPE_PDESC_WORD7__HWB_SHIFT 58
#define MPIPE_PDESC_WORD7__HWB_WIDTH 1
#define MPIPE_PDESC_WORD7__HWB_RMASK 0x1
#define MPIPE_PDESC_WORD7__HWB_MASK  _64bit(0x400000000000000)
#define MPIPE_PDESC_WORD7__HWB_FIELD 58,58

#define MPIPE_PDESC_WORD7__SIZE_SHIFT 59
#define MPIPE_PDESC_WORD7__SIZE_WIDTH 3
#define MPIPE_PDESC_WORD7__SIZE_RMASK 0x7
#define MPIPE_PDESC_WORD7__SIZE_MASK  _64bit(0x3800000000000000)
#define MPIPE_PDESC_WORD7__SIZE_FIELD 59,61

#define MPIPE_PDESC_WORD7__C_SHIFT 62
#define MPIPE_PDESC_WORD7__C_WIDTH 2
#define MPIPE_PDESC_WORD7__C_RMASK 0x3
#define MPIPE_PDESC_WORD7__C_MASK  _64bit(0xc000000000000000)
#define MPIPE_PDESC_WORD7__C_FIELD 62,63
#define MPIPE_PDESC_WORD7__C_VAL_UNCHAINED 0x0
#define MPIPE_PDESC_WORD7__C_VAL_CHAINED 0x1
#define MPIPE_PDESC_WORD7__C_VAL_NOT_RDY 0x2
#define MPIPE_PDESC_WORD7__C_VAL_INVALID 0x3




#endif /* !defined(__ARCH_MPIPE_SHM_DEF_H__) */


