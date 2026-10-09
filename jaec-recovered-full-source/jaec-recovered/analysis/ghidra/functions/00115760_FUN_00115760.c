
/* 00115760 FUN_00115760 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115760(float *param_1,undefined4 *param_2,undefined1 (*param_3) [16],int param_4,
                 int param_5,int param_6,int param_7,uint param_8,int param_9,
                 undefined1 (*param_10) [32])

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar61;
  float *pfVar62;
  float *pfVar63;
  long lVar64;
  ulong uVar65;
  long lVar66;
  undefined1 (*pauVar67) [16];
  uint uVar68;
  int iVar69;
  long lVar70;
  long lVar71;
  uint uVar72;
  int iVar73;
  int iVar74;
  uint uVar75;
  bool bVar76;
  undefined1 auVar77 [32];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [16];
  undefined1 auVar87 [32];
  undefined1 auVar88 [64];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar99 [32];
  long local_88;
  undefined1 (*local_80) [32];
  long local_68;
  long local_60;
  float *local_58;
  undefined1 (*local_48) [16];
  undefined1 auVar79 [32];
  
  auVar80 = _DAT_0011a980;
  if ((param_4 == 6) && (param_5 == 6)) {
    if ((((param_6 == 0x101) && (param_7 == 0x40)) && (param_8 == 5)) && (param_9 == 4)) {
      lVar70 = 0;
      do {
        pauVar67 = param_3;
        if (param_2 == (undefined4 *)0x0) {
          auVar86._0_12_ = ZEXT812(0);
          auVar86._12_4_ = 0;
          auVar88 = ZEXT1664(auVar86);
          fVar91 = 0.0;
          auVar83 = ZEXT1632(auVar86);
          auVar82 = ZEXT1632(auVar86);
          pfVar62 = param_1;
          auVar84 = auVar83;
          auVar89 = auVar82;
          fVar92 = fVar91;
          fVar93 = fVar91;
          fVar94 = fVar91;
          fVar95 = fVar91;
          fVar96 = fVar91;
          fVar97 = fVar91;
          fVar98 = fVar91;
        }
        else {
          uVar1 = *param_2;
          auVar88 = ZEXT3264(CONCAT428(uVar1,CONCAT424(uVar1,CONCAT420(uVar1,CONCAT416(uVar1,
                                                  CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,
                                                  uVar1))))))));
          uVar1 = param_2[1];
          auVar84._4_4_ = uVar1;
          auVar84._0_4_ = uVar1;
          auVar84._8_4_ = uVar1;
          auVar84._12_4_ = uVar1;
          auVar84._16_4_ = uVar1;
          auVar84._20_4_ = uVar1;
          auVar84._24_4_ = uVar1;
          auVar84._28_4_ = uVar1;
          uVar1 = param_2[2];
          auVar83._4_4_ = (float)uVar1;
          auVar83._0_4_ = (float)uVar1;
          auVar83._8_4_ = (float)uVar1;
          auVar83._12_4_ = (float)uVar1;
          auVar83._16_4_ = (float)uVar1;
          auVar83._20_4_ = (float)uVar1;
          auVar83._24_4_ = (float)uVar1;
          auVar83._28_4_ = (float)uVar1;
          uVar1 = param_2[3];
          auVar82._4_4_ = (float)uVar1;
          auVar82._0_4_ = (float)uVar1;
          auVar82._8_4_ = (float)uVar1;
          auVar82._12_4_ = (float)uVar1;
          auVar82._16_4_ = (float)uVar1;
          auVar82._20_4_ = (float)uVar1;
          auVar82._24_4_ = (float)uVar1;
          auVar82._28_4_ = (float)uVar1;
          uVar1 = param_2[4];
          auVar89._4_4_ = uVar1;
          auVar89._0_4_ = uVar1;
          auVar89._8_4_ = uVar1;
          auVar89._12_4_ = uVar1;
          auVar89._16_4_ = uVar1;
          auVar89._20_4_ = uVar1;
          auVar89._24_4_ = uVar1;
          auVar89._28_4_ = uVar1;
          fVar91 = (float)param_2[5];
          pfVar62 = param_1;
          fVar92 = fVar91;
          fVar93 = fVar91;
          fVar94 = fVar91;
          fVar95 = fVar91;
          fVar96 = fVar91;
          fVar97 = fVar91;
          fVar98 = fVar91;
        }
        do {
          pfVar63 = pfVar62 + 5;
          auVar86 = vunpcklps_avx(*pauVar67,pauVar67[1]);
          auVar58 = vunpcklps_avx(pauVar67[2],pauVar67[3]);
          auVar56 = vunpckhps_avx(*pauVar67,pauVar67[1]);
          auVar59 = vunpcklps_avx(pauVar67[4],pauVar67[5]);
          auVar14 = vmovlhps_avx(auVar86,auVar58);
          auVar86 = vmovhlps_avx(auVar58,auVar86);
          auVar81 = vunpckhps_avx(pauVar67[4],pauVar67[5]);
          auVar60 = vunpcklps_avx(pauVar67[6],pauVar67[7]);
          auVar58 = vunpckhps_avx(pauVar67[2],pauVar67[3]);
          auVar57 = vunpckhps_avx(pauVar67[6],pauVar67[7]);
          auVar15 = vmovlhps_avx(auVar56,auVar58);
          auVar56 = vmovhlps_avx(auVar58,auVar56);
          auVar78 = vmovlhps_avx(auVar59,auVar60);
          auVar58 = vmovhlps_avx(auVar60,auVar59);
          auVar59 = vmovlhps_avx(auVar81,auVar57);
          auVar81 = vmovhlps_avx(auVar57,auVar81);
          auVar99._16_16_ = auVar78;
          auVar99._0_16_ = auVar14;
          uVar1 = *(undefined4 *)pauVar67[8];
          auVar77._4_4_ = uVar1;
          auVar77._0_4_ = uVar1;
          auVar77._8_4_ = uVar1;
          auVar77._12_4_ = uVar1;
          auVar77._16_4_ = uVar1;
          auVar77._20_4_ = uVar1;
          auVar77._24_4_ = uVar1;
          auVar77._28_4_ = uVar1;
          auVar85 = vpermps_avx2(auVar80,auVar99);
          auVar85 = vblendps_avx(auVar85,auVar77,0x80);
          fVar2 = *pfVar62;
          fVar16 = auVar14._0_4_;
          fVar21 = auVar14._4_4_;
          fVar26 = auVar14._8_4_;
          fVar31 = auVar14._12_4_;
          fVar36 = auVar78._0_4_;
          fVar41 = auVar78._4_4_;
          fVar46 = auVar78._8_4_;
          fVar51 = auVar78._12_4_;
          fVar3 = pfVar62[1];
          fVar17 = auVar86._0_4_;
          fVar22 = auVar86._4_4_;
          fVar27 = auVar86._8_4_;
          fVar32 = auVar86._12_4_;
          fVar37 = auVar58._0_4_;
          fVar42 = auVar58._4_4_;
          fVar47 = auVar58._8_4_;
          fVar52 = auVar58._12_4_;
          fVar4 = pfVar62[2];
          fVar18 = auVar15._0_4_;
          fVar23 = auVar15._4_4_;
          fVar28 = auVar15._8_4_;
          fVar33 = auVar15._12_4_;
          fVar38 = auVar59._0_4_;
          fVar43 = auVar59._4_4_;
          fVar48 = auVar59._8_4_;
          fVar53 = auVar59._12_4_;
          fVar5 = pfVar62[3];
          fVar19 = auVar56._0_4_;
          fVar24 = auVar56._4_4_;
          fVar29 = auVar56._8_4_;
          fVar34 = auVar56._12_4_;
          fVar39 = auVar81._0_4_;
          fVar44 = auVar81._4_4_;
          fVar49 = auVar81._8_4_;
          fVar54 = auVar81._12_4_;
          fVar6 = pfVar62[4];
          fVar20 = auVar85._0_4_;
          fVar25 = auVar85._4_4_;
          fVar30 = auVar85._8_4_;
          fVar35 = auVar85._12_4_;
          fVar40 = auVar85._16_4_;
          fVar45 = auVar85._20_4_;
          fVar50 = auVar85._24_4_;
          fVar55 = auVar85._28_4_;
          auVar87._0_4_ =
               fVar2 * fVar16 + auVar88._0_4_ + fVar3 * fVar17 + fVar4 * fVar18 + fVar5 * fVar19 +
               fVar6 * fVar20;
          auVar87._4_4_ =
               fVar2 * fVar21 + auVar88._4_4_ + fVar3 * fVar22 + fVar4 * fVar23 + fVar5 * fVar24 +
               fVar6 * fVar25;
          auVar87._8_4_ =
               fVar2 * fVar26 + auVar88._8_4_ + fVar3 * fVar27 + fVar4 * fVar28 + fVar5 * fVar29 +
               fVar6 * fVar30;
          auVar87._12_4_ =
               fVar2 * fVar31 + auVar88._12_4_ + fVar3 * fVar32 + fVar4 * fVar33 + fVar5 * fVar34 +
               fVar6 * fVar35;
          auVar87._16_4_ =
               fVar2 * fVar36 + auVar88._16_4_ + fVar3 * fVar37 + fVar4 * fVar38 + fVar5 * fVar39 +
               fVar6 * fVar40;
          auVar87._20_4_ =
               fVar2 * fVar41 + auVar88._20_4_ + fVar3 * fVar42 + fVar4 * fVar43 + fVar5 * fVar44 +
               fVar6 * fVar45;
          auVar87._24_4_ =
               fVar2 * fVar46 + auVar88._24_4_ + fVar3 * fVar47 + fVar4 * fVar48 + fVar5 * fVar49 +
               fVar6 * fVar50;
          auVar87._28_4_ =
               fVar2 * fVar51 + auVar88._28_4_ + fVar3 * fVar52 + fVar4 * fVar53 + fVar5 * fVar54 +
               fVar6 * fVar55;
          auVar88 = ZEXT3264(auVar87);
          fVar2 = pfVar62[0x1e];
          fVar3 = pfVar62[0x1f];
          fVar4 = pfVar62[0x20];
          fVar5 = pfVar62[0x21];
          fVar6 = pfVar62[0x22];
          auVar85._0_4_ =
               fVar2 * fVar16 + auVar84._0_4_ + fVar3 * fVar17 + fVar4 * fVar18 + fVar5 * fVar19 +
               fVar6 * fVar20;
          auVar85._4_4_ =
               fVar2 * fVar21 + auVar84._4_4_ + fVar3 * fVar22 + fVar4 * fVar23 + fVar5 * fVar24 +
               fVar6 * fVar25;
          auVar85._8_4_ =
               fVar2 * fVar26 + auVar84._8_4_ + fVar3 * fVar27 + fVar4 * fVar28 + fVar5 * fVar29 +
               fVar6 * fVar30;
          auVar85._12_4_ =
               fVar2 * fVar31 + auVar84._12_4_ + fVar3 * fVar32 + fVar4 * fVar33 + fVar5 * fVar34 +
               fVar6 * fVar35;
          auVar85._16_4_ =
               fVar2 * fVar36 + auVar84._16_4_ + fVar3 * fVar37 + fVar4 * fVar38 + fVar5 * fVar39 +
               fVar6 * fVar40;
          auVar85._20_4_ =
               fVar2 * fVar41 + auVar84._20_4_ + fVar3 * fVar42 + fVar4 * fVar43 + fVar5 * fVar44 +
               fVar6 * fVar45;
          auVar85._24_4_ =
               fVar2 * fVar46 + auVar84._24_4_ + fVar3 * fVar47 + fVar4 * fVar48 + fVar5 * fVar49 +
               fVar6 * fVar50;
          auVar85._28_4_ =
               fVar2 * fVar51 + auVar84._28_4_ + fVar3 * fVar52 + fVar4 * fVar53 + fVar5 * fVar54 +
               fVar6 * fVar55;
          fVar2 = pfVar62[0x3c];
          fVar7 = auVar83._4_4_;
          fVar8 = auVar83._8_4_;
          fVar9 = auVar83._12_4_;
          fVar10 = auVar83._16_4_;
          fVar11 = auVar83._20_4_;
          fVar12 = auVar83._24_4_;
          fVar13 = auVar83._28_4_;
          fVar3 = pfVar62[0x3d];
          fVar4 = pfVar62[0x3e];
          fVar5 = pfVar62[0x3f];
          fVar6 = pfVar62[0x40];
          auVar83._0_4_ =
               fVar2 * fVar16 + auVar83._0_4_ + fVar3 * fVar17 + fVar4 * fVar18 + fVar5 * fVar19 +
               fVar6 * fVar20;
          auVar83._4_4_ =
               fVar2 * fVar21 + fVar7 + fVar3 * fVar22 + fVar4 * fVar23 + fVar5 * fVar24 +
               fVar6 * fVar25;
          auVar83._8_4_ =
               fVar2 * fVar26 + fVar8 + fVar3 * fVar27 + fVar4 * fVar28 + fVar5 * fVar29 +
               fVar6 * fVar30;
          auVar83._12_4_ =
               fVar2 * fVar31 + fVar9 + fVar3 * fVar32 + fVar4 * fVar33 + fVar5 * fVar34 +
               fVar6 * fVar35;
          auVar83._16_4_ =
               fVar2 * fVar36 + fVar10 + fVar3 * fVar37 + fVar4 * fVar38 + fVar5 * fVar39 +
               fVar6 * fVar40;
          auVar83._20_4_ =
               fVar2 * fVar41 + fVar11 + fVar3 * fVar42 + fVar4 * fVar43 + fVar5 * fVar44 +
               fVar6 * fVar45;
          auVar83._24_4_ =
               fVar2 * fVar46 + fVar12 + fVar3 * fVar47 + fVar4 * fVar48 + fVar5 * fVar49 +
               fVar6 * fVar50;
          auVar83._28_4_ =
               fVar2 * fVar51 + fVar13 + fVar3 * fVar52 + fVar4 * fVar53 + fVar5 * fVar54 +
               fVar6 * fVar55;
          fVar2 = pfVar62[0x5a];
          fVar7 = auVar82._4_4_;
          fVar8 = auVar82._8_4_;
          fVar9 = auVar82._12_4_;
          fVar10 = auVar82._16_4_;
          fVar11 = auVar82._20_4_;
          fVar12 = auVar82._24_4_;
          fVar13 = auVar82._28_4_;
          fVar3 = pfVar62[0x5b];
          fVar4 = pfVar62[0x5c];
          fVar5 = pfVar62[0x5d];
          fVar6 = pfVar62[0x5e];
          auVar82._0_4_ =
               fVar2 * fVar16 + auVar82._0_4_ + fVar3 * fVar17 + fVar4 * fVar18 + fVar5 * fVar19 +
               fVar6 * fVar20;
          auVar82._4_4_ =
               fVar2 * fVar21 + fVar7 + fVar3 * fVar22 + fVar4 * fVar23 + fVar5 * fVar24 +
               fVar6 * fVar25;
          auVar82._8_4_ =
               fVar2 * fVar26 + fVar8 + fVar3 * fVar27 + fVar4 * fVar28 + fVar5 * fVar29 +
               fVar6 * fVar30;
          auVar82._12_4_ =
               fVar2 * fVar31 + fVar9 + fVar3 * fVar32 + fVar4 * fVar33 + fVar5 * fVar34 +
               fVar6 * fVar35;
          auVar82._16_4_ =
               fVar2 * fVar36 + fVar10 + fVar3 * fVar37 + fVar4 * fVar38 + fVar5 * fVar39 +
               fVar6 * fVar40;
          auVar82._20_4_ =
               fVar2 * fVar41 + fVar11 + fVar3 * fVar42 + fVar4 * fVar43 + fVar5 * fVar44 +
               fVar6 * fVar45;
          auVar82._24_4_ =
               fVar2 * fVar46 + fVar12 + fVar3 * fVar47 + fVar4 * fVar48 + fVar5 * fVar49 +
               fVar6 * fVar50;
          auVar82._28_4_ =
               fVar2 * fVar51 + fVar13 + fVar3 * fVar52 + fVar4 * fVar53 + fVar5 * fVar54 +
               fVar6 * fVar55;
          fVar2 = pfVar62[0x78];
          fVar3 = pfVar62[0x79];
          fVar4 = pfVar62[0x7a];
          fVar5 = pfVar62[0x7b];
          fVar6 = pfVar62[0x7c];
          auVar90._0_4_ =
               fVar2 * fVar16 + auVar89._0_4_ + fVar3 * fVar17 + fVar4 * fVar18 + fVar5 * fVar19 +
               fVar6 * fVar20;
          auVar90._4_4_ =
               fVar2 * fVar21 + auVar89._4_4_ + fVar3 * fVar22 + fVar4 * fVar23 + fVar5 * fVar24 +
               fVar6 * fVar25;
          auVar90._8_4_ =
               fVar2 * fVar26 + auVar89._8_4_ + fVar3 * fVar27 + fVar4 * fVar28 + fVar5 * fVar29 +
               fVar6 * fVar30;
          auVar90._12_4_ =
               fVar2 * fVar31 + auVar89._12_4_ + fVar3 * fVar32 + fVar4 * fVar33 + fVar5 * fVar34 +
               fVar6 * fVar35;
          auVar90._16_4_ =
               fVar2 * fVar36 + auVar89._16_4_ + fVar3 * fVar37 + fVar4 * fVar38 + fVar5 * fVar39 +
               fVar6 * fVar40;
          auVar90._20_4_ =
               fVar2 * fVar41 + auVar89._20_4_ + fVar3 * fVar42 + fVar4 * fVar43 + fVar5 * fVar44 +
               fVar6 * fVar45;
          auVar90._24_4_ =
               fVar2 * fVar46 + auVar89._24_4_ + fVar3 * fVar47 + fVar4 * fVar48 + fVar5 * fVar49 +
               fVar6 * fVar50;
          auVar90._28_4_ =
               fVar2 * fVar51 + auVar89._28_4_ + fVar3 * fVar52 + fVar4 * fVar53 + fVar5 * fVar54 +
               fVar6 * fVar55;
          fVar2 = pfVar62[0x96];
          fVar3 = pfVar62[0x97];
          fVar4 = pfVar62[0x9a];
          fVar5 = pfVar62[0x98];
          fVar6 = pfVar62[0x99];
          fVar91 = fVar2 * fVar16 + fVar91 + fVar3 * fVar17 + fVar5 * fVar18 + fVar6 * fVar19 +
                   fVar4 * fVar20;
          fVar92 = fVar2 * fVar21 + fVar92 + fVar3 * fVar22 + fVar5 * fVar23 + fVar6 * fVar24 +
                   fVar4 * fVar25;
          fVar93 = fVar2 * fVar26 + fVar93 + fVar3 * fVar27 + fVar5 * fVar28 + fVar6 * fVar29 +
                   fVar4 * fVar30;
          fVar94 = fVar2 * fVar31 + fVar94 + fVar3 * fVar32 + fVar5 * fVar33 + fVar6 * fVar34 +
                   fVar4 * fVar35;
          fVar95 = fVar2 * fVar36 + fVar95 + fVar3 * fVar37 + fVar5 * fVar38 + fVar6 * fVar39 +
                   fVar4 * fVar40;
          fVar96 = fVar2 * fVar41 + fVar96 + fVar3 * fVar42 + fVar5 * fVar43 + fVar6 * fVar44 +
                   fVar4 * fVar45;
          fVar97 = fVar2 * fVar46 + fVar97 + fVar3 * fVar47 + fVar5 * fVar48 + fVar6 * fVar49 +
                   fVar4 * fVar50;
          fVar98 = fVar2 * fVar51 + fVar98 + fVar3 * fVar52 + fVar5 * fVar53 + fVar6 * fVar54 +
                   fVar4 * fVar55;
          pfVar62 = pfVar63;
          pauVar67 = (undefined1 (*) [16])(pauVar67[0x40] + 4);
          auVar84 = auVar85;
          auVar89 = auVar90;
        } while (param_1 + 0x1e != pfVar63);
        lVar70 = lVar70 + 0x20;
        *param_10 = auVar87;
        param_3 = param_3 + 8;
        param_10[8] = auVar85;
        param_10[0x10] = auVar83;
        param_10[0x18] = auVar82;
        param_10[0x20] = auVar90;
        *(float *)param_10[0x28] = fVar91;
        *(float *)(param_10[0x28] + 4) = fVar92;
        *(float *)(param_10[0x28] + 8) = fVar93;
        *(float *)(param_10[0x28] + 0xc) = fVar94;
        *(float *)(param_10[0x28] + 0x10) = fVar95;
        *(float *)(param_10[0x28] + 0x14) = fVar96;
        *(float *)(param_10[0x28] + 0x18) = fVar97;
        *(float *)(param_10[0x28] + 0x1c) = fVar98;
        param_10 = param_10 + 1;
      } while (lVar70 != 0x100);
      return;
    }
  }
  else if (param_5 < 1) {
    return;
  }
  lVar70 = (long)(int)param_8;
  local_80 = param_10;
  uVar75 = param_8 & 0xfffffff8;
  local_68 = 0;
  local_88 = 0;
  do {
    fVar91 = 0.0;
    if (param_2 != (undefined4 *)0x0) {
      fVar91 = (float)param_2[local_88];
    }
    iVar73 = 0;
    if ((param_9 == 1) && (0 < param_7 + -7)) {
      auVar80._4_4_ = fVar91;
      auVar80._0_4_ = fVar91;
      auVar80._8_4_ = fVar91;
      auVar80._12_4_ = fVar91;
      auVar80._16_4_ = fVar91;
      auVar80._20_4_ = fVar91;
      auVar80._24_4_ = fVar91;
      auVar80._28_4_ = fVar91;
      lVar66 = 0;
      local_48 = param_3;
      do {
        auVar82 = auVar80;
        if (0 < param_4) {
          auVar88 = ZEXT3264(auVar80);
          iVar73 = 0;
          pauVar67 = local_48;
          lVar71 = local_68;
          do {
            if (0 < (int)param_8) {
              uVar65 = 0;
              do {
                fVar92 = param_1[lVar71 + uVar65];
                pfVar62 = (float *)(*pauVar67 + uVar65 * 4);
                auVar88 = ZEXT3264(CONCAT428(fVar92 * pfVar62[7] + auVar88._28_4_,
                                             CONCAT424(fVar92 * pfVar62[6] + auVar88._24_4_,
                                                       CONCAT420(fVar92 * pfVar62[5] +
                                                                 auVar88._20_4_,
                                                                 CONCAT416(fVar92 * pfVar62[4] +
                                                                           auVar88._16_4_,
                                                                           CONCAT412(fVar92 * 
                                                  pfVar62[3] + auVar88._12_4_,
                                                  CONCAT48(fVar92 * pfVar62[2] + auVar88._8_4_,
                                                           CONCAT44(fVar92 * pfVar62[1] +
                                                                    auVar88._4_4_,
                                                                    fVar92 * *pfVar62 +
                                                                    auVar88._0_4_))))))));
                bVar76 = param_8 - 1 != uVar65;
                uVar65 = uVar65 + 1;
              } while (bVar76);
            }
            auVar82 = auVar88._0_32_;
            iVar73 = iVar73 + 1;
            pauVar67 = (undefined1 (*) [16])(*pauVar67 + (long)param_6 * 4);
            lVar71 = lVar71 + lVar70;
          } while (param_4 != iVar73);
        }
        local_48 = local_48 + 2;
        *(undefined1 (*) [32])(*local_80 + lVar66 * 4) = auVar82;
        lVar66 = lVar66 + 8;
        iVar73 = (param_7 - 8U & 0xfffffff8) + 8;
      } while ((int)lVar66 < param_7 + -7);
    }
    if (iVar73 < param_7) {
      local_58 = (float *)(*local_80 + (long)iVar73 * 4);
      local_60 = (long)(param_9 * iVar73);
      do {
        fVar92 = fVar91;
        if (0 < param_4) {
          iVar74 = 0;
          lVar66 = local_68;
          lVar71 = local_60;
          do {
            if (0 < (int)param_8) {
              if (param_8 - 1 < 7) {
                uVar65 = 0;
                uVar68 = 0;
              }
              else {
                lVar64 = 0;
                do {
                  auVar80 = *(undefined1 (*) [32])(*param_3 + lVar64 + lVar71 * 4);
                  auVar82 = *(undefined1 (*) [32])((long)param_1 + lVar64 + lVar66 * 4);
                  auVar78._0_4_ = auVar80._0_4_ * auVar82._0_4_;
                  auVar78._4_4_ = auVar80._4_4_ * auVar82._4_4_;
                  auVar78._8_4_ = auVar80._8_4_ * auVar82._8_4_;
                  auVar78._12_4_ = auVar80._12_4_ * auVar82._12_4_;
                  auVar79._16_4_ = auVar80._16_4_ * auVar82._16_4_;
                  auVar79._0_16_ = auVar78;
                  auVar79._20_4_ = auVar80._20_4_ * auVar82._20_4_;
                  auVar79._24_4_ = auVar80._24_4_ * auVar82._24_4_;
                  auVar79._28_4_ = auVar80._28_4_ * auVar82._28_4_;
                  lVar64 = lVar64 + 0x20;
                  auVar86 = vshufps_avx(auVar78,auVar78,0x55);
                  auVar56 = vshufps_avx(auVar78,auVar78,0xff);
                  auVar14 = vunpckhps_avx(auVar78,auVar78);
                  auVar81 = auVar79._16_16_;
                  auVar58 = vshufps_avx(auVar81,auVar81,0x55);
                  auVar15 = vunpckhps_avx(auVar81,auVar81);
                  auVar81 = vshufps_avx(auVar81,auVar81,0xff);
                  fVar92 = auVar15._0_4_ +
                           auVar58._0_4_ +
                           auVar79._16_4_ +
                           auVar56._0_4_ + auVar14._0_4_ + auVar86._0_4_ + fVar92 + auVar78._0_4_ +
                           auVar81._0_4_;
                } while (((ulong)((param_8 >> 3) - 1) + 1) * 0x20 != lVar64);
                if (uVar75 == param_8) goto LAB_00115d76;
                uVar65 = (ulong)uVar75;
                uVar68 = uVar75;
              }
              uVar72 = param_8 - (int)uVar65;
              if (2 < uVar72 - 1) {
                pfVar62 = param_1 + uVar65 + lVar66;
                pfVar63 = (float *)(*param_3 + (lVar71 + uVar65) * 4);
                auVar81._0_4_ = *pfVar62 * *pfVar63;
                auVar81._4_4_ = pfVar62[1] * pfVar63[1];
                auVar81._8_4_ = pfVar62[2] * pfVar63[2];
                auVar81._12_4_ = pfVar62[3] * pfVar63[3];
                uVar68 = uVar68 + (uVar72 & 0xfffffffc);
                auVar86 = vshufps_avx(auVar81,auVar81,0x55);
                auVar58 = vunpckhps_avx(auVar81,auVar81);
                auVar56 = vshufps_avx(auVar81,auVar81,0xff);
                fVar92 = auVar58._0_4_ + auVar86._0_4_ + auVar81._0_4_ + fVar92 + auVar56._0_4_;
                if ((uVar72 & 0xfffffffc) == uVar72) goto LAB_00115d76;
              }
              iVar61 = uVar68 + 1;
              fVar92 = fVar92 + *(float *)(*param_3 + ((int)uVar68 + lVar71) * 4) *
                                param_1[(int)uVar68 + lVar66];
              if (iVar61 < (int)param_8) {
                iVar69 = uVar68 + 2;
                fVar92 = fVar92 + *(float *)(*param_3 + (lVar71 + iVar61) * 4) *
                                  param_1[iVar61 + lVar66];
                if (iVar69 < (int)param_8) {
                  fVar92 = fVar92 + *(float *)(*param_3 + (lVar71 + iVar69) * 4) *
                                    param_1[iVar69 + lVar66];
                }
              }
            }
LAB_00115d76:
            iVar74 = iVar74 + 1;
            lVar66 = lVar66 + lVar70;
            lVar71 = lVar71 + param_6;
          } while (param_4 != iVar74);
        }
        local_60 = local_60 + param_9;
        *local_58 = fVar92;
        local_58 = local_58 + 1;
      } while ((float *)(*local_80 + ((ulong)(uint)((param_7 + -1) - iVar73) + (long)iVar73) * 4 + 4
                        ) != local_58);
    }
    local_88 = local_88 + 1;
    local_80 = (undefined1 (*) [32])(*local_80 + (long)param_7 * 4);
    local_68 = local_68 + param_4 * lVar70;
    if (param_5 <= (int)local_88) {
                    /* WARNING: Read-only address (ram,0x0011a980) is written */
      return;
    }
  } while( true );
}

