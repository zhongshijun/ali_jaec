
/* 001142b0 FUN_001142b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001142b0(float *param_1,long param_2,float *param_3,uint *param_4,uint *param_5,
                 long param_6,long param_7,long param_8,uint param_9,int param_10,int param_11,
                 long param_12,undefined1 (*param_13) [32])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 *puVar47;
  uint uVar48;
  float *pfVar49;
  uint *puVar50;
  undefined1 (*pauVar51) [32];
  long lVar52;
  uint *puVar53;
  long lVar54;
  long lVar55;
  float *pfVar56;
  uint uVar57;
  long lVar58;
  float *pfVar59;
  float fVar60;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar61;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar89;
  float fVar91;
  float fVar93;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  float fVar86;
  float fVar90;
  float fVar92;
  float fVar94;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar95 [16];
  float fVar104;
  float fVar106;
  float fVar107;
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  float fVar108;
  undefined1 auVar102 [32];
  undefined1 auVar105 [16];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar121 [32];
  float fVar128;
  float *local_90;
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar103 [32];
  
  if (((((param_1 != (float *)0x0) && (param_2 != 0)) && (param_3 != (float *)0x0)) &&
      ((((param_4 != (uint *)0x0 && (param_5 != (uint *)0x0)) &&
        ((param_6 != 0 && ((param_7 != 0 && (param_8 != 0)))))) && (param_12 != 0)))) &&
     (((param_13 != (undefined1 (*) [32])0x0 && (0 < (int)param_9 && param_10 == 0x20)) &&
      (param_11 == 6)))) {
    fVar61 = *param_3;
    uVar48 = param_9 & 3;
    uVar57 = param_9 & 0xfffffffc;
    if (0 < (int)uVar57) {
      lVar54 = param_8;
      lVar58 = param_12;
      do {
        FUN_00112730(param_1,lVar54,param_2,param_13);
        auVar87._0_12_ = ZEXT812(0);
        auVar87._12_4_ = 0;
        auVar96 = vminps_avx(*param_13,ZEXT1632(auVar87));
        auVar76 = vmaxps_avx(*param_13,ZEXT1632(auVar87));
        auVar75 = param_13[1];
        auVar98 = ZEXT1632(auVar87);
        auVar71 = vmaxps_avx(auVar75,auVar98);
        *(float *)*param_13 = auVar96._0_4_ * fVar61 + auVar76._0_4_;
        *(float *)(*param_13 + 4) = auVar96._4_4_ * fVar61 + auVar76._4_4_;
        *(float *)(*param_13 + 8) = auVar96._8_4_ * fVar61 + auVar76._8_4_;
        *(float *)(*param_13 + 0xc) = auVar96._12_4_ * fVar61 + auVar76._12_4_;
        *(float *)(*param_13 + 0x10) = auVar96._16_4_ * fVar61 + auVar76._16_4_;
        *(float *)(*param_13 + 0x14) = auVar96._20_4_ * fVar61 + auVar76._20_4_;
        *(float *)(*param_13 + 0x18) = auVar96._24_4_ * fVar61 + auVar76._24_4_;
        *(float *)(*param_13 + 0x1c) = auVar96._28_4_ * fVar61 + auVar76._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[2];
        auVar76 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[1] = auVar96._0_4_ * fVar61 + auVar71._0_4_;
        *(float *)(param_13[1] + 4) = auVar96._4_4_ * fVar61 + auVar71._4_4_;
        *(float *)(param_13[1] + 8) = auVar96._8_4_ * fVar61 + auVar71._8_4_;
        *(float *)(param_13[1] + 0xc) = auVar96._12_4_ * fVar61 + auVar71._12_4_;
        *(float *)(param_13[1] + 0x10) = auVar96._16_4_ * fVar61 + auVar71._16_4_;
        *(float *)(param_13[1] + 0x14) = auVar96._20_4_ * fVar61 + auVar71._20_4_;
        *(float *)(param_13[1] + 0x18) = auVar96._24_4_ * fVar61 + auVar71._24_4_;
        *(float *)(param_13[1] + 0x1c) = auVar96._28_4_ * fVar61 + auVar71._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[3];
        auVar98 = ZEXT1632(auVar87);
        auVar71 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[2] = auVar96._0_4_ * fVar61 + auVar76._0_4_;
        *(float *)(param_13[2] + 4) = auVar96._4_4_ * fVar61 + auVar76._4_4_;
        *(float *)(param_13[2] + 8) = auVar96._8_4_ * fVar61 + auVar76._8_4_;
        *(float *)(param_13[2] + 0xc) = auVar96._12_4_ * fVar61 + auVar76._12_4_;
        *(float *)(param_13[2] + 0x10) = auVar96._16_4_ * fVar61 + auVar76._16_4_;
        *(float *)(param_13[2] + 0x14) = auVar96._20_4_ * fVar61 + auVar76._20_4_;
        *(float *)(param_13[2] + 0x18) = auVar96._24_4_ * fVar61 + auVar76._24_4_;
        *(float *)(param_13[2] + 0x1c) = auVar96._28_4_ * fVar61 + auVar76._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[4];
        auVar76 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[3] = auVar96._0_4_ * fVar61 + auVar71._0_4_;
        *(float *)(param_13[3] + 4) = auVar96._4_4_ * fVar61 + auVar71._4_4_;
        *(float *)(param_13[3] + 8) = auVar96._8_4_ * fVar61 + auVar71._8_4_;
        *(float *)(param_13[3] + 0xc) = auVar96._12_4_ * fVar61 + auVar71._12_4_;
        *(float *)(param_13[3] + 0x10) = auVar96._16_4_ * fVar61 + auVar71._16_4_;
        *(float *)(param_13[3] + 0x14) = auVar96._20_4_ * fVar61 + auVar71._20_4_;
        *(float *)(param_13[3] + 0x18) = auVar96._24_4_ * fVar61 + auVar71._24_4_;
        *(float *)(param_13[3] + 0x1c) = auVar96._28_4_ * fVar61 + auVar71._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[5];
        auVar71 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[4] = auVar96._0_4_ * fVar61 + auVar76._0_4_;
        *(float *)(param_13[4] + 4) = auVar96._4_4_ * fVar61 + auVar76._4_4_;
        *(float *)(param_13[4] + 8) = auVar96._8_4_ * fVar61 + auVar76._8_4_;
        *(float *)(param_13[4] + 0xc) = auVar96._12_4_ * fVar61 + auVar76._12_4_;
        *(float *)(param_13[4] + 0x10) = auVar96._16_4_ * fVar61 + auVar76._16_4_;
        *(float *)(param_13[4] + 0x14) = auVar96._20_4_ * fVar61 + auVar76._20_4_;
        *(float *)(param_13[4] + 0x18) = auVar96._24_4_ * fVar61 + auVar76._24_4_;
        *(float *)(param_13[4] + 0x1c) = auVar96._28_4_ * fVar61 + auVar76._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[6];
        auVar76 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[5] = auVar96._0_4_ * fVar61 + auVar71._0_4_;
        *(float *)(param_13[5] + 4) = auVar96._4_4_ * fVar61 + auVar71._4_4_;
        *(float *)(param_13[5] + 8) = auVar96._8_4_ * fVar61 + auVar71._8_4_;
        *(float *)(param_13[5] + 0xc) = auVar96._12_4_ * fVar61 + auVar71._12_4_;
        *(float *)(param_13[5] + 0x10) = auVar96._16_4_ * fVar61 + auVar71._16_4_;
        *(float *)(param_13[5] + 0x14) = auVar96._20_4_ * fVar61 + auVar71._20_4_;
        *(float *)(param_13[5] + 0x18) = auVar96._24_4_ * fVar61 + auVar71._24_4_;
        *(float *)(param_13[5] + 0x1c) = auVar96._28_4_ * fVar61 + auVar71._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[7];
        auVar98 = ZEXT1632(auVar87);
        auVar71 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[6] = auVar96._0_4_ * fVar61 + auVar76._0_4_;
        *(float *)(param_13[6] + 4) = auVar96._4_4_ * fVar61 + auVar76._4_4_;
        *(float *)(param_13[6] + 8) = auVar96._8_4_ * fVar61 + auVar76._8_4_;
        *(float *)(param_13[6] + 0xc) = auVar96._12_4_ * fVar61 + auVar76._12_4_;
        *(float *)(param_13[6] + 0x10) = auVar96._16_4_ * fVar61 + auVar76._16_4_;
        *(float *)(param_13[6] + 0x14) = auVar96._20_4_ * fVar61 + auVar76._20_4_;
        *(float *)(param_13[6] + 0x18) = auVar96._24_4_ * fVar61 + auVar76._24_4_;
        *(float *)(param_13[6] + 0x1c) = auVar96._28_4_ * fVar61 + auVar76._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[8];
        auVar76 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[7] = auVar96._0_4_ * fVar61 + auVar71._0_4_;
        *(float *)(param_13[7] + 4) = auVar96._4_4_ * fVar61 + auVar71._4_4_;
        *(float *)(param_13[7] + 8) = auVar96._8_4_ * fVar61 + auVar71._8_4_;
        *(float *)(param_13[7] + 0xc) = auVar96._12_4_ * fVar61 + auVar71._12_4_;
        *(float *)(param_13[7] + 0x10) = auVar96._16_4_ * fVar61 + auVar71._16_4_;
        *(float *)(param_13[7] + 0x14) = auVar96._20_4_ * fVar61 + auVar71._20_4_;
        *(float *)(param_13[7] + 0x18) = auVar96._24_4_ * fVar61 + auVar71._24_4_;
        *(float *)(param_13[7] + 0x1c) = auVar96._28_4_ * fVar61 + auVar71._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[9];
        auVar71 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[8] = auVar96._0_4_ * fVar61 + auVar76._0_4_;
        *(float *)(param_13[8] + 4) = auVar96._4_4_ * fVar61 + auVar76._4_4_;
        *(float *)(param_13[8] + 8) = auVar96._8_4_ * fVar61 + auVar76._8_4_;
        *(float *)(param_13[8] + 0xc) = auVar96._12_4_ * fVar61 + auVar76._12_4_;
        *(float *)(param_13[8] + 0x10) = auVar96._16_4_ * fVar61 + auVar76._16_4_;
        *(float *)(param_13[8] + 0x14) = auVar96._20_4_ * fVar61 + auVar76._20_4_;
        *(float *)(param_13[8] + 0x18) = auVar96._24_4_ * fVar61 + auVar76._24_4_;
        *(float *)(param_13[8] + 0x1c) = auVar96._28_4_ * fVar61 + auVar76._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[10];
        auVar76 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[9] = auVar96._0_4_ * fVar61 + auVar71._0_4_;
        *(float *)(param_13[9] + 4) = auVar96._4_4_ * fVar61 + auVar71._4_4_;
        *(float *)(param_13[9] + 8) = auVar96._8_4_ * fVar61 + auVar71._8_4_;
        *(float *)(param_13[9] + 0xc) = auVar96._12_4_ * fVar61 + auVar71._12_4_;
        *(float *)(param_13[9] + 0x10) = auVar96._16_4_ * fVar61 + auVar71._16_4_;
        *(float *)(param_13[9] + 0x14) = auVar96._20_4_ * fVar61 + auVar71._20_4_;
        *(float *)(param_13[9] + 0x18) = auVar96._24_4_ * fVar61 + auVar71._24_4_;
        *(float *)(param_13[9] + 0x1c) = auVar96._28_4_ * fVar61 + auVar71._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[0xb];
        auVar71 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[10] = auVar96._0_4_ * fVar61 + auVar76._0_4_;
        *(float *)(param_13[10] + 4) = auVar96._4_4_ * fVar61 + auVar76._4_4_;
        *(float *)(param_13[10] + 8) = auVar96._8_4_ * fVar61 + auVar76._8_4_;
        *(float *)(param_13[10] + 0xc) = auVar96._12_4_ * fVar61 + auVar76._12_4_;
        *(float *)(param_13[10] + 0x10) = auVar96._16_4_ * fVar61 + auVar76._16_4_;
        *(float *)(param_13[10] + 0x14) = auVar96._20_4_ * fVar61 + auVar76._20_4_;
        *(float *)(param_13[10] + 0x18) = auVar96._24_4_ * fVar61 + auVar76._24_4_;
        *(float *)(param_13[10] + 0x1c) = auVar96._28_4_ * fVar61 + auVar76._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[0xc];
        auVar76 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[0xb] = auVar96._0_4_ * fVar61 + auVar71._0_4_;
        *(float *)(param_13[0xb] + 4) = auVar96._4_4_ * fVar61 + auVar71._4_4_;
        *(float *)(param_13[0xb] + 8) = auVar96._8_4_ * fVar61 + auVar71._8_4_;
        *(float *)(param_13[0xb] + 0xc) = auVar96._12_4_ * fVar61 + auVar71._12_4_;
        *(float *)(param_13[0xb] + 0x10) = auVar96._16_4_ * fVar61 + auVar71._16_4_;
        *(float *)(param_13[0xb] + 0x14) = auVar96._20_4_ * fVar61 + auVar71._20_4_;
        *(float *)(param_13[0xb] + 0x18) = auVar96._24_4_ * fVar61 + auVar71._24_4_;
        *(float *)(param_13[0xb] + 0x1c) = auVar96._28_4_ * fVar61 + auVar71._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[0xd];
        auVar71 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[0xc] = auVar96._0_4_ * fVar61 + auVar76._0_4_;
        *(float *)(param_13[0xc] + 4) = auVar96._4_4_ * fVar61 + auVar76._4_4_;
        *(float *)(param_13[0xc] + 8) = auVar96._8_4_ * fVar61 + auVar76._8_4_;
        *(float *)(param_13[0xc] + 0xc) = auVar96._12_4_ * fVar61 + auVar76._12_4_;
        *(float *)(param_13[0xc] + 0x10) = auVar96._16_4_ * fVar61 + auVar76._16_4_;
        *(float *)(param_13[0xc] + 0x14) = auVar96._20_4_ * fVar61 + auVar76._20_4_;
        *(float *)(param_13[0xc] + 0x18) = auVar96._24_4_ * fVar61 + auVar76._24_4_;
        *(float *)(param_13[0xc] + 0x1c) = auVar96._28_4_ * fVar61 + auVar76._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[0xe];
        auVar76 = vmaxps_avx(auVar75,auVar98);
        *(float *)param_13[0xd] = auVar96._0_4_ * fVar61 + auVar71._0_4_;
        *(float *)(param_13[0xd] + 4) = auVar96._4_4_ * fVar61 + auVar71._4_4_;
        *(float *)(param_13[0xd] + 8) = auVar96._8_4_ * fVar61 + auVar71._8_4_;
        *(float *)(param_13[0xd] + 0xc) = auVar96._12_4_ * fVar61 + auVar71._12_4_;
        *(float *)(param_13[0xd] + 0x10) = auVar96._16_4_ * fVar61 + auVar71._16_4_;
        *(float *)(param_13[0xd] + 0x14) = auVar96._20_4_ * fVar61 + auVar71._20_4_;
        *(float *)(param_13[0xd] + 0x18) = auVar96._24_4_ * fVar61 + auVar71._24_4_;
        *(float *)(param_13[0xd] + 0x1c) = auVar96._28_4_ * fVar61 + auVar71._28_4_;
        auVar96 = vminps_avx(auVar75,auVar98);
        auVar75 = param_13[0xf];
        auVar71 = vmaxps_avx(auVar75,ZEXT1632(auVar87));
        *(float *)param_13[0xe] = auVar96._0_4_ * fVar61 + auVar76._0_4_;
        *(float *)(param_13[0xe] + 4) = auVar96._4_4_ * fVar61 + auVar76._4_4_;
        *(float *)(param_13[0xe] + 8) = auVar96._8_4_ * fVar61 + auVar76._8_4_;
        *(float *)(param_13[0xe] + 0xc) = auVar96._12_4_ * fVar61 + auVar76._12_4_;
        *(float *)(param_13[0xe] + 0x10) = auVar96._16_4_ * fVar61 + auVar76._16_4_;
        *(float *)(param_13[0xe] + 0x14) = auVar96._20_4_ * fVar61 + auVar76._20_4_;
        *(float *)(param_13[0xe] + 0x18) = auVar96._24_4_ * fVar61 + auVar76._24_4_;
        *(float *)(param_13[0xe] + 0x1c) = auVar96._28_4_ * fVar61 + auVar76._28_4_;
        auVar75 = vminps_avx(auVar75,ZEXT1632(auVar87));
        *(float *)param_13[0xf] = auVar75._0_4_ * fVar61 + auVar71._0_4_;
        *(float *)(param_13[0xf] + 4) = auVar75._4_4_ * fVar61 + auVar71._4_4_;
        *(float *)(param_13[0xf] + 8) = auVar75._8_4_ * fVar61 + auVar71._8_4_;
        *(float *)(param_13[0xf] + 0xc) = auVar75._12_4_ * fVar61 + auVar71._12_4_;
        *(float *)(param_13[0xf] + 0x10) = auVar75._16_4_ * fVar61 + auVar71._16_4_;
        *(float *)(param_13[0xf] + 0x14) = auVar75._20_4_ * fVar61 + auVar71._20_4_;
        *(float *)(param_13[0xf] + 0x18) = auVar75._24_4_ * fVar61 + auVar71._24_4_;
        *(float *)(param_13[0xf] + 0x1c) = auVar75._28_4_ * fVar61 + auVar71._28_4_;
        FUN_00112bc0(param_4,param_13,param_6,param_13 + 0x28);
        FUN_00112bc0(param_5,lVar58,param_7,param_13 + 0xa0);
        auVar76 = _DAT_0011a5c0;
        auVar75 = _DAT_0011a5a0;
        auVar105._0_12_ = ZEXT812(0);
        auVar105._12_4_ = 0;
        pauVar51 = param_13 + 0xa0;
        lVar55 = lVar58;
        do {
          lVar52 = 0;
          do {
            pfVar59 = (float *)(*pauVar51 + lVar52);
            pfVar56 = (float *)(pauVar51[-0x78] + lVar52);
            auVar96._0_4_ = *pfVar59 + *pfVar56;
            auVar96._4_4_ = pfVar59[1] + pfVar56[1];
            auVar96._8_4_ = pfVar59[2] + pfVar56[2];
            auVar96._12_4_ = pfVar59[3] + pfVar56[3];
            auVar96._16_4_ = pfVar59[4] + pfVar56[4];
            auVar96._20_4_ = pfVar59[5] + pfVar56[5];
            auVar96._24_4_ = pfVar59[6] + pfVar56[6];
            auVar96._28_4_ = pfVar59[7] + pfVar56[7];
            auVar71 = vsubps_avx(ZEXT1632(auVar105),auVar96);
            auVar71 = vminps_avx(auVar71,auVar75);
            auVar71 = vmaxps_avx(auVar71,auVar76);
            auVar109._0_4_ = auVar71._0_4_ * 1.442695 + 0.5;
            auVar109._4_4_ = auVar71._4_4_ * 1.442695 + 0.5;
            auVar109._8_4_ = auVar71._8_4_ * 1.442695 + 0.5;
            auVar109._12_4_ = auVar71._12_4_ * 1.442695 + 0.5;
            auVar109._16_4_ = auVar71._16_4_ * 1.442695 + 0.5;
            auVar109._20_4_ = auVar71._20_4_ * 1.442695 + 0.5;
            auVar109._24_4_ = auVar71._24_4_ * 1.442695 + 0.5;
            auVar109._28_4_ = auVar71._28_4_ * 1.442695 + 0.5;
            auVar96 = vroundps_avx(auVar109,1);
            fVar86 = auVar96._0_4_;
            fVar104 = auVar96._4_4_;
            fVar90 = auVar96._8_4_;
            fVar106 = auVar96._12_4_;
            fVar92 = auVar96._16_4_;
            fVar107 = auVar96._20_4_;
            fVar94 = auVar96._24_4_;
            fVar108 = auVar96._28_4_;
            fVar60 = -(fVar86 * -0.00021219444) + -(fVar86 * 0.6933594) + auVar71._0_4_;
            fVar82 = -(fVar104 * -0.00021219444) + -(fVar104 * 0.6933594) + auVar71._4_4_;
            fVar83 = -(fVar90 * -0.00021219444) + -(fVar90 * 0.6933594) + auVar71._8_4_;
            fVar84 = -(fVar106 * -0.00021219444) + -(fVar106 * 0.6933594) + auVar71._12_4_;
            fVar85 = -(fVar92 * -0.00021219444) + -(fVar92 * 0.6933594) + auVar71._16_4_;
            fVar89 = -(fVar107 * -0.00021219444) + -(fVar107 * 0.6933594) + auVar71._20_4_;
            fVar91 = -(fVar94 * -0.00021219444) + -(fVar94 * 0.6933594) + auVar71._24_4_;
            fVar93 = -(fVar108 * -0.00021219444) + -(fVar108 * 0.6933594) + auVar71._28_4_;
            pfVar59 = (float *)(pauVar51[1] + lVar52);
            auVar71._0_4_ = (int)fVar86 + 0x7f;
            auVar71._4_4_ = (int)fVar104 + 0x7f;
            auVar71._8_4_ = (int)fVar90 + 0x7f;
            auVar71._12_4_ = (int)fVar106 + 0x7f;
            auVar71._16_4_ = (int)fVar92 + 0x7f;
            auVar71._20_4_ = (int)fVar107 + 0x7f;
            auVar71._24_4_ = (int)fVar94 + 0x7f;
            auVar71._28_4_ = (int)fVar108 + 0x7f;
            auVar96 = vpslld_avx2(auVar71,0x17);
            pfVar56 = (float *)(pauVar51[-0x77] + lVar52);
            auVar97._0_4_ = *pfVar59 + *pfVar56;
            auVar97._4_4_ = pfVar59[1] + pfVar56[1];
            auVar97._8_4_ = pfVar59[2] + pfVar56[2];
            auVar97._12_4_ = pfVar59[3] + pfVar56[3];
            auVar97._16_4_ = pfVar59[4] + pfVar56[4];
            auVar97._20_4_ = pfVar59[5] + pfVar56[5];
            auVar97._24_4_ = pfVar59[6] + pfVar56[6];
            auVar97._28_4_ = pfVar59[7] + pfVar56[7];
            auVar71 = vsubps_avx(ZEXT1632(auVar105),auVar97);
            auVar69._0_4_ =
                 (((fVar60 * (fVar60 * 0.008333452 + 0.041665796) + 0.16666666) * fVar60 + 0.5) *
                  fVar60 * fVar60 + fVar60 + 1.0) * auVar96._0_4_ + 1.0;
            auVar69._4_4_ =
                 (((fVar82 * (fVar82 * 0.008333452 + 0.041665796) + 0.16666666) * fVar82 + 0.5) *
                  fVar82 * fVar82 + fVar82 + 1.0) * auVar96._4_4_ + 1.0;
            auVar69._8_4_ =
                 (((fVar83 * (fVar83 * 0.008333452 + 0.041665796) + 0.16666666) * fVar83 + 0.5) *
                  fVar83 * fVar83 + fVar83 + 1.0) * auVar96._8_4_ + 1.0;
            auVar69._12_4_ =
                 (((fVar84 * (fVar84 * 0.008333452 + 0.041665796) + 0.16666666) * fVar84 + 0.5) *
                  fVar84 * fVar84 + fVar84 + 1.0) * auVar96._12_4_ + 1.0;
            auVar69._16_4_ =
                 (((fVar85 * (fVar85 * 0.008333452 + 0.041665796) + 0.16666666) * fVar85 + 0.5) *
                  fVar85 * fVar85 + fVar85 + 1.0) * auVar96._16_4_ + 1.0;
            auVar69._20_4_ =
                 (((fVar89 * (fVar89 * 0.008333452 + 0.041665796) + 0.16666666) * fVar89 + 0.5) *
                  fVar89 * fVar89 + fVar89 + 1.0) * auVar96._20_4_ + 1.0;
            auVar69._24_4_ =
                 (((fVar91 * (fVar91 * 0.008333452 + 0.041665796) + 0.16666666) * fVar91 + 0.5) *
                  fVar91 * fVar91 + fVar91 + 1.0) * auVar96._24_4_ + 1.0;
            auVar69._28_4_ =
                 (((fVar93 * (fVar93 * 0.008333452 + 0.041665796) + 0.16666666) * fVar93 + 0.5) *
                  fVar93 * fVar93 + fVar93 + 1.0) * auVar96._28_4_ + 1.0;
            auVar71 = vminps_avx(auVar71,auVar75);
            auVar96 = vrcpps_avx(auVar69);
            pfVar59 = (float *)(pauVar51[8] + lVar52);
            auVar71 = vmaxps_avx(auVar71,auVar76);
            pfVar56 = (float *)(pauVar51[-0x70] + lVar52);
            fVar60 = auVar96._0_4_ * *pfVar59 + *pfVar56;
            fVar82 = auVar96._4_4_ * pfVar59[1] + pfVar56[1];
            fVar83 = auVar96._8_4_ * pfVar59[2] + pfVar56[2];
            fVar84 = auVar96._12_4_ * pfVar59[3] + pfVar56[3];
            fVar85 = auVar96._16_4_ * pfVar59[4] + pfVar56[4];
            fVar89 = auVar96._20_4_ * pfVar59[5] + pfVar56[5];
            fVar91 = auVar96._24_4_ * pfVar59[6] + pfVar56[6];
            fVar93 = auVar96._28_4_ * pfVar59[7] + pfVar56[7];
            auVar110._0_4_ = auVar71._0_4_ * 1.442695 + 0.5;
            auVar110._4_4_ = auVar71._4_4_ * 1.442695 + 0.5;
            auVar110._8_4_ = auVar71._8_4_ * 1.442695 + 0.5;
            auVar110._12_4_ = auVar71._12_4_ * 1.442695 + 0.5;
            auVar110._16_4_ = auVar71._16_4_ * 1.442695 + 0.5;
            auVar110._20_4_ = auVar71._20_4_ * 1.442695 + 0.5;
            auVar110._24_4_ = auVar71._24_4_ * 1.442695 + 0.5;
            auVar110._28_4_ = auVar71._28_4_ * 1.442695 + 0.5;
            auVar70._0_4_ = fVar60 + fVar60;
            auVar70._4_4_ = fVar82 + fVar82;
            auVar70._8_4_ = fVar83 + fVar83;
            auVar70._12_4_ = fVar84 + fVar84;
            auVar70._16_4_ = fVar85 + fVar85;
            auVar70._20_4_ = fVar89 + fVar89;
            auVar70._24_4_ = fVar91 + fVar91;
            auVar70._28_4_ = fVar93 + fVar93;
            auVar112 = ZEXT1632(auVar105);
            auVar98 = vsubps_avx(auVar112,auVar70);
            auVar96 = vroundps_avx(auVar110,1);
            fVar86 = auVar96._0_4_;
            fVar104 = auVar96._4_4_;
            fVar90 = auVar96._8_4_;
            fVar106 = auVar96._12_4_;
            fVar92 = auVar96._16_4_;
            fVar107 = auVar96._20_4_;
            fVar94 = auVar96._24_4_;
            fVar108 = auVar96._28_4_;
            auVar96 = vminps_avx(auVar98,auVar75);
            auVar96 = vmaxps_avx(auVar96,auVar76);
            fVar60 = -(fVar86 * -0.00021219444) + -(fVar86 * 0.6933594) + auVar71._0_4_;
            fVar82 = -(fVar104 * -0.00021219444) + -(fVar104 * 0.6933594) + auVar71._4_4_;
            fVar83 = -(fVar90 * -0.00021219444) + -(fVar90 * 0.6933594) + auVar71._8_4_;
            fVar84 = -(fVar106 * -0.00021219444) + -(fVar106 * 0.6933594) + auVar71._12_4_;
            fVar85 = -(fVar92 * -0.00021219444) + -(fVar92 * 0.6933594) + auVar71._16_4_;
            fVar89 = -(fVar107 * -0.00021219444) + -(fVar107 * 0.6933594) + auVar71._20_4_;
            fVar91 = -(fVar94 * -0.00021219444) + -(fVar94 * 0.6933594) + auVar71._24_4_;
            fVar93 = -(fVar108 * -0.00021219444) + -(fVar108 * 0.6933594) + auVar71._28_4_;
            auVar98._0_4_ = (int)fVar86 + 0x7f;
            auVar98._4_4_ = (int)fVar104 + 0x7f;
            auVar98._8_4_ = (int)fVar90 + 0x7f;
            auVar98._12_4_ = (int)fVar106 + 0x7f;
            auVar98._16_4_ = (int)fVar92 + 0x7f;
            auVar98._20_4_ = (int)fVar107 + 0x7f;
            auVar98._24_4_ = (int)fVar94 + 0x7f;
            auVar98._28_4_ = (int)fVar108 + 0x7f;
            pfVar59 = (float *)(pauVar51[4] + lVar52);
            auVar98 = vpslld_avx2(auVar98,0x17);
            pfVar56 = (float *)(pauVar51[-0x74] + lVar52);
            auVar99._0_4_ = *pfVar59 + *pfVar56;
            auVar99._4_4_ = pfVar59[1] + pfVar56[1];
            auVar99._8_4_ = pfVar59[2] + pfVar56[2];
            auVar99._12_4_ = pfVar59[3] + pfVar56[3];
            auVar99._16_4_ = pfVar59[4] + pfVar56[4];
            auVar99._20_4_ = pfVar59[5] + pfVar56[5];
            auVar99._24_4_ = pfVar59[6] + pfVar56[6];
            auVar99._28_4_ = pfVar59[7] + pfVar56[7];
            auVar71 = vsubps_avx(auVar112,auVar99);
            auVar113._0_4_ =
                 (((fVar60 * (fVar60 * 0.008333452 + 0.041665796) + 0.16666666) * fVar60 + 0.5) *
                  fVar60 * fVar60 + fVar60 + 1.0) * auVar98._0_4_ + 1.0;
            auVar113._4_4_ =
                 (((fVar82 * (fVar82 * 0.008333452 + 0.041665796) + 0.16666666) * fVar82 + 0.5) *
                  fVar82 * fVar82 + fVar82 + 1.0) * auVar98._4_4_ + 1.0;
            auVar113._8_4_ =
                 (((fVar83 * (fVar83 * 0.008333452 + 0.041665796) + 0.16666666) * fVar83 + 0.5) *
                  fVar83 * fVar83 + fVar83 + 1.0) * auVar98._8_4_ + 1.0;
            auVar113._12_4_ =
                 (((fVar84 * (fVar84 * 0.008333452 + 0.041665796) + 0.16666666) * fVar84 + 0.5) *
                  fVar84 * fVar84 + fVar84 + 1.0) * auVar98._12_4_ + 1.0;
            auVar113._16_4_ =
                 (((fVar85 * (fVar85 * 0.008333452 + 0.041665796) + 0.16666666) * fVar85 + 0.5) *
                  fVar85 * fVar85 + fVar85 + 1.0) * auVar98._16_4_ + 1.0;
            auVar113._20_4_ =
                 (((fVar89 * (fVar89 * 0.008333452 + 0.041665796) + 0.16666666) * fVar89 + 0.5) *
                  fVar89 * fVar89 + fVar89 + 1.0) * auVar98._20_4_ + 1.0;
            auVar113._24_4_ =
                 (((fVar91 * (fVar91 * 0.008333452 + 0.041665796) + 0.16666666) * fVar91 + 0.5) *
                  fVar91 * fVar91 + fVar91 + 1.0) * auVar98._24_4_ + 1.0;
            auVar113._28_4_ =
                 (((fVar93 * (fVar93 * 0.008333452 + 0.041665796) + 0.16666666) * fVar93 + 0.5) *
                  fVar93 * fVar93 + fVar93 + 1.0) * auVar98._28_4_ + 1.0;
            auVar71 = vminps_avx(auVar71,auVar75);
            auVar98 = vrcpps_avx(auVar113);
            auVar71 = vmaxps_avx(auVar71,auVar76);
            auVar115._0_4_ = auVar71._0_4_ * 1.442695 + 0.5;
            auVar115._4_4_ = auVar71._4_4_ * 1.442695 + 0.5;
            auVar115._8_4_ = auVar71._8_4_ * 1.442695 + 0.5;
            auVar115._12_4_ = auVar71._12_4_ * 1.442695 + 0.5;
            auVar115._16_4_ = auVar71._16_4_ * 1.442695 + 0.5;
            auVar115._20_4_ = auVar71._20_4_ * 1.442695 + 0.5;
            auVar115._24_4_ = auVar71._24_4_ * 1.442695 + 0.5;
            auVar115._28_4_ = auVar71._28_4_ * 1.442695 + 0.5;
            auVar100 = vroundps_avx(auVar115,1);
            fVar86 = auVar100._0_4_;
            fVar104 = auVar100._4_4_;
            fVar90 = auVar100._8_4_;
            fVar106 = auVar100._12_4_;
            fVar92 = auVar100._16_4_;
            fVar107 = auVar100._20_4_;
            fVar94 = auVar100._24_4_;
            fVar108 = auVar100._28_4_;
            fVar60 = -(fVar86 * -0.00021219444) + -(fVar86 * 0.6933594) + auVar71._0_4_;
            fVar82 = -(fVar104 * -0.00021219444) + -(fVar104 * 0.6933594) + auVar71._4_4_;
            fVar83 = -(fVar90 * -0.00021219444) + -(fVar90 * 0.6933594) + auVar71._8_4_;
            fVar84 = -(fVar106 * -0.00021219444) + -(fVar106 * 0.6933594) + auVar71._12_4_;
            fVar85 = -(fVar92 * -0.00021219444) + -(fVar92 * 0.6933594) + auVar71._16_4_;
            fVar89 = -(fVar107 * -0.00021219444) + -(fVar107 * 0.6933594) + auVar71._20_4_;
            fVar91 = -(fVar94 * -0.00021219444) + -(fVar94 * 0.6933594) + auVar71._24_4_;
            fVar93 = -(fVar108 * -0.00021219444) + -(fVar108 * 0.6933594) + auVar71._28_4_;
            auVar100._0_4_ = (int)fVar86 + 0x7f;
            auVar100._4_4_ = (int)fVar104 + 0x7f;
            auVar100._8_4_ = (int)fVar90 + 0x7f;
            auVar100._12_4_ = (int)fVar106 + 0x7f;
            auVar100._16_4_ = (int)fVar92 + 0x7f;
            auVar100._20_4_ = (int)fVar107 + 0x7f;
            auVar100._24_4_ = (int)fVar94 + 0x7f;
            auVar100._28_4_ = (int)fVar108 + 0x7f;
            auVar100 = vpslld_avx2(auVar100,0x17);
            pfVar59 = (float *)(pauVar51[5] + lVar52);
            pfVar56 = (float *)(pauVar51[-0x73] + lVar52);
            auVar101._0_4_ = *pfVar59 + *pfVar56;
            auVar101._4_4_ = pfVar59[1] + pfVar56[1];
            auVar101._8_4_ = pfVar59[2] + pfVar56[2];
            auVar101._12_4_ = pfVar59[3] + pfVar56[3];
            auVar101._16_4_ = pfVar59[4] + pfVar56[4];
            auVar101._20_4_ = pfVar59[5] + pfVar56[5];
            auVar101._24_4_ = pfVar59[6] + pfVar56[6];
            auVar101._28_4_ = pfVar59[7] + pfVar56[7];
            auVar71 = vsubps_avx(auVar112,auVar101);
            auVar111._0_4_ =
                 (((fVar60 * (fVar60 * 0.008333452 + 0.041665796) + 0.16666666) * fVar60 + 0.5) *
                  fVar60 * fVar60 + fVar60 + 1.0) * auVar100._0_4_ + 1.0;
            auVar111._4_4_ =
                 (((fVar82 * (fVar82 * 0.008333452 + 0.041665796) + 0.16666666) * fVar82 + 0.5) *
                  fVar82 * fVar82 + fVar82 + 1.0) * auVar100._4_4_ + 1.0;
            auVar111._8_4_ =
                 (((fVar83 * (fVar83 * 0.008333452 + 0.041665796) + 0.16666666) * fVar83 + 0.5) *
                  fVar83 * fVar83 + fVar83 + 1.0) * auVar100._8_4_ + 1.0;
            auVar111._12_4_ =
                 (((fVar84 * (fVar84 * 0.008333452 + 0.041665796) + 0.16666666) * fVar84 + 0.5) *
                  fVar84 * fVar84 + fVar84 + 1.0) * auVar100._12_4_ + 1.0;
            auVar111._16_4_ =
                 (((fVar85 * (fVar85 * 0.008333452 + 0.041665796) + 0.16666666) * fVar85 + 0.5) *
                  fVar85 * fVar85 + fVar85 + 1.0) * auVar100._16_4_ + 1.0;
            auVar111._20_4_ =
                 (((fVar89 * (fVar89 * 0.008333452 + 0.041665796) + 0.16666666) * fVar89 + 0.5) *
                  fVar89 * fVar89 + fVar89 + 1.0) * auVar100._20_4_ + 1.0;
            auVar111._24_4_ =
                 (((fVar91 * (fVar91 * 0.008333452 + 0.041665796) + 0.16666666) * fVar91 + 0.5) *
                  fVar91 * fVar91 + fVar91 + 1.0) * auVar100._24_4_ + 1.0;
            auVar111._28_4_ =
                 (((fVar93 * (fVar93 * 0.008333452 + 0.041665796) + 0.16666666) * fVar93 + 0.5) *
                  fVar93 * fVar93 + fVar93 + 1.0) * auVar100._28_4_ + 1.0;
            auVar71 = vminps_avx(auVar71,auVar75);
            auVar100 = vrcpps_avx(auVar111);
            auVar71 = vmaxps_avx(auVar71,auVar76);
            auVar116._0_4_ = auVar71._0_4_ * 1.442695 + 0.5;
            auVar116._4_4_ = auVar71._4_4_ * 1.442695 + 0.5;
            auVar116._8_4_ = auVar71._8_4_ * 1.442695 + 0.5;
            auVar116._12_4_ = auVar71._12_4_ * 1.442695 + 0.5;
            auVar116._16_4_ = auVar71._16_4_ * 1.442695 + 0.5;
            auVar116._20_4_ = auVar71._20_4_ * 1.442695 + 0.5;
            auVar116._24_4_ = auVar71._24_4_ * 1.442695 + 0.5;
            auVar116._28_4_ = auVar71._28_4_ * 1.442695 + 0.5;
            auVar117 = vroundps_avx(auVar116,1);
            fVar60 = auVar117._0_4_;
            fVar83 = auVar117._4_4_;
            fVar85 = auVar117._8_4_;
            fVar91 = auVar117._12_4_;
            fVar86 = auVar117._16_4_;
            fVar90 = auVar117._20_4_;
            fVar92 = auVar117._24_4_;
            fVar94 = auVar117._28_4_;
            fVar82 = -(fVar60 * -0.00021219444) + -(fVar60 * 0.6933594) + auVar71._0_4_;
            fVar84 = -(fVar83 * -0.00021219444) + -(fVar83 * 0.6933594) + auVar71._4_4_;
            fVar89 = -(fVar85 * -0.00021219444) + -(fVar85 * 0.6933594) + auVar71._8_4_;
            fVar93 = -(fVar91 * -0.00021219444) + -(fVar91 * 0.6933594) + auVar71._12_4_;
            fVar104 = -(fVar86 * -0.00021219444) + -(fVar86 * 0.6933594) + auVar71._16_4_;
            fVar106 = -(fVar90 * -0.00021219444) + -(fVar90 * 0.6933594) + auVar71._20_4_;
            fVar107 = -(fVar92 * -0.00021219444) + -(fVar92 * 0.6933594) + auVar71._24_4_;
            fVar108 = -(fVar94 * -0.00021219444) + -(fVar94 * 0.6933594) + auVar71._28_4_;
            auVar117._0_4_ = (int)fVar60 + 0x7f;
            auVar117._4_4_ = (int)fVar83 + 0x7f;
            auVar117._8_4_ = (int)fVar85 + 0x7f;
            auVar117._12_4_ = (int)fVar91 + 0x7f;
            auVar117._16_4_ = (int)fVar86 + 0x7f;
            auVar117._20_4_ = (int)fVar90 + 0x7f;
            auVar117._24_4_ = (int)fVar92 + 0x7f;
            auVar117._28_4_ = (int)fVar94 + 0x7f;
            auVar117 = vpslld_avx2(auVar117,0x17);
            auVar121._0_4_ = auVar96._0_4_ * 1.442695 + 0.5;
            auVar121._4_4_ = auVar96._4_4_ * 1.442695 + 0.5;
            auVar121._8_4_ = auVar96._8_4_ * 1.442695 + 0.5;
            auVar121._12_4_ = auVar96._12_4_ * 1.442695 + 0.5;
            auVar121._16_4_ = auVar96._16_4_ * 1.442695 + 0.5;
            auVar121._20_4_ = auVar96._20_4_ * 1.442695 + 0.5;
            auVar121._24_4_ = auVar96._24_4_ * 1.442695 + 0.5;
            auVar121._28_4_ = auVar96._28_4_ * 1.442695 + 0.5;
            auVar71 = vroundps_avx(auVar121,1);
            fVar120 = auVar71._0_4_;
            fVar122 = auVar71._4_4_;
            fVar123 = auVar71._8_4_;
            fVar124 = auVar71._12_4_;
            fVar125 = auVar71._16_4_;
            fVar126 = auVar71._20_4_;
            fVar127 = auVar71._24_4_;
            fVar128 = auVar71._28_4_;
            fVar60 = -(fVar120 * -0.00021219444) + -(fVar120 * 0.6933594) + auVar96._0_4_;
            fVar83 = -(fVar122 * -0.00021219444) + -(fVar122 * 0.6933594) + auVar96._4_4_;
            fVar85 = -(fVar123 * -0.00021219444) + -(fVar123 * 0.6933594) + auVar96._8_4_;
            fVar91 = -(fVar124 * -0.00021219444) + -(fVar124 * 0.6933594) + auVar96._12_4_;
            fVar86 = -(fVar125 * -0.00021219444) + -(fVar125 * 0.6933594) + auVar96._16_4_;
            fVar90 = -(fVar126 * -0.00021219444) + -(fVar126 * 0.6933594) + auVar96._20_4_;
            fVar92 = -(fVar127 * -0.00021219444) + -(fVar127 * 0.6933594) + auVar96._24_4_;
            fVar94 = -(fVar128 * -0.00021219444) + -(fVar128 * 0.6933594) + auVar96._28_4_;
            auVar102._0_4_ =
                 (((fVar82 * (fVar82 * 0.008333452 + 0.041665796) + 0.16666666) * fVar82 + 0.5) *
                  fVar82 * fVar82 + fVar82 + 1.0) * auVar117._0_4_ + 1.0;
            auVar102._4_4_ =
                 (((fVar84 * (fVar84 * 0.008333452 + 0.041665796) + 0.16666666) * fVar84 + 0.5) *
                  fVar84 * fVar84 + fVar84 + 1.0) * auVar117._4_4_ + 1.0;
            auVar102._8_4_ =
                 (((fVar89 * (fVar89 * 0.008333452 + 0.041665796) + 0.16666666) * fVar89 + 0.5) *
                  fVar89 * fVar89 + fVar89 + 1.0) * auVar117._8_4_ + 1.0;
            auVar102._12_4_ =
                 (((fVar93 * (fVar93 * 0.008333452 + 0.041665796) + 0.16666666) * fVar93 + 0.5) *
                  fVar93 * fVar93 + fVar93 + 1.0) * auVar117._12_4_ + 1.0;
            auVar102._16_4_ =
                 (((fVar104 * (fVar104 * 0.008333452 + 0.041665796) + 0.16666666) * fVar104 + 0.5) *
                  fVar104 * fVar104 + fVar104 + 1.0) * auVar117._16_4_ + 1.0;
            auVar102._20_4_ =
                 (((fVar106 * (fVar106 * 0.008333452 + 0.041665796) + 0.16666666) * fVar106 + 0.5) *
                  fVar106 * fVar106 + fVar106 + 1.0) * auVar117._20_4_ + 1.0;
            auVar102._24_4_ =
                 (((fVar107 * (fVar107 * 0.008333452 + 0.041665796) + 0.16666666) * fVar107 + 0.5) *
                  fVar107 * fVar107 + fVar107 + 1.0) * auVar117._24_4_ + 1.0;
            auVar102._28_4_ =
                 (((fVar108 * (fVar108 * 0.008333452 + 0.041665796) + 0.16666666) * fVar108 + 0.5) *
                  fVar108 * fVar108 + fVar108 + 1.0) * auVar117._28_4_ + 1.0;
            auVar96 = vrcpps_avx(auVar102);
            auVar46._0_4_ = (int)fVar120 + 0x7f;
            auVar46._4_4_ = (int)fVar122 + 0x7f;
            auVar46._8_4_ = (int)fVar123 + 0x7f;
            auVar46._12_4_ = (int)fVar124 + 0x7f;
            auVar46._16_4_ = (int)fVar125 + 0x7f;
            auVar46._20_4_ = (int)fVar126 + 0x7f;
            auVar46._24_4_ = (int)fVar127 + 0x7f;
            auVar46._28_4_ = (int)fVar128 + 0x7f;
            auVar71 = vpslld_avx2(auVar46,0x17);
            pfVar59 = (float *)(pauVar51[9] + lVar52);
            pfVar56 = (float *)(pauVar51[-0x6f] + lVar52);
            fVar82 = auVar98._0_4_ * *pfVar59 + *pfVar56;
            fVar84 = auVar98._4_4_ * pfVar59[1] + pfVar56[1];
            fVar89 = auVar98._8_4_ * pfVar59[2] + pfVar56[2];
            fVar93 = auVar98._12_4_ * pfVar59[3] + pfVar56[3];
            fVar104 = auVar98._16_4_ * pfVar59[4] + pfVar56[4];
            fVar106 = auVar98._20_4_ * pfVar59[5] + pfVar56[5];
            fVar107 = auVar98._24_4_ * pfVar59[6] + pfVar56[6];
            fVar108 = auVar98._28_4_ * pfVar59[7] + pfVar56[7];
            auVar72._0_4_ = fVar82 + fVar82;
            auVar72._4_4_ = fVar84 + fVar84;
            auVar72._8_4_ = fVar89 + fVar89;
            auVar72._12_4_ = fVar93 + fVar93;
            auVar72._16_4_ = fVar104 + fVar104;
            auVar72._20_4_ = fVar106 + fVar106;
            auVar72._24_4_ = fVar107 + fVar107;
            auVar72._28_4_ = fVar108 + fVar108;
            auVar118._0_4_ =
                 (((fVar60 * (fVar60 * 0.008333452 + 0.041665796) + 0.16666666) * fVar60 + 0.5) *
                  fVar60 * fVar60 + fVar60 + 1.0) * auVar71._0_4_ + 1.0;
            auVar118._4_4_ =
                 (((fVar83 * (fVar83 * 0.008333452 + 0.041665796) + 0.16666666) * fVar83 + 0.5) *
                  fVar83 * fVar83 + fVar83 + 1.0) * auVar71._4_4_ + 1.0;
            auVar118._8_4_ =
                 (((fVar85 * (fVar85 * 0.008333452 + 0.041665796) + 0.16666666) * fVar85 + 0.5) *
                  fVar85 * fVar85 + fVar85 + 1.0) * auVar71._8_4_ + 1.0;
            auVar118._12_4_ =
                 (((fVar91 * (fVar91 * 0.008333452 + 0.041665796) + 0.16666666) * fVar91 + 0.5) *
                  fVar91 * fVar91 + fVar91 + 1.0) * auVar71._12_4_ + 1.0;
            auVar118._16_4_ =
                 (((fVar86 * (fVar86 * 0.008333452 + 0.041665796) + 0.16666666) * fVar86 + 0.5) *
                  fVar86 * fVar86 + fVar86 + 1.0) * auVar71._16_4_ + 1.0;
            auVar118._20_4_ =
                 (((fVar90 * (fVar90 * 0.008333452 + 0.041665796) + 0.16666666) * fVar90 + 0.5) *
                  fVar90 * fVar90 + fVar90 + 1.0) * auVar71._20_4_ + 1.0;
            auVar118._24_4_ =
                 (((fVar92 * (fVar92 * 0.008333452 + 0.041665796) + 0.16666666) * fVar92 + 0.5) *
                  fVar92 * fVar92 + fVar92 + 1.0) * auVar71._24_4_ + 1.0;
            auVar118._28_4_ =
                 (((fVar94 * (fVar94 * 0.008333452 + 0.041665796) + 0.16666666) * fVar94 + 0.5) *
                  fVar94 * fVar94 + fVar94 + 1.0) * auVar71._28_4_ + 1.0;
            auVar71 = vsubps_avx(auVar112,auVar72);
            auVar98 = vrcpps_avx(auVar118);
            auVar71 = vminps_avx(auVar71,auVar75);
            auVar119._0_4_ = auVar98._0_4_ + auVar98._0_4_ + -1.0;
            auVar119._4_4_ = auVar98._4_4_ + auVar98._4_4_ + -1.0;
            auVar119._8_4_ = auVar98._8_4_ + auVar98._8_4_ + -1.0;
            auVar119._12_4_ = auVar98._12_4_ + auVar98._12_4_ + -1.0;
            auVar119._16_4_ = auVar98._16_4_ + auVar98._16_4_ + -1.0;
            auVar119._20_4_ = auVar98._20_4_ + auVar98._20_4_ + -1.0;
            auVar119._24_4_ = auVar98._24_4_ + auVar98._24_4_ + -1.0;
            auVar119._28_4_ = auVar98._28_4_ + auVar98._28_4_ + -1.0;
            auVar71 = vmaxps_avx(auVar71,auVar76);
            auVar114._0_4_ = auVar71._0_4_ * 1.442695 + 0.5;
            auVar114._4_4_ = auVar71._4_4_ * 1.442695 + 0.5;
            auVar114._8_4_ = auVar71._8_4_ * 1.442695 + 0.5;
            auVar114._12_4_ = auVar71._12_4_ * 1.442695 + 0.5;
            auVar114._16_4_ = auVar71._16_4_ * 1.442695 + 0.5;
            auVar114._20_4_ = auVar71._20_4_ * 1.442695 + 0.5;
            auVar114._24_4_ = auVar71._24_4_ * 1.442695 + 0.5;
            auVar114._28_4_ = auVar71._28_4_ * 1.442695 + 0.5;
            auVar98 = vroundps_avx(auVar114,1);
            fVar86 = auVar98._0_4_;
            fVar104 = auVar98._4_4_;
            fVar90 = auVar98._8_4_;
            fVar106 = auVar98._12_4_;
            fVar92 = auVar98._16_4_;
            fVar107 = auVar98._20_4_;
            fVar94 = auVar98._24_4_;
            fVar108 = auVar98._28_4_;
            fVar60 = -(fVar86 * -0.00021219444) + -(fVar86 * 0.6933594) + auVar71._0_4_;
            fVar82 = -(fVar104 * -0.00021219444) + -(fVar104 * 0.6933594) + auVar71._4_4_;
            fVar83 = -(fVar90 * -0.00021219444) + -(fVar90 * 0.6933594) + auVar71._8_4_;
            fVar84 = -(fVar106 * -0.00021219444) + -(fVar106 * 0.6933594) + auVar71._12_4_;
            fVar85 = -(fVar92 * -0.00021219444) + -(fVar92 * 0.6933594) + auVar71._16_4_;
            fVar89 = -(fVar107 * -0.00021219444) + -(fVar107 * 0.6933594) + auVar71._20_4_;
            fVar91 = -(fVar94 * -0.00021219444) + -(fVar94 * 0.6933594) + auVar71._24_4_;
            fVar93 = -(fVar108 * -0.00021219444) + -(fVar108 * 0.6933594) + auVar71._28_4_;
            auVar112._0_4_ = (int)fVar86 + 0x7f;
            auVar112._4_4_ = (int)fVar104 + 0x7f;
            auVar112._8_4_ = (int)fVar90 + 0x7f;
            auVar112._12_4_ = (int)fVar106 + 0x7f;
            auVar112._16_4_ = (int)fVar92 + 0x7f;
            auVar112._20_4_ = (int)fVar107 + 0x7f;
            auVar112._24_4_ = (int)fVar94 + 0x7f;
            auVar112._28_4_ = (int)fVar108 + 0x7f;
            auVar71 = vpslld_avx2(auVar112,0x17);
            auVar73._0_4_ =
                 (((fVar60 * (fVar60 * 0.008333452 + 0.041665796) + 0.16666666) * fVar60 + 0.5) *
                  fVar60 * fVar60 + fVar60 + 1.0) * auVar71._0_4_ + 1.0;
            auVar73._4_4_ =
                 (((fVar82 * (fVar82 * 0.008333452 + 0.041665796) + 0.16666666) * fVar82 + 0.5) *
                  fVar82 * fVar82 + fVar82 + 1.0) * auVar71._4_4_ + 1.0;
            auVar73._8_4_ =
                 (((fVar83 * (fVar83 * 0.008333452 + 0.041665796) + 0.16666666) * fVar83 + 0.5) *
                  fVar83 * fVar83 + fVar83 + 1.0) * auVar71._8_4_ + 1.0;
            auVar73._12_4_ =
                 (((fVar84 * (fVar84 * 0.008333452 + 0.041665796) + 0.16666666) * fVar84 + 0.5) *
                  fVar84 * fVar84 + fVar84 + 1.0) * auVar71._12_4_ + 1.0;
            auVar73._16_4_ =
                 (((fVar85 * (fVar85 * 0.008333452 + 0.041665796) + 0.16666666) * fVar85 + 0.5) *
                  fVar85 * fVar85 + fVar85 + 1.0) * auVar71._16_4_ + 1.0;
            auVar73._20_4_ =
                 (((fVar89 * (fVar89 * 0.008333452 + 0.041665796) + 0.16666666) * fVar89 + 0.5) *
                  fVar89 * fVar89 + fVar89 + 1.0) * auVar71._20_4_ + 1.0;
            auVar73._24_4_ =
                 (((fVar91 * (fVar91 * 0.008333452 + 0.041665796) + 0.16666666) * fVar91 + 0.5) *
                  fVar91 * fVar91 + fVar91 + 1.0) * auVar71._24_4_ + 1.0;
            auVar73._28_4_ =
                 (((fVar93 * (fVar93 * 0.008333452 + 0.041665796) + 0.16666666) * fVar93 + 0.5) *
                  fVar93 * fVar93 + fVar93 + 1.0) * auVar71._28_4_ + 1.0;
            auVar71 = vrcpps_avx(auVar73);
            auVar74._0_4_ = auVar71._0_4_ + auVar71._0_4_ + -1.0;
            auVar74._4_4_ = auVar71._4_4_ + auVar71._4_4_ + -1.0;
            auVar74._8_4_ = auVar71._8_4_ + auVar71._8_4_ + -1.0;
            auVar74._12_4_ = auVar71._12_4_ + auVar71._12_4_ + -1.0;
            auVar74._16_4_ = auVar71._16_4_ + auVar71._16_4_ + -1.0;
            auVar74._20_4_ = auVar71._20_4_ + auVar71._20_4_ + -1.0;
            auVar74._24_4_ = auVar71._24_4_ + auVar71._24_4_ + -1.0;
            auVar74._28_4_ = auVar71._28_4_ + auVar71._28_4_ + -1.0;
            auVar98 = vsubps_avx(*(undefined1 (*) [32])(lVar55 + lVar52),auVar119);
            auVar71 = *(undefined1 (*) [32])(lVar55 + 0x20 + lVar52);
            pfVar59 = (float *)(lVar55 + lVar52);
            *pfVar59 = auVar98._0_4_ * auVar100._0_4_ + auVar119._0_4_;
            pfVar59[1] = auVar98._4_4_ * auVar100._4_4_ + auVar119._4_4_;
            pfVar59[2] = auVar98._8_4_ * auVar100._8_4_ + auVar119._8_4_;
            pfVar59[3] = auVar98._12_4_ * auVar100._12_4_ + auVar119._12_4_;
            pfVar59[4] = auVar98._16_4_ * auVar100._16_4_ + auVar119._16_4_;
            pfVar59[5] = auVar98._20_4_ * auVar100._20_4_ + auVar119._20_4_;
            pfVar59[6] = auVar98._24_4_ * auVar100._24_4_ + auVar119._24_4_;
            pfVar59[7] = auVar98._28_4_ * auVar100._28_4_ + auVar119._28_4_;
            auVar71 = vsubps_avx(auVar71,auVar74);
            pfVar59 = (float *)(lVar55 + 0x20 + lVar52);
            *pfVar59 = auVar71._0_4_ * auVar96._0_4_ + auVar74._0_4_;
            pfVar59[1] = auVar71._4_4_ * auVar96._4_4_ + auVar74._4_4_;
            pfVar59[2] = auVar71._8_4_ * auVar96._8_4_ + auVar74._8_4_;
            pfVar59[3] = auVar71._12_4_ * auVar96._12_4_ + auVar74._12_4_;
            pfVar59[4] = auVar71._16_4_ * auVar96._16_4_ + auVar74._16_4_;
            pfVar59[5] = auVar71._20_4_ * auVar96._20_4_ + auVar74._20_4_;
            pfVar59[6] = auVar71._24_4_ * auVar96._24_4_ + auVar74._24_4_;
            pfVar59[7] = auVar71._28_4_ * auVar96._28_4_ + auVar74._28_4_;
            lVar52 = lVar52 + 0x40;
          } while (lVar52 != 0x80);
          pauVar51 = pauVar51 + 0xc;
          lVar55 = lVar55 + 0x80;
        } while (param_13 + 0xd0 != pauVar51);
        lVar54 = lVar54 + 0x60;
        lVar58 = lVar58 + 0x200;
      } while (param_12 + 0x200 + (ulong)(uVar57 - 1 >> 2) * 0x200 != lVar58);
    }
    pfVar59 = (float *)(param_8 + (long)(int)uVar57 * 0x18);
    if (uVar48 != 0) {
      uVar1 = 0;
      local_90 = (float *)(param_12 + (long)(int)uVar57 * 0x80);
      pfVar56 = (float *)(param_12 + ((long)(int)param_9 - (long)(int)uVar48) * 0x80);
      do {
        lVar54 = 0;
        pfVar49 = param_1;
        do {
          fVar61 = pfVar49[0xa0] * pfVar59[5] +
                   pfVar49[0x80] * pfVar59[4] +
                   pfVar49[0x60] * pfVar59[3] +
                   pfVar49[0x40] * pfVar59[2] +
                   pfVar59[1] * pfVar49[0x20] + *pfVar49 * *pfVar59 + *(float *)(param_2 + lVar54);
          if (fVar61 < 0.0) {
            fVar61 = *param_3 * fVar61;
          }
          *(float *)(*param_13 + lVar54) = fVar61;
          lVar54 = lVar54 + 4;
          pfVar49 = pfVar49 + 1;
        } while (lVar54 != 0x80);
        lVar54 = 0;
        puVar50 = param_5;
        puVar53 = param_4;
        do {
          auVar87 = vinsertps_avx(ZEXT416(puVar53[0x240]),ZEXT416(puVar53[0x2a0]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar53[0x180]),ZEXT416(puVar53[0x1e0]),0x10);
          auVar2 = vmovlhps_avx(auVar105,auVar87);
          auVar87 = vinsertps_avx(ZEXT416(puVar53[0xc0]),ZEXT416(puVar53[0x120]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(*puVar53),ZEXT416(puVar53[0x60]),0x10);
          auVar87 = vmovlhps_avx(auVar105,auVar87);
          auVar62._0_4_ = auVar87._0_4_ * *(float *)*param_13;
          auVar62._4_4_ = auVar87._4_4_ * *(float *)(*param_13 + 4);
          auVar62._8_4_ = auVar87._8_4_ * *(float *)(*param_13 + 8);
          auVar62._12_4_ = auVar87._12_4_ * *(float *)(*param_13 + 0xc);
          auVar75._16_4_ = auVar2._0_4_ * *(float *)(*param_13 + 0x10);
          auVar75._0_16_ = auVar62;
          auVar75._20_4_ = auVar2._4_4_ * *(float *)(*param_13 + 0x14);
          auVar75._24_4_ = auVar2._8_4_ * *(float *)(*param_13 + 0x18);
          auVar75._28_4_ = auVar2._12_4_ * *(float *)(*param_13 + 0x1c);
          auVar3 = vshufps_avx(auVar62,auVar62,0x55);
          auVar4 = vshufps_avx(auVar62,auVar62,0xff);
          auVar31 = vunpckhps_avx(auVar62,auVar62);
          auVar87 = auVar75._16_16_;
          auVar5 = vshufps_avx(auVar87,auVar87,0x55);
          auVar32 = vunpckhps_avx(auVar87,auVar87);
          auVar6 = vshufps_avx(auVar87,auVar87,0xff);
          auVar87 = vinsertps_avx(ZEXT416(puVar50[0x180]),ZEXT416(puVar50[0x1e0]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar50[0x240]),ZEXT416(puVar50[0x2a0]),0x10);
          auVar2 = vmovlhps_avx(auVar87,auVar105);
          auVar87 = vinsertps_avx(ZEXT416(puVar50[0xc0]),ZEXT416(puVar50[0x120]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(*puVar50),ZEXT416(puVar50[0x60]),0x10);
          auVar87 = vmovlhps_avx(auVar105,auVar87);
          fVar61 = *(float *)(param_7 + lVar54);
          auVar63._0_4_ = auVar87._0_4_ * *pfVar56;
          auVar63._4_4_ = auVar87._4_4_ * pfVar56[1];
          auVar63._8_4_ = auVar87._8_4_ * pfVar56[2];
          auVar63._12_4_ = auVar87._12_4_ * pfVar56[3];
          auVar76._16_4_ = auVar2._0_4_ * pfVar56[4];
          auVar76._0_16_ = auVar63;
          auVar76._20_4_ = auVar2._4_4_ * pfVar56[5];
          auVar76._24_4_ = auVar2._8_4_ * pfVar56[6];
          auVar76._28_4_ = auVar2._12_4_ * pfVar56[7];
          auVar7 = vshufps_avx(auVar63,auVar63,0x55);
          auVar8 = vshufps_avx(auVar63,auVar63,0xff);
          auVar33 = vunpckhps_avx(auVar63,auVar63);
          auVar87 = auVar76._16_16_;
          auVar9 = vshufps_avx(auVar87,auVar87,0x55);
          auVar34 = vunpckhps_avx(auVar87,auVar87);
          auVar10 = vshufps_avx(auVar87,auVar87,0xff);
          auVar87 = vinsertps_avx(ZEXT416(puVar53[0x480]),ZEXT416(puVar53[0x4e0]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar53[0x540]),ZEXT416(puVar53[0x5a0]),0x10);
          auVar2 = vmovlhps_avx(auVar87,auVar105);
          auVar87 = vinsertps_avx(ZEXT416(puVar53[0x3c0]),ZEXT416(puVar53[0x420]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar53[0x300]),ZEXT416(puVar53[0x360]),0x10);
          auVar87 = vmovlhps_avx(auVar105,auVar87);
          auVar64._0_4_ = auVar87._0_4_ * *(float *)param_13[1];
          auVar64._4_4_ = auVar87._4_4_ * *(float *)(param_13[1] + 4);
          auVar64._8_4_ = auVar87._8_4_ * *(float *)(param_13[1] + 8);
          auVar64._12_4_ = auVar87._12_4_ * *(float *)(param_13[1] + 0xc);
          auVar77._16_4_ = auVar2._0_4_ * *(float *)(param_13[1] + 0x10);
          auVar77._0_16_ = auVar64;
          auVar77._20_4_ = auVar2._4_4_ * *(float *)(param_13[1] + 0x14);
          auVar77._24_4_ = auVar2._8_4_ * *(float *)(param_13[1] + 0x18);
          auVar77._28_4_ = auVar2._12_4_ * *(float *)(param_13[1] + 0x1c);
          auVar11 = vshufps_avx(auVar64,auVar64,0x55);
          auVar12 = vshufps_avx(auVar64,auVar64,0xff);
          auVar35 = vunpckhps_avx(auVar64,auVar64);
          auVar87 = auVar77._16_16_;
          auVar13 = vshufps_avx(auVar87,auVar87,0x55);
          auVar36 = vunpckhps_avx(auVar87,auVar87);
          auVar14 = vshufps_avx(auVar87,auVar87,0xff);
          auVar87 = vinsertps_avx(ZEXT416(puVar50[0x540]),ZEXT416(puVar50[0x5a0]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar50[0x480]),ZEXT416(puVar50[0x4e0]),0x10);
          auVar2 = vmovlhps_avx(auVar105,auVar87);
          auVar87 = vinsertps_avx(ZEXT416(puVar50[0x3c0]),ZEXT416(puVar50[0x420]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar50[0x300]),ZEXT416(puVar50[0x360]),0x10);
          auVar87 = vmovlhps_avx(auVar105,auVar87);
          auVar65._0_4_ = auVar87._0_4_ * pfVar56[8];
          auVar65._4_4_ = auVar87._4_4_ * pfVar56[9];
          auVar65._8_4_ = auVar87._8_4_ * pfVar56[10];
          auVar65._12_4_ = auVar87._12_4_ * pfVar56[0xb];
          auVar78._16_4_ = auVar2._0_4_ * pfVar56[0xc];
          auVar78._0_16_ = auVar65;
          auVar78._20_4_ = auVar2._4_4_ * pfVar56[0xd];
          auVar78._24_4_ = auVar2._8_4_ * pfVar56[0xe];
          auVar78._28_4_ = auVar2._12_4_ * pfVar56[0xf];
          auVar15 = vshufps_avx(auVar65,auVar65,0x55);
          auVar16 = vshufps_avx(auVar65,auVar65,0xff);
          auVar37 = vunpckhps_avx(auVar65,auVar65);
          auVar87 = auVar78._16_16_;
          auVar17 = vshufps_avx(auVar87,auVar87,0x55);
          auVar38 = vunpckhps_avx(auVar87,auVar87);
          auVar18 = vshufps_avx(auVar87,auVar87,0xff);
          auVar87 = vinsertps_avx(ZEXT416(puVar53[0x780]),ZEXT416(puVar53[0x7e0]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar53[0x840]),ZEXT416(puVar53[0x8a0]),0x10);
          auVar2 = vmovlhps_avx(auVar87,auVar105);
          auVar87 = vinsertps_avx(ZEXT416(puVar53[0x6c0]),ZEXT416(puVar53[0x720]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar53[0x600]),ZEXT416(puVar53[0x660]),0x10);
          auVar87 = vmovlhps_avx(auVar105,auVar87);
          auVar66._0_4_ = auVar87._0_4_ * *(float *)param_13[2];
          auVar66._4_4_ = auVar87._4_4_ * *(float *)(param_13[2] + 4);
          auVar66._8_4_ = auVar87._8_4_ * *(float *)(param_13[2] + 8);
          auVar66._12_4_ = auVar87._12_4_ * *(float *)(param_13[2] + 0xc);
          auVar79._16_4_ = auVar2._0_4_ * *(float *)(param_13[2] + 0x10);
          auVar79._0_16_ = auVar66;
          auVar79._20_4_ = auVar2._4_4_ * *(float *)(param_13[2] + 0x14);
          auVar79._24_4_ = auVar2._8_4_ * *(float *)(param_13[2] + 0x18);
          auVar79._28_4_ = auVar2._12_4_ * *(float *)(param_13[2] + 0x1c);
          auVar19 = vshufps_avx(auVar66,auVar66,0x55);
          auVar20 = vshufps_avx(auVar66,auVar66,0xff);
          auVar39 = vunpckhps_avx(auVar66,auVar66);
          auVar87 = auVar79._16_16_;
          auVar21 = vshufps_avx(auVar87,auVar87,0x55);
          auVar40 = vunpckhps_avx(auVar87,auVar87);
          auVar22 = vshufps_avx(auVar87,auVar87,0xff);
          auVar87 = vinsertps_avx(ZEXT416(puVar50[0x780]),ZEXT416(puVar50[0x7e0]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar50[0x840]),ZEXT416(puVar50[0x8a0]),0x10);
          auVar2 = vmovlhps_avx(auVar87,auVar105);
          auVar87 = vinsertps_avx(ZEXT416(puVar50[0x6c0]),ZEXT416(puVar50[0x720]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar50[0x600]),ZEXT416(puVar50[0x660]),0x10);
          auVar87 = vmovlhps_avx(auVar105,auVar87);
          auVar67._0_4_ = auVar87._0_4_ * pfVar56[0x10];
          auVar67._4_4_ = auVar87._4_4_ * pfVar56[0x11];
          auVar67._8_4_ = auVar87._8_4_ * pfVar56[0x12];
          auVar67._12_4_ = auVar87._12_4_ * pfVar56[0x13];
          auVar80._16_4_ = auVar2._0_4_ * pfVar56[0x14];
          auVar80._0_16_ = auVar67;
          auVar80._20_4_ = auVar2._4_4_ * pfVar56[0x15];
          auVar80._24_4_ = auVar2._8_4_ * pfVar56[0x16];
          auVar80._28_4_ = auVar2._12_4_ * pfVar56[0x17];
          auVar23 = vshufps_avx(auVar67,auVar67,0x55);
          auVar24 = vshufps_avx(auVar67,auVar67,0xff);
          auVar41 = vunpckhps_avx(auVar67,auVar67);
          auVar87 = auVar80._16_16_;
          auVar25 = vshufps_avx(auVar87,auVar87,0x55);
          auVar42 = vunpckhps_avx(auVar87,auVar87);
          auVar26 = vshufps_avx(auVar87,auVar87,0xff);
          auVar87 = vinsertps_avx(ZEXT416(puVar53[0xb40]),ZEXT416(puVar53[0xba0]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar53[0xa80]),ZEXT416(puVar53[0xae0]),0x10);
          auVar2 = vmovlhps_avx(auVar105,auVar87);
          auVar87 = vinsertps_avx(ZEXT416(puVar53[0x9c0]),ZEXT416(puVar53[0xa20]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar53[0x900]),ZEXT416(puVar53[0x960]),0x10);
          auVar87 = vmovlhps_avx(auVar105,auVar87);
          auVar95._0_4_ = auVar87._0_4_ * *(float *)param_13[3];
          auVar95._4_4_ = auVar87._4_4_ * *(float *)(param_13[3] + 4);
          auVar95._8_4_ = auVar87._8_4_ * *(float *)(param_13[3] + 8);
          auVar95._12_4_ = auVar87._12_4_ * *(float *)(param_13[3] + 0xc);
          auVar103._16_4_ = auVar2._0_4_ * *(float *)(param_13[3] + 0x10);
          auVar103._0_16_ = auVar95;
          auVar103._20_4_ = auVar2._4_4_ * *(float *)(param_13[3] + 0x14);
          auVar103._24_4_ = auVar2._8_4_ * *(float *)(param_13[3] + 0x18);
          auVar103._28_4_ = auVar2._12_4_ * *(float *)(param_13[3] + 0x1c);
          auVar27 = vshufps_avx(auVar95,auVar95,0x55);
          auVar28 = vshufps_avx(auVar95,auVar95,0xff);
          auVar43 = vunpckhps_avx(auVar95,auVar95);
          auVar105 = auVar103._16_16_;
          auVar29 = vshufps_avx(auVar105,auVar105,0x55);
          auVar44 = vunpckhps_avx(auVar105,auVar105);
          auVar87 = vinsertps_avx(ZEXT416(puVar50[0xa80]),ZEXT416(puVar50[0xae0]),0x10);
          auVar30 = vshufps_avx(auVar105,auVar105,0xff);
          auVar105 = vinsertps_avx(ZEXT416(puVar50[0xb40]),ZEXT416(puVar50[0xba0]),0x10);
          auVar2 = vmovlhps_avx(auVar87,auVar105);
          auVar87 = vinsertps_avx(ZEXT416(puVar50[0x9c0]),ZEXT416(puVar50[0xa20]),0x10);
          auVar105 = vinsertps_avx(ZEXT416(puVar50[0x900]),ZEXT416(puVar50[0x960]),0x10);
          auVar87 = vmovlhps_avx(auVar105,auVar87);
          auVar68._0_4_ = auVar87._0_4_ * pfVar56[0x18];
          auVar68._4_4_ = auVar87._4_4_ * pfVar56[0x19];
          auVar68._8_4_ = auVar87._8_4_ * pfVar56[0x1a];
          auVar68._12_4_ = auVar87._12_4_ * pfVar56[0x1b];
          auVar81._16_4_ = auVar2._0_4_ * pfVar56[0x1c];
          auVar81._0_16_ = auVar68;
          auVar81._20_4_ = auVar2._4_4_ * pfVar56[0x1d];
          auVar81._24_4_ = auVar2._8_4_ * pfVar56[0x1e];
          auVar81._28_4_ = auVar2._12_4_ * pfVar56[0x1f];
          auVar87 = vshufps_avx(auVar68,auVar68,0x55);
          auVar105 = vshufps_avx(auVar68,auVar68,0xff);
          auVar45 = vunpckhps_avx(auVar68,auVar68);
          auVar88 = auVar81._16_16_;
          auVar2 = vshufps_avx(auVar88,auVar88,0x55);
          *(float *)(param_13[0x28] + lVar54) =
               auVar44._0_4_ +
               auVar29._0_4_ +
               auVar103._16_4_ +
               auVar28._0_4_ +
               auVar43._0_4_ +
               auVar27._0_4_ +
               auVar40._0_4_ +
               auVar21._0_4_ +
               auVar79._16_4_ +
               auVar20._0_4_ +
               auVar39._0_4_ +
               auVar19._0_4_ +
               auVar66._0_4_ +
               auVar36._0_4_ +
               auVar13._0_4_ +
               auVar77._16_4_ +
               auVar12._0_4_ +
               auVar35._0_4_ +
               auVar11._0_4_ +
               auVar64._0_4_ +
               auVar32._0_4_ +
               *(float *)(param_6 + lVar54) + auVar62._0_4_ + auVar3._0_4_ + auVar31._0_4_ +
               auVar4._0_4_ + auVar75._16_4_ + auVar5._0_4_ + auVar6._0_4_ + auVar14._0_4_ +
               auVar22._0_4_ + auVar95._0_4_ + auVar30._0_4_;
          auVar4 = vunpckhps_avx(auVar88,auVar88);
          auVar3 = vshufps_avx(auVar88,auVar88,0xff);
          *(float *)(param_13[0xa0] + lVar54) =
               auVar4._0_4_ +
               auVar2._0_4_ +
               auVar81._16_4_ +
               auVar105._0_4_ +
               auVar45._0_4_ +
               auVar87._0_4_ +
               auVar42._0_4_ +
               auVar25._0_4_ +
               auVar80._16_4_ +
               auVar24._0_4_ +
               auVar41._0_4_ +
               auVar23._0_4_ +
               auVar67._0_4_ +
               auVar38._0_4_ +
               auVar17._0_4_ +
               auVar78._16_4_ +
               auVar16._0_4_ +
               auVar37._0_4_ +
               auVar15._0_4_ +
               auVar65._0_4_ +
               auVar34._0_4_ +
               auVar9._0_4_ +
               auVar76._16_4_ + auVar8._0_4_ + auVar33._0_4_ + auVar7._0_4_ + fVar61 + auVar63._0_4_
               + auVar10._0_4_ + auVar18._0_4_ + auVar26._0_4_ + auVar68._0_4_ + auVar3._0_4_;
          lVar54 = lVar54 + 4;
          puVar50 = puVar50 + 1;
          puVar53 = puVar53 + 1;
          pfVar49 = local_90;
          pauVar51 = param_13 + 0x28;
        } while (lVar54 != 0x180);
        do {
          fVar61 = *(float *)*pauVar51 + *(float *)pauVar51[0x78];
          if (fVar61 < 0.0) {
            fVar61 = expf(fVar61);
            fVar61 = fVar61 / (fVar61 + 1.0);
          }
          else {
            fVar61 = expf(-fVar61);
            fVar61 = 1.0 / (fVar61 + 1.0);
          }
          fVar60 = *(float *)pauVar51[4] + *(float *)pauVar51[0x7c];
          if (0.0 <= fVar60) {
            fVar60 = expf(-fVar60);
            fVar60 = 1.0 / (fVar60 + 1.0);
          }
          else {
            fVar60 = expf(fVar60);
            fVar60 = fVar60 / (fVar60 + 1.0);
          }
          puVar47 = *pauVar51;
          fVar61 = tanhf(fVar61 * *(float *)pauVar51[0x80] + *(float *)pauVar51[8]);
          *pfVar49 = (*pfVar49 - fVar61) * fVar60 + fVar61;
          pfVar49 = pfVar49 + 1;
          pauVar51 = (undefined1 (*) [32])(puVar47 + 4);
        } while ((undefined1 (*) [32])(puVar47 + 4) != param_13 + 0x2c);
        uVar1 = uVar1 + 1;
        pfVar56 = pfVar56 + 0x20;
        pfVar59 = pfVar59 + 6;
        local_90 = local_90 + 0x20;
      } while (uVar48 != uVar1);
    }
  }
  return;
}

