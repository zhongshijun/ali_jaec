
/* 00111c90 FUN_00111c90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111c90(long *param_1,float *param_2,undefined8 *param_3,float *param_4,float *param_5,
                 int *param_6,float *param_7,float *param_8,float *param_9,float *param_10)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float *pfVar19;
  byte bVar20;
  undefined1 auVar24 [16];
  float fVar21;
  undefined1 auVar25 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  float fVar37;
  float fVar45;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [60];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  float fVar59;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  float fVar60;
  float fVar61;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  float fVar74;
  float fVar75;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar76 [64];
  float fVar84;
  float fVar89;
  float fVar90;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  bVar20 = 0;
  auVar76 = ZEXT1664(in_ZMM0._0_16_);
  auVar46 = vunpcklps_avx(in_ZMM0._0_16_,in_ZMM1._0_16_);
  if (param_10 == (float *)0x0 || param_9 == (float *)0x0) {
    return;
  }
  if (param_8 != (float *)0x0) {
    uVar1 = param_3[1];
    *(undefined8 *)param_8 = *param_3;
    *(undefined8 *)(param_8 + 2) = uVar1;
    uVar1 = param_3[3];
    *(undefined8 *)(param_8 + 4) = param_3[2];
    *(undefined8 *)(param_8 + 6) = uVar1;
    uVar1 = param_3[5];
    *(undefined8 *)(param_8 + 8) = param_3[4];
    *(undefined8 *)(param_8 + 10) = uVar1;
    uVar1 = param_3[7];
    *(undefined8 *)(param_8 + 0xc) = param_3[6];
    *(undefined8 *)(param_8 + 0xe) = uVar1;
    uVar1 = param_3[9];
    *(undefined8 *)(param_8 + 0x10) = param_3[8];
    *(undefined8 *)(param_8 + 0x12) = uVar1;
    uVar10 = param_3[10];
    uVar11 = param_3[0xb];
    uVar1 = vmovlps_avx(auVar46);
    *(undefined8 *)(param_8 + 0x18) = uVar1;
    *(undefined8 *)(param_8 + 0x14) = uVar10;
    *(undefined8 *)(param_8 + 0x16) = uVar11;
    lVar13 = *param_1;
    pfVar12 = (float *)(lVar13 + 0x13ae0);
    pfVar15 = param_9;
    pfVar19 = (float *)(lVar13 + 0x12e20);
    while( true ) {
      fVar22 = *param_8;
      fVar23 = param_8[1];
      fVar34 = param_8[2];
      fVar36 = param_8[3];
      fVar38 = param_8[4];
      fVar40 = param_8[5];
      fVar42 = param_8[6];
      fVar44 = param_8[7];
      fVar21 = param_8[8];
      fVar33 = param_8[9];
      fVar35 = param_8[10];
      fVar37 = param_8[0xb];
      fVar39 = param_8[0xc];
      fVar41 = param_8[0xd];
      fVar43 = param_8[0xe];
      fVar45 = param_8[0xf];
      fVar59 = param_8[0x10];
      fVar60 = param_8[0x11];
      fVar61 = param_8[0x12];
      fVar68 = param_8[0x13];
      fVar69 = param_8[0x14];
      fVar70 = param_8[0x15];
      fVar71 = param_8[0x16];
      fVar72 = param_8[0x17];
      auVar62._0_4_ = fVar59 * pfVar12[0x2a] + fVar21 * pfVar12[0x22] + fVar22 * pfVar12[0x1a] + 0.0
      ;
      auVar62._4_4_ = fVar60 * pfVar12[0x2b] + fVar33 * pfVar12[0x23] + fVar23 * pfVar12[0x1b] + 0.0
      ;
      auVar62._8_4_ = fVar61 * pfVar12[0x2c] + fVar35 * pfVar12[0x24] + fVar34 * pfVar12[0x1c] + 0.0
      ;
      auVar62._12_4_ =
           fVar68 * pfVar12[0x2d] + fVar37 * pfVar12[0x25] + fVar36 * pfVar12[0x1d] + 0.0;
      auVar62._16_4_ =
           fVar69 * pfVar12[0x2e] + fVar39 * pfVar12[0x26] + fVar38 * pfVar12[0x1e] + 0.0;
      auVar62._20_4_ =
           fVar70 * pfVar12[0x2f] + fVar41 * pfVar12[0x27] + fVar40 * pfVar12[0x1f] + 0.0;
      auVar62._24_4_ =
           fVar71 * pfVar12[0x30] + fVar43 * pfVar12[0x28] + fVar42 * pfVar12[0x20] + 0.0;
      auVar62._28_4_ =
           fVar72 * pfVar12[0x31] + fVar45 * pfVar12[0x29] + fVar44 * pfVar12[0x21] + 0.0;
      auVar26._0_4_ = fVar59 * pfVar12[0x10] + fVar21 * pfVar12[8] + fVar22 * *pfVar12 + 0.0;
      auVar26._4_4_ = fVar60 * pfVar12[0x11] + fVar33 * pfVar12[9] + fVar23 * pfVar12[1] + 0.0;
      auVar26._8_4_ = fVar61 * pfVar12[0x12] + fVar35 * pfVar12[10] + fVar34 * pfVar12[2] + 0.0;
      auVar26._12_4_ = fVar68 * pfVar12[0x13] + fVar37 * pfVar12[0xb] + fVar36 * pfVar12[3] + 0.0;
      auVar26._16_4_ = fVar69 * pfVar12[0x14] + fVar39 * pfVar12[0xc] + fVar38 * pfVar12[4] + 0.0;
      auVar26._20_4_ = fVar70 * pfVar12[0x15] + fVar41 * pfVar12[0xd] + fVar40 * pfVar12[5] + 0.0;
      auVar26._24_4_ = fVar71 * pfVar12[0x16] + fVar43 * pfVar12[0xe] + fVar42 * pfVar12[6] + 0.0;
      auVar26._28_4_ = fVar72 * pfVar12[0x17] + fVar45 * pfVar12[0xf] + fVar44 * pfVar12[7] + 0.0;
      auVar50._0_4_ = fVar59 * pfVar12[0x44] + fVar21 * pfVar12[0x3c] + fVar22 * pfVar12[0x34] + 0.0
      ;
      auVar50._4_4_ = fVar60 * pfVar12[0x45] + fVar33 * pfVar12[0x3d] + fVar23 * pfVar12[0x35] + 0.0
      ;
      auVar50._8_4_ = fVar61 * pfVar12[0x46] + fVar35 * pfVar12[0x3e] + fVar34 * pfVar12[0x36] + 0.0
      ;
      auVar50._12_4_ =
           fVar68 * pfVar12[0x47] + fVar37 * pfVar12[0x3f] + fVar36 * pfVar12[0x37] + 0.0;
      auVar50._16_4_ =
           fVar69 * pfVar12[0x48] + fVar39 * pfVar12[0x40] + fVar38 * pfVar12[0x38] + 0.0;
      auVar50._20_4_ =
           fVar70 * pfVar12[0x49] + fVar41 * pfVar12[0x41] + fVar40 * pfVar12[0x39] + 0.0;
      auVar50._24_4_ =
           fVar71 * pfVar12[0x4a] + fVar43 * pfVar12[0x42] + fVar42 * pfVar12[0x3a] + 0.0;
      auVar50._28_4_ =
           fVar72 * pfVar12[0x4b] + fVar45 * pfVar12[0x43] + fVar44 * pfVar12[0x3b] + 0.0;
      auVar52._0_4_ = fVar59 * pfVar12[0x5e] + fVar21 * pfVar12[0x56] + fVar22 * pfVar12[0x4e] + 0.0
      ;
      auVar52._4_4_ = fVar60 * pfVar12[0x5f] + fVar33 * pfVar12[0x57] + fVar23 * pfVar12[0x4f] + 0.0
      ;
      auVar52._8_4_ = fVar61 * pfVar12[0x60] + fVar35 * pfVar12[0x58] + fVar34 * pfVar12[0x50] + 0.0
      ;
      auVar52._12_4_ =
           fVar68 * pfVar12[0x61] + fVar37 * pfVar12[0x59] + fVar36 * pfVar12[0x51] + 0.0;
      auVar52._16_4_ =
           fVar69 * pfVar12[0x62] + fVar39 * pfVar12[0x5a] + fVar38 * pfVar12[0x52] + 0.0;
      auVar52._20_4_ = fVar70 * pfVar12[99] + fVar41 * pfVar12[0x5b] + fVar40 * pfVar12[0x53] + 0.0;
      auVar52._24_4_ = fVar71 * pfVar12[100] + fVar43 * pfVar12[0x5c] + fVar42 * pfVar12[0x54] + 0.0
      ;
      auVar52._28_4_ =
           fVar72 * pfVar12[0x65] + fVar45 * pfVar12[0x5d] + fVar44 * pfVar12[0x55] + 0.0;
      auVar26 = vhaddps_avx(auVar26,auVar62);
      fVar44 = auVar76._0_4_;
      auVar50 = vhaddps_avx(auVar50,auVar52);
      fVar22 = pfVar12[0x32];
      auVar26 = vhaddps_avx(auVar26,auVar50);
      auVar86._0_4_ = auVar26._0_4_ + auVar26._16_4_;
      auVar86._4_4_ = auVar26._4_4_ + auVar26._20_4_;
      auVar86._8_4_ = auVar26._8_4_ + auVar26._24_4_;
      auVar86._12_4_ = auVar26._12_4_ + auVar26._28_4_;
      auVar46 = vshufps_avx(auVar86,auVar86,0x55);
      fVar23 = pfVar12[0x4c];
      fVar34 = pfVar12[0x66];
      auVar85 = vunpckhps_avx(auVar86,auVar86);
      auVar24 = vshufps_avx(auVar86,auVar86,0xff);
      fVar36 = pfVar12[0x33];
      fVar42 = in_ZMM1._0_4_;
      fVar38 = pfVar12[0x4d];
      fVar40 = pfVar12[0x67];
      *pfVar15 = fVar42 * pfVar12[0x19] + fVar44 * pfVar12[0x18] + auVar86._0_4_ + *pfVar19;
      pfVar15[1] = fVar42 * fVar36 + fVar44 * fVar22 + auVar46._0_4_ + pfVar19[1];
      pfVar15[2] = fVar42 * fVar38 + fVar44 * fVar23 + auVar85._0_4_ + pfVar19[2];
      pfVar15[3] = fVar42 * fVar40 + fVar44 * fVar34 + auVar24._0_4_ + pfVar19[3];
      if ((float *)(lVar13 + 0x14e60) == pfVar12 + 0x68) break;
      auVar76 = ZEXT464((uint)param_8[0x18]);
      in_ZMM1 = ZEXT464((uint)param_8[0x19]);
      pfVar12 = pfVar12 + 0x68;
      pfVar15 = pfVar15 + 4;
      pfVar19 = pfVar19 + 4;
    }
    pfVar12 = (float *)(lVar13 + 0x12d60);
    pfVar15 = (float *)(lVar13 + 0x12ee0);
    pfVar19 = param_10;
    do {
      fVar22 = *param_4;
      fVar23 = param_4[1];
      fVar34 = param_4[2];
      fVar36 = param_4[3];
      fVar38 = param_4[4];
      fVar40 = param_4[5];
      fVar42 = param_4[6];
      fVar44 = param_4[7];
      pfVar16 = pfVar15 + 0x40;
      fVar21 = param_4[8];
      fVar33 = param_4[9];
      fVar35 = param_4[10];
      fVar37 = param_4[0xb];
      fVar39 = param_4[0xc];
      fVar41 = param_4[0xd];
      fVar43 = param_4[0xe];
      fVar45 = param_4[0xf];
      auVar48._0_4_ = fVar21 * pfVar15[0x28] + fVar22 * pfVar15[0x20] + 0.0;
      auVar48._4_4_ = fVar33 * pfVar15[0x29] + fVar23 * pfVar15[0x21] + 0.0;
      auVar48._8_4_ = fVar35 * pfVar15[0x2a] + fVar34 * pfVar15[0x22] + 0.0;
      auVar48._12_4_ = fVar37 * pfVar15[0x2b] + fVar36 * pfVar15[0x23] + 0.0;
      auVar48._16_4_ = fVar39 * pfVar15[0x2c] + fVar38 * pfVar15[0x24] + 0.0;
      auVar48._20_4_ = fVar41 * pfVar15[0x2d] + fVar40 * pfVar15[0x25] + 0.0;
      auVar48._24_4_ = fVar43 * pfVar15[0x2e] + fVar42 * pfVar15[0x26] + 0.0;
      auVar48._28_4_ = fVar45 * pfVar15[0x2f] + fVar44 * pfVar15[0x27] + 0.0;
      auVar27._0_4_ = fVar21 * pfVar15[8] + fVar22 * *pfVar15 + 0.0;
      auVar27._4_4_ = fVar33 * pfVar15[9] + fVar23 * pfVar15[1] + 0.0;
      auVar27._8_4_ = fVar35 * pfVar15[10] + fVar34 * pfVar15[2] + 0.0;
      auVar27._12_4_ = fVar37 * pfVar15[0xb] + fVar36 * pfVar15[3] + 0.0;
      auVar27._16_4_ = fVar39 * pfVar15[0xc] + fVar38 * pfVar15[4] + 0.0;
      auVar27._20_4_ = fVar41 * pfVar15[0xd] + fVar40 * pfVar15[5] + 0.0;
      auVar27._24_4_ = fVar43 * pfVar15[0xe] + fVar42 * pfVar15[6] + 0.0;
      auVar27._28_4_ = fVar45 * pfVar15[0xf] + fVar44 * pfVar15[7] + 0.0;
      auVar53._0_4_ = fVar21 * pfVar15[0x18] + fVar22 * pfVar15[0x10] + 0.0;
      auVar53._4_4_ = fVar33 * pfVar15[0x19] + fVar23 * pfVar15[0x11] + 0.0;
      auVar53._8_4_ = fVar35 * pfVar15[0x1a] + fVar34 * pfVar15[0x12] + 0.0;
      auVar53._12_4_ = fVar37 * pfVar15[0x1b] + fVar36 * pfVar15[0x13] + 0.0;
      auVar53._16_4_ = fVar39 * pfVar15[0x1c] + fVar38 * pfVar15[0x14] + 0.0;
      auVar53._20_4_ = fVar41 * pfVar15[0x1d] + fVar40 * pfVar15[0x15] + 0.0;
      auVar53._24_4_ = fVar43 * pfVar15[0x1e] + fVar42 * pfVar15[0x16] + 0.0;
      auVar53._28_4_ = fVar45 * pfVar15[0x1f] + fVar44 * pfVar15[0x17] + 0.0;
      auVar51._0_4_ = fVar21 * pfVar15[0x38] + fVar22 * pfVar15[0x30] + 0.0;
      auVar51._4_4_ = fVar33 * pfVar15[0x39] + fVar23 * pfVar15[0x31] + 0.0;
      auVar51._8_4_ = fVar35 * pfVar15[0x3a] + fVar34 * pfVar15[0x32] + 0.0;
      auVar51._12_4_ = fVar37 * pfVar15[0x3b] + fVar36 * pfVar15[0x33] + 0.0;
      auVar51._16_4_ = fVar39 * pfVar15[0x3c] + fVar38 * pfVar15[0x34] + 0.0;
      auVar51._20_4_ = fVar41 * pfVar15[0x3d] + fVar40 * pfVar15[0x35] + 0.0;
      auVar51._24_4_ = fVar43 * pfVar15[0x3e] + fVar42 * pfVar15[0x36] + 0.0;
      auVar51._28_4_ = fVar45 * pfVar15[0x3f] + fVar44 * pfVar15[0x37] + 0.0;
      auVar26 = vhaddps_avx(auVar27,auVar53);
      auVar50 = vhaddps_avx(auVar48,auVar51);
      auVar26 = vhaddps_avx(auVar26,auVar50);
      auVar85._0_4_ = auVar26._0_4_ + auVar26._16_4_;
      auVar85._4_4_ = auVar26._4_4_ + auVar26._20_4_;
      auVar85._8_4_ = auVar26._8_4_ + auVar26._24_4_;
      auVar85._12_4_ = auVar26._12_4_ + auVar26._28_4_;
      *pfVar19 = *pfVar12 + auVar85._0_4_;
      auVar46 = vshufps_avx(auVar85,auVar85,0x55);
      pfVar19[1] = auVar46._0_4_ + pfVar12[1];
      auVar24 = vunpckhps_avx(auVar85,auVar85);
      auVar46 = vshufps_avx(auVar85,auVar85,0xff);
      pfVar19[2] = auVar24._0_4_ + pfVar12[2];
      pfVar19[3] = auVar46._0_4_ + pfVar12[3];
      auVar52 = _DAT_0011a5c0;
      auVar50 = _DAT_0011a5a0;
      auVar26 = _DAT_0011a580;
      pfVar12 = pfVar12 + 4;
      pfVar15 = pfVar16;
      pfVar19 = pfVar19 + 4;
    } while (pfVar16 != (float *)(lVar13 + 0x13ae0));
    lVar13 = 0;
    auVar46._0_12_ = ZEXT812(0);
    auVar46._12_4_ = 0;
    do {
      pfVar12 = (float *)((long)param_10 + lVar13);
      pfVar15 = (float *)((long)param_9 + lVar13);
      auVar54._0_4_ = *pfVar12 + *pfVar15;
      auVar54._4_4_ = pfVar12[1] + pfVar15[1];
      auVar54._8_4_ = pfVar12[2] + pfVar15[2];
      auVar54._12_4_ = pfVar12[3] + pfVar15[3];
      auVar54._16_4_ = pfVar12[4] + pfVar15[4];
      auVar54._20_4_ = pfVar12[5] + pfVar15[5];
      auVar54._24_4_ = pfVar12[6] + pfVar15[6];
      auVar54._28_4_ = pfVar12[7] + pfVar15[7];
      auVar62 = vsubps_avx(ZEXT1632(auVar46),auVar54);
      auVar62 = vminps_avx(auVar62,auVar50);
      auVar27 = vmaxps_avx(auVar62,auVar52);
      auVar63._0_4_ = auVar27._0_4_ * 1.442695 + 0.5;
      auVar63._4_4_ = auVar27._4_4_ * 1.442695 + 0.5;
      auVar63._8_4_ = auVar27._8_4_ * 1.442695 + 0.5;
      auVar63._12_4_ = auVar27._12_4_ * 1.442695 + 0.5;
      auVar63._16_4_ = auVar27._16_4_ * 1.442695 + 0.5;
      auVar63._20_4_ = auVar27._20_4_ * 1.442695 + 0.5;
      auVar63._24_4_ = auVar27._24_4_ * 1.442695 + 0.5;
      auVar63._28_4_ = auVar27._28_4_ * 1.442695 + 0.5;
      auVar48 = vroundps_avx(auVar63,1);
      auVar62 = vcmpps_avx(auVar48,auVar63,0xe);
      fVar22 = auVar26._0_4_;
      auVar64._0_4_ = auVar62._0_4_ & (uint)fVar22;
      fVar23 = auVar26._4_4_;
      auVar64._4_4_ = auVar62._4_4_ & (uint)fVar23;
      fVar34 = auVar26._8_4_;
      auVar64._8_4_ = auVar62._8_4_ & (uint)fVar34;
      fVar36 = auVar26._12_4_;
      auVar64._12_4_ = auVar62._12_4_ & (uint)fVar36;
      fVar38 = auVar26._16_4_;
      auVar64._16_4_ = auVar62._16_4_ & (uint)fVar38;
      fVar40 = auVar26._20_4_;
      auVar64._20_4_ = auVar62._20_4_ & (uint)fVar40;
      fVar42 = auVar26._24_4_;
      auVar64._24_4_ = auVar62._24_4_ & (uint)fVar42;
      fVar44 = auVar26._28_4_;
      auVar64._28_4_ = auVar62._28_4_ & (uint)fVar44;
      auVar62 = vsubps_avx(auVar48,auVar64);
      fVar21 = auVar62._0_4_;
      auVar65._0_4_ = fVar21 * 0.6933594;
      fVar33 = auVar62._4_4_;
      auVar65._4_4_ = fVar33 * 0.6933594;
      fVar35 = auVar62._8_4_;
      auVar65._8_4_ = fVar35 * 0.6933594;
      fVar37 = auVar62._12_4_;
      auVar65._12_4_ = fVar37 * 0.6933594;
      fVar39 = auVar62._16_4_;
      auVar65._16_4_ = fVar39 * 0.6933594;
      fVar41 = auVar62._20_4_;
      auVar65._20_4_ = fVar41 * 0.6933594;
      fVar43 = auVar62._24_4_;
      auVar65._24_4_ = fVar43 * 0.6933594;
      fVar45 = auVar62._28_4_;
      auVar65._28_4_ = fVar45 * 0.6933594;
      auVar62 = vsubps_avx(auVar27,auVar65);
      auVar66._0_4_ = fVar21 * -0.00021219444;
      auVar66._4_4_ = fVar33 * -0.00021219444;
      auVar66._8_4_ = fVar35 * -0.00021219444;
      auVar66._12_4_ = fVar37 * -0.00021219444;
      auVar66._16_4_ = fVar39 * -0.00021219444;
      auVar66._20_4_ = fVar41 * -0.00021219444;
      auVar66._24_4_ = fVar43 * -0.00021219444;
      auVar66._28_4_ = fVar45 * -0.00021219444;
      auVar24._0_4_ = (int)fVar21 + 0x7f;
      auVar24._4_4_ = (int)fVar33 + 0x7f;
      auVar24._8_4_ = (int)fVar35 + 0x7f;
      auVar24._12_4_ = (int)fVar37 + 0x7f;
      auVar152._0_4_ = (int)fVar39 + 0x7f;
      auVar152._4_4_ = (int)fVar41 + 0x7f;
      auVar152._8_4_ = (int)fVar43 + 0x7f;
      auVar152._12_4_ = (int)fVar45 + 0x7f;
      auVar85 = vpslld_avx(auVar24,0x17);
      auVar24 = vpslld_avx(auVar152,0x17);
      auVar86 = ZEXT116(0) * auVar24 | ZEXT116(1) * auVar85;
      auVar24 = ZEXT116(1) * auVar24;
      auVar51 = vsubps_avx(auVar62,auVar66);
      pfVar12 = (float *)((long)param_9 + lVar13 + 0x40);
      pfVar15 = (float *)((long)param_10 + lVar13 + 0x40);
      auVar67._0_4_ = *pfVar12 + *pfVar15;
      auVar67._4_4_ = pfVar12[1] + pfVar15[1];
      auVar67._8_4_ = pfVar12[2] + pfVar15[2];
      auVar67._12_4_ = pfVar12[3] + pfVar15[3];
      auVar67._16_4_ = pfVar12[4] + pfVar15[4];
      auVar67._20_4_ = pfVar12[5] + pfVar15[5];
      auVar67._24_4_ = pfVar12[6] + pfVar15[6];
      auVar67._28_4_ = pfVar12[7] + pfVar15[7];
      auVar62 = vsubps_avx(ZEXT1632(auVar46),auVar67);
      auVar62 = vminps_avx(auVar62,auVar50);
      auVar27 = vmaxps_avx(auVar62,auVar52);
      auVar28._0_4_ = auVar27._0_4_ * 1.442695 + 0.5;
      auVar28._4_4_ = auVar27._4_4_ * 1.442695 + 0.5;
      auVar28._8_4_ = auVar27._8_4_ * 1.442695 + 0.5;
      auVar28._12_4_ = auVar27._12_4_ * 1.442695 + 0.5;
      auVar28._16_4_ = auVar27._16_4_ * 1.442695 + 0.5;
      auVar28._20_4_ = auVar27._20_4_ * 1.442695 + 0.5;
      auVar28._24_4_ = auVar27._24_4_ * 1.442695 + 0.5;
      auVar28._28_4_ = auVar27._28_4_ * 1.442695 + 0.5;
      auVar48 = vroundps_avx(auVar28,1);
      auVar62 = vcmpps_avx(auVar48,auVar28,0xe);
      auVar29._0_4_ = auVar62._0_4_ & (uint)fVar22;
      auVar29._4_4_ = auVar62._4_4_ & (uint)fVar23;
      auVar29._8_4_ = auVar62._8_4_ & (uint)fVar34;
      auVar29._12_4_ = auVar62._12_4_ & (uint)fVar36;
      auVar29._16_4_ = auVar62._16_4_ & (uint)fVar38;
      auVar29._20_4_ = auVar62._20_4_ & (uint)fVar40;
      auVar29._24_4_ = auVar62._24_4_ & (uint)fVar42;
      auVar29._28_4_ = auVar62._28_4_ & (uint)fVar44;
      auVar62 = vsubps_avx(auVar48,auVar29);
      fVar21 = auVar62._0_4_;
      auVar155._0_4_ = fVar21 * 0.6933594;
      fVar33 = auVar62._4_4_;
      auVar155._4_4_ = fVar33 * 0.6933594;
      fVar35 = auVar62._8_4_;
      auVar155._8_4_ = fVar35 * 0.6933594;
      fVar37 = auVar62._12_4_;
      auVar155._12_4_ = fVar37 * 0.6933594;
      fVar39 = auVar62._16_4_;
      auVar155._16_4_ = fVar39 * 0.6933594;
      fVar41 = auVar62._20_4_;
      auVar155._20_4_ = fVar41 * 0.6933594;
      fVar43 = auVar62._24_4_;
      auVar155._24_4_ = fVar43 * 0.6933594;
      fVar45 = auVar62._28_4_;
      auVar155._28_4_ = fVar45 * 0.6933594;
      auVar62 = vsubps_avx(auVar27,auVar155);
      auVar156._0_4_ = fVar21 * -0.00021219444;
      auVar156._4_4_ = fVar33 * -0.00021219444;
      auVar156._8_4_ = fVar35 * -0.00021219444;
      auVar156._12_4_ = fVar37 * -0.00021219444;
      auVar156._16_4_ = fVar39 * -0.00021219444;
      auVar156._20_4_ = fVar41 * -0.00021219444;
      auVar156._24_4_ = fVar43 * -0.00021219444;
      auVar156._28_4_ = fVar45 * -0.00021219444;
      auVar53 = vsubps_avx(auVar62,auVar156);
      auVar6._0_4_ = (int)fVar21 + 0x7f;
      auVar6._4_4_ = (int)fVar33 + 0x7f;
      auVar6._8_4_ = (int)fVar35 + 0x7f;
      auVar6._12_4_ = (int)fVar37 + 0x7f;
      auVar7._0_4_ = (int)fVar39 + 0x7f;
      auVar7._4_4_ = (int)fVar41 + 0x7f;
      auVar7._8_4_ = (int)fVar43 + 0x7f;
      auVar7._12_4_ = (int)fVar45 + 0x7f;
      auVar152 = vpslld_avx(auVar6,0x17);
      auVar85 = vpslld_avx(auVar7,0x17);
      auVar152 = ZEXT116(0) * auVar85 | ZEXT116(1) * auVar152;
      auVar85 = ZEXT116(1) * auVar85;
      fVar21 = auVar51._0_4_;
      fVar33 = auVar51._4_4_;
      fVar35 = auVar51._8_4_;
      fVar37 = auVar51._12_4_;
      fVar39 = auVar51._16_4_;
      fVar41 = auVar51._20_4_;
      fVar43 = auVar51._24_4_;
      fVar45 = auVar51._28_4_;
      auVar30._0_4_ =
           ((((((fVar21 * 0.00019875691 + 0.0013981999) * fVar21 + 0.008333452) * fVar21 +
              0.041665796) * fVar21 + 0.16666666) * fVar21 + 0.5) * fVar21 * fVar21 + fVar21 +
           fVar22) * auVar86._0_4_ + fVar22;
      auVar30._4_4_ =
           ((((((fVar33 * 0.00019875691 + 0.0013981999) * fVar33 + 0.008333452) * fVar33 +
              0.041665796) * fVar33 + 0.16666666) * fVar33 + 0.5) * fVar33 * fVar33 + fVar33 +
           fVar23) * auVar86._4_4_ + fVar23;
      auVar30._8_4_ =
           ((((((fVar35 * 0.00019875691 + 0.0013981999) * fVar35 + 0.008333452) * fVar35 +
              0.041665796) * fVar35 + 0.16666666) * fVar35 + 0.5) * fVar35 * fVar35 + fVar35 +
           fVar34) * auVar86._8_4_ + fVar34;
      auVar30._12_4_ =
           ((((((fVar37 * 0.00019875691 + 0.0013981999) * fVar37 + 0.008333452) * fVar37 +
              0.041665796) * fVar37 + 0.16666666) * fVar37 + 0.5) * fVar37 * fVar37 + fVar37 +
           fVar36) * auVar86._12_4_ + fVar36;
      auVar30._16_4_ =
           ((((((fVar39 * 0.00019875691 + 0.0013981999) * fVar39 + 0.008333452) * fVar39 +
              0.041665796) * fVar39 + 0.16666666) * fVar39 + 0.5) * fVar39 * fVar39 + fVar39 +
           fVar38) * auVar24._0_4_ + fVar38;
      auVar30._20_4_ =
           ((((((fVar41 * 0.00019875691 + 0.0013981999) * fVar41 + 0.008333452) * fVar41 +
              0.041665796) * fVar41 + 0.16666666) * fVar41 + 0.5) * fVar41 * fVar41 + fVar41 +
           fVar40) * auVar24._4_4_ + fVar40;
      auVar30._24_4_ =
           ((((((fVar43 * 0.00019875691 + 0.0013981999) * fVar43 + 0.008333452) * fVar43 +
              0.041665796) * fVar43 + 0.16666666) * fVar43 + 0.5) * fVar43 * fVar43 + fVar43 +
           fVar42) * auVar24._8_4_ + fVar42;
      auVar30._28_4_ =
           ((((((fVar45 * 0.00019875691 + 0.0013981999) * fVar45 + 0.008333452) * fVar45 +
              0.041665796) * fVar45 + 0.16666666) * fVar45 + 0.5) * fVar45 * fVar45 + fVar45 +
           fVar44) * auVar24._12_4_ + fVar44;
      auVar62 = vdivps_avx(auVar26,auVar30);
      pfVar12 = (float *)((long)param_10 + lVar13 + 0x80);
      pfVar15 = (float *)((long)param_9 + lVar13 + 0x80);
      fVar21 = auVar62._0_4_ * *pfVar12 + *pfVar15;
      fVar33 = auVar62._4_4_ * pfVar12[1] + pfVar15[1];
      fVar35 = auVar62._8_4_ * pfVar12[2] + pfVar15[2];
      fVar37 = auVar62._12_4_ * pfVar12[3] + pfVar15[3];
      fVar39 = auVar62._16_4_ * pfVar12[4] + pfVar15[4];
      fVar41 = auVar62._20_4_ * pfVar12[5] + pfVar15[5];
      fVar43 = auVar62._24_4_ * pfVar12[6] + pfVar15[6];
      fVar45 = auVar62._28_4_ * pfVar12[7] + pfVar15[7];
      auVar31._0_4_ = fVar21 + fVar21;
      auVar31._4_4_ = fVar33 + fVar33;
      auVar31._8_4_ = fVar35 + fVar35;
      auVar31._12_4_ = fVar37 + fVar37;
      auVar31._16_4_ = fVar39 + fVar39;
      auVar31._20_4_ = fVar41 + fVar41;
      auVar31._24_4_ = fVar43 + fVar43;
      auVar31._28_4_ = fVar45 + fVar45;
      auVar62 = vsubps_avx(ZEXT1632(auVar46),auVar31);
      auVar62 = vminps_avx(auVar62,auVar50);
      auVar27 = vmaxps_avx(auVar62,auVar52);
      auVar55._0_4_ = auVar27._0_4_ * 1.442695 + 0.5;
      auVar55._4_4_ = auVar27._4_4_ * 1.442695 + 0.5;
      auVar55._8_4_ = auVar27._8_4_ * 1.442695 + 0.5;
      auVar55._12_4_ = auVar27._12_4_ * 1.442695 + 0.5;
      auVar55._16_4_ = auVar27._16_4_ * 1.442695 + 0.5;
      auVar55._20_4_ = auVar27._20_4_ * 1.442695 + 0.5;
      auVar55._24_4_ = auVar27._24_4_ * 1.442695 + 0.5;
      auVar55._28_4_ = auVar27._28_4_ * 1.442695 + 0.5;
      auVar48 = vroundps_avx(auVar55,1);
      auVar62 = vcmpps_avx(auVar48,auVar55,0xe);
      auVar56._0_4_ = auVar62._0_4_ & (uint)fVar22;
      auVar56._4_4_ = auVar62._4_4_ & (uint)fVar23;
      auVar56._8_4_ = auVar62._8_4_ & (uint)fVar34;
      auVar56._12_4_ = auVar62._12_4_ & (uint)fVar36;
      auVar56._16_4_ = auVar62._16_4_ & (uint)fVar38;
      auVar56._20_4_ = auVar62._20_4_ & (uint)fVar40;
      auVar56._24_4_ = auVar62._24_4_ & (uint)fVar42;
      auVar56._28_4_ = auVar62._28_4_ & (uint)fVar44;
      auVar62 = vsubps_avx(auVar48,auVar56);
      fVar21 = auVar62._0_4_;
      auVar87._0_4_ = fVar21 * 0.6933594;
      fVar33 = auVar62._4_4_;
      auVar87._4_4_ = fVar33 * 0.6933594;
      fVar35 = auVar62._8_4_;
      auVar87._8_4_ = fVar35 * 0.6933594;
      fVar37 = auVar62._12_4_;
      auVar87._12_4_ = fVar37 * 0.6933594;
      fVar39 = auVar62._16_4_;
      auVar87._16_4_ = fVar39 * 0.6933594;
      fVar41 = auVar62._20_4_;
      auVar87._20_4_ = fVar41 * 0.6933594;
      fVar43 = auVar62._24_4_;
      auVar87._24_4_ = fVar43 * 0.6933594;
      fVar45 = auVar62._28_4_;
      auVar87._28_4_ = fVar45 * 0.6933594;
      auVar62 = vsubps_avx(auVar27,auVar87);
      auVar88._0_4_ = fVar21 * -0.00021219444;
      auVar88._4_4_ = fVar33 * -0.00021219444;
      auVar88._8_4_ = fVar35 * -0.00021219444;
      auVar88._12_4_ = fVar37 * -0.00021219444;
      auVar88._16_4_ = fVar39 * -0.00021219444;
      auVar88._20_4_ = fVar41 * -0.00021219444;
      auVar88._24_4_ = fVar43 * -0.00021219444;
      auVar88._28_4_ = fVar45 * -0.00021219444;
      auVar62 = vsubps_avx(auVar62,auVar88);
      auVar8._0_4_ = (int)fVar21 + 0x7f;
      auVar8._4_4_ = (int)fVar33 + 0x7f;
      auVar8._8_4_ = (int)fVar35 + 0x7f;
      auVar8._12_4_ = (int)fVar37 + 0x7f;
      auVar9._0_4_ = (int)fVar39 + 0x7f;
      auVar9._4_4_ = (int)fVar41 + 0x7f;
      auVar9._8_4_ = (int)fVar43 + 0x7f;
      auVar9._12_4_ = (int)fVar45 + 0x7f;
      auVar86 = vpslld_avx(auVar8,0x17);
      auVar24 = vpslld_avx(auVar9,0x17);
      fVar21 = auVar62._0_4_;
      fVar33 = auVar62._4_4_;
      fVar35 = auVar62._8_4_;
      fVar37 = auVar62._12_4_;
      fVar39 = auVar62._16_4_;
      fVar41 = auVar62._20_4_;
      fVar43 = auVar62._24_4_;
      fVar45 = auVar62._28_4_;
      auVar86 = ZEXT116(0) * auVar24 | ZEXT116(1) * auVar86;
      auVar24 = ZEXT116(1) * auVar24;
      fVar59 = auVar53._0_4_;
      fVar60 = auVar53._4_4_;
      fVar61 = auVar53._8_4_;
      fVar68 = auVar53._12_4_;
      fVar69 = auVar53._16_4_;
      fVar70 = auVar53._20_4_;
      fVar71 = auVar53._24_4_;
      fVar72 = auVar53._28_4_;
      auVar57._0_4_ =
           ((((((fVar21 * 0.00019875691 + 0.0013981999) * fVar21 + 0.008333452) * fVar21 +
              0.041665796) * fVar21 + 0.16666666) * fVar21 + 0.5) * fVar21 * fVar21 + fVar21 +
           fVar22) * auVar86._0_4_ + fVar22;
      auVar57._4_4_ =
           ((((((fVar33 * 0.00019875691 + 0.0013981999) * fVar33 + 0.008333452) * fVar33 +
              0.041665796) * fVar33 + 0.16666666) * fVar33 + 0.5) * fVar33 * fVar33 + fVar33 +
           fVar23) * auVar86._4_4_ + fVar23;
      auVar57._8_4_ =
           ((((((fVar35 * 0.00019875691 + 0.0013981999) * fVar35 + 0.008333452) * fVar35 +
              0.041665796) * fVar35 + 0.16666666) * fVar35 + 0.5) * fVar35 * fVar35 + fVar35 +
           fVar34) * auVar86._8_4_ + fVar34;
      auVar57._12_4_ =
           ((((((fVar37 * 0.00019875691 + 0.0013981999) * fVar37 + 0.008333452) * fVar37 +
              0.041665796) * fVar37 + 0.16666666) * fVar37 + 0.5) * fVar37 * fVar37 + fVar37 +
           fVar36) * auVar86._12_4_ + fVar36;
      auVar57._16_4_ =
           ((((((fVar39 * 0.00019875691 + 0.0013981999) * fVar39 + 0.008333452) * fVar39 +
              0.041665796) * fVar39 + 0.16666666) * fVar39 + 0.5) * fVar39 * fVar39 + fVar39 +
           fVar38) * auVar24._0_4_ + fVar38;
      auVar57._20_4_ =
           ((((((fVar41 * 0.00019875691 + 0.0013981999) * fVar41 + 0.008333452) * fVar41 +
              0.041665796) * fVar41 + 0.16666666) * fVar41 + 0.5) * fVar41 * fVar41 + fVar41 +
           fVar40) * auVar24._4_4_ + fVar40;
      auVar57._24_4_ =
           ((((((fVar43 * 0.00019875691 + 0.0013981999) * fVar43 + 0.008333452) * fVar43 +
              0.041665796) * fVar43 + 0.16666666) * fVar43 + 0.5) * fVar43 * fVar43 + fVar43 +
           fVar42) * auVar24._8_4_ + fVar42;
      auVar57._28_4_ =
           ((((((fVar45 * 0.00019875691 + 0.0013981999) * fVar45 + 0.008333452) * fVar45 +
              0.041665796) * fVar45 + 0.16666666) * fVar45 + 0.5) * fVar45 * fVar45 + fVar45 +
           fVar44) * auVar24._12_4_ + fVar44;
      auVar62 = vdivps_avx(auVar26,auVar57);
      auVar58._0_4_ = auVar62._0_4_ + auVar62._0_4_ + -1.0;
      auVar58._4_4_ = auVar62._4_4_ + auVar62._4_4_ + -1.0;
      auVar58._8_4_ = auVar62._8_4_ + auVar62._8_4_ + -1.0;
      auVar58._12_4_ = auVar62._12_4_ + auVar62._12_4_ + -1.0;
      auVar58._16_4_ = auVar62._16_4_ + auVar62._16_4_ + -1.0;
      auVar58._20_4_ = auVar62._20_4_ + auVar62._20_4_ + -1.0;
      auVar58._24_4_ = auVar62._24_4_ + auVar62._24_4_ + -1.0;
      auVar58._28_4_ = auVar62._28_4_ + auVar62._28_4_ + -1.0;
      auVar27 = vsubps_avx(*(undefined1 (*) [32])((long)param_4 + lVar13),auVar58);
      local_60 = auVar152._0_4_;
      fStack_5c = auVar152._4_4_;
      fStack_58 = auVar152._8_4_;
      fStack_54 = auVar152._12_4_;
      fStack_50 = auVar85._0_4_;
      fStack_4c = auVar85._4_4_;
      fStack_48 = auVar85._8_4_;
      fStack_44 = auVar85._12_4_;
      auVar32._0_4_ =
           ((((((fVar59 * 0.00019875691 + 0.0013981999) * fVar59 + 0.008333452) * fVar59 +
              0.041665796) * fVar59 + 0.16666666) * fVar59 + 0.5) * fVar59 * fVar59 + fVar59 +
           fVar22) * local_60 + fVar22;
      auVar32._4_4_ =
           ((((((fVar60 * 0.00019875691 + 0.0013981999) * fVar60 + 0.008333452) * fVar60 +
              0.041665796) * fVar60 + 0.16666666) * fVar60 + 0.5) * fVar60 * fVar60 + fVar60 +
           fVar23) * fStack_5c + fVar23;
      auVar32._8_4_ =
           ((((((fVar61 * 0.00019875691 + 0.0013981999) * fVar61 + 0.008333452) * fVar61 +
              0.041665796) * fVar61 + 0.16666666) * fVar61 + 0.5) * fVar61 * fVar61 + fVar61 +
           fVar34) * fStack_58 + fVar34;
      auVar32._12_4_ =
           ((((((fVar68 * 0.00019875691 + 0.0013981999) * fVar68 + 0.008333452) * fVar68 +
              0.041665796) * fVar68 + 0.16666666) * fVar68 + 0.5) * fVar68 * fVar68 + fVar68 +
           fVar36) * fStack_54 + fVar36;
      auVar32._16_4_ =
           ((((((fVar69 * 0.00019875691 + 0.0013981999) * fVar69 + 0.008333452) * fVar69 +
              0.041665796) * fVar69 + 0.16666666) * fVar69 + 0.5) * fVar69 * fVar69 + fVar69 +
           fVar38) * fStack_50 + fVar38;
      auVar32._20_4_ =
           ((((((fVar70 * 0.00019875691 + 0.0013981999) * fVar70 + 0.008333452) * fVar70 +
              0.041665796) * fVar70 + 0.16666666) * fVar70 + 0.5) * fVar70 * fVar70 + fVar70 +
           fVar40) * fStack_4c + fVar40;
      auVar32._24_4_ =
           ((((((fVar71 * 0.00019875691 + 0.0013981999) * fVar71 + 0.008333452) * fVar71 +
              0.041665796) * fVar71 + 0.16666666) * fVar71 + 0.5) * fVar71 * fVar71 + fVar71 +
           fVar42) * fStack_48 + fVar42;
      auVar32._28_4_ =
           ((((((fVar72 * 0.00019875691 + 0.0013981999) * fVar72 + 0.008333452) * fVar72 +
              0.041665796) * fVar72 + 0.16666666) * fVar72 + 0.5) * fVar72 * fVar72 + fVar72 +
           fVar44) * fStack_44 + fVar44;
      auVar62 = vdivps_avx(auVar26,auVar32);
      pfVar12 = (float *)((long)param_4 + lVar13);
      *pfVar12 = auVar62._0_4_ * auVar27._0_4_ + auVar58._0_4_;
      pfVar12[1] = auVar62._4_4_ * auVar27._4_4_ + auVar58._4_4_;
      pfVar12[2] = auVar62._8_4_ * auVar27._8_4_ + auVar58._8_4_;
      pfVar12[3] = auVar62._12_4_ * auVar27._12_4_ + auVar58._12_4_;
      pfVar12[4] = auVar62._16_4_ * auVar27._16_4_ + auVar58._16_4_;
      pfVar12[5] = auVar62._20_4_ * auVar27._20_4_ + auVar58._20_4_;
      pfVar12[6] = auVar62._24_4_ * auVar27._24_4_ + auVar58._24_4_;
      pfVar12[7] = auVar62._28_4_ * auVar27._28_4_ + auVar58._28_4_;
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != 0x40);
    lVar13 = *param_1;
    auVar25._0_4_ =
         *(float *)(lVar13 + 0x12d50) * param_4[0xc] +
         *(float *)(lVar13 + 0x12d30) * param_4[4] + 0.0 +
         *(float *)(lVar13 + 0x12d40) * param_4[8] + *(float *)(lVar13 + 0x12d20) * *param_4 + 0.0;
    auVar25._4_4_ =
         *(float *)(lVar13 + 0x12d54) * param_4[0xd] +
         *(float *)(lVar13 + 0x12d34) * param_4[5] + 0.0 +
         *(float *)(lVar13 + 0x12d44) * param_4[9] + *(float *)(lVar13 + 0x12d24) * param_4[1] + 0.0
    ;
    auVar25._8_4_ =
         *(float *)(lVar13 + 0x12d58) * param_4[0xe] +
         *(float *)(lVar13 + 0x12d38) * param_4[6] + 0.0 +
         *(float *)(lVar13 + 0x12d48) * param_4[10] +
         *(float *)(lVar13 + 0x12d28) * param_4[2] + 0.0;
    auVar25._12_4_ =
         *(float *)(lVar13 + 0x12d5c) * param_4[0xf] +
         *(float *)(lVar13 + 0x12d3c) * param_4[7] + 0.0 +
         *(float *)(lVar13 + 0x12d4c) * param_4[0xb] +
         *(float *)(lVar13 + 0x12d2c) * param_4[3] + 0.0;
    auVar46 = vhaddps_avx(auVar25,auVar25);
    auVar46 = vhaddps_avx(auVar46,auVar46);
    fVar22 = auVar46._0_4_ + *(float *)(lVar13 + 0x12d00);
    if (0.0 <= fVar22) {
      fVar22 = expf(-fVar22);
      iVar2 = *param_6;
      auVar47 = ZEXT416((uint)(1.0 / (fVar22 + 1.0)));
    }
    else {
      fVar22 = expf(fVar22);
      iVar2 = *param_6;
      auVar47._0_4_ = fVar22 / (fVar22 + 1.0);
      auVar47._4_12_ = extraout_var._0_12_;
    }
    if (iVar2 == 0) {
      *(undefined8 *)param_7 = *(undefined8 *)param_2;
      *(undefined8 *)(param_7 + 0x62) = *(undefined8 *)(param_2 + 0x62);
      lVar13 = (long)param_7 - (long)((ulong)(param_7 + 2) & 0xfffffffffffffff8);
      puVar17 = (undefined8 *)((long)param_2 - lVar13);
      puVar18 = (undefined8 *)((ulong)(param_7 + 2) & 0xfffffffffffffff8);
      for (uVar14 = (ulong)((int)lVar13 + 400U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + (ulong)bVar20 * -2 + 1;
        puVar18 = puVar18 + (ulong)bVar20 * -2 + 1;
      }
      *param_6 = 1;
    }
    else {
      fVar33 = auVar47._0_4_;
      fVar22 = 1.0 - fVar33;
      fVar144 = fVar22 * *param_5 + fVar33 * *param_2;
      fVar145 = fVar22 * param_5[1] + fVar33 * param_2[1];
      fVar146 = fVar22 * param_5[2] + fVar33 * param_2[2];
      fVar147 = fVar22 * param_5[3] + fVar33 * param_2[3];
      fVar148 = fVar22 * param_5[4] + fVar33 * param_2[4];
      fVar149 = fVar22 * param_5[5] + fVar33 * param_2[5];
      fVar150 = fVar22 * param_5[6] + fVar33 * param_2[6];
      fVar151 = fVar22 * param_5[7] + fVar33 * param_2[7];
      *param_7 = fVar144;
      param_7[1] = fVar145;
      param_7[2] = fVar146;
      param_7[3] = fVar147;
      param_7[4] = fVar148;
      param_7[5] = fVar149;
      param_7[6] = fVar150;
      param_7[7] = fVar151;
      fVar136 = fVar22 * param_5[8] + fVar33 * param_2[8];
      fVar137 = fVar22 * param_5[9] + fVar33 * param_2[9];
      fVar138 = fVar22 * param_5[10] + fVar33 * param_2[10];
      fVar139 = fVar22 * param_5[0xb] + fVar33 * param_2[0xb];
      fVar140 = fVar22 * param_5[0xc] + fVar33 * param_2[0xc];
      fVar141 = fVar22 * param_5[0xd] + fVar33 * param_2[0xd];
      fVar142 = fVar22 * param_5[0xe] + fVar33 * param_2[0xe];
      fVar143 = fVar22 * param_5[0xf] + fVar33 * param_2[0xf];
      param_7[8] = fVar136;
      param_7[9] = fVar137;
      param_7[10] = fVar138;
      param_7[0xb] = fVar139;
      param_7[0xc] = fVar140;
      param_7[0xd] = fVar141;
      param_7[0xe] = fVar142;
      param_7[0xf] = fVar143;
      fVar128 = fVar22 * param_5[0x10] + fVar33 * param_2[0x10];
      fVar129 = fVar22 * param_5[0x11] + fVar33 * param_2[0x11];
      fVar130 = fVar22 * param_5[0x12] + fVar33 * param_2[0x12];
      fVar131 = fVar22 * param_5[0x13] + fVar33 * param_2[0x13];
      fVar132 = fVar22 * param_5[0x14] + fVar33 * param_2[0x14];
      fVar133 = fVar22 * param_5[0x15] + fVar33 * param_2[0x15];
      fVar134 = fVar22 * param_5[0x16] + fVar33 * param_2[0x16];
      fVar135 = fVar22 * param_5[0x17] + fVar33 * param_2[0x17];
      param_7[0x10] = fVar128;
      param_7[0x11] = fVar129;
      param_7[0x12] = fVar130;
      param_7[0x13] = fVar131;
      param_7[0x14] = fVar132;
      param_7[0x15] = fVar133;
      param_7[0x16] = fVar134;
      param_7[0x17] = fVar135;
      fVar120 = fVar22 * param_5[0x18] + fVar33 * param_2[0x18];
      fVar121 = fVar22 * param_5[0x19] + fVar33 * param_2[0x19];
      fVar122 = fVar22 * param_5[0x1a] + fVar33 * param_2[0x1a];
      fVar123 = fVar22 * param_5[0x1b] + fVar33 * param_2[0x1b];
      fVar124 = fVar22 * param_5[0x1c] + fVar33 * param_2[0x1c];
      fVar125 = fVar22 * param_5[0x1d] + fVar33 * param_2[0x1d];
      fVar126 = fVar22 * param_5[0x1e] + fVar33 * param_2[0x1e];
      fVar127 = fVar22 * param_5[0x1f] + fVar33 * param_2[0x1f];
      param_7[0x18] = fVar120;
      param_7[0x19] = fVar121;
      param_7[0x1a] = fVar122;
      param_7[0x1b] = fVar123;
      param_7[0x1c] = fVar124;
      param_7[0x1d] = fVar125;
      param_7[0x1e] = fVar126;
      param_7[0x1f] = fVar127;
      fVar112 = fVar22 * param_5[0x20] + fVar33 * param_2[0x20];
      fVar113 = fVar22 * param_5[0x21] + fVar33 * param_2[0x21];
      fVar114 = fVar22 * param_5[0x22] + fVar33 * param_2[0x22];
      fVar115 = fVar22 * param_5[0x23] + fVar33 * param_2[0x23];
      fVar116 = fVar22 * param_5[0x24] + fVar33 * param_2[0x24];
      fVar117 = fVar22 * param_5[0x25] + fVar33 * param_2[0x25];
      fVar118 = fVar22 * param_5[0x26] + fVar33 * param_2[0x26];
      fVar119 = fVar22 * param_5[0x27] + fVar33 * param_2[0x27];
      param_7[0x20] = fVar112;
      param_7[0x21] = fVar113;
      param_7[0x22] = fVar114;
      param_7[0x23] = fVar115;
      param_7[0x24] = fVar116;
      param_7[0x25] = fVar117;
      param_7[0x26] = fVar118;
      param_7[0x27] = fVar119;
      fVar104 = fVar22 * param_5[0x28] + fVar33 * param_2[0x28];
      fVar105 = fVar22 * param_5[0x29] + fVar33 * param_2[0x29];
      fVar106 = fVar22 * param_5[0x2a] + fVar33 * param_2[0x2a];
      fVar107 = fVar22 * param_5[0x2b] + fVar33 * param_2[0x2b];
      fVar108 = fVar22 * param_5[0x2c] + fVar33 * param_2[0x2c];
      fVar109 = fVar22 * param_5[0x2d] + fVar33 * param_2[0x2d];
      fVar110 = fVar22 * param_5[0x2e] + fVar33 * param_2[0x2e];
      fVar111 = fVar22 * param_5[0x2f] + fVar33 * param_2[0x2f];
      param_7[0x28] = fVar104;
      param_7[0x29] = fVar105;
      param_7[0x2a] = fVar106;
      param_7[0x2b] = fVar107;
      param_7[0x2c] = fVar108;
      param_7[0x2d] = fVar109;
      param_7[0x2e] = fVar110;
      param_7[0x2f] = fVar111;
      fVar96 = fVar22 * param_5[0x30] + fVar33 * param_2[0x30];
      fVar97 = fVar22 * param_5[0x31] + fVar33 * param_2[0x31];
      fVar98 = fVar22 * param_5[0x32] + fVar33 * param_2[0x32];
      fVar99 = fVar22 * param_5[0x33] + fVar33 * param_2[0x33];
      fVar100 = fVar22 * param_5[0x34] + fVar33 * param_2[0x34];
      fVar101 = fVar22 * param_5[0x35] + fVar33 * param_2[0x35];
      fVar102 = fVar22 * param_5[0x36] + fVar33 * param_2[0x36];
      fVar103 = fVar22 * param_5[0x37] + fVar33 * param_2[0x37];
      param_7[0x30] = fVar96;
      param_7[0x31] = fVar97;
      param_7[0x32] = fVar98;
      param_7[0x33] = fVar99;
      param_7[0x34] = fVar100;
      param_7[0x35] = fVar101;
      param_7[0x36] = fVar102;
      param_7[0x37] = fVar103;
      fVar84 = fVar22 * param_5[0x38] + fVar33 * param_2[0x38];
      fVar89 = fVar22 * param_5[0x39] + fVar33 * param_2[0x39];
      fVar90 = fVar22 * param_5[0x3a] + fVar33 * param_2[0x3a];
      fVar91 = fVar22 * param_5[0x3b] + fVar33 * param_2[0x3b];
      fVar92 = fVar22 * param_5[0x3c] + fVar33 * param_2[0x3c];
      fVar93 = fVar22 * param_5[0x3d] + fVar33 * param_2[0x3d];
      fVar94 = fVar22 * param_5[0x3e] + fVar33 * param_2[0x3e];
      fVar95 = fVar22 * param_5[0x3f] + fVar33 * param_2[0x3f];
      param_7[0x38] = fVar84;
      param_7[0x39] = fVar89;
      param_7[0x3a] = fVar90;
      param_7[0x3b] = fVar91;
      param_7[0x3c] = fVar92;
      param_7[0x3d] = fVar93;
      param_7[0x3e] = fVar94;
      param_7[0x3f] = fVar95;
      fVar75 = fVar22 * param_5[0x40] + fVar33 * param_2[0x40];
      fVar77 = fVar22 * param_5[0x41] + fVar33 * param_2[0x41];
      fVar78 = fVar22 * param_5[0x42] + fVar33 * param_2[0x42];
      fVar79 = fVar22 * param_5[0x43] + fVar33 * param_2[0x43];
      fVar80 = fVar22 * param_5[0x44] + fVar33 * param_2[0x44];
      fVar81 = fVar22 * param_5[0x45] + fVar33 * param_2[0x45];
      fVar82 = fVar22 * param_5[0x46] + fVar33 * param_2[0x46];
      fVar83 = fVar22 * param_5[0x47] + fVar33 * param_2[0x47];
      param_7[0x40] = fVar75;
      param_7[0x41] = fVar77;
      param_7[0x42] = fVar78;
      param_7[0x43] = fVar79;
      param_7[0x44] = fVar80;
      param_7[0x45] = fVar81;
      param_7[0x46] = fVar82;
      param_7[0x47] = fVar83;
      fVar61 = fVar22 * param_5[0x48] + fVar33 * param_2[0x48];
      fVar68 = fVar22 * param_5[0x49] + fVar33 * param_2[0x49];
      fVar69 = fVar22 * param_5[0x4a] + fVar33 * param_2[0x4a];
      fVar70 = fVar22 * param_5[0x4b] + fVar33 * param_2[0x4b];
      fVar71 = fVar22 * param_5[0x4c] + fVar33 * param_2[0x4c];
      fVar72 = fVar22 * param_5[0x4d] + fVar33 * param_2[0x4d];
      fVar73 = fVar22 * param_5[0x4e] + fVar33 * param_2[0x4e];
      fVar74 = fVar22 * param_5[0x4f] + fVar33 * param_2[0x4f];
      param_7[0x48] = fVar61;
      param_7[0x49] = fVar68;
      param_7[0x4a] = fVar69;
      param_7[0x4b] = fVar70;
      param_7[0x4c] = fVar71;
      param_7[0x4d] = fVar72;
      param_7[0x4e] = fVar73;
      param_7[0x4f] = fVar74;
      fVar35 = fVar22 * param_5[0x50] + fVar33 * param_2[0x50];
      fVar37 = fVar22 * param_5[0x51] + fVar33 * param_2[0x51];
      fVar39 = fVar22 * param_5[0x52] + fVar33 * param_2[0x52];
      fVar41 = fVar22 * param_5[0x53] + fVar33 * param_2[0x53];
      fVar43 = fVar22 * param_5[0x54] + fVar33 * param_2[0x54];
      fVar45 = fVar22 * param_5[0x55] + fVar33 * param_2[0x55];
      fVar59 = fVar22 * param_5[0x56] + fVar33 * param_2[0x56];
      fVar60 = fVar22 * param_5[0x57] + fVar33 * param_2[0x57];
      param_7[0x50] = fVar35;
      param_7[0x51] = fVar37;
      param_7[0x52] = fVar39;
      param_7[0x53] = fVar41;
      param_7[0x54] = fVar43;
      param_7[0x55] = fVar45;
      param_7[0x56] = fVar59;
      param_7[0x57] = fVar60;
      fVar23 = fVar22 * param_5[0x58] + fVar33 * param_2[0x58];
      fVar34 = fVar22 * param_5[0x59] + fVar33 * param_2[0x59];
      fVar36 = fVar22 * param_5[0x5a] + fVar33 * param_2[0x5a];
      fVar38 = fVar22 * param_5[0x5b] + fVar33 * param_2[0x5b];
      fVar40 = fVar22 * param_5[0x5c] + fVar33 * param_2[0x5c];
      fVar42 = fVar22 * param_5[0x5d] + fVar33 * param_2[0x5d];
      fVar44 = fVar22 * param_5[0x5e] + fVar33 * param_2[0x5e];
      fVar21 = fVar22 * param_5[0x5f] + fVar33 * param_2[0x5f];
      param_7[0x58] = fVar23;
      param_7[0x59] = fVar34;
      param_7[0x5a] = fVar36;
      param_7[0x5b] = fVar38;
      param_7[0x5c] = fVar40;
      param_7[0x5d] = fVar42;
      param_7[0x5e] = fVar44;
      param_7[0x5f] = fVar21;
      auVar153._0_4_ =
           fVar144 + 0.0 + fVar136 + fVar128 + fVar120 + fVar112 + fVar104 + fVar96 + fVar84 +
           fVar75 + fVar61 + fVar35 + fVar23 +
           fVar148 + 0.0 + fVar140 + fVar132 + fVar124 + fVar116 + fVar108 + fVar100 + fVar92 +
           fVar80 + fVar71 + fVar43 + fVar40;
      auVar153._4_4_ =
           fVar145 + 0.0 + fVar137 + fVar129 + fVar121 + fVar113 + fVar105 + fVar97 + fVar89 +
           fVar77 + fVar68 + fVar37 + fVar34 +
           fVar149 + 0.0 + fVar141 + fVar133 + fVar125 + fVar117 + fVar109 + fVar101 + fVar93 +
           fVar81 + fVar72 + fVar45 + fVar42;
      auVar153._8_4_ =
           fVar146 + 0.0 + fVar138 + fVar130 + fVar122 + fVar114 + fVar106 + fVar98 + fVar90 +
           fVar78 + fVar69 + fVar39 + fVar36 +
           fVar150 + 0.0 + fVar142 + fVar134 + fVar126 + fVar118 + fVar110 + fVar102 + fVar94 +
           fVar82 + fVar73 + fVar59 + fVar44;
      auVar153._12_4_ =
           fVar147 + 0.0 + fVar139 + fVar131 + fVar123 + fVar115 + fVar107 + fVar99 + fVar91 +
           fVar79 + fVar70 + fVar41 + fVar38 +
           fVar151 + 0.0 + fVar143 + fVar135 + fVar127 + fVar119 + fVar111 + fVar103 + fVar95 +
           fVar83 + fVar74 + fVar60 + fVar21;
      auVar46 = vhaddps_avx(auVar153,auVar153);
      auVar46 = vhaddps_avx(auVar46,auVar46);
      if (((ulong)((long)param_7 + (0x180 - (long)(param_5 + 0x61))) < 9) ||
         ((ulong)((long)param_7 + (0x180 - (long)(param_2 + 0x61))) < 9)) {
        fVar3 = fVar33 * param_2[0x60] + fVar22 * param_5[0x60];
        param_7[0x60] = fVar3;
        fVar4 = fVar33 * param_2[0x61] + fVar22 * param_5[0x61];
        param_7[0x61] = fVar4;
        fVar5 = fVar33 * param_2[0x62] + fVar22 * param_5[0x62];
        param_7[0x62] = fVar5;
        fVar22 = fVar22 * param_5[99] + fVar33 * param_2[99];
        param_7[99] = fVar22;
        fVar22 = fVar22 + fVar5 + fVar4 + fVar3 + auVar46._0_4_;
      }
      else {
        auVar24 = vshufps_avx(auVar47,auVar47,0);
        auVar85 = vshufps_avx(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22),0);
        auVar154._0_4_ = auVar24._0_4_ * param_2[0x60] + auVar85._0_4_ * param_5[0x60];
        auVar154._4_4_ = auVar24._4_4_ * param_2[0x61] + auVar85._4_4_ * param_5[0x61];
        auVar154._8_4_ = auVar24._8_4_ * param_2[0x62] + auVar85._8_4_ * param_5[0x62];
        auVar154._12_4_ = auVar24._12_4_ * param_2[99] + auVar85._12_4_ * param_5[99];
        auVar24 = vshufps_avx(auVar154,auVar154,0x55);
        *(undefined1 (*) [16])(param_7 + 0x60) = auVar154;
        auVar86 = vunpckhps_avx(auVar154,auVar154);
        auVar85 = vshufps_avx(auVar154,auVar154,0xff);
        fVar22 = auVar86._0_4_ + auVar24._0_4_ + auVar46._0_4_ + auVar154._0_4_ + auVar85._0_4_;
      }
      auVar49._0_4_ = 1.0 / (fVar22 + 1e-08);
      auVar49._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar46 = vshufps_avx(auVar49,auVar49,0);
      param_7[0x58] = fVar23 * auVar49._0_4_;
      param_7[0x59] = fVar34 * auVar49._0_4_;
      param_7[0x5a] = fVar36 * auVar49._0_4_;
      param_7[0x5b] = fVar38 * auVar49._0_4_;
      param_7[0x5c] = fVar40 * auVar49._0_4_;
      param_7[0x5d] = fVar42 * auVar49._0_4_;
      param_7[0x5e] = fVar44 * auVar49._0_4_;
      param_7[0x5f] = fVar21 * auVar49._0_4_;
      *param_7 = auVar49._0_4_ * fVar144;
      param_7[1] = auVar49._0_4_ * fVar145;
      param_7[2] = auVar49._0_4_ * fVar146;
      param_7[3] = auVar49._0_4_ * fVar147;
      param_7[4] = auVar49._0_4_ * fVar148;
      param_7[5] = auVar49._0_4_ * fVar149;
      param_7[6] = auVar49._0_4_ * fVar150;
      param_7[7] = auVar49._0_4_ * fVar151;
      param_7[8] = auVar49._0_4_ * fVar136;
      param_7[9] = auVar49._0_4_ * fVar137;
      param_7[10] = auVar49._0_4_ * fVar138;
      param_7[0xb] = auVar49._0_4_ * fVar139;
      param_7[0xc] = auVar49._0_4_ * fVar140;
      param_7[0xd] = auVar49._0_4_ * fVar141;
      param_7[0xe] = auVar49._0_4_ * fVar142;
      param_7[0xf] = auVar49._0_4_ * fVar143;
      param_7[0x10] = auVar49._0_4_ * fVar128;
      param_7[0x11] = auVar49._0_4_ * fVar129;
      param_7[0x12] = auVar49._0_4_ * fVar130;
      param_7[0x13] = auVar49._0_4_ * fVar131;
      param_7[0x14] = auVar49._0_4_ * fVar132;
      param_7[0x15] = auVar49._0_4_ * fVar133;
      param_7[0x16] = auVar49._0_4_ * fVar134;
      param_7[0x17] = auVar49._0_4_ * fVar135;
      param_7[0x18] = auVar49._0_4_ * fVar120;
      param_7[0x19] = auVar49._0_4_ * fVar121;
      param_7[0x1a] = auVar49._0_4_ * fVar122;
      param_7[0x1b] = auVar49._0_4_ * fVar123;
      param_7[0x1c] = auVar49._0_4_ * fVar124;
      param_7[0x1d] = auVar49._0_4_ * fVar125;
      param_7[0x1e] = auVar49._0_4_ * fVar126;
      param_7[0x1f] = auVar49._0_4_ * fVar127;
      param_7[0x20] = auVar49._0_4_ * fVar112;
      param_7[0x21] = auVar49._0_4_ * fVar113;
      param_7[0x22] = auVar49._0_4_ * fVar114;
      param_7[0x23] = auVar49._0_4_ * fVar115;
      param_7[0x24] = auVar49._0_4_ * fVar116;
      param_7[0x25] = auVar49._0_4_ * fVar117;
      param_7[0x26] = auVar49._0_4_ * fVar118;
      param_7[0x27] = auVar49._0_4_ * fVar119;
      param_7[0x28] = auVar49._0_4_ * fVar104;
      param_7[0x29] = auVar49._0_4_ * fVar105;
      param_7[0x2a] = auVar49._0_4_ * fVar106;
      param_7[0x2b] = auVar49._0_4_ * fVar107;
      param_7[0x2c] = auVar49._0_4_ * fVar108;
      param_7[0x2d] = auVar49._0_4_ * fVar109;
      param_7[0x2e] = auVar49._0_4_ * fVar110;
      param_7[0x2f] = auVar49._0_4_ * fVar111;
      param_7[0x30] = auVar49._0_4_ * fVar96;
      param_7[0x31] = auVar49._0_4_ * fVar97;
      param_7[0x32] = auVar49._0_4_ * fVar98;
      param_7[0x33] = auVar49._0_4_ * fVar99;
      param_7[0x34] = auVar49._0_4_ * fVar100;
      param_7[0x35] = auVar49._0_4_ * fVar101;
      param_7[0x36] = auVar49._0_4_ * fVar102;
      param_7[0x37] = auVar49._0_4_ * fVar103;
      param_7[0x38] = auVar49._0_4_ * fVar84;
      param_7[0x39] = auVar49._0_4_ * fVar89;
      param_7[0x3a] = auVar49._0_4_ * fVar90;
      param_7[0x3b] = auVar49._0_4_ * fVar91;
      param_7[0x3c] = auVar49._0_4_ * fVar92;
      param_7[0x3d] = auVar49._0_4_ * fVar93;
      param_7[0x3e] = auVar49._0_4_ * fVar94;
      param_7[0x3f] = auVar49._0_4_ * fVar95;
      param_7[0x40] = auVar49._0_4_ * fVar75;
      param_7[0x41] = auVar49._0_4_ * fVar77;
      param_7[0x42] = auVar49._0_4_ * fVar78;
      param_7[0x43] = auVar49._0_4_ * fVar79;
      param_7[0x44] = auVar49._0_4_ * fVar80;
      param_7[0x45] = auVar49._0_4_ * fVar81;
      param_7[0x46] = auVar49._0_4_ * fVar82;
      param_7[0x47] = auVar49._0_4_ * fVar83;
      param_7[0x48] = auVar49._0_4_ * fVar61;
      param_7[0x49] = auVar49._0_4_ * fVar68;
      param_7[0x4a] = auVar49._0_4_ * fVar69;
      param_7[0x4b] = auVar49._0_4_ * fVar70;
      param_7[0x4c] = auVar49._0_4_ * fVar71;
      param_7[0x4d] = auVar49._0_4_ * fVar72;
      param_7[0x4e] = auVar49._0_4_ * fVar73;
      param_7[0x4f] = auVar49._0_4_ * fVar74;
      param_7[0x50] = auVar49._0_4_ * fVar35;
      param_7[0x51] = auVar49._0_4_ * fVar37;
      param_7[0x52] = auVar49._0_4_ * fVar39;
      param_7[0x53] = auVar49._0_4_ * fVar41;
      param_7[0x54] = auVar49._0_4_ * fVar43;
      param_7[0x55] = auVar49._0_4_ * fVar45;
      param_7[0x56] = auVar49._0_4_ * fVar59;
      param_7[0x57] = auVar49._0_4_ * fVar60;
      param_7[0x60] = auVar46._0_4_ * param_7[0x60];
      param_7[0x61] = auVar46._4_4_ * param_7[0x61];
      param_7[0x62] = auVar46._8_4_ * param_7[0x62];
      param_7[99] = auVar46._12_4_ * param_7[99];
    }
    *(undefined8 *)param_5 = *(undefined8 *)param_7;
    *(undefined8 *)(param_5 + 0x62) = *(undefined8 *)(param_7 + 0x62);
    lVar13 = (long)param_5 - (long)((ulong)(param_5 + 2) & 0xfffffffffffffff8);
    puVar17 = (undefined8 *)((long)param_7 - lVar13);
    puVar18 = (undefined8 *)((ulong)(param_5 + 2) & 0xfffffffffffffff8);
    for (uVar14 = (ulong)((int)lVar13 + 400U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + (ulong)bVar20 * -2 + 1;
      puVar18 = puVar18 + (ulong)bVar20 * -2 + 1;
    }
                    /* WARNING: Read-only address (ram,0x0011a580) is written */
                    /* WARNING: Read-only address (ram,0x0011a5a0) is written */
                    /* WARNING: Read-only address (ram,0x0011a5c0) is written */
    return;
  }
  return;
}

