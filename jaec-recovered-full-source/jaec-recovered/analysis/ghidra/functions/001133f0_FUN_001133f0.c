
/* 001133f0 FUN_001133f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001133f0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 int *param_7,long param_8,long param_9,long param_10,undefined1 (*param_11) [32])

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  long lVar66;
  undefined1 (*pauVar67) [32];
  float fVar68;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar69 [32];
  float fVar84;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  float fVar85;
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  float fVar92;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  float fVar107;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  float fVar135;
  undefined1 auVar136 [32];
  float fVar137;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  undefined1 auVar138 [32];
  float fVar145;
  undefined1 auVar146 [32];
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  
  auVar65 = _DAT_0011a720;
  auVar64 = _DAT_0011a600;
  lVar66 = 0;
  pauVar67 = param_11;
  do {
    auVar88 = *(undefined1 (*) [32])(param_1 + lVar66 * 8);
    auVar94 = vperm2f128_avx(auVar88,*(undefined1 (*) [32])(param_1 + 0x20 + lVar66 * 8),0x31);
    auVar69._16_16_ = *(undefined1 (*) [16])(param_1 + 0x20 + lVar66 * 8);
    auVar69._0_16_ = auVar88._0_16_;
    auVar88 = *(undefined1 (*) [32])(param_2 + lVar66 * 8);
    auVar138._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + lVar66 * 8);
    auVar138._0_16_ = auVar88._0_16_;
    auVar22 = vshufps_avx(auVar69,auVar94,0x88);
    auVar94 = vshufps_avx(auVar69,auVar94,0xdd);
    auVar23 = vperm2f128_avx(auVar88,*(undefined1 (*) [32])(param_2 + 0x20 + lVar66 * 8),0x31);
    *(undefined1 (*) [32])(param_3 + (param_7[3] + lVar66) * 4) = auVar22;
    auVar88 = vshufps_avx(auVar138,auVar23,0x88);
    auVar23 = vshufps_avx(auVar138,auVar23,0xdd);
    *(undefined1 (*) [32])(param_4 + (param_7[3] + lVar66) * 4) = auVar94;
    pfVar1 = (float *)(param_3 + (*param_7 + lVar66) * 4);
    fVar92 = *pfVar1;
    fVar100 = pfVar1[1];
    fVar101 = pfVar1[2];
    fVar102 = pfVar1[3];
    fVar103 = pfVar1[4];
    fVar104 = pfVar1[5];
    fVar105 = pfVar1[6];
    fVar106 = pfVar1[7];
    pfVar1 = (float *)(param_4 + (*param_7 + lVar66) * 4);
    fVar24 = *pfVar1;
    fVar25 = pfVar1[1];
    fVar26 = pfVar1[2];
    fVar27 = pfVar1[3];
    fVar28 = pfVar1[4];
    fVar29 = pfVar1[5];
    fVar30 = pfVar1[6];
    fVar31 = pfVar1[7];
    pfVar1 = (float *)(param_5 + lVar66 * 4);
    pfVar2 = (float *)(param_6 + lVar66 * 4);
    pfVar3 = (float *)(param_6 + lVar66 * 4);
    pfVar4 = (float *)(param_3 + (param_7[1] + lVar66) * 4);
    fVar32 = *pfVar4;
    fVar33 = pfVar4[1];
    fVar34 = pfVar4[2];
    fVar35 = pfVar4[3];
    fVar36 = pfVar4[4];
    fVar37 = pfVar4[5];
    fVar38 = pfVar4[6];
    fVar39 = pfVar4[7];
    pfVar4 = (float *)(param_4 + (param_7[1] + lVar66) * 4);
    fVar40 = *pfVar4;
    fVar41 = pfVar4[1];
    fVar42 = pfVar4[2];
    fVar43 = pfVar4[3];
    fVar44 = pfVar4[4];
    fVar45 = pfVar4[5];
    fVar46 = pfVar4[6];
    fVar47 = pfVar4[7];
    pfVar6 = (float *)(param_5 + 0x420 + lVar66 * 4);
    pfVar7 = (float *)(param_6 + 0x420 + lVar66 * 4);
    pfVar4 = (float *)(param_5 + lVar66 * 4);
    pfVar5 = (float *)(param_3 + (param_7[2] + lVar66) * 4);
    fVar48 = *pfVar5;
    fVar49 = pfVar5[1];
    fVar50 = pfVar5[2];
    fVar51 = pfVar5[3];
    fVar52 = pfVar5[4];
    fVar53 = pfVar5[5];
    fVar54 = pfVar5[6];
    fVar55 = pfVar5[7];
    pfVar5 = (float *)(param_4 + (param_7[2] + lVar66) * 4);
    fVar56 = *pfVar5;
    fVar57 = pfVar5[1];
    fVar58 = pfVar5[2];
    fVar59 = pfVar5[3];
    fVar60 = pfVar5[4];
    fVar61 = pfVar5[5];
    fVar62 = pfVar5[6];
    fVar63 = pfVar5[7];
    fVar85 = auVar22._0_4_;
    fVar147 = auVar88._0_4_;
    fVar11 = auVar22._4_4_;
    fVar148 = auVar88._4_4_;
    fVar12 = auVar22._8_4_;
    fVar149 = auVar88._8_4_;
    fVar13 = auVar22._12_4_;
    fVar150 = auVar88._12_4_;
    fVar14 = auVar22._16_4_;
    fVar151 = auVar88._16_4_;
    fVar15 = auVar22._20_4_;
    fVar152 = auVar88._20_4_;
    fVar16 = auVar22._24_4_;
    fVar153 = auVar88._24_4_;
    fVar135 = auVar22._28_4_;
    fVar154 = auVar88._28_4_;
    pfVar5 = (float *)(param_5 + 0x840 + lVar66 * 4);
    pfVar8 = (float *)(param_6 + 0x840 + lVar66 * 4);
    pfVar9 = (float *)(param_5 + 0xc60 + lVar66 * 4);
    pfVar10 = (float *)(param_6 + 0xc60 + lVar66 * 4);
    fVar68 = auVar94._0_4_;
    auVar118._0_4_ =
         -(fVar68 * *pfVar10) +
         fVar85 * *pfVar9 +
         -(fVar56 * *pfVar8) +
         fVar48 * *pfVar5 +
         -(fVar40 * *pfVar7) + fVar32 * *pfVar6 + -(fVar24 * *pfVar2) + fVar92 * *pfVar1;
    fVar78 = auVar94._4_4_;
    auVar118._4_4_ =
         -(fVar78 * pfVar10[1]) +
         fVar11 * pfVar9[1] +
         -(fVar57 * pfVar8[1]) +
         fVar49 * pfVar5[1] +
         -(fVar41 * pfVar7[1]) + fVar33 * pfVar6[1] + -(fVar25 * pfVar2[1]) + fVar100 * pfVar1[1];
    fVar79 = auVar94._8_4_;
    auVar118._8_4_ =
         -(fVar79 * pfVar10[2]) +
         fVar12 * pfVar9[2] +
         -(fVar58 * pfVar8[2]) +
         fVar50 * pfVar5[2] +
         -(fVar42 * pfVar7[2]) + fVar34 * pfVar6[2] + -(fVar26 * pfVar2[2]) + fVar101 * pfVar1[2];
    fVar80 = auVar94._12_4_;
    auVar118._12_4_ =
         -(fVar80 * pfVar10[3]) +
         fVar13 * pfVar9[3] +
         -(fVar59 * pfVar8[3]) +
         fVar51 * pfVar5[3] +
         -(fVar43 * pfVar7[3]) + fVar35 * pfVar6[3] + -(fVar27 * pfVar2[3]) + fVar102 * pfVar1[3];
    fVar81 = auVar94._16_4_;
    auVar118._16_4_ =
         -(fVar81 * pfVar10[4]) +
         fVar14 * pfVar9[4] +
         -(fVar60 * pfVar8[4]) +
         fVar52 * pfVar5[4] +
         -(fVar44 * pfVar7[4]) + fVar36 * pfVar6[4] + -(fVar28 * pfVar2[4]) + fVar103 * pfVar1[4];
    fVar82 = auVar94._20_4_;
    auVar118._20_4_ =
         -(fVar82 * pfVar10[5]) +
         fVar15 * pfVar9[5] +
         -(fVar61 * pfVar8[5]) +
         fVar53 * pfVar5[5] +
         -(fVar45 * pfVar7[5]) + fVar37 * pfVar6[5] + -(fVar29 * pfVar2[5]) + fVar104 * pfVar1[5];
    fVar83 = auVar94._24_4_;
    auVar118._24_4_ =
         -(fVar83 * pfVar10[6]) +
         fVar16 * pfVar9[6] +
         -(fVar62 * pfVar8[6]) +
         fVar54 * pfVar5[6] +
         -(fVar46 * pfVar7[6]) + fVar38 * pfVar6[6] + -(fVar30 * pfVar2[6]) + fVar105 * pfVar1[6];
    fVar84 = auVar94._28_4_;
    auVar118._28_4_ =
         -(fVar84 * pfVar10[7]) +
         fVar135 * pfVar9[7] +
         -(fVar63 * pfVar8[7]) +
         fVar55 * pfVar5[7] +
         -(fVar47 * pfVar7[7]) + fVar39 * pfVar6[7] + -(fVar31 * pfVar2[7]) + fVar106 * pfVar1[7];
    pfVar1 = (float *)(param_6 + 0x420 + lVar66 * 4);
    fVar137 = auVar23._0_4_;
    auVar146._0_4_ = fVar68 * fVar137 + fVar147 * fVar85;
    fVar139 = auVar23._4_4_;
    auVar146._4_4_ = fVar78 * fVar139 + fVar148 * fVar11;
    fVar140 = auVar23._8_4_;
    auVar146._8_4_ = fVar79 * fVar140 + fVar149 * fVar12;
    fVar141 = auVar23._12_4_;
    auVar146._12_4_ = fVar80 * fVar141 + fVar150 * fVar13;
    fVar142 = auVar23._16_4_;
    auVar146._16_4_ = fVar81 * fVar142 + fVar151 * fVar14;
    fVar143 = auVar23._20_4_;
    auVar146._20_4_ = fVar82 * fVar143 + fVar152 * fVar15;
    fVar144 = auVar23._24_4_;
    auVar146._24_4_ = fVar83 * fVar144 + fVar153 * fVar16;
    fVar145 = auVar23._28_4_;
    auVar146._28_4_ = fVar84 * fVar145 + fVar154 * fVar135;
    auVar94 = vsubps_avx(auVar88,auVar118);
    pfVar2 = (float *)(param_5 + 0x420 + lVar66 * 4);
    pfVar5 = (float *)(param_6 + 0x840 + lVar66 * 4);
    pfVar6 = (float *)(param_5 + 0x840 + lVar66 * 4);
    pfVar7 = (float *)(param_6 + 0xc60 + lVar66 * 4);
    fVar107 = fVar137 * fVar137 + fVar147 * fVar147;
    fVar111 = fVar139 * fVar139 + fVar148 * fVar148;
    fVar112 = fVar140 * fVar140 + fVar149 * fVar149;
    fVar113 = fVar141 * fVar141 + fVar150 * fVar150;
    fVar114 = fVar142 * fVar142 + fVar151 * fVar151;
    fVar115 = fVar143 * fVar143 + fVar152 * fVar152;
    fVar116 = fVar144 * fVar144 + fVar153 * fVar153;
    fVar117 = fVar145 * fVar145 + fVar154 * fVar154;
    pfVar8 = (float *)(param_5 + 0xc60 + lVar66 * 4);
    auVar86._0_4_ =
         fVar68 * *pfVar8 +
         fVar85 * *pfVar7 +
         fVar56 * *pfVar6 +
         fVar48 * *pfVar5 +
         fVar40 * *pfVar2 + fVar32 * *pfVar1 + fVar24 * *pfVar4 + fVar92 * *pfVar3;
    auVar86._4_4_ =
         fVar78 * pfVar8[1] +
         fVar11 * pfVar7[1] +
         fVar57 * pfVar6[1] +
         fVar49 * pfVar5[1] +
         fVar41 * pfVar2[1] + fVar33 * pfVar1[1] + fVar25 * pfVar4[1] + fVar100 * pfVar3[1];
    auVar86._8_4_ =
         fVar79 * pfVar8[2] +
         fVar12 * pfVar7[2] +
         fVar58 * pfVar6[2] +
         fVar50 * pfVar5[2] +
         fVar42 * pfVar2[2] + fVar34 * pfVar1[2] + fVar26 * pfVar4[2] + fVar101 * pfVar3[2];
    auVar86._12_4_ =
         fVar80 * pfVar8[3] +
         fVar13 * pfVar7[3] +
         fVar59 * pfVar6[3] +
         fVar51 * pfVar5[3] +
         fVar43 * pfVar2[3] + fVar35 * pfVar1[3] + fVar27 * pfVar4[3] + fVar102 * pfVar3[3];
    auVar86._16_4_ =
         fVar81 * pfVar8[4] +
         fVar14 * pfVar7[4] +
         fVar60 * pfVar6[4] +
         fVar52 * pfVar5[4] +
         fVar44 * pfVar2[4] + fVar36 * pfVar1[4] + fVar28 * pfVar4[4] + fVar103 * pfVar3[4];
    auVar86._20_4_ =
         fVar82 * pfVar8[5] +
         fVar15 * pfVar7[5] +
         fVar61 * pfVar6[5] +
         fVar53 * pfVar5[5] +
         fVar45 * pfVar2[5] + fVar37 * pfVar1[5] + fVar29 * pfVar4[5] + fVar104 * pfVar3[5];
    auVar86._24_4_ =
         fVar83 * pfVar8[6] +
         fVar16 * pfVar7[6] +
         fVar62 * pfVar6[6] +
         fVar54 * pfVar5[6] +
         fVar46 * pfVar2[6] + fVar38 * pfVar1[6] + fVar30 * pfVar4[6] + fVar105 * pfVar3[6];
    auVar86._28_4_ =
         fVar84 * pfVar8[7] +
         fVar135 * pfVar7[7] +
         fVar63 * pfVar6[7] +
         fVar55 * pfVar5[7] +
         fVar47 * pfVar2[7] + fVar39 * pfVar1[7] + fVar31 * pfVar4[7] + fVar106 * pfVar3[7];
    *(undefined1 (*) [32])(param_8 + lVar66 * 4) = auVar94;
    auVar69 = _DAT_0011a740;
    fVar124 = auVar65._0_4_;
    auVar132._0_4_ = (fVar68 * fVar68 + fVar85 * fVar85) * fVar107 + fVar124;
    fVar125 = auVar65._4_4_;
    auVar132._4_4_ = (fVar78 * fVar78 + fVar11 * fVar11) * fVar111 + fVar125;
    fVar126 = auVar65._8_4_;
    auVar132._8_4_ = (fVar79 * fVar79 + fVar12 * fVar12) * fVar112 + fVar126;
    fVar127 = auVar65._12_4_;
    auVar132._12_4_ = (fVar80 * fVar80 + fVar13 * fVar13) * fVar113 + fVar127;
    fVar128 = auVar65._16_4_;
    auVar132._16_4_ = (fVar81 * fVar81 + fVar14 * fVar14) * fVar114 + fVar128;
    fVar129 = auVar65._20_4_;
    auVar132._20_4_ = (fVar82 * fVar82 + fVar15 * fVar15) * fVar115 + fVar129;
    fVar130 = auVar65._24_4_;
    auVar132._24_4_ = (fVar83 * fVar83 + fVar16 * fVar16) * fVar116 + fVar130;
    fVar131 = auVar65._28_4_;
    auVar132._28_4_ = (fVar84 * fVar84 + fVar135 * fVar135) * fVar117 + fVar131;
    auVar108._0_4_ = fVar107 + fVar124;
    auVar108._4_4_ = fVar111 + fVar125;
    auVar108._8_4_ = fVar112 + fVar126;
    auVar108._12_4_ = fVar113 + fVar127;
    auVar108._16_4_ = fVar114 + fVar128;
    auVar108._20_4_ = fVar115 + fVar129;
    auVar108._24_4_ = fVar116 + fVar130;
    auVar108._28_4_ = fVar117 + fVar131;
    auVar23 = vsubps_avx(auVar23,auVar86);
    fVar92 = fVar68 * fVar68 +
             fVar85 * fVar85 +
             fVar56 * fVar56 +
             fVar48 * fVar48 + fVar40 * fVar40 + fVar32 * fVar32 + fVar24 * fVar24 + fVar92 * fVar92
    ;
    fVar100 = fVar78 * fVar78 +
              fVar11 * fVar11 +
              fVar57 * fVar57 +
              fVar49 * fVar49 +
              fVar41 * fVar41 + fVar33 * fVar33 + fVar25 * fVar25 + fVar100 * fVar100;
    fVar101 = fVar79 * fVar79 +
              fVar12 * fVar12 +
              fVar58 * fVar58 +
              fVar50 * fVar50 +
              fVar42 * fVar42 + fVar34 * fVar34 + fVar26 * fVar26 + fVar101 * fVar101;
    fVar102 = fVar80 * fVar80 +
              fVar13 * fVar13 +
              fVar59 * fVar59 +
              fVar51 * fVar51 +
              fVar43 * fVar43 + fVar35 * fVar35 + fVar27 * fVar27 + fVar102 * fVar102;
    fVar103 = fVar81 * fVar81 +
              fVar14 * fVar14 +
              fVar60 * fVar60 +
              fVar52 * fVar52 +
              fVar44 * fVar44 + fVar36 * fVar36 + fVar28 * fVar28 + fVar103 * fVar103;
    fVar104 = fVar82 * fVar82 +
              fVar15 * fVar15 +
              fVar61 * fVar61 +
              fVar53 * fVar53 +
              fVar45 * fVar45 + fVar37 * fVar37 + fVar29 * fVar29 + fVar104 * fVar104;
    fVar105 = fVar83 * fVar83 +
              fVar16 * fVar16 +
              fVar62 * fVar62 +
              fVar54 * fVar54 +
              fVar46 * fVar46 + fVar38 * fVar38 + fVar30 * fVar30 + fVar105 * fVar105;
    fVar106 = fVar84 * fVar84 +
              fVar135 * fVar135 +
              fVar63 * fVar63 +
              fVar55 * fVar55 +
              fVar47 * fVar47 + fVar39 * fVar39 + fVar31 * fVar31 + fVar106 * fVar106;
    *(undefined1 (*) [32])(param_9 + lVar66 * 4) = auVar23;
    auVar70 = _DAT_0011a740;
    auVar88 = vsqrtps_avx(auVar132);
    auVar119._0_4_ = -(fVar68 * fVar147) + fVar137 * fVar85;
    auVar119._4_4_ = -(fVar78 * fVar148) + fVar139 * fVar11;
    auVar119._8_4_ = -(fVar79 * fVar149) + fVar140 * fVar12;
    auVar119._12_4_ = -(fVar80 * fVar150) + fVar141 * fVar13;
    auVar119._16_4_ = -(fVar81 * fVar151) + fVar142 * fVar14;
    auVar119._20_4_ = -(fVar82 * fVar152) + fVar143 * fVar15;
    auVar119._24_4_ = -(fVar83 * fVar153) + fVar144 * fVar16;
    auVar119._28_4_ = -(fVar84 * fVar154) + fVar145 * fVar135;
    auVar87._0_4_ = auVar86._0_4_ * auVar86._0_4_ + auVar118._0_4_ * auVar118._0_4_ + fVar124;
    auVar87._4_4_ = auVar86._4_4_ * auVar86._4_4_ + auVar118._4_4_ * auVar118._4_4_ + fVar125;
    auVar87._8_4_ = auVar86._8_4_ * auVar86._8_4_ + auVar118._8_4_ * auVar118._8_4_ + fVar126;
    auVar87._12_4_ = auVar86._12_4_ * auVar86._12_4_ + auVar118._12_4_ * auVar118._12_4_ + fVar127;
    auVar87._16_4_ = auVar86._16_4_ * auVar86._16_4_ + auVar118._16_4_ * auVar118._16_4_ + fVar128;
    auVar87._20_4_ = auVar86._20_4_ * auVar86._20_4_ + auVar118._20_4_ * auVar118._20_4_ + fVar129;
    auVar87._24_4_ = auVar86._24_4_ * auVar86._24_4_ + auVar118._24_4_ * auVar118._24_4_ + fVar130;
    auVar87._28_4_ = auVar86._28_4_ * auVar86._28_4_ + auVar118._28_4_ * auVar118._28_4_ + fVar131;
    auVar22 = vmaxps_avx(auVar88,auVar65);
    pfVar1 = (float *)(param_10 + lVar66 * 4);
    *pfVar1 = fVar92;
    pfVar1[1] = fVar100;
    pfVar1[2] = fVar101;
    pfVar1[3] = fVar102;
    pfVar1[4] = fVar103;
    pfVar1[5] = fVar104;
    pfVar1[6] = fVar105;
    pfVar1[7] = fVar106;
    auVar93._0_4_ = fVar92 + fVar124;
    auVar93._4_4_ = fVar100 + fVar125;
    auVar93._8_4_ = fVar101 + fVar126;
    auVar93._12_4_ = fVar102 + fVar127;
    auVar93._16_4_ = fVar103 + fVar128;
    auVar93._20_4_ = fVar104 + fVar129;
    auVar93._24_4_ = fVar105 + fVar130;
    auVar93._28_4_ = fVar106 + fVar131;
    lVar66 = lVar66 + 8;
    auVar91._0_4_ = auVar23._0_4_ * auVar23._0_4_ + auVar94._0_4_ * auVar94._0_4_ + fVar124;
    auVar91._4_4_ = auVar23._4_4_ * auVar23._4_4_ + auVar94._4_4_ * auVar94._4_4_ + fVar125;
    auVar91._8_4_ = auVar23._8_4_ * auVar23._8_4_ + auVar94._8_4_ * auVar94._8_4_ + fVar126;
    auVar91._12_4_ = auVar23._12_4_ * auVar23._12_4_ + auVar94._12_4_ * auVar94._12_4_ + fVar127;
    auVar91._16_4_ = auVar23._16_4_ * auVar23._16_4_ + auVar94._16_4_ * auVar94._16_4_ + fVar128;
    auVar91._20_4_ = auVar23._20_4_ * auVar23._20_4_ + auVar94._20_4_ * auVar94._20_4_ + fVar129;
    auVar91._24_4_ = auVar23._24_4_ * auVar23._24_4_ + auVar94._24_4_ * auVar94._24_4_ + fVar130;
    auVar91._28_4_ = auVar23._28_4_ * auVar23._28_4_ + auVar94._28_4_ * auVar94._28_4_ + fVar131;
    auVar88 = vdivps_avx(auVar119,auVar22);
    auVar22 = vdivps_avx(auVar146,auVar22);
    auVar94 = vmaxps_avx(auVar93,_DAT_0011a780);
    auVar119 = vpsrld_avx2(auVar94,0x17);
    auVar133._0_8_ = auVar94._0_8_ & 0x7fffff007fffff;
    auVar133._8_4_ = auVar94._8_4_ & 0x7fffff;
    auVar133._12_4_ = auVar94._12_4_ & 0x7fffff;
    auVar133._16_4_ = auVar94._16_4_ & 0x7fffff;
    auVar133._20_4_ = auVar94._20_4_ & 0x7fffff;
    auVar133._24_4_ = auVar94._24_4_ & 0x7fffff;
    auVar133._28_4_ = auVar94._28_4_ & 0x7fffff;
    auVar23._0_4_ = auVar119._0_4_ + -0x7f;
    auVar23._4_4_ = auVar119._4_4_ + -0x7f;
    auVar23._8_4_ = auVar119._8_4_ + -0x7f;
    auVar23._12_4_ = auVar119._12_4_ + -0x7f;
    auVar23._16_4_ = auVar119._16_4_ + -0x7f;
    auVar23._20_4_ = auVar119._20_4_ + -0x7f;
    auVar23._24_4_ = auVar119._24_4_ + -0x7f;
    auVar23._28_4_ = auVar119._28_4_ + -0x7f;
    auVar94 = vmaxps_avx(auVar69,auVar88);
    auVar133 = auVar133 | auVar64;
    auVar88 = vcvtdq2ps_avx(auVar23);
    auVar120._0_4_ = auVar88._0_4_ + 1.0;
    auVar120._4_4_ = auVar88._4_4_ + 1.0;
    auVar120._8_4_ = auVar88._8_4_ + 1.0;
    auVar120._12_4_ = auVar88._12_4_ + 1.0;
    auVar120._16_4_ = auVar88._16_4_ + 1.0;
    auVar120._20_4_ = auVar88._20_4_ + 1.0;
    auVar120._24_4_ = auVar88._24_4_ + 1.0;
    auVar120._28_4_ = auVar88._28_4_ + 1.0;
    auVar88 = vmaxps_avx(auVar70,auVar22);
    auVar22 = vminps_avx(_DAT_0011a760,auVar94);
    auVar94 = vminps_avx(_DAT_0011a760,auVar88);
    *(undefined1 (*) [32])(pauVar67[0xa0] + 0x14) = auVar22;
    auVar88 = vcmpps_avx(auVar133,_DAT_0011a7e0,0x11);
    *(undefined1 (*) [32])(pauVar67[0x80] + 0x10) = auVar94;
    auVar70._0_8_ = auVar88._0_8_ & 0x3f8000003f800000;
    auVar70._8_4_ = auVar88._8_4_ & 0x3f800000;
    auVar70._12_4_ = auVar88._12_4_ & 0x3f800000;
    auVar70._16_4_ = auVar88._16_4_ & 0x3f800000;
    auVar70._20_4_ = auVar88._20_4_ & 0x3f800000;
    auVar70._24_4_ = auVar88._24_4_ & 0x3f800000;
    auVar70._28_4_ = auVar88._28_4_ & 0x3f800000;
    auVar22 = vsubps_avx(auVar120,auVar70);
    fVar92 = auVar133._0_4_ + -1.0 + (float)((uint)auVar133._0_4_ & auVar88._0_4_);
    fVar100 = auVar133._4_4_ + -1.0 + (float)((uint)auVar133._4_4_ & auVar88._4_4_);
    fVar101 = auVar133._8_4_ + -1.0 + (float)((uint)auVar133._8_4_ & auVar88._8_4_);
    fVar102 = auVar133._12_4_ + -1.0 + (float)((uint)auVar133._12_4_ & auVar88._12_4_);
    fVar103 = auVar133._16_4_ + -1.0 + (float)((uint)auVar133._16_4_ & auVar88._16_4_);
    fVar104 = auVar133._20_4_ + -1.0 + (float)((uint)auVar133._20_4_ & auVar88._20_4_);
    fVar105 = auVar133._24_4_ + -1.0 + (float)((uint)auVar133._24_4_ & auVar88._24_4_);
    fVar106 = auVar133._28_4_ + -1.0 + (float)((uint)auVar133._28_4_ & auVar88._28_4_);
    fVar85 = auVar64._0_4_;
    auVar136._0_4_ = fVar92 * fVar92 * fVar85;
    fVar11 = auVar64._4_4_;
    auVar136._4_4_ = fVar100 * fVar100 * fVar11;
    fVar12 = auVar64._8_4_;
    auVar136._8_4_ = fVar101 * fVar101 * fVar12;
    fVar13 = auVar64._12_4_;
    auVar136._12_4_ = fVar102 * fVar102 * fVar13;
    fVar14 = auVar64._16_4_;
    auVar136._16_4_ = fVar103 * fVar103 * fVar14;
    fVar15 = auVar64._20_4_;
    auVar136._20_4_ = fVar104 * fVar104 * fVar15;
    fVar16 = auVar64._24_4_;
    auVar136._24_4_ = fVar105 * fVar105 * fVar16;
    fVar135 = auVar64._28_4_;
    auVar136._28_4_ = fVar106 * fVar106 * fVar135;
    auVar71._0_4_ =
         auVar22._0_4_ * -0.00021219444 +
         fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * 
                                                  0.070376836 + -0.1151461) + 0.116769984) +
                                                  -0.12420141) + 0.14249323) + -0.16668057) +
                                      0.20000714) + -0.24999994) + 0.3333333) * fVar92 * fVar92;
    auVar71._4_4_ =
         auVar22._4_4_ * -0.00021219444 +
         fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (
                                                  fVar100 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar100 * fVar100
    ;
    auVar71._8_4_ =
         auVar22._8_4_ * -0.00021219444 +
         fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (
                                                  fVar101 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar101 * fVar101
    ;
    auVar71._12_4_ =
         auVar22._12_4_ * -0.00021219444 +
         fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (
                                                  fVar102 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar102 * fVar102
    ;
    auVar71._16_4_ =
         auVar22._16_4_ * -0.00021219444 +
         fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (
                                                  fVar103 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar103 * fVar103
    ;
    auVar71._20_4_ =
         auVar22._20_4_ * -0.00021219444 +
         fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (
                                                  fVar104 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar104 * fVar104
    ;
    auVar71._24_4_ =
         auVar22._24_4_ * -0.00021219444 +
         fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (
                                                  fVar105 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar105 * fVar105
    ;
    auVar71._28_4_ =
         auVar22._28_4_ * -0.00021219444 +
         fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (
                                                  fVar106 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar106 * fVar106
    ;
    auVar88 = vsubps_avx(auVar71,auVar136);
    auVar121._0_4_ = auVar22._0_4_ * 0.6933594 + auVar88._0_4_ + fVar92;
    auVar121._4_4_ = auVar22._4_4_ * 0.6933594 + auVar88._4_4_ + fVar100;
    auVar121._8_4_ = auVar22._8_4_ * 0.6933594 + auVar88._8_4_ + fVar101;
    auVar121._12_4_ = auVar22._12_4_ * 0.6933594 + auVar88._12_4_ + fVar102;
    auVar121._16_4_ = auVar22._16_4_ * 0.6933594 + auVar88._16_4_ + fVar103;
    auVar121._20_4_ = auVar22._20_4_ * 0.6933594 + auVar88._20_4_ + fVar104;
    auVar121._24_4_ = auVar22._24_4_ * 0.6933594 + auVar88._24_4_ + fVar105;
    auVar121._28_4_ = auVar22._28_4_ * 0.6933594 + auVar88._28_4_ + fVar106;
    auVar88 = vcmpps_avx(auVar93,_DAT_0011a920,0x12);
    auVar88 = vblendvps_avx(auVar93,auVar121,auVar88);
    auVar22 = vmaxps_avx(auVar108,_DAT_0011a780);
    *pauVar67 = auVar88;
    auVar94 = vpsrld_avx2(auVar22,0x17);
    auVar122._0_8_ = auVar22._0_8_ & 0x7fffff007fffff;
    auVar122._8_4_ = auVar22._8_4_ & 0x7fffff;
    auVar122._12_4_ = auVar22._12_4_ & 0x7fffff;
    auVar122._16_4_ = auVar22._16_4_ & 0x7fffff;
    auVar122._20_4_ = auVar22._20_4_ & 0x7fffff;
    auVar122._24_4_ = auVar22._24_4_ & 0x7fffff;
    auVar122._28_4_ = auVar22._28_4_ & 0x7fffff;
    auVar88._0_4_ = auVar94._0_4_ + -0x7f;
    auVar88._4_4_ = auVar94._4_4_ + -0x7f;
    auVar88._8_4_ = auVar94._8_4_ + -0x7f;
    auVar88._12_4_ = auVar94._12_4_ + -0x7f;
    auVar88._16_4_ = auVar94._16_4_ + -0x7f;
    auVar88._20_4_ = auVar94._20_4_ + -0x7f;
    auVar88._24_4_ = auVar94._24_4_ + -0x7f;
    auVar88._28_4_ = auVar94._28_4_ + -0x7f;
    auVar122 = auVar122 | auVar64;
    auVar88 = vcvtdq2ps_avx(auVar88);
    auVar95._0_4_ = auVar88._0_4_ + 1.0;
    auVar95._4_4_ = auVar88._4_4_ + 1.0;
    auVar95._8_4_ = auVar88._8_4_ + 1.0;
    auVar95._12_4_ = auVar88._12_4_ + 1.0;
    auVar95._16_4_ = auVar88._16_4_ + 1.0;
    auVar95._20_4_ = auVar88._20_4_ + 1.0;
    auVar95._24_4_ = auVar88._24_4_ + 1.0;
    auVar95._28_4_ = auVar88._28_4_ + 1.0;
    auVar88 = vcmpps_avx(auVar122,_DAT_0011a7e0,0x11);
    auVar72._0_8_ = auVar88._0_8_ & 0x3f8000003f800000;
    auVar72._8_4_ = auVar88._8_4_ & 0x3f800000;
    auVar72._12_4_ = auVar88._12_4_ & 0x3f800000;
    auVar72._16_4_ = auVar88._16_4_ & 0x3f800000;
    auVar72._20_4_ = auVar88._20_4_ & 0x3f800000;
    auVar72._24_4_ = auVar88._24_4_ & 0x3f800000;
    auVar72._28_4_ = auVar88._28_4_ & 0x3f800000;
    auVar22 = vsubps_avx(auVar95,auVar72);
    fVar92 = auVar122._0_4_ + -1.0 + (float)((uint)auVar122._0_4_ & auVar88._0_4_);
    fVar100 = auVar122._4_4_ + -1.0 + (float)((uint)auVar122._4_4_ & auVar88._4_4_);
    fVar101 = auVar122._8_4_ + -1.0 + (float)((uint)auVar122._8_4_ & auVar88._8_4_);
    fVar102 = auVar122._12_4_ + -1.0 + (float)((uint)auVar122._12_4_ & auVar88._12_4_);
    fVar103 = auVar122._16_4_ + -1.0 + (float)((uint)auVar122._16_4_ & auVar88._16_4_);
    fVar104 = auVar122._20_4_ + -1.0 + (float)((uint)auVar122._20_4_ & auVar88._20_4_);
    fVar105 = auVar122._24_4_ + -1.0 + (float)((uint)auVar122._24_4_ & auVar88._24_4_);
    fVar106 = auVar122._28_4_ + -1.0 + (float)((uint)auVar122._28_4_ & auVar88._28_4_);
    auVar134._0_4_ = fVar92 * fVar92 * fVar85;
    auVar134._4_4_ = fVar100 * fVar100 * fVar11;
    auVar134._8_4_ = fVar101 * fVar101 * fVar12;
    auVar134._12_4_ = fVar102 * fVar102 * fVar13;
    auVar134._16_4_ = fVar103 * fVar103 * fVar14;
    auVar134._20_4_ = fVar104 * fVar104 * fVar15;
    auVar134._24_4_ = fVar105 * fVar105 * fVar16;
    auVar134._28_4_ = fVar106 * fVar106 * fVar135;
    auVar73._0_4_ =
         auVar22._0_4_ * -0.00021219444 +
         fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * 
                                                  0.070376836 + -0.1151461) + 0.116769984) +
                                                  -0.12420141) + 0.14249323) + -0.16668057) +
                                      0.20000714) + -0.24999994) + 0.3333333) * fVar92 * fVar92;
    auVar73._4_4_ =
         auVar22._4_4_ * -0.00021219444 +
         fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (
                                                  fVar100 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar100 * fVar100
    ;
    auVar73._8_4_ =
         auVar22._8_4_ * -0.00021219444 +
         fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (
                                                  fVar101 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar101 * fVar101
    ;
    auVar73._12_4_ =
         auVar22._12_4_ * -0.00021219444 +
         fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (
                                                  fVar102 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar102 * fVar102
    ;
    auVar73._16_4_ =
         auVar22._16_4_ * -0.00021219444 +
         fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (
                                                  fVar103 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar103 * fVar103
    ;
    auVar73._20_4_ =
         auVar22._20_4_ * -0.00021219444 +
         fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (
                                                  fVar104 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar104 * fVar104
    ;
    auVar73._24_4_ =
         auVar22._24_4_ * -0.00021219444 +
         fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (
                                                  fVar105 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar105 * fVar105
    ;
    auVar73._28_4_ =
         auVar22._28_4_ * -0.00021219444 +
         fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (
                                                  fVar106 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar106 * fVar106
    ;
    auVar88 = vsubps_avx(auVar73,auVar134);
    auVar96._0_4_ = auVar22._0_4_ * 0.6933594 + auVar88._0_4_ + fVar92;
    auVar96._4_4_ = auVar22._4_4_ * 0.6933594 + auVar88._4_4_ + fVar100;
    auVar96._8_4_ = auVar22._8_4_ * 0.6933594 + auVar88._8_4_ + fVar101;
    auVar96._12_4_ = auVar22._12_4_ * 0.6933594 + auVar88._12_4_ + fVar102;
    auVar96._16_4_ = auVar22._16_4_ * 0.6933594 + auVar88._16_4_ + fVar103;
    auVar96._20_4_ = auVar22._20_4_ * 0.6933594 + auVar88._20_4_ + fVar104;
    auVar96._24_4_ = auVar22._24_4_ * 0.6933594 + auVar88._24_4_ + fVar105;
    auVar96._28_4_ = auVar22._28_4_ * 0.6933594 + auVar88._28_4_ + fVar106;
    auVar88 = vcmpps_avx(auVar108,_DAT_0011a920,0x12);
    auVar88 = vblendvps_avx(auVar108,auVar96,auVar88);
    *(undefined1 (*) [32])(pauVar67[0x20] + 4) = auVar88;
    auVar88 = vmaxps_avx(auVar87,_DAT_0011a780);
    auVar94 = vpsrld_avx2(auVar88,0x17);
    auVar109._0_8_ = auVar88._0_8_ & 0x7fffff007fffff;
    auVar109._8_4_ = auVar88._8_4_ & 0x7fffff;
    auVar109._12_4_ = auVar88._12_4_ & 0x7fffff;
    auVar109._16_4_ = auVar88._16_4_ & 0x7fffff;
    auVar109._20_4_ = auVar88._20_4_ & 0x7fffff;
    auVar109._24_4_ = auVar88._24_4_ & 0x7fffff;
    auVar109._28_4_ = auVar88._28_4_ & 0x7fffff;
    auVar22._0_4_ = auVar94._0_4_ + -0x7f;
    auVar22._4_4_ = auVar94._4_4_ + -0x7f;
    auVar22._8_4_ = auVar94._8_4_ + -0x7f;
    auVar22._12_4_ = auVar94._12_4_ + -0x7f;
    auVar22._16_4_ = auVar94._16_4_ + -0x7f;
    auVar22._20_4_ = auVar94._20_4_ + -0x7f;
    auVar22._24_4_ = auVar94._24_4_ + -0x7f;
    auVar22._28_4_ = auVar94._28_4_ + -0x7f;
    auVar109 = auVar109 | auVar64;
    auVar88 = vcvtdq2ps_avx(auVar22);
    auVar97._0_4_ = auVar88._0_4_ + 1.0;
    auVar97._4_4_ = auVar88._4_4_ + 1.0;
    auVar97._8_4_ = auVar88._8_4_ + 1.0;
    auVar97._12_4_ = auVar88._12_4_ + 1.0;
    auVar97._16_4_ = auVar88._16_4_ + 1.0;
    auVar97._20_4_ = auVar88._20_4_ + 1.0;
    auVar97._24_4_ = auVar88._24_4_ + 1.0;
    auVar97._28_4_ = auVar88._28_4_ + 1.0;
    auVar88 = vcmpps_avx(auVar109,_DAT_0011a7e0,0x11);
    auVar74._0_8_ = auVar88._0_8_ & 0x3f8000003f800000;
    auVar74._8_4_ = auVar88._8_4_ & 0x3f800000;
    auVar74._12_4_ = auVar88._12_4_ & 0x3f800000;
    auVar74._16_4_ = auVar88._16_4_ & 0x3f800000;
    auVar74._20_4_ = auVar88._20_4_ & 0x3f800000;
    auVar74._24_4_ = auVar88._24_4_ & 0x3f800000;
    auVar74._28_4_ = auVar88._28_4_ & 0x3f800000;
    auVar22 = vsubps_avx(auVar97,auVar74);
    fVar92 = auVar109._0_4_ + -1.0 + (float)((uint)auVar109._0_4_ & auVar88._0_4_);
    fVar100 = auVar109._4_4_ + -1.0 + (float)((uint)auVar109._4_4_ & auVar88._4_4_);
    fVar101 = auVar109._8_4_ + -1.0 + (float)((uint)auVar109._8_4_ & auVar88._8_4_);
    fVar102 = auVar109._12_4_ + -1.0 + (float)((uint)auVar109._12_4_ & auVar88._12_4_);
    fVar103 = auVar109._16_4_ + -1.0 + (float)((uint)auVar109._16_4_ & auVar88._16_4_);
    fVar104 = auVar109._20_4_ + -1.0 + (float)((uint)auVar109._20_4_ & auVar88._20_4_);
    fVar105 = auVar109._24_4_ + -1.0 + (float)((uint)auVar109._24_4_ & auVar88._24_4_);
    fVar106 = auVar109._28_4_ + -1.0 + (float)((uint)auVar109._28_4_ & auVar88._28_4_);
    auVar123._0_4_ = fVar92 * fVar92 * fVar85;
    auVar123._4_4_ = fVar100 * fVar100 * fVar11;
    auVar123._8_4_ = fVar101 * fVar101 * fVar12;
    auVar123._12_4_ = fVar102 * fVar102 * fVar13;
    auVar123._16_4_ = fVar103 * fVar103 * fVar14;
    auVar123._20_4_ = fVar104 * fVar104 * fVar15;
    auVar123._24_4_ = fVar105 * fVar105 * fVar16;
    auVar123._28_4_ = fVar106 * fVar106 * fVar135;
    auVar75._0_4_ =
         auVar22._0_4_ * -0.00021219444 +
         fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * 
                                                  0.070376836 + -0.1151461) + 0.116769984) +
                                                  -0.12420141) + 0.14249323) + -0.16668057) +
                                      0.20000714) + -0.24999994) + 0.3333333) * fVar92 * fVar92;
    auVar75._4_4_ =
         auVar22._4_4_ * -0.00021219444 +
         fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (
                                                  fVar100 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar100 * fVar100
    ;
    auVar75._8_4_ =
         auVar22._8_4_ * -0.00021219444 +
         fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (
                                                  fVar101 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar101 * fVar101
    ;
    auVar75._12_4_ =
         auVar22._12_4_ * -0.00021219444 +
         fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (
                                                  fVar102 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar102 * fVar102
    ;
    auVar75._16_4_ =
         auVar22._16_4_ * -0.00021219444 +
         fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (
                                                  fVar103 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar103 * fVar103
    ;
    auVar75._20_4_ =
         auVar22._20_4_ * -0.00021219444 +
         fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (
                                                  fVar104 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar104 * fVar104
    ;
    auVar75._24_4_ =
         auVar22._24_4_ * -0.00021219444 +
         fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (
                                                  fVar105 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar105 * fVar105
    ;
    auVar75._28_4_ =
         auVar22._28_4_ * -0.00021219444 +
         fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (
                                                  fVar106 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar106 * fVar106
    ;
    auVar88 = vsubps_avx(auVar75,auVar123);
    auVar98._0_4_ = auVar22._0_4_ * 0.6933594 + auVar88._0_4_ + fVar92;
    auVar98._4_4_ = auVar22._4_4_ * 0.6933594 + auVar88._4_4_ + fVar100;
    auVar98._8_4_ = auVar22._8_4_ * 0.6933594 + auVar88._8_4_ + fVar101;
    auVar98._12_4_ = auVar22._12_4_ * 0.6933594 + auVar88._12_4_ + fVar102;
    auVar98._16_4_ = auVar22._16_4_ * 0.6933594 + auVar88._16_4_ + fVar103;
    auVar98._20_4_ = auVar22._20_4_ * 0.6933594 + auVar88._20_4_ + fVar104;
    auVar98._24_4_ = auVar22._24_4_ * 0.6933594 + auVar88._24_4_ + fVar105;
    auVar98._28_4_ = auVar22._28_4_ * 0.6933594 + auVar88._28_4_ + fVar106;
    auVar88 = vcmpps_avx(auVar87,_DAT_0011a920,0x12);
    auVar88 = vblendvps_avx(auVar87,auVar98,auVar88);
    auVar22 = vmaxps_avx(auVar91,_DAT_0011a780);
    *(undefined1 (*) [32])(pauVar67[0x40] + 8) = auVar88;
    auVar88 = vpsrld_avx2(auVar22,0x17);
    auVar99._0_8_ = auVar22._0_8_ & 0x7fffff007fffff;
    auVar99._8_4_ = auVar22._8_4_ & 0x7fffff;
    auVar99._12_4_ = auVar22._12_4_ & 0x7fffff;
    auVar99._16_4_ = auVar22._16_4_ & 0x7fffff;
    auVar99._20_4_ = auVar22._20_4_ & 0x7fffff;
    auVar99._24_4_ = auVar22._24_4_ & 0x7fffff;
    auVar99._28_4_ = auVar22._28_4_ & 0x7fffff;
    auVar94._0_4_ = auVar88._0_4_ + -0x7f;
    auVar94._4_4_ = auVar88._4_4_ + -0x7f;
    auVar94._8_4_ = auVar88._8_4_ + -0x7f;
    auVar94._12_4_ = auVar88._12_4_ + -0x7f;
    auVar94._16_4_ = auVar88._16_4_ + -0x7f;
    auVar94._20_4_ = auVar88._20_4_ + -0x7f;
    auVar94._24_4_ = auVar88._24_4_ + -0x7f;
    auVar94._28_4_ = auVar88._28_4_ + -0x7f;
    auVar99 = auVar99 | auVar64;
    auVar88 = vcvtdq2ps_avx(auVar94);
    auVar89._0_4_ = auVar88._0_4_ + 1.0;
    auVar89._4_4_ = auVar88._4_4_ + 1.0;
    auVar89._8_4_ = auVar88._8_4_ + 1.0;
    auVar89._12_4_ = auVar88._12_4_ + 1.0;
    auVar89._16_4_ = auVar88._16_4_ + 1.0;
    auVar89._20_4_ = auVar88._20_4_ + 1.0;
    auVar89._24_4_ = auVar88._24_4_ + 1.0;
    auVar89._28_4_ = auVar88._28_4_ + 1.0;
    auVar88 = vcmpps_avx(auVar99,_DAT_0011a7e0,0x11);
    auVar76._0_8_ = auVar88._0_8_ & 0x3f8000003f800000;
    auVar76._8_4_ = auVar88._8_4_ & 0x3f800000;
    auVar76._12_4_ = auVar88._12_4_ & 0x3f800000;
    auVar76._16_4_ = auVar88._16_4_ & 0x3f800000;
    auVar76._20_4_ = auVar88._20_4_ & 0x3f800000;
    auVar76._24_4_ = auVar88._24_4_ & 0x3f800000;
    auVar76._28_4_ = auVar88._28_4_ & 0x3f800000;
    auVar22 = vsubps_avx(auVar89,auVar76);
    fVar92 = auVar99._0_4_ + -1.0 + (float)((uint)auVar99._0_4_ & auVar88._0_4_);
    fVar100 = auVar99._4_4_ + -1.0 + (float)((uint)auVar99._4_4_ & auVar88._4_4_);
    fVar101 = auVar99._8_4_ + -1.0 + (float)((uint)auVar99._8_4_ & auVar88._8_4_);
    fVar102 = auVar99._12_4_ + -1.0 + (float)((uint)auVar99._12_4_ & auVar88._12_4_);
    fVar103 = auVar99._16_4_ + -1.0 + (float)((uint)auVar99._16_4_ & auVar88._16_4_);
    fVar104 = auVar99._20_4_ + -1.0 + (float)((uint)auVar99._20_4_ & auVar88._20_4_);
    fVar105 = auVar99._24_4_ + -1.0 + (float)((uint)auVar99._24_4_ & auVar88._24_4_);
    fVar106 = auVar99._28_4_ + -1.0 + (float)((uint)auVar99._28_4_ & auVar88._28_4_);
    auVar110._0_4_ = fVar92 * fVar92 * fVar85;
    auVar110._4_4_ = fVar100 * fVar100 * fVar11;
    auVar110._8_4_ = fVar101 * fVar101 * fVar12;
    auVar110._12_4_ = fVar102 * fVar102 * fVar13;
    auVar110._16_4_ = fVar103 * fVar103 * fVar14;
    auVar110._20_4_ = fVar104 * fVar104 * fVar15;
    auVar110._24_4_ = fVar105 * fVar105 * fVar16;
    auVar110._28_4_ = fVar106 * fVar106 * fVar135;
    auVar77._0_4_ =
         auVar22._0_4_ * -0.00021219444 +
         fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * (fVar92 * 
                                                  0.070376836 + -0.1151461) + 0.116769984) +
                                                  -0.12420141) + 0.14249323) + -0.16668057) +
                                      0.20000714) + -0.24999994) + 0.3333333) * fVar92 * fVar92;
    auVar77._4_4_ =
         auVar22._4_4_ * -0.00021219444 +
         fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * (
                                                  fVar100 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar100 * fVar100
    ;
    auVar77._8_4_ =
         auVar22._8_4_ * -0.00021219444 +
         fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * (
                                                  fVar101 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar101 * fVar101
    ;
    auVar77._12_4_ =
         auVar22._12_4_ * -0.00021219444 +
         fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * (
                                                  fVar102 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar102 * fVar102
    ;
    auVar77._16_4_ =
         auVar22._16_4_ * -0.00021219444 +
         fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * (
                                                  fVar103 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar103 * fVar103
    ;
    auVar77._20_4_ =
         auVar22._20_4_ * -0.00021219444 +
         fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * (
                                                  fVar104 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar104 * fVar104
    ;
    auVar77._24_4_ =
         auVar22._24_4_ * -0.00021219444 +
         fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (
                                                  fVar105 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar105 * fVar105
    ;
    auVar77._28_4_ =
         auVar22._28_4_ * -0.00021219444 +
         fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * (
                                                  fVar106 * 0.070376836 + -0.1151461) + 0.116769984)
                                                  + -0.12420141) + 0.14249323) + -0.16668057) +
                                         0.20000714) + -0.24999994) + 0.3333333) * fVar106 * fVar106
    ;
    auVar88 = vsubps_avx(auVar77,auVar110);
    auVar90._0_4_ = auVar22._0_4_ * 0.6933594 + auVar88._0_4_ + fVar92;
    auVar90._4_4_ = auVar22._4_4_ * 0.6933594 + auVar88._4_4_ + fVar100;
    auVar90._8_4_ = auVar22._8_4_ * 0.6933594 + auVar88._8_4_ + fVar101;
    auVar90._12_4_ = auVar22._12_4_ * 0.6933594 + auVar88._12_4_ + fVar102;
    auVar90._16_4_ = auVar22._16_4_ * 0.6933594 + auVar88._16_4_ + fVar103;
    auVar90._20_4_ = auVar22._20_4_ * 0.6933594 + auVar88._20_4_ + fVar104;
    auVar90._24_4_ = auVar22._24_4_ * 0.6933594 + auVar88._24_4_ + fVar105;
    auVar90._28_4_ = auVar22._28_4_ * 0.6933594 + auVar88._28_4_ + fVar106;
    auVar88 = vcmpps_avx(auVar91,_DAT_0011a920,0x12);
    auVar88 = vblendvps_avx(auVar91,auVar90,auVar88);
    *(undefined1 (*) [32])(pauVar67[0x60] + 0xc) = auVar88;
    pauVar67 = pauVar67 + 1;
  } while (lVar66 != 0x100);
  iVar17 = *param_7;
  iVar18 = param_7[1];
  iVar19 = param_7[2];
  iVar20 = param_7[3];
  fVar85 = *(float *)(param_1 + 0x800);
  fVar11 = *(float *)(param_1 + 0x804);
  *(float *)(param_3 + (long)(iVar20 + 0x100) * 4) = fVar85;
  *(float *)(param_4 + (long)(iVar20 + 0x100) * 4) = fVar11;
  fVar12 = *(float *)(param_3 + (long)(iVar18 + 0x100) * 4);
  fVar13 = *(float *)(param_4 + (long)(iVar18 + 0x100) * 4);
  fVar14 = *(float *)(param_3 + (long)(iVar19 + 0x100) * 4);
  fVar15 = *(float *)(param_4 + (long)(iVar19 + 0x100) * 4);
  fVar16 = *(float *)(param_3 + (long)(iVar17 + 0x100) * 4);
  fVar135 = *(float *)(param_4 + (long)(iVar17 + 0x100) * 4);
  fVar92 = *(float *)(param_2 + 0x804);
  fVar100 = fVar85 * fVar85 + fVar11 * fVar11;
  fVar101 = fVar14 * fVar14 + fVar15 * fVar15 +
            fVar12 * fVar12 + fVar13 * fVar13 + fVar16 * fVar16 + fVar135 * fVar135 + 0.0 + fVar100;
  fVar102 = (fVar85 * *(float *)(param_5 + 0x1060) - fVar11 * *(float *)(param_6 + 0x1060)) +
            (fVar14 * *(float *)(param_5 + 0xc40) - fVar15 * *(float *)(param_6 + 0xc40)) +
            (fVar12 * *(float *)(param_5 + 0x820) - fVar13 * *(float *)(param_6 + 0x820)) +
            (fVar16 * *(float *)(param_5 + 0x400) - fVar135 * *(float *)(param_6 + 0x400)) + 0.0;
  fVar13 = fVar85 * *(float *)(param_6 + 0x1060) + fVar11 * *(float *)(param_5 + 0x1060) +
           fVar14 * *(float *)(param_6 + 0xc40) + fVar15 * *(float *)(param_5 + 0xc40) +
           fVar12 * *(float *)(param_6 + 0x820) + fVar13 * *(float *)(param_5 + 0x820) +
           fVar16 * *(float *)(param_6 + 0x400) + fVar135 * *(float *)(param_5 + 0x400) + 0.0;
  fVar12 = *(float *)(param_2 + 0x800);
  fVar15 = fVar12 - fVar102;
  fVar16 = fVar92 - fVar13;
  *(float *)(param_8 + 0x400) = fVar15;
  *(float *)(param_9 + 0x400) = fVar16;
  *(float *)(param_10 + 0x400) = fVar101;
  fVar14 = fVar12 * fVar12 + fVar92 * fVar92;
  auVar21 = vmaxss_avx(SUB6416(ZEXT464(0x358637bd),0),ZEXT416((uint)SQRT(fVar14 * fVar100 + 1e-06)))
  ;
  fVar135 = (fVar85 * fVar12 + fVar11 * fVar92) / auVar21._0_4_;
  fVar85 = (fVar85 * fVar92 - fVar11 * fVar12) / auVar21._0_4_;
  if (fVar135 < -10.0) {
    fVar135 = -10.0;
  }
  else if (10.0 < fVar135) {
    fVar135 = 10.0;
  }
  if (fVar85 < -10.0) {
    fVar85 = -10.0;
  }
  else if (10.0 < fVar85) {
    fVar85 = 10.0;
  }
  *(float *)(param_11[0xa0] + 0x10) = fVar135;
  *(float *)(param_11[0xc0] + 0x14) = fVar85;
  fVar85 = logf(fVar101 + 1e-06);
  *(float *)param_11[0x20] = fVar85;
  fVar85 = logf(fVar14 + 1e-06);
  *(float *)(param_11[0x40] + 4) = fVar85;
  fVar85 = logf(fVar102 * fVar102 + fVar13 * fVar13 + 1e-06);
  *(float *)(param_11[0x60] + 8) = fVar85;
  fVar85 = logf(fVar15 * fVar15 + fVar16 * fVar16 + 1e-06);
  *(float *)(param_11[0x80] + 0xc) = fVar85;
  return;
}

