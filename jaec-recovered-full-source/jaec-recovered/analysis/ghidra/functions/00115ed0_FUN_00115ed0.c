
/* 00115ed0 FUN_00115ed0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115ed0(undefined8 param_1,float *param_2,undefined1 (*param_3) [16],
                 undefined1 (*param_4) [32],undefined8 param_5,undefined1 (*param_6) [16],
                 undefined1 (*param_7) [16])

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar28;
  float fVar30;
  float fVar32;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  float fVar42;
  float fVar43;
  float fVar48;
  float fVar50;
  float fVar52;
  undefined1 auVar44 [16];
  float fVar54;
  float fVar56;
  float fVar58;
  float fVar60;
  undefined1 auVar45 [32];
  float fVar49;
  float fVar51;
  float fVar53;
  float fVar55;
  float fVar57;
  float fVar59;
  float fVar61;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar62;
  float fVar68;
  float fVar69;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  float fVar88;
  float fVar95;
  float fVar96;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  float fVar97;
  float fVar101;
  undefined1 auVar94 [32];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  float fVar110;
  float fVar111;
  float fVar114;
  float fVar115;
  undefined1 auVar112 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar113 [32];
  float fVar124;
  float fVar125;
  undefined1 auVar121 [16];
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  float fVar130;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  float fVar139;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  float fVar148;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  float fVar157;
  float fVar159;
  float fVar160;
  undefined1 auVar158 [32];
  float fVar161;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  undefined1 auVar162 [32];
  float fVar169;
  
  auVar112._0_12_ = ZEXT812(0);
  auVar112._12_4_ = 0;
  pfVar12 = param_2 + 0x200;
  auVar63 = param_3[2];
  auVar89 = param_3[1];
  pfVar10 = pfVar12;
  pauVar14 = param_4;
  do {
    auVar121._0_12_ = ZEXT812(0);
    auVar121._12_4_ = 0;
    pfVar9 = pfVar10 + 0x10;
    auVar64 = vunpcklps_avx(ZEXT416(*(uint *)*pauVar14),ZEXT416(*(uint *)(*pauVar14 + 4)));
    auVar90 = vunpcklps_avx(auVar121,ZEXT416(*(uint *)*pauVar14));
    auVar121 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar14 + 4)),ZEXT416(*(uint *)(*pauVar14 + 8)),
                             0x10);
    auVar64 = vmovlhps_avx(auVar112,auVar64);
    auVar121 = vmovlhps_avx(auVar90,auVar121);
    auVar90 = vshufps_avx(auVar64,auVar64,0);
    fVar19 = auVar63._4_4_;
    fVar29 = auVar63._8_4_;
    fVar31 = auVar63._12_4_;
    auVar65 = vshufps_avx(auVar121,auVar121,0);
    fVar33 = auVar89._4_4_;
    fVar35 = auVar89._8_4_;
    fVar37 = auVar89._12_4_;
    auVar91 = vshufps_avx(auVar64,auVar64,0x55);
    auVar21 = vshufps_avx(auVar121,auVar121,0x55);
    auVar20 = vshufps_avx(auVar64,auVar64,0xaa);
    auVar22 = vshufps_avx(auVar121,auVar121,0xaa);
    auVar64 = vshufps_avx(auVar64,auVar64,0xff);
    auVar121 = vshufps_avx(auVar121,auVar121,0xff);
    auVar63._0_4_ =
         auVar64._0_4_ * pfVar10[0x20c] +
         auVar20._0_4_ * pfVar10[0x208] +
         auVar91._0_4_ * pfVar10[0x204] + auVar90._0_4_ * pfVar10[0x200] + auVar63._0_4_;
    auVar63._4_4_ =
         auVar64._4_4_ * pfVar10[0x20d] +
         auVar20._4_4_ * pfVar10[0x209] +
         auVar91._4_4_ * pfVar10[0x205] + auVar90._4_4_ * pfVar10[0x201] + fVar19;
    auVar63._8_4_ =
         auVar64._8_4_ * pfVar10[0x20e] +
         auVar20._8_4_ * pfVar10[0x20a] +
         auVar91._8_4_ * pfVar10[0x206] + auVar90._8_4_ * pfVar10[0x202] + fVar29;
    auVar63._12_4_ =
         auVar64._12_4_ * pfVar10[0x20f] +
         auVar20._12_4_ * pfVar10[0x20b] +
         auVar91._12_4_ * pfVar10[0x207] + auVar90._12_4_ * pfVar10[0x203] + fVar31;
    auVar89._0_4_ =
         auVar121._0_4_ * pfVar10[0xc] +
         auVar22._0_4_ * pfVar10[8] +
         auVar21._0_4_ * pfVar10[4] + auVar65._0_4_ * *pfVar10 + auVar89._0_4_;
    auVar89._4_4_ =
         auVar121._4_4_ * pfVar10[0xd] +
         auVar22._4_4_ * pfVar10[9] +
         auVar21._4_4_ * pfVar10[5] + auVar65._4_4_ * pfVar10[1] + fVar33;
    auVar89._8_4_ =
         auVar121._8_4_ * pfVar10[0xe] +
         auVar22._8_4_ * pfVar10[10] +
         auVar21._8_4_ * pfVar10[6] + auVar65._8_4_ * pfVar10[2] + fVar35;
    auVar89._12_4_ =
         auVar121._12_4_ * pfVar10[0xf] +
         auVar22._12_4_ * pfVar10[0xb] +
         auVar21._12_4_ * pfVar10[7] + auVar65._12_4_ * pfVar10[3] + fVar37;
    pfVar10 = pfVar9;
    pauVar14 = pauVar14 + 8;
  } while (param_2 + 0x400 != pfVar9);
  auVar112 = vmovlhps_avx(auVar63,auVar89);
  auVar63 = vmovhlps_avx(auVar89,auVar63);
  *param_6 = auVar112;
  *param_7 = auVar63;
  auVar64 = *param_3;
  auVar90 = param_3[1];
  pfVar10 = param_2;
  pauVar14 = param_4;
  do {
    auVar63 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar14 + 4)),ZEXT416(*(uint *)(*pauVar14 + 8)),0x10
                           );
    pfVar9 = pfVar10 + 0x10;
    auVar89 = vinsertps_avx(ZEXT816(0) << 0x40,ZEXT416(*(uint *)*pauVar14),0x10);
    auVar89 = vmovlhps_avx(auVar89,auVar63);
    auVar63 = *(undefined1 (*) [16])*pauVar14;
    auVar112 = vshufps_avx(auVar89,auVar89,0);
    fVar19 = auVar64._4_4_;
    fVar29 = auVar64._8_4_;
    fVar31 = auVar64._12_4_;
    auVar121 = vshufps_avx(auVar63,auVar63,0);
    fVar33 = auVar90._4_4_;
    fVar35 = auVar90._8_4_;
    fVar37 = auVar90._12_4_;
    auVar65 = vshufps_avx(auVar89,auVar89,0x55);
    auVar91 = vshufps_avx(auVar63,auVar63,0x55);
    auVar21 = vshufps_avx(auVar89,auVar89,0xaa);
    auVar20 = vshufps_avx(auVar63,auVar63,0xaa);
    auVar89 = vshufps_avx(auVar89,auVar89,0xff);
    auVar63 = vshufps_avx(auVar63,auVar63,0xff);
    auVar90._0_4_ =
         auVar63._0_4_ * pfVar10[0x20c] +
         auVar20._0_4_ * pfVar10[0x208] +
         auVar91._0_4_ * pfVar10[0x204] + auVar121._0_4_ * pfVar10[0x200] + auVar90._0_4_;
    auVar90._4_4_ =
         auVar63._4_4_ * pfVar10[0x20d] +
         auVar20._4_4_ * pfVar10[0x209] +
         auVar91._4_4_ * pfVar10[0x205] + auVar121._4_4_ * pfVar10[0x201] + fVar33;
    auVar90._8_4_ =
         auVar63._8_4_ * pfVar10[0x20e] +
         auVar20._8_4_ * pfVar10[0x20a] +
         auVar91._8_4_ * pfVar10[0x206] + auVar121._8_4_ * pfVar10[0x202] + fVar35;
    auVar90._12_4_ =
         auVar63._12_4_ * pfVar10[0x20f] +
         auVar20._12_4_ * pfVar10[0x20b] +
         auVar91._12_4_ * pfVar10[0x207] + auVar121._12_4_ * pfVar10[0x203] + fVar37;
    auVar64._0_4_ =
         auVar89._0_4_ * pfVar10[0xc] +
         auVar21._0_4_ * pfVar10[8] +
         auVar65._0_4_ * pfVar10[4] + auVar112._0_4_ * *pfVar10 + auVar64._0_4_;
    auVar64._4_4_ =
         auVar89._4_4_ * pfVar10[0xd] +
         auVar21._4_4_ * pfVar10[9] +
         auVar65._4_4_ * pfVar10[5] + auVar112._4_4_ * pfVar10[1] + fVar19;
    auVar64._8_4_ =
         auVar89._8_4_ * pfVar10[0xe] +
         auVar21._8_4_ * pfVar10[10] +
         auVar65._8_4_ * pfVar10[6] + auVar112._8_4_ * pfVar10[2] + fVar29;
    auVar64._12_4_ =
         auVar89._12_4_ * pfVar10[0xf] +
         auVar21._12_4_ * pfVar10[0xb] +
         auVar65._12_4_ * pfVar10[7] + auVar112._12_4_ * pfVar10[3] + fVar31;
    pfVar10 = pfVar9;
    pauVar14 = pauVar14 + 8;
  } while (pfVar12 != pfVar9);
  auVar89 = vmovlhps_avx(auVar64,auVar90);
  auVar63 = vmovhlps_avx(auVar90,auVar64);
  lVar17 = 2;
  param_6[1] = auVar89;
  param_7[1] = auVar63;
  pauVar15 = (undefined1 (*) [32])(param_7 + 2);
  pauVar16 = (undefined1 (*) [32])(param_6 + 2);
  pauVar14 = param_4;
  do {
    pauVar14 = pauVar14 + 1;
    uVar1 = *(undefined4 *)*param_3;
    auVar102._4_4_ = (float)uVar1;
    auVar102._0_4_ = (float)uVar1;
    auVar102._8_4_ = (float)uVar1;
    auVar102._12_4_ = (float)uVar1;
    auVar102._16_4_ = (float)uVar1;
    auVar102._20_4_ = (float)uVar1;
    auVar102._24_4_ = (float)uVar1;
    auVar102._28_4_ = (float)uVar1;
    uVar1 = *(undefined4 *)(*param_3 + 4);
    auVar158._4_4_ = (float)uVar1;
    auVar158._0_4_ = (float)uVar1;
    auVar158._8_4_ = (float)uVar1;
    auVar158._12_4_ = (float)uVar1;
    auVar158._16_4_ = (float)uVar1;
    auVar158._20_4_ = (float)uVar1;
    auVar158._24_4_ = (float)uVar1;
    auVar158._28_4_ = (float)uVar1;
    uVar1 = *(undefined4 *)(*param_3 + 8);
    auVar92._4_4_ = (float)uVar1;
    auVar92._0_4_ = (float)uVar1;
    auVar92._8_4_ = (float)uVar1;
    auVar92._12_4_ = (float)uVar1;
    auVar92._16_4_ = (float)uVar1;
    auVar92._20_4_ = (float)uVar1;
    auVar92._24_4_ = (float)uVar1;
    auVar92._28_4_ = (float)uVar1;
    uVar1 = *(undefined4 *)(*param_3 + 0xc);
    auVar140._4_4_ = (float)uVar1;
    auVar140._0_4_ = (float)uVar1;
    auVar140._8_4_ = (float)uVar1;
    auVar140._12_4_ = (float)uVar1;
    auVar140._16_4_ = (float)uVar1;
    auVar140._20_4_ = (float)uVar1;
    auVar140._24_4_ = (float)uVar1;
    auVar140._28_4_ = (float)uVar1;
    uVar1 = *(undefined4 *)param_3[1];
    auVar122._4_4_ = (float)uVar1;
    auVar122._0_4_ = (float)uVar1;
    auVar122._8_4_ = (float)uVar1;
    auVar122._12_4_ = (float)uVar1;
    auVar122._16_4_ = (float)uVar1;
    auVar122._20_4_ = (float)uVar1;
    auVar122._24_4_ = (float)uVar1;
    auVar122._28_4_ = (float)uVar1;
    uVar1 = *(undefined4 *)(param_3[1] + 4);
    auVar149._4_4_ = (float)uVar1;
    auVar149._0_4_ = (float)uVar1;
    auVar149._8_4_ = (float)uVar1;
    auVar149._12_4_ = (float)uVar1;
    auVar149._16_4_ = (float)uVar1;
    auVar149._20_4_ = (float)uVar1;
    auVar149._24_4_ = (float)uVar1;
    auVar149._28_4_ = (float)uVar1;
    uVar1 = *(undefined4 *)(param_3[1] + 8);
    auVar46._4_4_ = (float)uVar1;
    auVar46._0_4_ = (float)uVar1;
    auVar46._8_4_ = (float)uVar1;
    auVar46._12_4_ = (float)uVar1;
    auVar46._16_4_ = (float)uVar1;
    auVar46._20_4_ = (float)uVar1;
    auVar46._24_4_ = (float)uVar1;
    auVar46._28_4_ = (float)uVar1;
    uVar1 = *(undefined4 *)(param_3[1] + 0xc);
    auVar131._4_4_ = (float)uVar1;
    auVar131._0_4_ = (float)uVar1;
    auVar131._8_4_ = (float)uVar1;
    auVar131._12_4_ = (float)uVar1;
    auVar131._16_4_ = (float)uVar1;
    auVar131._20_4_ = (float)uVar1;
    auVar131._24_4_ = (float)uVar1;
    auVar131._28_4_ = (float)uVar1;
    pfVar10 = param_2;
    pauVar13 = pauVar14;
    do {
      auVar76 = pauVar13[-1];
      fVar19 = *pfVar10;
      pfVar9 = pfVar10 + 0x10;
      auVar75 = vperm2f128_avx(auVar76,*pauVar13,0x21);
      fVar29 = pfVar10[2];
      fVar157 = auVar76._0_4_;
      fVar163 = auVar76._4_4_;
      fVar95 = auVar102._4_4_;
      fVar164 = auVar76._8_4_;
      fVar96 = auVar102._8_4_;
      fVar165 = auVar76._12_4_;
      fVar97 = auVar102._12_4_;
      fVar166 = auVar76._16_4_;
      fVar98 = auVar102._16_4_;
      fVar167 = auVar76._20_4_;
      fVar99 = auVar102._20_4_;
      fVar168 = auVar76._24_4_;
      fVar100 = auVar102._24_4_;
      fVar169 = auVar76._28_4_;
      fVar101 = auVar102._28_4_;
      fVar31 = pfVar10[1];
      fVar80 = auVar92._4_4_;
      fVar81 = auVar92._8_4_;
      fVar82 = auVar92._12_4_;
      fVar83 = auVar92._16_4_;
      fVar84 = auVar92._20_4_;
      fVar86 = auVar92._24_4_;
      fVar88 = auVar92._28_4_;
      fVar33 = pfVar10[3];
      auVar77 = vpalignr_avx2(auVar75,auVar76,8);
      fVar148 = auVar158._4_4_;
      fVar151 = auVar158._8_4_;
      fVar152 = auVar158._12_4_;
      fVar153 = auVar158._16_4_;
      fVar154 = auVar158._20_4_;
      fVar155 = auVar158._24_4_;
      fVar156 = auVar158._28_4_;
      auVar78 = vpalignr_avx2(auVar75,auVar76,4);
      fVar35 = pfVar10[0x202];
      auVar76 = vpalignr_avx2(auVar75,auVar76,0xc);
      fVar130 = auVar140._4_4_;
      fVar133 = auVar140._8_4_;
      fVar134 = auVar140._12_4_;
      fVar135 = auVar140._16_4_;
      fVar136 = auVar140._20_4_;
      fVar137 = auVar140._24_4_;
      fVar138 = auVar140._28_4_;
      fVar37 = pfVar10[0x200];
      fVar39 = pfVar10[0x201];
      fVar62 = auVar78._0_4_;
      fVar68 = auVar78._4_4_;
      fVar104 = auVar46._4_4_;
      fVar69 = auVar78._8_4_;
      fVar105 = auVar46._8_4_;
      fVar70 = auVar78._12_4_;
      fVar106 = auVar46._12_4_;
      fVar71 = auVar78._16_4_;
      fVar107 = auVar46._16_4_;
      fVar72 = auVar78._20_4_;
      fVar108 = auVar46._20_4_;
      fVar73 = auVar78._24_4_;
      fVar109 = auVar46._24_4_;
      fVar74 = auVar78._28_4_;
      fVar110 = auVar46._28_4_;
      fVar41 = pfVar10[5];
      fVar111 = auVar122._4_4_;
      fVar114 = auVar122._8_4_;
      fVar115 = auVar122._12_4_;
      fVar116 = auVar122._16_4_;
      fVar117 = auVar122._20_4_;
      fVar118 = auVar122._24_4_;
      fVar119 = auVar122._28_4_;
      fVar139 = auVar149._4_4_;
      fVar142 = auVar149._8_4_;
      fVar143 = auVar149._12_4_;
      fVar144 = auVar149._16_4_;
      fVar145 = auVar149._20_4_;
      fVar146 = auVar149._24_4_;
      fVar147 = auVar149._28_4_;
      fVar43 = pfVar10[4];
      fVar49 = pfVar10[0x203];
      fVar120 = auVar131._4_4_;
      fVar124 = auVar131._8_4_;
      fVar125 = auVar131._12_4_;
      fVar126 = auVar131._16_4_;
      fVar127 = auVar131._20_4_;
      fVar128 = auVar131._24_4_;
      fVar129 = auVar131._28_4_;
      fVar51 = pfVar10[6];
      fVar53 = pfVar10[7];
      fVar55 = pfVar10[0x204];
      fVar57 = pfVar10[0xb];
      fVar59 = pfVar10[0x205];
      fVar61 = pfVar10[0x206];
      fVar42 = auVar77._0_4_;
      fVar48 = auVar77._4_4_;
      fVar50 = auVar77._8_4_;
      fVar52 = auVar77._12_4_;
      fVar54 = auVar77._16_4_;
      fVar56 = auVar77._20_4_;
      fVar58 = auVar77._24_4_;
      fVar60 = auVar77._28_4_;
      fVar85 = pfVar10[8];
      fVar2 = pfVar10[0x207];
      fVar87 = pfVar10[9];
      fVar159 = pfVar10[10];
      fVar160 = pfVar10[0x209];
      fVar3 = pfVar10[0xd];
      fVar18 = auVar76._0_4_;
      fVar28 = auVar76._4_4_;
      fVar30 = auVar76._8_4_;
      fVar32 = auVar76._12_4_;
      fVar34 = auVar76._16_4_;
      fVar36 = auVar76._20_4_;
      fVar38 = auVar76._24_4_;
      fVar40 = auVar76._28_4_;
      fVar4 = pfVar10[0xf];
      fVar5 = pfVar10[0x20a];
      fVar161 = pfVar10[0x208];
      fVar6 = pfVar10[0x20b];
      auVar140._0_4_ =
           fVar4 * fVar18 + fVar57 * fVar42 + fVar62 * fVar53 + fVar33 * fVar157 + auVar140._0_4_;
      auVar140._4_4_ =
           fVar4 * fVar28 + fVar57 * fVar48 + fVar68 * fVar53 + fVar33 * fVar163 + fVar130;
      auVar140._8_4_ =
           fVar4 * fVar30 + fVar57 * fVar50 + fVar69 * fVar53 + fVar33 * fVar164 + fVar133;
      auVar140._12_4_ =
           fVar4 * fVar32 + fVar57 * fVar52 + fVar70 * fVar53 + fVar33 * fVar165 + fVar134;
      auVar140._16_4_ =
           fVar4 * fVar34 + fVar57 * fVar54 + fVar71 * fVar53 + fVar33 * fVar166 + fVar135;
      auVar140._20_4_ =
           fVar4 * fVar36 + fVar57 * fVar56 + fVar72 * fVar53 + fVar33 * fVar167 + fVar136;
      auVar140._24_4_ =
           fVar4 * fVar38 + fVar57 * fVar58 + fVar73 * fVar53 + fVar33 * fVar168 + fVar137;
      auVar140._28_4_ =
           fVar4 * fVar40 + fVar57 * fVar60 + fVar74 * fVar53 + fVar33 * fVar169 + fVar138;
      auVar158._0_4_ =
           fVar3 * fVar18 + fVar87 * fVar42 + fVar41 * fVar62 + fVar31 * fVar157 + auVar158._0_4_;
      auVar158._4_4_ =
           fVar3 * fVar28 + fVar87 * fVar48 + fVar41 * fVar68 + fVar31 * fVar163 + fVar148;
      auVar158._8_4_ =
           fVar3 * fVar30 + fVar87 * fVar50 + fVar41 * fVar69 + fVar31 * fVar164 + fVar151;
      auVar158._12_4_ =
           fVar3 * fVar32 + fVar87 * fVar52 + fVar41 * fVar70 + fVar31 * fVar165 + fVar152;
      auVar158._16_4_ =
           fVar3 * fVar34 + fVar87 * fVar54 + fVar41 * fVar71 + fVar31 * fVar166 + fVar153;
      auVar158._20_4_ =
           fVar3 * fVar36 + fVar87 * fVar56 + fVar41 * fVar72 + fVar31 * fVar167 + fVar154;
      auVar158._24_4_ =
           fVar3 * fVar38 + fVar87 * fVar58 + fVar41 * fVar73 + fVar31 * fVar168 + fVar155;
      auVar158._28_4_ =
           fVar3 * fVar40 + fVar87 * fVar60 + fVar41 * fVar74 + fVar31 * fVar169 + fVar156;
      fVar31 = pfVar10[0xe];
      fVar33 = pfVar10[0xc];
      auVar92._0_4_ =
           fVar31 * fVar18 + fVar159 * fVar42 + fVar51 * fVar62 + fVar29 * fVar157 + auVar92._0_4_;
      auVar92._4_4_ =
           fVar31 * fVar28 + fVar159 * fVar48 + fVar51 * fVar68 + fVar29 * fVar163 + fVar80;
      auVar92._8_4_ =
           fVar31 * fVar30 + fVar159 * fVar50 + fVar51 * fVar69 + fVar29 * fVar164 + fVar81;
      auVar92._12_4_ =
           fVar31 * fVar32 + fVar159 * fVar52 + fVar51 * fVar70 + fVar29 * fVar165 + fVar82;
      auVar92._16_4_ =
           fVar31 * fVar34 + fVar159 * fVar54 + fVar51 * fVar71 + fVar29 * fVar166 + fVar83;
      auVar92._20_4_ =
           fVar31 * fVar36 + fVar159 * fVar56 + fVar51 * fVar72 + fVar29 * fVar167 + fVar84;
      auVar92._24_4_ =
           fVar31 * fVar38 + fVar159 * fVar58 + fVar51 * fVar73 + fVar29 * fVar168 + fVar86;
      auVar92._28_4_ =
           fVar31 * fVar40 + fVar159 * fVar60 + fVar51 * fVar74 + fVar29 * fVar169 + fVar88;
      fVar29 = pfVar10[0x20c];
      auVar102._0_4_ =
           fVar33 * fVar18 + fVar85 * fVar42 + fVar43 * fVar62 + fVar19 * fVar157 + auVar102._0_4_;
      auVar102._4_4_ =
           fVar33 * fVar28 + fVar85 * fVar48 + fVar43 * fVar68 + fVar19 * fVar163 + fVar95;
      auVar102._8_4_ =
           fVar33 * fVar30 + fVar85 * fVar50 + fVar43 * fVar69 + fVar19 * fVar164 + fVar96;
      auVar102._12_4_ =
           fVar33 * fVar32 + fVar85 * fVar52 + fVar43 * fVar70 + fVar19 * fVar165 + fVar97;
      auVar102._16_4_ =
           fVar33 * fVar34 + fVar85 * fVar54 + fVar43 * fVar71 + fVar19 * fVar166 + fVar98;
      auVar102._20_4_ =
           fVar33 * fVar36 + fVar85 * fVar56 + fVar43 * fVar72 + fVar19 * fVar167 + fVar99;
      auVar102._24_4_ =
           fVar33 * fVar38 + fVar85 * fVar58 + fVar43 * fVar73 + fVar19 * fVar168 + fVar100;
      auVar102._28_4_ =
           fVar33 * fVar40 + fVar85 * fVar60 + fVar43 * fVar74 + fVar19 * fVar169 + fVar101;
      fVar19 = pfVar10[0x20d];
      fVar33 = auVar75._0_4_;
      auVar122._0_4_ =
           fVar29 * fVar33 + fVar161 * fVar18 + fVar55 * fVar42 + fVar37 * fVar62 + auVar122._0_4_;
      fVar41 = auVar75._4_4_;
      auVar122._4_4_ =
           fVar29 * fVar41 + fVar161 * fVar28 + fVar55 * fVar48 + fVar37 * fVar68 + fVar111;
      fVar43 = auVar75._8_4_;
      auVar122._8_4_ =
           fVar29 * fVar43 + fVar161 * fVar30 + fVar55 * fVar50 + fVar37 * fVar69 + fVar114;
      fVar51 = auVar75._12_4_;
      auVar122._12_4_ =
           fVar29 * fVar51 + fVar161 * fVar32 + fVar55 * fVar52 + fVar37 * fVar70 + fVar115;
      fVar53 = auVar75._16_4_;
      auVar122._16_4_ =
           fVar29 * fVar53 + fVar161 * fVar34 + fVar55 * fVar54 + fVar37 * fVar71 + fVar116;
      fVar57 = auVar75._20_4_;
      auVar122._20_4_ =
           fVar29 * fVar57 + fVar161 * fVar36 + fVar55 * fVar56 + fVar37 * fVar72 + fVar117;
      fVar85 = auVar75._24_4_;
      auVar122._24_4_ =
           fVar29 * fVar85 + fVar161 * fVar38 + fVar55 * fVar58 + fVar37 * fVar73 + fVar118;
      fVar87 = auVar75._28_4_;
      auVar122._28_4_ =
           fVar29 * fVar87 + fVar161 * fVar40 + fVar55 * fVar60 + fVar37 * fVar74 + fVar119;
      fVar29 = pfVar10[0x20e];
      fVar31 = pfVar10[0x20f];
      auVar149._0_4_ =
           fVar19 * fVar33 + fVar160 * fVar18 + fVar59 * fVar42 + fVar39 * fVar62 + auVar149._0_4_;
      auVar149._4_4_ =
           fVar19 * fVar41 + fVar160 * fVar28 + fVar59 * fVar48 + fVar39 * fVar68 + fVar139;
      auVar149._8_4_ =
           fVar19 * fVar43 + fVar160 * fVar30 + fVar59 * fVar50 + fVar39 * fVar69 + fVar142;
      auVar149._12_4_ =
           fVar19 * fVar51 + fVar160 * fVar32 + fVar59 * fVar52 + fVar39 * fVar70 + fVar143;
      auVar149._16_4_ =
           fVar19 * fVar53 + fVar160 * fVar34 + fVar59 * fVar54 + fVar39 * fVar71 + fVar144;
      auVar149._20_4_ =
           fVar19 * fVar57 + fVar160 * fVar36 + fVar59 * fVar56 + fVar39 * fVar72 + fVar145;
      auVar149._24_4_ =
           fVar19 * fVar85 + fVar160 * fVar38 + fVar59 * fVar58 + fVar39 * fVar73 + fVar146;
      auVar149._28_4_ =
           fVar19 * fVar87 + fVar160 * fVar40 + fVar59 * fVar60 + fVar39 * fVar74 + fVar147;
      auVar46._0_4_ =
           fVar29 * fVar33 + fVar5 * fVar18 + fVar61 * fVar42 + fVar35 * fVar62 + auVar46._0_4_;
      auVar46._4_4_ = fVar29 * fVar41 + fVar5 * fVar28 + fVar61 * fVar48 + fVar35 * fVar68 + fVar104
      ;
      auVar46._8_4_ = fVar29 * fVar43 + fVar5 * fVar30 + fVar61 * fVar50 + fVar35 * fVar69 + fVar105
      ;
      auVar46._12_4_ =
           fVar29 * fVar51 + fVar5 * fVar32 + fVar61 * fVar52 + fVar35 * fVar70 + fVar106;
      auVar46._16_4_ =
           fVar29 * fVar53 + fVar5 * fVar34 + fVar61 * fVar54 + fVar35 * fVar71 + fVar107;
      auVar46._20_4_ =
           fVar29 * fVar57 + fVar5 * fVar36 + fVar61 * fVar56 + fVar35 * fVar72 + fVar108;
      auVar46._24_4_ =
           fVar29 * fVar85 + fVar5 * fVar38 + fVar61 * fVar58 + fVar35 * fVar73 + fVar109;
      auVar46._28_4_ =
           fVar29 * fVar87 + fVar5 * fVar40 + fVar61 * fVar60 + fVar35 * fVar74 + fVar110;
      auVar131._0_4_ =
           fVar31 * fVar33 + fVar6 * fVar18 + fVar2 * fVar42 + fVar49 * fVar62 + auVar131._0_4_;
      auVar131._4_4_ = fVar31 * fVar41 + fVar6 * fVar28 + fVar2 * fVar48 + fVar49 * fVar68 + fVar120
      ;
      auVar131._8_4_ = fVar31 * fVar43 + fVar6 * fVar30 + fVar2 * fVar50 + fVar49 * fVar69 + fVar124
      ;
      auVar131._12_4_ =
           fVar31 * fVar51 + fVar6 * fVar32 + fVar2 * fVar52 + fVar49 * fVar70 + fVar125;
      auVar131._16_4_ =
           fVar31 * fVar53 + fVar6 * fVar34 + fVar2 * fVar54 + fVar49 * fVar71 + fVar126;
      auVar131._20_4_ =
           fVar31 * fVar57 + fVar6 * fVar36 + fVar2 * fVar56 + fVar49 * fVar72 + fVar127;
      auVar131._24_4_ =
           fVar31 * fVar85 + fVar6 * fVar38 + fVar2 * fVar58 + fVar49 * fVar73 + fVar128;
      auVar131._28_4_ =
           fVar31 * fVar87 + fVar6 * fVar40 + fVar2 * fVar60 + fVar49 * fVar74 + fVar129;
      pfVar10 = pfVar9;
      pauVar13 = pauVar13 + 8;
    } while (pfVar12 != pfVar9);
    auVar75 = vunpcklps_avx(auVar122,auVar149);
    auVar77 = vunpcklps_avx(auVar102,auVar158);
    auVar76 = vunpckhps_avx(auVar122,auVar149);
    lVar17 = lVar17 + 8;
    auVar158 = vunpckhps_avx(auVar102,auVar158);
    auVar102 = vshufps_avx(auVar77,auVar75,0x44);
    auVar122 = vshufps_avx(auVar77,auVar75,0xee);
    auVar75._16_16_ = auVar122._0_16_;
    auVar75._0_16_ = auVar102._0_16_;
    auVar149 = vshufps_avx(auVar158,auVar76,0x44);
    *pauVar16 = auVar75;
    auVar158 = vshufps_avx(auVar158,auVar76,0xee);
    auVar76._16_16_ = auVar158._0_16_;
    auVar76._0_16_ = auVar149._0_16_;
    auVar149 = vperm2f128_avx(auVar149,auVar158,0x31);
    pauVar16[3] = auVar149;
    auVar158 = vperm2f128_avx(auVar102,auVar122,0x31);
    auVar102 = vunpcklps_avx(auVar46,auVar131);
    auVar149 = vunpcklps_avx(auVar92,auVar140);
    pauVar16[1] = auVar76;
    auVar122 = vunpckhps_avx(auVar92,auVar140);
    auVar131 = vunpckhps_avx(auVar46,auVar131);
    pauVar16[2] = auVar158;
    auVar92 = vshufps_avx(auVar149,auVar102,0x44);
    auVar102 = vshufps_avx(auVar149,auVar102,0xee);
    auVar77._16_16_ = auVar102._0_16_;
    auVar77._0_16_ = auVar92._0_16_;
    auVar46 = vshufps_avx(auVar122,auVar131,0x44);
    *pauVar15 = auVar77;
    auVar122 = vshufps_avx(auVar122,auVar131,0xee);
    auVar92 = vperm2f128_avx(auVar92,auVar102,0x31);
    auVar78._16_16_ = auVar122._0_16_;
    auVar78._0_16_ = auVar46._0_16_;
    auVar102 = vperm2f128_avx(auVar46,auVar122,0x31);
    pauVar15[2] = auVar92;
    pauVar15[1] = auVar78;
    pauVar15[3] = auVar102;
    pauVar15 = pauVar15 + 4;
    pauVar16 = pauVar16 + 4;
  } while (lVar17 != 0x3a);
  uVar1 = *(undefined4 *)*param_3;
  auVar93._4_4_ = (float)uVar1;
  auVar93._0_4_ = (float)uVar1;
  auVar93._8_4_ = (float)uVar1;
  auVar93._12_4_ = (float)uVar1;
  auVar93._16_4_ = (float)uVar1;
  auVar93._20_4_ = (float)uVar1;
  auVar93._24_4_ = (float)uVar1;
  auVar93._28_4_ = (float)uVar1;
  uVar1 = *(undefined4 *)(*param_3 + 4);
  auVar162._4_4_ = (float)uVar1;
  auVar162._0_4_ = (float)uVar1;
  auVar162._8_4_ = (float)uVar1;
  auVar162._12_4_ = (float)uVar1;
  auVar162._16_4_ = (float)uVar1;
  auVar162._20_4_ = (float)uVar1;
  auVar162._24_4_ = (float)uVar1;
  auVar162._28_4_ = (float)uVar1;
  pauVar14 = param_4 + 7;
  uVar1 = *(undefined4 *)(*param_3 + 8);
  auVar79._4_4_ = (float)uVar1;
  auVar79._0_4_ = (float)uVar1;
  auVar79._8_4_ = (float)uVar1;
  auVar79._12_4_ = (float)uVar1;
  auVar79._16_4_ = (float)uVar1;
  auVar79._20_4_ = (float)uVar1;
  auVar79._24_4_ = (float)uVar1;
  auVar79._28_4_ = (float)uVar1;
  uVar1 = *(undefined4 *)(*param_3 + 0xc);
  auVar141._4_4_ = (float)uVar1;
  auVar141._0_4_ = (float)uVar1;
  auVar141._8_4_ = (float)uVar1;
  auVar141._12_4_ = (float)uVar1;
  auVar141._16_4_ = (float)uVar1;
  auVar141._20_4_ = (float)uVar1;
  auVar141._24_4_ = (float)uVar1;
  auVar141._28_4_ = (float)uVar1;
  uVar1 = *(undefined4 *)param_3[1];
  auVar123._4_4_ = (float)uVar1;
  auVar123._0_4_ = (float)uVar1;
  auVar123._8_4_ = (float)uVar1;
  auVar123._12_4_ = (float)uVar1;
  auVar123._16_4_ = (float)uVar1;
  auVar123._20_4_ = (float)uVar1;
  auVar123._24_4_ = (float)uVar1;
  auVar123._28_4_ = (float)uVar1;
  uVar1 = *(undefined4 *)(param_3[1] + 4);
  auVar150._4_4_ = (float)uVar1;
  auVar150._0_4_ = (float)uVar1;
  auVar150._8_4_ = (float)uVar1;
  auVar150._12_4_ = (float)uVar1;
  auVar150._16_4_ = (float)uVar1;
  auVar150._20_4_ = (float)uVar1;
  auVar150._24_4_ = (float)uVar1;
  auVar150._28_4_ = (float)uVar1;
  uVar1 = *(undefined4 *)(param_3[1] + 8);
  auVar103._4_4_ = (float)uVar1;
  auVar103._0_4_ = (float)uVar1;
  auVar103._8_4_ = (float)uVar1;
  auVar103._12_4_ = (float)uVar1;
  auVar103._16_4_ = (float)uVar1;
  auVar103._20_4_ = (float)uVar1;
  auVar103._24_4_ = (float)uVar1;
  auVar103._28_4_ = (float)uVar1;
  uVar1 = *(undefined4 *)(param_3[1] + 0xc);
  auVar132._4_4_ = (float)uVar1;
  auVar132._0_4_ = (float)uVar1;
  auVar132._8_4_ = (float)uVar1;
  auVar132._12_4_ = (float)uVar1;
  auVar132._16_4_ = (float)uVar1;
  auVar132._20_4_ = (float)uVar1;
  auVar132._24_4_ = (float)uVar1;
  auVar132._28_4_ = (float)uVar1;
  pfVar10 = param_2;
  do {
    auVar92 = *pauVar14;
    fVar19 = *pfVar10;
    pfVar9 = pfVar10 + 0x10;
    pauVar14 = pauVar14 + 8;
    fVar111 = auVar92._0_4_;
    fVar114 = auVar92._4_4_;
    fVar95 = auVar93._4_4_;
    fVar115 = auVar92._8_4_;
    fVar96 = auVar93._8_4_;
    fVar116 = auVar92._12_4_;
    fVar97 = auVar93._12_4_;
    fVar117 = auVar92._16_4_;
    fVar98 = auVar93._16_4_;
    fVar118 = auVar92._20_4_;
    fVar99 = auVar93._20_4_;
    fVar119 = auVar92._24_4_;
    fVar100 = auVar93._24_4_;
    fVar120 = auVar92._28_4_;
    fVar101 = auVar93._28_4_;
    fVar29 = pfVar10[1];
    auVar102 = vperm2f128_avx(auVar92,ZEXT1232(ZEXT812(0)),0x21);
    auVar46 = vpalignr_avx2(auVar102,auVar92,8);
    auVar122 = vpalignr_avx2(auVar102,auVar92,4);
    fVar163 = auVar162._4_4_;
    fVar164 = auVar162._8_4_;
    fVar165 = auVar162._12_4_;
    fVar166 = auVar162._16_4_;
    fVar167 = auVar162._20_4_;
    fVar168 = auVar162._24_4_;
    fVar169 = auVar162._28_4_;
    fVar31 = pfVar10[2];
    auVar92 = vpalignr_avx2(auVar102,auVar92,0xc);
    fVar80 = auVar79._4_4_;
    fVar81 = auVar79._8_4_;
    fVar82 = auVar79._12_4_;
    fVar83 = auVar79._16_4_;
    fVar84 = auVar79._20_4_;
    fVar86 = auVar79._24_4_;
    fVar88 = auVar79._28_4_;
    fVar33 = pfVar10[3];
    fVar142 = auVar141._4_4_;
    fVar143 = auVar141._8_4_;
    fVar144 = auVar141._12_4_;
    fVar145 = auVar141._16_4_;
    fVar146 = auVar141._20_4_;
    fVar147 = auVar141._24_4_;
    fVar148 = auVar141._28_4_;
    fVar35 = pfVar10[0x201];
    fVar37 = pfVar10[0x200];
    fVar62 = auVar122._0_4_;
    fVar68 = auVar122._4_4_;
    fVar151 = auVar150._4_4_;
    fVar69 = auVar122._8_4_;
    fVar152 = auVar150._8_4_;
    fVar70 = auVar122._12_4_;
    fVar153 = auVar150._12_4_;
    fVar71 = auVar122._16_4_;
    fVar154 = auVar150._16_4_;
    fVar72 = auVar122._20_4_;
    fVar155 = auVar150._20_4_;
    fVar73 = auVar122._24_4_;
    fVar156 = auVar150._24_4_;
    fVar74 = auVar122._28_4_;
    fVar157 = auVar150._28_4_;
    fVar124 = auVar123._4_4_;
    fVar125 = auVar123._8_4_;
    fVar126 = auVar123._12_4_;
    fVar127 = auVar123._16_4_;
    fVar128 = auVar123._20_4_;
    fVar129 = auVar123._24_4_;
    fVar130 = auVar123._28_4_;
    fVar39 = pfVar10[6];
    fVar41 = pfVar10[0x202];
    fVar104 = auVar103._4_4_;
    fVar105 = auVar103._8_4_;
    fVar106 = auVar103._12_4_;
    fVar107 = auVar103._16_4_;
    fVar108 = auVar103._20_4_;
    fVar109 = auVar103._24_4_;
    fVar110 = auVar103._28_4_;
    fVar43 = pfVar10[0x203];
    fVar133 = auVar132._4_4_;
    fVar134 = auVar132._8_4_;
    fVar135 = auVar132._12_4_;
    fVar136 = auVar132._16_4_;
    fVar137 = auVar132._20_4_;
    fVar138 = auVar132._24_4_;
    fVar139 = auVar132._28_4_;
    fVar49 = pfVar10[4];
    fVar51 = pfVar10[5];
    fVar53 = pfVar10[7];
    fVar55 = pfVar10[0x204];
    fVar57 = pfVar10[0x205];
    fVar42 = auVar46._0_4_;
    fVar48 = auVar46._4_4_;
    fVar50 = auVar46._8_4_;
    fVar52 = auVar46._12_4_;
    fVar54 = auVar46._16_4_;
    fVar56 = auVar46._20_4_;
    fVar58 = auVar46._24_4_;
    fVar60 = auVar46._28_4_;
    fVar59 = pfVar10[0x206];
    fVar61 = pfVar10[0x207];
    fVar85 = pfVar10[10];
    fVar2 = pfVar10[8];
    fVar87 = pfVar10[0xb];
    fVar159 = pfVar10[9];
    fVar160 = pfVar10[0xd];
    fVar3 = pfVar10[0x209];
    fVar4 = pfVar10[0x208];
    fVar18 = auVar92._0_4_;
    fVar28 = auVar92._4_4_;
    fVar30 = auVar92._8_4_;
    fVar32 = auVar92._12_4_;
    fVar34 = auVar92._16_4_;
    fVar36 = auVar92._20_4_;
    fVar38 = auVar92._24_4_;
    fVar40 = auVar92._28_4_;
    fVar5 = pfVar10[0x20a];
    fVar161 = pfVar10[0xf];
    fVar6 = pfVar10[0x20b];
    auVar162._0_4_ =
         fVar160 * fVar18 + fVar159 * fVar42 + fVar51 * fVar62 + fVar29 * fVar111 + auVar162._0_4_;
    auVar162._4_4_ =
         fVar160 * fVar28 + fVar159 * fVar48 + fVar51 * fVar68 + fVar29 * fVar114 + fVar163;
    auVar162._8_4_ =
         fVar160 * fVar30 + fVar159 * fVar50 + fVar51 * fVar69 + fVar29 * fVar115 + fVar164;
    auVar162._12_4_ =
         fVar160 * fVar32 + fVar159 * fVar52 + fVar51 * fVar70 + fVar29 * fVar116 + fVar165;
    auVar162._16_4_ =
         fVar160 * fVar34 + fVar159 * fVar54 + fVar51 * fVar71 + fVar29 * fVar117 + fVar166;
    auVar162._20_4_ =
         fVar160 * fVar36 + fVar159 * fVar56 + fVar51 * fVar72 + fVar29 * fVar118 + fVar167;
    auVar162._24_4_ =
         fVar160 * fVar38 + fVar159 * fVar58 + fVar51 * fVar73 + fVar29 * fVar119 + fVar168;
    auVar162._28_4_ =
         fVar160 * fVar40 + fVar159 * fVar60 + fVar51 * fVar74 + fVar29 * fVar120 + fVar169;
    fVar29 = pfVar10[0xe];
    auVar141._0_4_ =
         fVar161 * fVar18 + fVar87 * fVar42 + fVar62 * fVar53 + fVar111 * fVar33 + auVar141._0_4_;
    auVar141._4_4_ =
         fVar161 * fVar28 + fVar87 * fVar48 + fVar68 * fVar53 + fVar114 * fVar33 + fVar142;
    auVar141._8_4_ =
         fVar161 * fVar30 + fVar87 * fVar50 + fVar69 * fVar53 + fVar115 * fVar33 + fVar143;
    auVar141._12_4_ =
         fVar161 * fVar32 + fVar87 * fVar52 + fVar70 * fVar53 + fVar116 * fVar33 + fVar144;
    auVar141._16_4_ =
         fVar161 * fVar34 + fVar87 * fVar54 + fVar71 * fVar53 + fVar117 * fVar33 + fVar145;
    auVar141._20_4_ =
         fVar161 * fVar36 + fVar87 * fVar56 + fVar72 * fVar53 + fVar118 * fVar33 + fVar146;
    auVar141._24_4_ =
         fVar161 * fVar38 + fVar87 * fVar58 + fVar73 * fVar53 + fVar119 * fVar33 + fVar147;
    auVar141._28_4_ =
         fVar161 * fVar40 + fVar87 * fVar60 + fVar74 * fVar53 + fVar120 * fVar33 + fVar148;
    fVar33 = pfVar10[0x20c];
    fVar51 = pfVar10[0x20d];
    auVar79._0_4_ =
         fVar29 * fVar18 + fVar85 * fVar42 + fVar39 * fVar62 + fVar31 * fVar111 + auVar79._0_4_;
    auVar79._4_4_ = fVar29 * fVar28 + fVar85 * fVar48 + fVar39 * fVar68 + fVar31 * fVar114 + fVar80;
    auVar79._8_4_ = fVar29 * fVar30 + fVar85 * fVar50 + fVar39 * fVar69 + fVar31 * fVar115 + fVar81;
    auVar79._12_4_ = fVar29 * fVar32 + fVar85 * fVar52 + fVar39 * fVar70 + fVar31 * fVar116 + fVar82
    ;
    auVar79._16_4_ = fVar29 * fVar34 + fVar85 * fVar54 + fVar39 * fVar71 + fVar31 * fVar117 + fVar83
    ;
    auVar79._20_4_ = fVar29 * fVar36 + fVar85 * fVar56 + fVar39 * fVar72 + fVar31 * fVar118 + fVar84
    ;
    auVar79._24_4_ = fVar29 * fVar38 + fVar85 * fVar58 + fVar39 * fVar73 + fVar31 * fVar119 + fVar86
    ;
    auVar79._28_4_ = fVar29 * fVar40 + fVar85 * fVar60 + fVar39 * fVar74 + fVar31 * fVar120 + fVar88
    ;
    fVar29 = pfVar10[0x20e];
    fVar31 = auVar102._0_4_;
    auVar123._0_4_ =
         fVar33 * fVar31 + fVar4 * fVar18 + fVar55 * fVar42 + fVar37 * fVar62 + auVar123._0_4_;
    fVar39 = auVar102._4_4_;
    auVar123._4_4_ = fVar33 * fVar39 + fVar4 * fVar28 + fVar55 * fVar48 + fVar37 * fVar68 + fVar124;
    fVar53 = auVar102._8_4_;
    auVar123._8_4_ = fVar33 * fVar53 + fVar4 * fVar30 + fVar55 * fVar50 + fVar37 * fVar69 + fVar125;
    fVar85 = auVar102._12_4_;
    auVar123._12_4_ = fVar33 * fVar85 + fVar4 * fVar32 + fVar55 * fVar52 + fVar37 * fVar70 + fVar126
    ;
    fVar87 = auVar102._16_4_;
    auVar123._16_4_ = fVar33 * fVar87 + fVar4 * fVar34 + fVar55 * fVar54 + fVar37 * fVar71 + fVar127
    ;
    fVar159 = auVar102._20_4_;
    auVar123._20_4_ =
         fVar33 * fVar159 + fVar4 * fVar36 + fVar55 * fVar56 + fVar37 * fVar72 + fVar128;
    fVar160 = auVar102._24_4_;
    auVar123._24_4_ =
         fVar33 * fVar160 + fVar4 * fVar38 + fVar55 * fVar58 + fVar37 * fVar73 + fVar129;
    fVar161 = auVar102._28_4_;
    auVar123._28_4_ =
         fVar33 * fVar161 + fVar4 * fVar40 + fVar55 * fVar60 + fVar37 * fVar74 + fVar130;
    auVar150._0_4_ =
         fVar51 * fVar31 + fVar3 * fVar18 + fVar57 * fVar42 + fVar35 * fVar62 + auVar150._0_4_;
    auVar150._4_4_ = fVar51 * fVar39 + fVar3 * fVar28 + fVar57 * fVar48 + fVar35 * fVar68 + fVar151;
    auVar150._8_4_ = fVar51 * fVar53 + fVar3 * fVar30 + fVar57 * fVar50 + fVar35 * fVar69 + fVar152;
    auVar150._12_4_ = fVar51 * fVar85 + fVar3 * fVar32 + fVar57 * fVar52 + fVar35 * fVar70 + fVar153
    ;
    auVar150._16_4_ = fVar51 * fVar87 + fVar3 * fVar34 + fVar57 * fVar54 + fVar35 * fVar71 + fVar154
    ;
    auVar150._20_4_ =
         fVar51 * fVar159 + fVar3 * fVar36 + fVar57 * fVar56 + fVar35 * fVar72 + fVar155;
    auVar150._24_4_ =
         fVar51 * fVar160 + fVar3 * fVar38 + fVar57 * fVar58 + fVar35 * fVar73 + fVar156;
    auVar150._28_4_ =
         fVar51 * fVar161 + fVar3 * fVar40 + fVar57 * fVar60 + fVar35 * fVar74 + fVar157;
    auVar103._0_4_ =
         fVar29 * fVar31 + fVar5 * fVar18 + fVar59 * fVar42 + fVar41 * fVar62 + auVar103._0_4_;
    auVar103._4_4_ = fVar29 * fVar39 + fVar5 * fVar28 + fVar59 * fVar48 + fVar41 * fVar68 + fVar104;
    auVar103._8_4_ = fVar29 * fVar53 + fVar5 * fVar30 + fVar59 * fVar50 + fVar41 * fVar69 + fVar105;
    auVar103._12_4_ = fVar29 * fVar85 + fVar5 * fVar32 + fVar59 * fVar52 + fVar41 * fVar70 + fVar106
    ;
    auVar103._16_4_ = fVar29 * fVar87 + fVar5 * fVar34 + fVar59 * fVar54 + fVar41 * fVar71 + fVar107
    ;
    auVar103._20_4_ =
         fVar29 * fVar159 + fVar5 * fVar36 + fVar59 * fVar56 + fVar41 * fVar72 + fVar108;
    auVar103._24_4_ =
         fVar29 * fVar160 + fVar5 * fVar38 + fVar59 * fVar58 + fVar41 * fVar73 + fVar109;
    auVar103._28_4_ =
         fVar29 * fVar161 + fVar5 * fVar40 + fVar59 * fVar60 + fVar41 * fVar74 + fVar110;
    fVar29 = pfVar10[0xc];
    auVar93._0_4_ =
         fVar29 * fVar18 + fVar2 * fVar42 + fVar49 * fVar62 + fVar19 * fVar111 + auVar93._0_4_;
    auVar93._4_4_ = fVar29 * fVar28 + fVar2 * fVar48 + fVar49 * fVar68 + fVar19 * fVar114 + fVar95;
    auVar93._8_4_ = fVar29 * fVar30 + fVar2 * fVar50 + fVar49 * fVar69 + fVar19 * fVar115 + fVar96;
    auVar93._12_4_ = fVar29 * fVar32 + fVar2 * fVar52 + fVar49 * fVar70 + fVar19 * fVar116 + fVar97;
    auVar93._16_4_ = fVar29 * fVar34 + fVar2 * fVar54 + fVar49 * fVar71 + fVar19 * fVar117 + fVar98;
    auVar93._20_4_ = fVar29 * fVar36 + fVar2 * fVar56 + fVar49 * fVar72 + fVar19 * fVar118 + fVar99;
    auVar93._24_4_ = fVar29 * fVar38 + fVar2 * fVar58 + fVar49 * fVar73 + fVar19 * fVar119 + fVar100
    ;
    auVar93._28_4_ = fVar29 * fVar40 + fVar2 * fVar60 + fVar49 * fVar74 + fVar19 * fVar120 + fVar101
    ;
    fVar19 = pfVar10[0x20f];
    auVar132._0_4_ =
         fVar19 * fVar31 + fVar6 * fVar18 + fVar61 * fVar42 + fVar43 * fVar62 + auVar132._0_4_;
    auVar132._4_4_ = fVar19 * fVar39 + fVar6 * fVar28 + fVar61 * fVar48 + fVar43 * fVar68 + fVar133;
    auVar132._8_4_ = fVar19 * fVar53 + fVar6 * fVar30 + fVar61 * fVar50 + fVar43 * fVar69 + fVar134;
    auVar132._12_4_ = fVar19 * fVar85 + fVar6 * fVar32 + fVar61 * fVar52 + fVar43 * fVar70 + fVar135
    ;
    auVar132._16_4_ = fVar19 * fVar87 + fVar6 * fVar34 + fVar61 * fVar54 + fVar43 * fVar71 + fVar136
    ;
    auVar132._20_4_ =
         fVar19 * fVar159 + fVar6 * fVar36 + fVar61 * fVar56 + fVar43 * fVar72 + fVar137;
    auVar132._24_4_ =
         fVar19 * fVar160 + fVar6 * fVar38 + fVar61 * fVar58 + fVar43 * fVar73 + fVar138;
    auVar132._28_4_ =
         fVar19 * fVar161 + fVar6 * fVar40 + fVar61 * fVar60 + fVar43 * fVar74 + fVar139;
    pfVar10 = pfVar9;
  } while (pfVar12 != pfVar9);
  auVar102 = vunpcklps_avx(auVar123,auVar150);
  auVar46 = vunpcklps_avx(auVar93,auVar162);
  auVar122 = vunpckhps_avx(auVar123,auVar150);
  auVar131 = vunpckhps_avx(auVar93,auVar162);
  auVar92 = vshufps_avx(auVar46,auVar102,0x44);
  auVar102 = vshufps_avx(auVar46,auVar102,0xee);
  auVar113._16_16_ = auVar102._0_16_;
  auVar113._0_16_ = auVar92._0_16_;
  auVar46 = vshufps_avx(auVar131,auVar122,0x44);
  auVar122 = vshufps_avx(auVar131,auVar122,0xee);
  auVar66._0_16_ = auVar46._0_16_;
  auVar66._16_16_ = auVar122._0_16_;
  auVar92 = vperm2f128_avx(auVar92,auVar102,0x31);
  *(undefined1 (*) [32])(param_6 + 0x3c) = auVar66;
  auVar102 = vunpcklps_avx(auVar79,auVar141);
  auVar46 = vunpcklps_avx(auVar103,auVar132);
  auVar122 = vunpckhps_avx(auVar79,auVar141);
  auVar131 = vunpckhps_avx(auVar103,auVar132);
  param_6[0x3e] = auVar92._0_16_;
  auVar92 = vshufps_avx(auVar102,auVar46,0x44);
  auVar102 = vshufps_avx(auVar102,auVar46,0xee);
  auVar46 = vshufps_avx(auVar122,auVar131,0x44);
  auVar94._16_16_ = auVar102._0_16_;
  auVar94._0_16_ = auVar92._0_16_;
  auVar122 = vshufps_avx(auVar122,auVar131,0xee);
  auVar92 = vperm2f128_avx(auVar92,auVar102,0x31);
  auVar67._0_16_ = auVar46._0_16_;
  auVar67._16_16_ = auVar122._0_16_;
  *(undefined1 (*) [32])(param_6 + 0x3a) = auVar113;
  *(undefined1 (*) [32])(param_7 + 0x3a) = auVar94;
  *(undefined1 (*) [32])(param_7 + 0x3c) = auVar67;
  param_7[0x3e] = auVar92._0_16_;
  auVar65 = *param_3;
  auVar91 = param_3[3];
  puVar11 = (uint *)(param_4[7] + 0x14);
  pfVar10 = param_2;
  do {
    pfVar9 = pfVar10 + 0x10;
    auVar89 = vunpcklps_avx(ZEXT416(*puVar11),ZEXT416(puVar11[1]));
    auVar63 = vinsertps_avx(ZEXT416(puVar11[1]),ZEXT416(puVar11[2]),0x10);
    auVar89 = vmovlhps_avx(auVar89,ZEXT416(puVar11[2]));
    auVar20._0_8_ = auVar63._0_8_;
    auVar63 = vshufps_avx(auVar89,auVar89,0);
    fVar19 = auVar65._4_4_;
    fVar29 = auVar65._8_4_;
    fVar31 = auVar65._12_4_;
    auVar20._8_8_ = 0;
    auVar112 = vshufps_avx(auVar20,auVar20,0);
    fVar33 = auVar91._4_4_;
    fVar35 = auVar91._8_4_;
    fVar37 = auVar91._12_4_;
    auVar121 = vshufps_avx(auVar89,auVar89,0x55);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = auVar20._0_8_;
    auVar64 = vshufps_avx(auVar21,auVar21,0x55);
    auVar90 = vshufps_avx(auVar89,auVar89,0xaa);
    auVar21 = vshufps_avx(auVar21,auVar21,0xaa);
    auVar89 = vshufps_avx(auVar89,auVar89,0xff);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar20._0_8_;
    auVar20 = vshufps_avx(auVar22,auVar22,0xff);
    auVar91._0_4_ =
         auVar20._0_4_ * pfVar10[0x60c] +
         auVar21._0_4_ * pfVar10[0x608] +
         auVar64._0_4_ * pfVar10[0x604] + auVar112._0_4_ * pfVar10[0x600] + auVar91._0_4_;
    auVar91._4_4_ =
         auVar20._4_4_ * pfVar10[0x60d] +
         auVar21._4_4_ * pfVar10[0x609] +
         auVar64._4_4_ * pfVar10[0x605] + auVar112._4_4_ * pfVar10[0x601] + fVar33;
    auVar91._8_4_ =
         auVar20._8_4_ * pfVar10[0x60e] +
         auVar21._8_4_ * pfVar10[0x60a] +
         auVar64._8_4_ * pfVar10[0x606] + auVar112._8_4_ * pfVar10[0x602] + fVar35;
    auVar91._12_4_ =
         auVar20._12_4_ * pfVar10[0x60f] +
         auVar21._12_4_ * pfVar10[0x60b] +
         auVar64._12_4_ * pfVar10[0x607] + auVar112._12_4_ * pfVar10[0x603] + fVar37;
    auVar65._0_4_ =
         auVar89._0_4_ * pfVar10[0xc] +
         auVar90._0_4_ * pfVar10[8] +
         auVar121._0_4_ * pfVar10[4] + auVar63._0_4_ * *pfVar10 + auVar65._0_4_;
    auVar65._4_4_ =
         auVar89._4_4_ * pfVar10[0xd] +
         auVar90._4_4_ * pfVar10[9] +
         auVar121._4_4_ * pfVar10[5] + auVar63._4_4_ * pfVar10[1] + fVar19;
    auVar65._8_4_ =
         auVar89._8_4_ * pfVar10[0xe] +
         auVar90._8_4_ * pfVar10[10] +
         auVar121._8_4_ * pfVar10[6] + auVar63._8_4_ * pfVar10[2] + fVar29;
    auVar65._12_4_ =
         auVar89._12_4_ * pfVar10[0xf] +
         auVar90._12_4_ * pfVar10[0xb] +
         auVar121._12_4_ * pfVar10[7] + auVar63._12_4_ * pfVar10[3] + fVar31;
    puVar11 = puVar11 + 0x40;
    pfVar10 = pfVar9;
  } while (pfVar12 != pfVar9);
  auVar89 = vmovlhps_avx(auVar65,auVar91);
  auVar63 = vmovhlps_avx(auVar91,auVar65);
  puVar11 = (uint *)(param_4[7] + 0x18);
  param_6[0x3f] = auVar89;
  param_7[0x3f] = auVar63;
  auVar102 = _DAT_0011a5c0;
  auVar92 = _DAT_0011a5a0;
  auVar44 = param_3[4];
  pfVar12 = param_2 + 0x800;
  do {
    auVar63 = vinsertps_avx(ZEXT416(*puVar11),ZEXT416(puVar11[1]),0x10);
    puVar11 = puVar11 + 0x40;
    auVar23._0_8_ = auVar63._0_8_;
    auVar23._8_8_ = 0;
    auVar63 = vshufps_avx(auVar23,auVar23,0);
    fVar19 = auVar44._4_4_;
    fVar29 = auVar44._8_4_;
    fVar31 = auVar44._12_4_;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = auVar23._0_8_;
    auVar89 = vshufps_avx(auVar24,auVar24,0x55);
    auVar112 = vshufps_avx(auVar24,auVar24,0xaa);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = auVar23._0_8_;
    auVar121 = vshufps_avx(auVar25,auVar25,0xff);
    auVar44._0_4_ =
         auVar121._0_4_ * pfVar12[0xc] +
         auVar112._0_4_ * pfVar12[8] +
         auVar89._0_4_ * pfVar12[4] + auVar63._0_4_ * *pfVar12 + auVar44._0_4_;
    auVar44._4_4_ =
         auVar121._4_4_ * pfVar12[0xd] +
         auVar112._4_4_ * pfVar12[9] +
         auVar89._4_4_ * pfVar12[5] + auVar63._4_4_ * pfVar12[1] + fVar19;
    auVar44._8_4_ =
         auVar121._8_4_ * pfVar12[0xe] +
         auVar112._8_4_ * pfVar12[10] +
         auVar89._8_4_ * pfVar12[6] + auVar63._8_4_ * pfVar12[2] + fVar29;
    auVar44._12_4_ =
         auVar121._12_4_ * pfVar12[0xf] +
         auVar112._12_4_ * pfVar12[0xb] +
         auVar89._12_4_ * pfVar12[7] + auVar63._12_4_ * pfVar12[3] + fVar31;
    pfVar12 = pfVar12 + 0x10;
  } while ((uint *)(param_4[0x107] + 0x18) != puVar11);
  lVar17 = 0;
  *(float *)param_6[0x40] = auVar44._0_4_;
  uVar1 = vextractps_avx(auVar44,2);
  *(undefined4 *)param_7[0x40] = uVar1;
  do {
    auVar46 = vsubps_avx(ZEXT832(0) << 0x20,*(undefined1 (*) [32])(*param_6 + lVar17));
    auVar46 = vminps_avx(auVar46,auVar92);
    auVar46 = vmaxps_avx(auVar46,auVar102);
    auVar45._0_4_ = auVar46._0_4_ * 1.442695 + 0.5;
    auVar45._4_4_ = auVar46._4_4_ * 1.442695 + 0.5;
    auVar45._8_4_ = auVar46._8_4_ * 1.442695 + 0.5;
    auVar45._12_4_ = auVar46._12_4_ * 1.442695 + 0.5;
    auVar45._16_4_ = auVar46._16_4_ * 1.442695 + 0.5;
    auVar45._20_4_ = auVar46._20_4_ * 1.442695 + 0.5;
    auVar45._24_4_ = auVar46._24_4_ * 1.442695 + 0.5;
    auVar45._28_4_ = auVar46._28_4_ * 1.442695 + 0.5;
    auVar122 = vroundps_avx(auVar45,1);
    fVar43 = auVar122._0_4_;
    fVar49 = auVar122._4_4_;
    fVar51 = auVar122._8_4_;
    fVar53 = auVar122._12_4_;
    fVar55 = auVar122._16_4_;
    fVar57 = auVar122._20_4_;
    fVar59 = auVar122._24_4_;
    fVar61 = auVar122._28_4_;
    fVar19 = -(fVar43 * -0.00021219444) + -(fVar43 * 0.6933594) + auVar46._0_4_;
    fVar29 = -(fVar49 * -0.00021219444) + -(fVar49 * 0.6933594) + auVar46._4_4_;
    fVar31 = -(fVar51 * -0.00021219444) + -(fVar51 * 0.6933594) + auVar46._8_4_;
    fVar33 = -(fVar53 * -0.00021219444) + -(fVar53 * 0.6933594) + auVar46._12_4_;
    fVar35 = -(fVar55 * -0.00021219444) + -(fVar55 * 0.6933594) + auVar46._16_4_;
    fVar37 = -(fVar57 * -0.00021219444) + -(fVar57 * 0.6933594) + auVar46._20_4_;
    fVar39 = -(fVar59 * -0.00021219444) + -(fVar59 * 0.6933594) + auVar46._24_4_;
    fVar41 = -(fVar61 * -0.00021219444) + -(fVar61 * 0.6933594) + auVar46._28_4_;
    auVar7._0_4_ = (int)fVar43 + 0x7f;
    auVar7._4_4_ = (int)fVar49 + 0x7f;
    auVar7._8_4_ = (int)fVar51 + 0x7f;
    auVar7._12_4_ = (int)fVar53 + 0x7f;
    auVar7._16_4_ = (int)fVar55 + 0x7f;
    auVar7._20_4_ = (int)fVar57 + 0x7f;
    auVar7._24_4_ = (int)fVar59 + 0x7f;
    auVar7._28_4_ = (int)fVar61 + 0x7f;
    auVar46 = vpslld_avx2(auVar7,0x17);
    auVar26._0_4_ =
         ((((fVar19 * 0.008333452 + 0.041665796) * fVar19 + 0.16666666) * fVar19 + 0.5) *
          fVar19 * fVar19 + fVar19 + 1.0) * auVar46._0_4_ + 1.0;
    auVar26._4_4_ =
         ((((fVar29 * 0.008333452 + 0.041665796) * fVar29 + 0.16666666) * fVar29 + 0.5) *
          fVar29 * fVar29 + fVar29 + 1.0) * auVar46._4_4_ + 1.0;
    auVar26._8_4_ =
         ((((fVar31 * 0.008333452 + 0.041665796) * fVar31 + 0.16666666) * fVar31 + 0.5) *
          fVar31 * fVar31 + fVar31 + 1.0) * auVar46._8_4_ + 1.0;
    auVar26._12_4_ =
         ((((fVar33 * 0.008333452 + 0.041665796) * fVar33 + 0.16666666) * fVar33 + 0.5) *
          fVar33 * fVar33 + fVar33 + 1.0) * auVar46._12_4_ + 1.0;
    auVar26._16_4_ =
         ((((fVar35 * 0.008333452 + 0.041665796) * fVar35 + 0.16666666) * fVar35 + 0.5) *
          fVar35 * fVar35 + fVar35 + 1.0) * auVar46._16_4_ + 1.0;
    auVar26._20_4_ =
         ((((fVar37 * 0.008333452 + 0.041665796) * fVar37 + 0.16666666) * fVar37 + 0.5) *
          fVar37 * fVar37 + fVar37 + 1.0) * auVar46._20_4_ + 1.0;
    auVar26._24_4_ =
         ((((fVar39 * 0.008333452 + 0.041665796) * fVar39 + 0.16666666) * fVar39 + 0.5) *
          fVar39 * fVar39 + fVar39 + 1.0) * auVar46._24_4_ + 1.0;
    auVar26._28_4_ =
         ((((fVar41 * 0.008333452 + 0.041665796) * fVar41 + 0.16666666) * fVar41 + 0.5) *
          fVar41 * fVar41 + fVar41 + 1.0) * auVar46._28_4_ + 1.0;
    auVar46 = vrcpps_avx(auVar26);
    *(undefined1 (*) [32])(*param_6 + lVar17) = auVar46;
    auVar46 = vsubps_avx(ZEXT832(0) << 0x20,*(undefined1 (*) [32])(*param_7 + lVar17));
    auVar46 = vminps_avx(auVar46,auVar92);
    auVar46 = vmaxps_avx(auVar46,auVar102);
    auVar47._0_4_ = auVar46._0_4_ * 1.442695 + 0.5;
    auVar47._4_4_ = auVar46._4_4_ * 1.442695 + 0.5;
    auVar47._8_4_ = auVar46._8_4_ * 1.442695 + 0.5;
    auVar47._12_4_ = auVar46._12_4_ * 1.442695 + 0.5;
    auVar47._16_4_ = auVar46._16_4_ * 1.442695 + 0.5;
    auVar47._20_4_ = auVar46._20_4_ * 1.442695 + 0.5;
    auVar47._24_4_ = auVar46._24_4_ * 1.442695 + 0.5;
    auVar47._28_4_ = auVar46._28_4_ * 1.442695 + 0.5;
    auVar122 = vroundps_avx(auVar47,1);
    fVar43 = auVar122._0_4_;
    fVar49 = auVar122._4_4_;
    fVar51 = auVar122._8_4_;
    fVar53 = auVar122._12_4_;
    fVar55 = auVar122._16_4_;
    fVar57 = auVar122._20_4_;
    fVar59 = auVar122._24_4_;
    fVar61 = auVar122._28_4_;
    fVar19 = -(fVar43 * -0.00021219444) + -(fVar43 * 0.6933594) + auVar46._0_4_;
    fVar29 = -(fVar49 * -0.00021219444) + -(fVar49 * 0.6933594) + auVar46._4_4_;
    fVar31 = -(fVar51 * -0.00021219444) + -(fVar51 * 0.6933594) + auVar46._8_4_;
    fVar33 = -(fVar53 * -0.00021219444) + -(fVar53 * 0.6933594) + auVar46._12_4_;
    fVar35 = -(fVar55 * -0.00021219444) + -(fVar55 * 0.6933594) + auVar46._16_4_;
    fVar37 = -(fVar57 * -0.00021219444) + -(fVar57 * 0.6933594) + auVar46._20_4_;
    fVar39 = -(fVar59 * -0.00021219444) + -(fVar59 * 0.6933594) + auVar46._24_4_;
    fVar41 = -(fVar61 * -0.00021219444) + -(fVar61 * 0.6933594) + auVar46._28_4_;
    auVar8._0_4_ = (int)fVar43 + 0x7f;
    auVar8._4_4_ = (int)fVar49 + 0x7f;
    auVar8._8_4_ = (int)fVar51 + 0x7f;
    auVar8._12_4_ = (int)fVar53 + 0x7f;
    auVar8._16_4_ = (int)fVar55 + 0x7f;
    auVar8._20_4_ = (int)fVar57 + 0x7f;
    auVar8._24_4_ = (int)fVar59 + 0x7f;
    auVar8._28_4_ = (int)fVar61 + 0x7f;
    auVar46 = vpslld_avx2(auVar8,0x17);
    auVar27._0_4_ =
         ((((fVar19 * 0.008333452 + 0.041665796) * fVar19 + 0.16666666) * fVar19 + 0.5) *
          fVar19 * fVar19 + fVar19 + 1.0) * auVar46._0_4_ + 1.0;
    auVar27._4_4_ =
         ((((fVar29 * 0.008333452 + 0.041665796) * fVar29 + 0.16666666) * fVar29 + 0.5) *
          fVar29 * fVar29 + fVar29 + 1.0) * auVar46._4_4_ + 1.0;
    auVar27._8_4_ =
         ((((fVar31 * 0.008333452 + 0.041665796) * fVar31 + 0.16666666) * fVar31 + 0.5) *
          fVar31 * fVar31 + fVar31 + 1.0) * auVar46._8_4_ + 1.0;
    auVar27._12_4_ =
         ((((fVar33 * 0.008333452 + 0.041665796) * fVar33 + 0.16666666) * fVar33 + 0.5) *
          fVar33 * fVar33 + fVar33 + 1.0) * auVar46._12_4_ + 1.0;
    auVar27._16_4_ =
         ((((fVar35 * 0.008333452 + 0.041665796) * fVar35 + 0.16666666) * fVar35 + 0.5) *
          fVar35 * fVar35 + fVar35 + 1.0) * auVar46._16_4_ + 1.0;
    auVar27._20_4_ =
         ((((fVar37 * 0.008333452 + 0.041665796) * fVar37 + 0.16666666) * fVar37 + 0.5) *
          fVar37 * fVar37 + fVar37 + 1.0) * auVar46._20_4_ + 1.0;
    auVar27._24_4_ =
         ((((fVar39 * 0.008333452 + 0.041665796) * fVar39 + 0.16666666) * fVar39 + 0.5) *
          fVar39 * fVar39 + fVar39 + 1.0) * auVar46._24_4_ + 1.0;
    auVar27._28_4_ =
         ((((fVar41 * 0.008333452 + 0.041665796) * fVar41 + 0.16666666) * fVar41 + 0.5) *
          fVar41 * fVar41 + fVar41 + 1.0) * auVar46._28_4_ + 1.0;
    auVar46 = vrcpps_avx(auVar27);
    *(undefined1 (*) [32])(*param_7 + lVar17) = auVar46;
    lVar17 = lVar17 + 0x20;
  } while (lVar17 != 0x400);
  fVar19 = *(float *)param_6[0x40];
  if (0.0 <= fVar19) {
    fVar19 = expf(-fVar19);
    fVar19 = 1.0 / (fVar19 + 1.0);
  }
  else {
    fVar19 = expf(fVar19);
    fVar19 = fVar19 / (fVar19 + 1.0);
  }
  *(float *)param_6[0x40] = fVar19;
  fVar19 = *(float *)param_7[0x40];
  if (0.0 <= fVar19) {
    fVar19 = expf(-fVar19);
    fVar19 = 1.0 / (fVar19 + 1.0);
  }
  else {
    fVar19 = expf(fVar19);
    fVar19 = fVar19 / (fVar19 + 1.0);
  }
  *(float *)param_7[0x40] = fVar19;
  return;
}

