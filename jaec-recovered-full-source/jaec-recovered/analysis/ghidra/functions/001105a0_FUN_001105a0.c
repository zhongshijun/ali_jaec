
/* 001105a0 FUN_001105a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001105a0(float param_1,float param_2,long param_3,long param_4,long param_5,int param_6,
                 long param_7,long param_8,long param_9,long param_10,float *param_11,
                 float *param_12,long param_13,uint *param_14,long param_15,undefined4 *param_16,
                 undefined4 *param_17)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  float *pfVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  float *pfVar42;
  float *pfVar43;
  float fVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  float fVar68;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar72;
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  float fVar66;
  float fVar67;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 in_ZMM0 [64];
  undefined1 auVar65 [64];
  float fVar73;
  float fVar81;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar79;
  float fVar80;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar78 [64];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined4 uVar88;
  undefined1 auVar89 [16];
  undefined1 in_ZMM14 [64];
  float *local_c8;
  float *local_b8;
  float *local_90;
  long local_80;
  float *local_78;
  float *local_70;
  float *local_68;
  long local_60;
  
  auVar46 = in_ZMM0._0_16_;
  if (param_15 != 0) {
    auVar46._0_12_ = ZEXT812(0);
    auVar46._12_4_ = 0;
    auVar65 = ZEXT1664(auVar46);
    lVar11 = 0;
    auVar78 = ZEXT1664(auVar46);
    do {
      pfVar42 = (float *)(param_3 + lVar11);
      pfVar43 = (float *)(param_4 + lVar11);
      lVar11 = lVar11 + 0x20;
      fVar73 = *pfVar42 * *pfVar42 + auVar78._0_4_;
      fVar79 = pfVar42[1] * pfVar42[1] + auVar78._4_4_;
      fVar80 = pfVar42[2] * pfVar42[2] + auVar78._8_4_;
      fVar81 = pfVar42[3] * pfVar42[3] + auVar78._12_4_;
      fVar82 = pfVar42[4] * pfVar42[4] + auVar78._16_4_;
      fVar83 = pfVar42[5] * pfVar42[5] + auVar78._20_4_;
      fVar84 = pfVar42[6] * pfVar42[6] + auVar78._24_4_;
      fVar85 = pfVar42[7] * pfVar42[7] + auVar78._28_4_;
      auVar78 = ZEXT3264(CONCAT428(fVar85,CONCAT424(fVar84,CONCAT420(fVar83,CONCAT416(fVar82,
                                                  CONCAT412(fVar81,CONCAT48(fVar80,CONCAT44(fVar79,
                                                  fVar73))))))));
      fVar44 = *pfVar43 * *pfVar43 + auVar65._0_4_;
      fVar66 = pfVar43[1] * pfVar43[1] + auVar65._4_4_;
      fVar67 = pfVar43[2] * pfVar43[2] + auVar65._8_4_;
      fVar68 = pfVar43[3] * pfVar43[3] + auVar65._12_4_;
      fVar69 = pfVar43[4] * pfVar43[4] + auVar65._16_4_;
      fVar70 = pfVar43[5] * pfVar43[5] + auVar65._20_4_;
      fVar71 = pfVar43[6] * pfVar43[6] + auVar65._24_4_;
      fVar72 = pfVar43[7] * pfVar43[7] + auVar65._28_4_;
      auVar65 = ZEXT3264(CONCAT428(fVar72,CONCAT424(fVar71,CONCAT420(fVar70,CONCAT416(fVar69,
                                                  CONCAT412(fVar68,CONCAT48(fVar67,CONCAT44(fVar66,
                                                  fVar44))))))));
    } while (lVar11 != 0x800);
    auVar74._0_4_ = fVar73 + fVar82;
    auVar74._4_4_ = fVar79 + fVar83;
    auVar74._8_4_ = fVar80 + fVar84;
    auVar74._12_4_ = fVar81 + fVar85;
    auVar47._0_4_ = fVar44 + fVar69;
    auVar47._4_4_ = fVar66 + fVar70;
    auVar47._8_4_ = fVar67 + fVar71;
    auVar47._12_4_ = fVar68 + fVar72;
    auVar46 = vhaddps_avx(auVar74,auVar74);
    fVar44 = (float)*(undefined8 *)(param_3 + 0x800);
    fVar66 = (float)((ulong)*(undefined8 *)(param_3 + 0x800) >> 0x20);
    auVar86._0_4_ = fVar44 * fVar44;
    auVar86._4_4_ = fVar66 * fVar66;
    auVar86._8_8_ = 0;
    auVar47 = vhaddps_avx(auVar47,auVar47);
    auVar46 = vhaddps_avx(auVar46,auVar46);
    auVar47 = vhaddps_avx(auVar47,auVar47);
    auVar48 = vmovshdup_avx(auVar86);
    fVar44 = (float)*(undefined8 *)(param_4 + 0x800);
    fVar66 = (float)((ulong)*(undefined8 *)(param_4 + 0x800) >> 0x20);
    auVar75._0_4_ = fVar44 * fVar44;
    auVar75._4_4_ = fVar66 * fVar66;
    auVar75._8_8_ = 0;
    auVar74 = vmovshdup_avx(auVar75);
    auVar76._0_4_ = (auVar47._0_4_ + auVar75._0_4_ + auVar74._0_4_) / 257.0;
    auVar76._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar46 = vmaxss_avx(ZEXT416((uint)((auVar46._0_4_ + auVar86._0_4_ + auVar48._0_4_) / 257.0)),
                         ZEXT416((uint)param_2));
    auVar48._0_4_ = SQRT(auVar46._0_4_);
    auVar48._4_12_ = auVar46._4_12_;
    auVar46 = vmaxss_avx(auVar48,ZEXT416((uint)param_2));
    auVar47 = vmaxss_avx(auVar76,ZEXT416((uint)param_2));
    in_ZMM14 = ZEXT1664(in_ZMM14._0_16_);
    fVar44 = log10f(auVar46._0_4_);
    auVar46 = vmaxss_avx(ZEXT416((uint)SQRT(auVar47._0_4_)),ZEXT416((uint)param_2));
    fVar66 = log10f(auVar46._0_4_);
    uVar45 = 0;
    auVar46 = ZEXT416(in_ZMM0._0_4_);
    auVar77._0_4_ = (fVar44 * 20.0 + 80.0) / 80.0;
    auVar77._4_12_ = SUB6012((undefined1  [60])0x0,0);
    uVar88 = 0;
    if (0.0 <= auVar77._0_4_) {
      auVar47 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar77);
      uVar45 = auVar47._0_4_;
    }
    *param_16 = uVar45;
    auVar49._0_4_ = (fVar66 * 20.0 + 80.0) / 80.0;
    auVar49._4_12_ = SUB6012((undefined1  [60])0x0,0);
    if (0.0 <= auVar49._0_4_) {
      auVar47 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar49);
      uVar88 = auVar47._0_4_;
    }
    *param_17 = uVar88;
  }
  fVar44 = auVar46._0_4_;
  uVar3 = *param_14;
  uVar29 = (int)(uVar3 + 1) % 100;
  uVar24 = 100 - uVar29;
  if (0 < param_6) {
    uVar30 = uVar24 & 0xfffffff8;
    uVar33 = uVar29 & 0xfffffff8;
    lVar26 = (long)(int)uVar33;
    local_90 = param_11 + lVar26;
    local_78 = param_12 + lVar26;
    lVar11 = (long)(int)uVar29;
    uVar41 = uVar29 - uVar33;
    local_b8 = param_11 + lVar11;
    local_c8 = param_12 + lVar11;
    local_80 = 0;
    lVar12 = lVar11 + (int)uVar30;
    uVar39 = uVar24 - uVar30;
    local_68 = param_11 + lVar11 + 1 + (long)(int)uVar30;
    local_70 = param_12 + lVar12;
    uVar1 = uVar39 - 1;
    uVar40 = uVar39 & 0xfffffff8;
    uVar31 = uVar41 & 0xfffffff8;
    lVar11 = ((ulong)((uVar39 >> 3) - 1) + 1) * 0x20;
    uVar9 = uVar30 + uVar40;
    uVar34 = uVar33 + uVar31;
    lVar32 = 0;
    uVar10 = uVar41 - 1;
    lVar13 = ((ulong)((uVar41 >> 3) - 1) + 1) * 0x20;
    local_60 = 0;
    auVar7._16_16_ = _UNK_0011a570;
    auVar7._0_16_ = _DAT_0011a560;
    auVar8._16_16_ = _UNK_0011a590;
    auVar8._0_16_ = _DAT_0011a580;
    lVar14 = (ulong)((99 - uVar29) - uVar30) + 1;
    pfVar42 = param_12;
    pfVar43 = param_11;
    do {
      lVar15 = (long)*(int *)(param_5 + lVar32 * 4) * 8;
      pfVar27 = (float *)(param_3 + lVar15);
      pfVar16 = (float *)(lVar15 + param_4);
      fVar66 = *pfVar27;
      fVar67 = pfVar27[1];
      fVar68 = pfVar16[1];
      fVar69 = *pfVar16;
      fVar70 = *(float *)(param_7 + lVar32 * 4);
      fVar71 = SQRT(fVar66 * fVar66 + fVar67 * fVar67 + param_2);
      fVar68 = SQRT(fVar69 * fVar69 + fVar68 * fVar68 + param_2);
      *(float *)(param_7 + lVar32 * 4) = (fVar71 - fVar70) * param_1 + fVar70;
      fVar66 = *(float *)(param_8 + lVar32 * 4);
      fVar66 = (fVar68 - fVar66) * param_1 + fVar66;
      *(float *)(param_8 + lVar32 * 4) = fVar66;
      fVar71 = fVar71 - *(float *)(param_7 + lVar32 * 4);
      fVar68 = fVar68 - fVar66;
      fVar66 = *(float *)(param_9 + lVar32 * 4);
      *(float *)(param_9 + lVar32 * 4) = (fVar71 * fVar71 - fVar66) * param_1 + fVar66;
      fVar66 = *(float *)(param_10 + lVar32 * 4);
      fVar67 = fVar68 * param_1;
      *(float *)(param_10 + lVar32 * 4) = (fVar68 * fVar68 - fVar66) * param_1 + fVar66;
      auVar47 = vmaxss_avx(ZEXT416(*(uint *)(param_9 + lVar32 * 4)),ZEXT416((uint)param_2));
      lVar15 = param_13 + local_60 * 4;
      fVar66 = 1.0 / SQRT(auVar47._0_4_);
      auVar47 = ZEXT416((uint)fVar67);
      if (param_15 == 0) {
        pfVar43[(int)uVar3] = fVar71;
        pfVar42[(int)uVar3] = fVar66;
        lVar28 = 0;
        uVar36 = 0;
        if (uVar30 == 0) {
LAB_001116c1:
          lVar18 = (long)(int)uVar36;
          lVar28 = param_13 + (lVar18 + local_60) * 4;
          if (((ulong)(lVar28 - (long)local_68) < 0x19) || (uVar1 < 3)) {
            lVar28 = lVar18;
            do {
              *(float *)(lVar15 + lVar28 * 4) =
                   fVar44 * *(float *)(lVar15 + lVar28 * 4) +
                   fVar67 * pfVar43[(lVar12 + lVar28) - lVar18];
              lVar28 = lVar28 + 1;
            } while (lVar28 != lVar14 + lVar18);
          }
          else if (uVar1 < 7) {
            uVar23 = 0;
            uVar17 = uVar39;
            uVar25 = uVar30;
            uVar35 = uVar36;
LAB_0011176c:
            auVar48 = vshufps_avx(auVar47,auVar47,0);
            auVar74 = vshufps_avx(auVar46,auVar46,0);
            pfVar16 = (float *)(param_13 + (lVar18 + local_60 + uVar23) * 4);
            pfVar27 = param_11 + lVar12 + local_60 + uVar23;
            fVar66 = pfVar27[1];
            fVar68 = pfVar27[2];
            fVar69 = pfVar27[3];
            *pfVar16 = auVar48._0_4_ * *pfVar27 + auVar74._0_4_ * *pfVar16;
            pfVar16[1] = auVar48._4_4_ * fVar66 + auVar74._4_4_ * pfVar16[1];
            pfVar16[2] = auVar48._8_4_ * fVar68 + auVar74._8_4_ * pfVar16[2];
            pfVar16[3] = auVar48._12_4_ * fVar69 + auVar74._12_4_ * pfVar16[3];
            uVar37 = uVar17 & 0xfffffffc;
            uVar35 = uVar35 + uVar37;
            uVar25 = uVar25 + uVar37;
            if (uVar17 != uVar37) {
LAB_001117aa:
              lVar28 = (long)(int)uVar35 * 4;
              *(float *)(lVar15 + lVar28) =
                   fVar67 * pfVar43[(int)(uVar29 + uVar25)] + fVar44 * *(float *)(lVar15 + lVar28);
              if ((int)(uVar25 + 1) < (int)uVar24) {
                pfVar16 = (float *)(lVar15 + 4 + lVar28);
                *pfVar16 = fVar67 * pfVar43[(int)(uVar25 + 1 + uVar29)] + fVar44 * *pfVar16;
                if ((int)(uVar25 + 2) < (int)uVar24) {
                  pfVar16 = (float *)(lVar15 + 8 + lVar28);
                  *pfVar16 = fVar67 * pfVar43[(int)(uVar25 + 2 + uVar29)] + fVar44 * *pfVar16;
                }
              }
            }
          }
          else {
            lVar20 = 0;
            do {
              pfVar16 = (float *)(lVar28 + lVar20);
              fVar66 = pfVar16[1];
              fVar68 = pfVar16[2];
              fVar69 = pfVar16[3];
              fVar70 = pfVar16[4];
              fVar71 = pfVar16[5];
              fVar72 = pfVar16[6];
              fVar73 = pfVar16[7];
              pfVar27 = (float *)((long)local_68 + lVar20 + -4);
              fVar79 = pfVar27[1];
              fVar80 = pfVar27[2];
              fVar81 = pfVar27[3];
              fVar82 = pfVar27[4];
              fVar83 = pfVar27[5];
              fVar84 = pfVar27[6];
              fVar85 = pfVar27[7];
              pfVar2 = (float *)(lVar28 + lVar20);
              *pfVar2 = fVar44 * *pfVar16 + fVar67 * *pfVar27;
              pfVar2[1] = fVar44 * fVar66 + fVar67 * fVar79;
              pfVar2[2] = fVar44 * fVar68 + fVar67 * fVar80;
              pfVar2[3] = fVar44 * fVar69 + fVar67 * fVar81;
              pfVar2[4] = fVar44 * fVar70 + fVar67 * fVar82;
              pfVar2[5] = fVar44 * fVar71 + fVar67 * fVar83;
              pfVar2[6] = fVar44 * fVar72 + fVar67 * fVar84;
              pfVar2[7] = fVar44 * fVar73 + fVar67 * fVar85;
              lVar20 = lVar20 + 0x20;
            } while (lVar20 != lVar11);
            uVar23 = (ulong)uVar40;
            uVar35 = uVar36 + uVar40;
            if (uVar39 != uVar40) {
              uVar17 = uVar39 - uVar40;
              uVar25 = uVar9;
              if (2 < (uVar39 - uVar40) - 1) goto LAB_0011176c;
              goto LAB_001117aa;
            }
          }
          uVar36 = uVar39 + uVar36;
        }
        else {
          do {
            pfVar16 = (float *)(lVar15 + lVar28 * 4);
            fVar79 = pfVar16[1];
            fVar80 = pfVar16[2];
            fVar81 = pfVar16[3];
            fVar82 = pfVar16[4];
            fVar83 = pfVar16[5];
            fVar84 = pfVar16[6];
            fVar85 = pfVar16[7];
            pfVar27 = local_b8 + lVar28;
            fVar66 = pfVar27[1];
            fVar68 = pfVar27[2];
            fVar69 = pfVar27[3];
            fVar70 = pfVar27[4];
            fVar71 = pfVar27[5];
            fVar72 = pfVar27[6];
            fVar73 = pfVar27[7];
            pfVar2 = (float *)(lVar15 + lVar28 * 4);
            *pfVar2 = fVar67 * *pfVar27 + fVar44 * *pfVar16;
            pfVar2[1] = fVar67 * fVar66 + fVar44 * fVar79;
            pfVar2[2] = fVar67 * fVar68 + fVar44 * fVar80;
            pfVar2[3] = fVar67 * fVar69 + fVar44 * fVar81;
            pfVar2[4] = fVar67 * fVar70 + fVar44 * fVar82;
            pfVar2[5] = fVar67 * fVar71 + fVar44 * fVar83;
            pfVar2[6] = fVar67 * fVar72 + fVar44 * fVar84;
            pfVar2[7] = fVar67 * fVar73 + fVar44 * fVar85;
            lVar28 = lVar28 + 8;
          } while ((int)lVar28 < (int)uVar30);
          uVar36 = uVar30;
          if ((int)uVar30 < (int)uVar24) goto LAB_001116c1;
        }
        if (0 < (int)uVar33) {
          lVar28 = (long)(int)uVar36 * 4;
          pfVar16 = (float *)(lVar15 + lVar28);
          fVar66 = pfVar43[1];
          fVar68 = pfVar43[2];
          fVar69 = pfVar43[3];
          fVar70 = pfVar43[4];
          fVar71 = pfVar43[5];
          fVar72 = pfVar43[6];
          fVar73 = pfVar43[7];
          *pfVar16 = fVar67 * *pfVar43 + fVar44 * *pfVar16;
          pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
          pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
          pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
          pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
          pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
          pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
          pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
          if (8 < (int)uVar33) {
            pfVar16 = (float *)(lVar15 + 0x20 + lVar28);
            fVar66 = pfVar43[9];
            fVar68 = pfVar43[10];
            fVar69 = pfVar43[0xb];
            fVar70 = pfVar43[0xc];
            fVar71 = pfVar43[0xd];
            fVar72 = pfVar43[0xe];
            fVar73 = pfVar43[0xf];
            *pfVar16 = fVar67 * pfVar43[8] + fVar44 * *pfVar16;
            pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
            pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
            pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
            pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
            pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
            pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
            pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
            if (0x10 < (int)uVar33) {
              pfVar16 = (float *)(lVar15 + 0x40 + lVar28);
              fVar66 = pfVar43[0x11];
              fVar68 = pfVar43[0x12];
              fVar69 = pfVar43[0x13];
              fVar70 = pfVar43[0x14];
              fVar71 = pfVar43[0x15];
              fVar72 = pfVar43[0x16];
              fVar73 = pfVar43[0x17];
              *pfVar16 = fVar67 * pfVar43[0x10] + fVar44 * *pfVar16;
              pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
              pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
              pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
              pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
              pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
              pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
              pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
              if (0x18 < (int)uVar33) {
                pfVar16 = (float *)(lVar15 + 0x60 + lVar28);
                fVar66 = pfVar43[0x19];
                fVar68 = pfVar43[0x1a];
                fVar69 = pfVar43[0x1b];
                fVar70 = pfVar43[0x1c];
                fVar71 = pfVar43[0x1d];
                fVar72 = pfVar43[0x1e];
                fVar73 = pfVar43[0x1f];
                *pfVar16 = fVar67 * pfVar43[0x18] + fVar44 * *pfVar16;
                pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                if (0x20 < (int)uVar33) {
                  pfVar16 = (float *)(lVar15 + 0x80 + lVar28);
                  fVar66 = pfVar43[0x21];
                  fVar68 = pfVar43[0x22];
                  fVar69 = pfVar43[0x23];
                  fVar70 = pfVar43[0x24];
                  fVar71 = pfVar43[0x25];
                  fVar72 = pfVar43[0x26];
                  fVar73 = pfVar43[0x27];
                  *pfVar16 = fVar67 * pfVar43[0x20] + fVar44 * *pfVar16;
                  pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                  pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                  pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                  pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                  pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                  pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                  pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                  if (0x28 < (int)uVar33) {
                    pfVar16 = (float *)(lVar15 + 0xa0 + lVar28);
                    fVar66 = pfVar43[0x29];
                    fVar68 = pfVar43[0x2a];
                    fVar69 = pfVar43[0x2b];
                    fVar70 = pfVar43[0x2c];
                    fVar71 = pfVar43[0x2d];
                    fVar72 = pfVar43[0x2e];
                    fVar73 = pfVar43[0x2f];
                    *pfVar16 = fVar67 * pfVar43[0x28] + fVar44 * *pfVar16;
                    pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                    pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                    pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                    pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                    pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                    pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                    pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                    if (0x30 < (int)uVar33) {
                      pfVar16 = (float *)(lVar15 + 0xc0 + lVar28);
                      fVar66 = pfVar43[0x31];
                      fVar68 = pfVar43[0x32];
                      fVar69 = pfVar43[0x33];
                      fVar70 = pfVar43[0x34];
                      fVar71 = pfVar43[0x35];
                      fVar72 = pfVar43[0x36];
                      fVar73 = pfVar43[0x37];
                      *pfVar16 = fVar67 * pfVar43[0x30] + fVar44 * *pfVar16;
                      pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                      pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                      pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                      pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                      pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                      pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                      pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                      if (0x38 < (int)uVar33) {
                        pfVar16 = (float *)(lVar15 + 0xe0 + lVar28);
                        fVar66 = pfVar43[0x39];
                        fVar68 = pfVar43[0x3a];
                        fVar69 = pfVar43[0x3b];
                        fVar70 = pfVar43[0x3c];
                        fVar71 = pfVar43[0x3d];
                        fVar72 = pfVar43[0x3e];
                        fVar73 = pfVar43[0x3f];
                        *pfVar16 = fVar67 * pfVar43[0x38] + fVar44 * *pfVar16;
                        pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                        pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                        pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                        pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                        pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                        pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                        pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                        if (0x40 < (int)uVar33) {
                          pfVar16 = (float *)(lVar15 + 0x100 + lVar28);
                          fVar66 = pfVar43[0x41];
                          fVar68 = pfVar43[0x42];
                          fVar69 = pfVar43[0x43];
                          fVar70 = pfVar43[0x44];
                          fVar71 = pfVar43[0x45];
                          fVar72 = pfVar43[0x46];
                          fVar73 = pfVar43[0x47];
                          *pfVar16 = fVar67 * pfVar43[0x40] + fVar44 * *pfVar16;
                          pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                          pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                          pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                          pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                          pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                          pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                          pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                          if (0x48 < (int)uVar33) {
                            pfVar16 = (float *)(lVar15 + 0x120 + lVar28);
                            fVar66 = pfVar43[0x49];
                            fVar68 = pfVar43[0x4a];
                            fVar69 = pfVar43[0x4b];
                            fVar70 = pfVar43[0x4c];
                            fVar71 = pfVar43[0x4d];
                            fVar72 = pfVar43[0x4e];
                            fVar73 = pfVar43[0x4f];
                            *pfVar16 = fVar67 * pfVar43[0x48] + fVar44 * *pfVar16;
                            pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                            pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                            pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                            pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                            pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                            pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                            pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                            if (0x50 < (int)uVar33) {
                              pfVar16 = (float *)(lVar15 + 0x140 + lVar28);
                              fVar66 = pfVar43[0x51];
                              fVar68 = pfVar43[0x52];
                              fVar69 = pfVar43[0x53];
                              fVar70 = pfVar43[0x54];
                              fVar71 = pfVar43[0x55];
                              fVar72 = pfVar43[0x56];
                              fVar73 = pfVar43[0x57];
                              *pfVar16 = fVar67 * pfVar43[0x50] + fVar44 * *pfVar16;
                              pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                              pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                              pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                              pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                              pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                              pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                              pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                              if (0x58 < (int)uVar33) {
                                pfVar16 = (float *)(lVar15 + 0x160 + lVar28);
                                fVar66 = pfVar43[0x59];
                                fVar68 = pfVar43[0x5a];
                                fVar69 = pfVar43[0x5b];
                                fVar70 = pfVar43[0x5c];
                                fVar71 = pfVar43[0x5d];
                                fVar72 = pfVar43[0x5e];
                                fVar73 = pfVar43[0x5f];
                                *pfVar16 = fVar67 * pfVar43[0x58] + fVar44 * *pfVar16;
                                pfVar16[1] = fVar67 * fVar66 + fVar44 * pfVar16[1];
                                pfVar16[2] = fVar67 * fVar68 + fVar44 * pfVar16[2];
                                pfVar16[3] = fVar67 * fVar69 + fVar44 * pfVar16[3];
                                pfVar16[4] = fVar67 * fVar70 + fVar44 * pfVar16[4];
                                pfVar16[5] = fVar67 * fVar71 + fVar44 * pfVar16[5];
                                pfVar16[6] = fVar67 * fVar72 + fVar44 * pfVar16[6];
                                pfVar16[7] = fVar67 * fVar73 + fVar44 * pfVar16[7];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar36 = (uVar33 - 8) + uVar36 + 8;
        }
        if ((int)uVar33 < (int)uVar29) {
          lVar18 = (long)(int)uVar36;
          lVar28 = param_13 + (lVar18 + local_60) * 4;
          if (((ulong)(lVar28 - (long)(local_90 + 1)) < 0x19) || (uVar10 < 3)) {
            lVar28 = lVar18;
            do {
              *(float *)(lVar15 + lVar28 * 4) =
                   fVar44 * *(float *)(lVar15 + lVar28 * 4) +
                   fVar67 * pfVar43[(lVar26 + lVar28) - lVar18];
              lVar28 = lVar28 + 1;
            } while (lVar18 + 1 + (ulong)((uVar29 - 1) - uVar33) != lVar28);
          }
          else if (uVar10 < 7) {
            uVar23 = 0;
            uVar17 = uVar41;
            uVar25 = uVar33;
LAB_00111a68:
            auVar47 = vshufps_avx(auVar47,auVar47,0);
            auVar48 = vshufps_avx(auVar46,auVar46,0);
            pfVar16 = (float *)(param_13 + (lVar18 + local_60 + uVar23) * 4);
            pfVar27 = param_11 + local_60 + lVar26 + uVar23;
            fVar66 = pfVar27[1];
            fVar68 = pfVar27[2];
            fVar69 = pfVar27[3];
            uVar35 = uVar17 & 0xfffffffc;
            uVar36 = uVar36 + uVar35;
            uVar25 = uVar25 + uVar35;
            *pfVar16 = auVar47._0_4_ * *pfVar27 + auVar48._0_4_ * *pfVar16;
            pfVar16[1] = auVar47._4_4_ * fVar66 + auVar48._4_4_ * pfVar16[1];
            pfVar16[2] = auVar47._8_4_ * fVar68 + auVar48._8_4_ * pfVar16[2];
            pfVar16[3] = auVar47._12_4_ * fVar69 + auVar48._12_4_ * pfVar16[3];
            if (uVar35 != uVar17) {
LAB_00111aac:
              lVar28 = (long)(int)uVar36 * 4;
              *(float *)(lVar15 + lVar28) =
                   fVar67 * pfVar43[(int)uVar25] + fVar44 * *(float *)(lVar15 + lVar28);
              if (((int)(uVar25 + 1) < (int)uVar29) &&
                 (pfVar16 = (float *)(lVar15 + 4 + lVar28),
                 *pfVar16 = fVar67 * pfVar43[(long)(int)uVar25 + 1] + fVar44 * *pfVar16,
                 (int)(uVar25 + 2) < (int)uVar29)) {
                pfVar16 = (float *)(lVar15 + 8 + lVar28);
                *pfVar16 = fVar67 * pfVar43[(long)(int)uVar25 + 2] + fVar44 * *pfVar16;
              }
            }
          }
          else {
            lVar20 = 0;
            do {
              pfVar16 = (float *)(lVar28 + lVar20);
              fVar66 = pfVar16[1];
              fVar68 = pfVar16[2];
              fVar69 = pfVar16[3];
              fVar70 = pfVar16[4];
              fVar71 = pfVar16[5];
              fVar72 = pfVar16[6];
              fVar73 = pfVar16[7];
              pfVar27 = (float *)((long)local_90 + lVar20);
              fVar79 = pfVar27[1];
              fVar80 = pfVar27[2];
              fVar81 = pfVar27[3];
              fVar82 = pfVar27[4];
              fVar83 = pfVar27[5];
              fVar84 = pfVar27[6];
              fVar85 = pfVar27[7];
              pfVar2 = (float *)(lVar28 + lVar20);
              *pfVar2 = fVar44 * *pfVar16 + fVar67 * *pfVar27;
              pfVar2[1] = fVar44 * fVar66 + fVar67 * fVar79;
              pfVar2[2] = fVar44 * fVar68 + fVar67 * fVar80;
              pfVar2[3] = fVar44 * fVar69 + fVar67 * fVar81;
              pfVar2[4] = fVar44 * fVar70 + fVar67 * fVar82;
              pfVar2[5] = fVar44 * fVar71 + fVar67 * fVar83;
              pfVar2[6] = fVar44 * fVar72 + fVar67 * fVar84;
              pfVar2[7] = fVar44 * fVar73 + fVar67 * fVar85;
              lVar20 = lVar20 + 0x20;
            } while (lVar20 != lVar13);
            uVar23 = (ulong)uVar31;
            uVar36 = uVar36 + uVar31;
            if (uVar41 != uVar31) {
              uVar17 = uVar41 - uVar31;
              uVar25 = uVar34;
              if (2 < (uVar41 - uVar31) - 1) goto LAB_00111a68;
              goto LAB_00111aac;
            }
          }
        }
      }
      else {
        lVar28 = param_15 + 8 + (long)(int)local_80 * 4;
        pfVar43[(int)uVar3] = fVar71;
        pfVar42[(int)uVar3] = fVar66;
        auVar48 = vmaxss_avx(ZEXT416(*(uint *)(param_10 + lVar32 * 4)),ZEXT416((uint)param_2));
        fVar68 = 1.0 / SQRT(auVar48._0_4_);
        auVar74 = ZEXT416((uint)fVar68);
        auVar48 = SUB6416(ZEXT464(0x3f800000),0);
        if (uVar30 == 0) {
          uVar36 = 0;
LAB_00110b70:
          lVar19 = (long)(int)uVar36;
          lVar20 = (lVar19 + local_60) * 4;
          pfVar16 = (float *)(param_13 + lVar20);
          lVar22 = lVar19 + 2 + local_80;
          lVar18 = param_15 + lVar22 * 4;
          if ((((((ulong)((long)pfVar16 - (long)local_68) < 0x19 ||
                 local_70 < (float *)(param_13 + 0x20 + lVar20) && pfVar16 < local_70 + 8) ||
                uVar1 < 3) || (ulong)(lVar18 - (long)local_68) < 0x19) ||
               (ulong)(lVar18 - (long)(local_70 + 1)) < 0x19) ||
             ((ulong)(lVar18 - (param_13 + 4 + lVar20)) < 0x19)) {
            lVar18 = lVar19;
            do {
              fVar66 = fVar67 * pfVar43[(lVar12 + lVar18) - lVar19] +
                       fVar44 * *(float *)(lVar15 + lVar18 * 4);
              *(float *)(lVar15 + lVar18 * 4) = fVar66;
              fVar66 = fVar68 * fVar66 * pfVar42[(lVar12 + lVar18) - lVar19];
              if (-1.0 <= fVar66) {
                auVar75 = vminss_avx(auVar48,ZEXT416((uint)fVar66));
                uVar45 = auVar75._0_4_;
              }
              else {
                uVar45 = 0xbf800000;
              }
              *(undefined4 *)(lVar28 + lVar18 * 4) = uVar45;
              lVar18 = lVar18 + 1;
            } while (lVar18 != lVar14 + lVar19);
          }
          else if (uVar1 < 7) {
            uVar23 = 0;
            uVar17 = uVar36;
            uVar25 = uVar39;
            uVar35 = uVar30;
LAB_00110d0f:
            auVar49 = _DAT_0011a580;
            lVar18 = lVar12 + local_60 + uVar23;
            auVar75 = vshufps_avx(auVar47,auVar47,0);
            auVar76 = vshufps_avx(auVar46,auVar46,0);
            pfVar16 = (float *)(param_13 + (lVar19 + local_60 + uVar23) * 4);
            pfVar27 = param_11 + lVar18;
            uVar37 = uVar25 & 0xfffffffc;
            uVar17 = uVar17 + uVar37;
            uVar35 = uVar35 + uVar37;
            fVar66 = auVar75._0_4_ * *pfVar27 + auVar76._0_4_ * *pfVar16;
            fVar69 = auVar75._4_4_ * pfVar27[1] + auVar76._4_4_ * pfVar16[1];
            fVar70 = auVar75._8_4_ * pfVar27[2] + auVar76._8_4_ * pfVar16[2];
            fVar71 = auVar75._12_4_ * pfVar27[3] + auVar76._12_4_ * pfVar16[3];
            auVar75 = vshufps_avx(auVar74,auVar74,0);
            *pfVar16 = fVar66;
            pfVar16[1] = fVar69;
            pfVar16[2] = fVar70;
            pfVar16[3] = fVar71;
            pfVar16 = param_12 + lVar18;
            auVar89._0_4_ = auVar75._0_4_ * fVar66 * *pfVar16;
            auVar89._4_4_ = auVar75._4_4_ * fVar69 * pfVar16[1];
            auVar89._8_4_ = auVar75._8_4_ * fVar70 * pfVar16[2];
            auVar89._12_4_ = auVar75._12_4_ * fVar71 * pfVar16[3];
            auVar76 = vcmpps_avx(auVar89,_DAT_0011a560,1);
            auVar77 = vcmpps_avx(auVar49,auVar89,1);
            auVar75 = vblendvps_avx(auVar49,_DAT_0011a560,auVar76);
            auVar86 = vpandn_avx(auVar76,auVar77);
            in_ZMM14 = ZEXT1664(auVar86);
            auVar77 = vpor_avx(auVar77,auVar76);
            auVar76 = vpcmpeqd_avx(auVar76,auVar76);
            auVar75 = vblendvps_avx(auVar75,auVar49,auVar86);
            auVar75 = vblendvps_avx(auVar75,auVar89,auVar77 ^ auVar76);
            *(undefined1 (*) [16])(param_15 + (lVar22 + uVar23) * 4) = auVar75;
            if (uVar25 != uVar37) {
LAB_00110db7:
              uVar45 = 0xbf800000;
              lVar18 = (long)(int)uVar17 * 4;
              fVar66 = fVar67 * pfVar43[(int)(uVar29 + uVar35)] +
                       fVar44 * *(float *)(lVar15 + lVar18);
              *(float *)(lVar15 + lVar18) = fVar66;
              fVar66 = fVar68 * fVar66 * pfVar42[(int)(uVar29 + uVar35)];
              uVar88 = uVar45;
              if (-1.0 <= fVar66) {
                auVar75 = vminss_avx(auVar48,ZEXT416((uint)fVar66));
                uVar88 = auVar75._0_4_;
              }
              *(undefined4 *)(lVar28 + lVar18) = uVar88;
              if ((int)(uVar35 + 1) < (int)uVar24) {
                iVar38 = uVar35 + 1 + uVar29;
                pfVar16 = (float *)(lVar15 + lVar18 + 4);
                fVar66 = fVar67 * pfVar43[iVar38] + fVar44 * *pfVar16;
                *pfVar16 = fVar66;
                fVar66 = fVar68 * fVar66 * pfVar42[iVar38];
                uVar88 = uVar45;
                if (-1.0 <= fVar66) {
                  auVar75 = vminss_avx(auVar48,ZEXT416((uint)fVar66));
                  uVar88 = auVar75._0_4_;
                }
                *(undefined4 *)(lVar18 + 4 + lVar28) = uVar88;
                if ((int)(uVar35 + 2) < (int)uVar24) {
                  iVar38 = uVar35 + 2 + uVar29;
                  pfVar16 = (float *)(lVar15 + lVar18 + 8);
                  fVar66 = fVar67 * pfVar43[iVar38] + fVar44 * *pfVar16;
                  *pfVar16 = fVar66;
                  fVar66 = fVar68 * fVar66 * pfVar42[iVar38];
                  if (-1.0 <= fVar66) {
                    auVar75 = vminss_avx(auVar48,ZEXT416((uint)fVar66));
                    uVar45 = auVar75._0_4_;
                  }
                  *(undefined4 *)(lVar18 + 8 + lVar28) = uVar45;
                }
              }
            }
          }
          else {
            auVar5._16_16_ = _UNK_0011a590;
            auVar5._0_16_ = _DAT_0011a580;
            auVar6 = vpcmpeqd_avx2(ZEXT432((uint)fVar66),ZEXT432((uint)fVar66));
            lVar20 = 0;
            do {
              pfVar27 = (float *)((long)local_68 + lVar20 + -4);
              pfVar2 = (float *)((long)pfVar16 + lVar20);
              fVar66 = fVar44 * *pfVar2 + fVar67 * *pfVar27;
              fVar69 = fVar44 * pfVar2[1] + fVar67 * pfVar27[1];
              fVar70 = fVar44 * pfVar2[2] + fVar67 * pfVar27[2];
              fVar71 = fVar44 * pfVar2[3] + fVar67 * pfVar27[3];
              fVar72 = fVar44 * pfVar2[4] + fVar67 * pfVar27[4];
              fVar73 = fVar44 * pfVar2[5] + fVar67 * pfVar27[5];
              fVar79 = fVar44 * pfVar2[6] + fVar67 * pfVar27[6];
              fVar80 = fVar44 * pfVar2[7] + fVar67 * pfVar27[7];
              pfVar27 = (float *)((long)pfVar16 + lVar20);
              *pfVar27 = fVar66;
              pfVar27[1] = fVar69;
              pfVar27[2] = fVar70;
              pfVar27[3] = fVar71;
              pfVar27[4] = fVar72;
              pfVar27[5] = fVar73;
              pfVar27[6] = fVar79;
              pfVar27[7] = fVar80;
              pfVar27 = (float *)((long)local_70 + lVar20);
              auVar51._0_4_ = fVar68 * fVar66 * *pfVar27;
              auVar51._4_4_ = fVar68 * fVar69 * pfVar27[1];
              auVar51._8_4_ = fVar68 * fVar70 * pfVar27[2];
              auVar51._12_4_ = fVar68 * fVar71 * pfVar27[3];
              auVar51._16_4_ = fVar68 * fVar72 * pfVar27[4];
              auVar51._20_4_ = fVar68 * fVar73 * pfVar27[5];
              auVar51._24_4_ = fVar68 * fVar79 * pfVar27[6];
              auVar51._28_4_ = fVar68 * fVar80 * pfVar27[7];
              auVar50 = vcmpps_avx(auVar51,auVar7,1);
              auVar52 = vcmpps_avx(auVar5,auVar51,1);
              auVar4 = vblendvps_avx(auVar5,auVar7,auVar50);
              auVar53 = vpandn_avx2(auVar50,auVar52);
              in_ZMM14 = ZEXT3264(auVar53);
              auVar50 = vpor_avx2(auVar52,auVar50);
              auVar4 = vblendvps_avx(auVar4,auVar5,auVar53);
              auVar4 = vblendvps_avx(auVar4,auVar51,auVar50 ^ auVar6);
              *(undefined1 (*) [32])(lVar18 + lVar20) = auVar4;
              lVar20 = lVar20 + 0x20;
            } while (lVar20 != lVar11);
            uVar23 = (ulong)uVar40;
            uVar17 = uVar36 + uVar40;
            if (uVar39 != uVar40) {
              uVar25 = uVar39 - uVar40;
              uVar35 = uVar9;
              if (2 < (uVar39 - uVar40) - 1) goto LAB_00110d0f;
              goto LAB_00110db7;
            }
          }
          uVar36 = uVar36 + uVar39;
        }
        else {
          lVar18 = 0;
          auVar6._16_16_ = _UNK_0011a570;
          auVar6._0_16_ = _DAT_0011a560;
          auVar4._16_16_ = _UNK_0011a590;
          auVar4._0_16_ = _DAT_0011a580;
          do {
            pfVar16 = (float *)(lVar15 + lVar18 * 4);
            pfVar27 = local_b8 + lVar18;
            fVar69 = fVar67 * *pfVar27 + fVar44 * *pfVar16;
            fVar70 = fVar67 * pfVar27[1] + fVar44 * pfVar16[1];
            fVar71 = fVar67 * pfVar27[2] + fVar44 * pfVar16[2];
            fVar72 = fVar67 * pfVar27[3] + fVar44 * pfVar16[3];
            fVar73 = fVar67 * pfVar27[4] + fVar44 * pfVar16[4];
            fVar79 = fVar67 * pfVar27[5] + fVar44 * pfVar16[5];
            fVar80 = fVar67 * pfVar27[6] + fVar44 * pfVar16[6];
            fVar81 = fVar67 * pfVar27[7] + fVar44 * pfVar16[7];
            pfVar16 = (float *)(lVar15 + lVar18 * 4);
            *pfVar16 = fVar69;
            pfVar16[1] = fVar70;
            pfVar16[2] = fVar71;
            pfVar16[3] = fVar72;
            pfVar16[4] = fVar73;
            pfVar16[5] = fVar79;
            pfVar16[6] = fVar80;
            pfVar16[7] = fVar81;
            pfVar16 = local_c8 + lVar18;
            auVar50._0_4_ = fVar69 * fVar68 * *pfVar16;
            auVar50._4_4_ = fVar70 * fVar68 * pfVar16[1];
            auVar50._8_4_ = fVar71 * fVar68 * pfVar16[2];
            auVar50._12_4_ = fVar72 * fVar68 * pfVar16[3];
            auVar50._16_4_ = fVar73 * fVar68 * pfVar16[4];
            auVar50._20_4_ = fVar79 * fVar68 * pfVar16[5];
            auVar50._24_4_ = fVar80 * fVar68 * pfVar16[6];
            auVar50._28_4_ = fVar81 * fVar68 * pfVar16[7];
            auVar50 = vmaxps_avx(auVar50,auVar6);
            auVar50 = vminps_avx(auVar50,auVar4);
            *(undefined1 (*) [32])(lVar28 + lVar18 * 4) = auVar50;
            lVar18 = lVar18 + 8;
          } while ((int)lVar18 < (int)uVar30);
          uVar36 = uVar30;
          if ((int)uVar30 < (int)uVar24) goto LAB_00110b70;
        }
        if (0 < (int)uVar33) {
          lVar18 = (long)(int)uVar36 * 4;
          pfVar16 = (float *)(lVar15 + lVar18);
          fVar66 = fVar67 * *pfVar43 + fVar44 * *pfVar16;
          fVar69 = fVar67 * pfVar43[1] + fVar44 * pfVar16[1];
          fVar70 = fVar67 * pfVar43[2] + fVar44 * pfVar16[2];
          fVar71 = fVar67 * pfVar43[3] + fVar44 * pfVar16[3];
          fVar72 = fVar67 * pfVar43[4] + fVar44 * pfVar16[4];
          fVar73 = fVar67 * pfVar43[5] + fVar44 * pfVar16[5];
          fVar79 = fVar67 * pfVar43[6] + fVar44 * pfVar16[6];
          fVar80 = fVar67 * pfVar43[7] + fVar44 * pfVar16[7];
          *pfVar16 = fVar66;
          pfVar16[1] = fVar69;
          pfVar16[2] = fVar70;
          pfVar16[3] = fVar71;
          pfVar16[4] = fVar72;
          pfVar16[5] = fVar73;
          pfVar16[6] = fVar79;
          pfVar16[7] = fVar80;
          auVar52._0_4_ = fVar66 * fVar68 * *pfVar42;
          auVar52._4_4_ = fVar69 * fVar68 * pfVar42[1];
          auVar52._8_4_ = fVar70 * fVar68 * pfVar42[2];
          auVar52._12_4_ = fVar71 * fVar68 * pfVar42[3];
          auVar52._16_4_ = fVar72 * fVar68 * pfVar42[4];
          auVar52._20_4_ = fVar73 * fVar68 * pfVar42[5];
          auVar52._24_4_ = fVar79 * fVar68 * pfVar42[6];
          auVar52._28_4_ = fVar80 * fVar68 * pfVar42[7];
          auVar6 = vmaxps_avx(auVar52,auVar7);
          auVar6 = vminps_avx(auVar6,auVar8);
          *(undefined1 (*) [32])(lVar28 + (long)(int)uVar36 * 4) = auVar6;
          if (8 < (int)uVar33) {
            pfVar16 = (float *)(lVar15 + 0x20 + lVar18);
            fVar66 = fVar67 * pfVar43[8] + fVar44 * *pfVar16;
            fVar69 = fVar67 * pfVar43[9] + fVar44 * pfVar16[1];
            fVar70 = fVar67 * pfVar43[10] + fVar44 * pfVar16[2];
            fVar71 = fVar67 * pfVar43[0xb] + fVar44 * pfVar16[3];
            fVar72 = fVar67 * pfVar43[0xc] + fVar44 * pfVar16[4];
            fVar73 = fVar67 * pfVar43[0xd] + fVar44 * pfVar16[5];
            fVar79 = fVar67 * pfVar43[0xe] + fVar44 * pfVar16[6];
            fVar80 = fVar67 * pfVar43[0xf] + fVar44 * pfVar16[7];
            *pfVar16 = fVar66;
            pfVar16[1] = fVar69;
            pfVar16[2] = fVar70;
            pfVar16[3] = fVar71;
            pfVar16[4] = fVar72;
            pfVar16[5] = fVar73;
            pfVar16[6] = fVar79;
            pfVar16[7] = fVar80;
            auVar53._0_4_ = fVar66 * fVar68 * pfVar42[8];
            auVar53._4_4_ = fVar69 * fVar68 * pfVar42[9];
            auVar53._8_4_ = fVar70 * fVar68 * pfVar42[10];
            auVar53._12_4_ = fVar71 * fVar68 * pfVar42[0xb];
            auVar53._16_4_ = fVar72 * fVar68 * pfVar42[0xc];
            auVar53._20_4_ = fVar73 * fVar68 * pfVar42[0xd];
            auVar53._24_4_ = fVar79 * fVar68 * pfVar42[0xe];
            auVar53._28_4_ = fVar80 * fVar68 * pfVar42[0xf];
            auVar6 = vmaxps_avx(auVar53,auVar7);
            auVar6 = vminps_avx(auVar6,auVar8);
            *(undefined1 (*) [32])(lVar28 + 0x20 + lVar18) = auVar6;
            if (0x10 < (int)uVar33) {
              pfVar16 = (float *)(lVar15 + 0x40 + lVar18);
              fVar66 = fVar67 * pfVar43[0x10] + fVar44 * *pfVar16;
              fVar69 = fVar67 * pfVar43[0x11] + fVar44 * pfVar16[1];
              fVar70 = fVar67 * pfVar43[0x12] + fVar44 * pfVar16[2];
              fVar71 = fVar67 * pfVar43[0x13] + fVar44 * pfVar16[3];
              fVar72 = fVar67 * pfVar43[0x14] + fVar44 * pfVar16[4];
              fVar73 = fVar67 * pfVar43[0x15] + fVar44 * pfVar16[5];
              fVar79 = fVar67 * pfVar43[0x16] + fVar44 * pfVar16[6];
              fVar80 = fVar67 * pfVar43[0x17] + fVar44 * pfVar16[7];
              *pfVar16 = fVar66;
              pfVar16[1] = fVar69;
              pfVar16[2] = fVar70;
              pfVar16[3] = fVar71;
              pfVar16[4] = fVar72;
              pfVar16[5] = fVar73;
              pfVar16[6] = fVar79;
              pfVar16[7] = fVar80;
              auVar54._0_4_ = fVar68 * fVar66 * pfVar42[0x10];
              auVar54._4_4_ = fVar68 * fVar69 * pfVar42[0x11];
              auVar54._8_4_ = fVar68 * fVar70 * pfVar42[0x12];
              auVar54._12_4_ = fVar68 * fVar71 * pfVar42[0x13];
              auVar54._16_4_ = fVar68 * fVar72 * pfVar42[0x14];
              auVar54._20_4_ = fVar68 * fVar73 * pfVar42[0x15];
              auVar54._24_4_ = fVar68 * fVar79 * pfVar42[0x16];
              auVar54._28_4_ = fVar68 * fVar80 * pfVar42[0x17];
              auVar6 = vmaxps_avx(auVar54,auVar7);
              auVar6 = vminps_avx(auVar6,auVar8);
              *(undefined1 (*) [32])(lVar28 + 0x40 + lVar18) = auVar6;
              if (0x18 < (int)uVar33) {
                pfVar16 = (float *)(lVar15 + 0x60 + lVar18);
                fVar66 = fVar67 * pfVar43[0x18] + fVar44 * *pfVar16;
                fVar69 = fVar67 * pfVar43[0x19] + fVar44 * pfVar16[1];
                fVar70 = fVar67 * pfVar43[0x1a] + fVar44 * pfVar16[2];
                fVar71 = fVar67 * pfVar43[0x1b] + fVar44 * pfVar16[3];
                fVar72 = fVar67 * pfVar43[0x1c] + fVar44 * pfVar16[4];
                fVar73 = fVar67 * pfVar43[0x1d] + fVar44 * pfVar16[5];
                fVar79 = fVar67 * pfVar43[0x1e] + fVar44 * pfVar16[6];
                fVar80 = fVar67 * pfVar43[0x1f] + fVar44 * pfVar16[7];
                *pfVar16 = fVar66;
                pfVar16[1] = fVar69;
                pfVar16[2] = fVar70;
                pfVar16[3] = fVar71;
                pfVar16[4] = fVar72;
                pfVar16[5] = fVar73;
                pfVar16[6] = fVar79;
                pfVar16[7] = fVar80;
                auVar55._0_4_ = fVar68 * fVar66 * pfVar42[0x18];
                auVar55._4_4_ = fVar68 * fVar69 * pfVar42[0x19];
                auVar55._8_4_ = fVar68 * fVar70 * pfVar42[0x1a];
                auVar55._12_4_ = fVar68 * fVar71 * pfVar42[0x1b];
                auVar55._16_4_ = fVar68 * fVar72 * pfVar42[0x1c];
                auVar55._20_4_ = fVar68 * fVar73 * pfVar42[0x1d];
                auVar55._24_4_ = fVar68 * fVar79 * pfVar42[0x1e];
                auVar55._28_4_ = fVar68 * fVar80 * pfVar42[0x1f];
                auVar6 = vmaxps_avx(auVar55,auVar7);
                auVar6 = vminps_avx(auVar6,auVar8);
                *(undefined1 (*) [32])(lVar28 + 0x60 + lVar18) = auVar6;
                if (0x20 < (int)uVar33) {
                  pfVar16 = (float *)(lVar15 + 0x80 + lVar18);
                  fVar66 = fVar67 * pfVar43[0x20] + fVar44 * *pfVar16;
                  fVar69 = fVar67 * pfVar43[0x21] + fVar44 * pfVar16[1];
                  fVar70 = fVar67 * pfVar43[0x22] + fVar44 * pfVar16[2];
                  fVar71 = fVar67 * pfVar43[0x23] + fVar44 * pfVar16[3];
                  fVar72 = fVar67 * pfVar43[0x24] + fVar44 * pfVar16[4];
                  fVar73 = fVar67 * pfVar43[0x25] + fVar44 * pfVar16[5];
                  fVar79 = fVar67 * pfVar43[0x26] + fVar44 * pfVar16[6];
                  fVar80 = fVar67 * pfVar43[0x27] + fVar44 * pfVar16[7];
                  *pfVar16 = fVar66;
                  pfVar16[1] = fVar69;
                  pfVar16[2] = fVar70;
                  pfVar16[3] = fVar71;
                  pfVar16[4] = fVar72;
                  pfVar16[5] = fVar73;
                  pfVar16[6] = fVar79;
                  pfVar16[7] = fVar80;
                  auVar56._0_4_ = fVar66 * fVar68 * pfVar42[0x20];
                  auVar56._4_4_ = fVar69 * fVar68 * pfVar42[0x21];
                  auVar56._8_4_ = fVar70 * fVar68 * pfVar42[0x22];
                  auVar56._12_4_ = fVar71 * fVar68 * pfVar42[0x23];
                  auVar56._16_4_ = fVar72 * fVar68 * pfVar42[0x24];
                  auVar56._20_4_ = fVar73 * fVar68 * pfVar42[0x25];
                  auVar56._24_4_ = fVar79 * fVar68 * pfVar42[0x26];
                  auVar56._28_4_ = fVar80 * fVar68 * pfVar42[0x27];
                  auVar6 = vmaxps_avx(auVar56,auVar7);
                  auVar6 = vminps_avx(auVar6,auVar8);
                  *(undefined1 (*) [32])(lVar28 + 0x80 + lVar18) = auVar6;
                  if (0x28 < (int)uVar33) {
                    pfVar16 = (float *)(lVar15 + 0xa0 + lVar18);
                    fVar66 = fVar67 * pfVar43[0x28] + fVar44 * *pfVar16;
                    fVar69 = fVar67 * pfVar43[0x29] + fVar44 * pfVar16[1];
                    fVar70 = fVar67 * pfVar43[0x2a] + fVar44 * pfVar16[2];
                    fVar71 = fVar67 * pfVar43[0x2b] + fVar44 * pfVar16[3];
                    fVar72 = fVar67 * pfVar43[0x2c] + fVar44 * pfVar16[4];
                    fVar73 = fVar67 * pfVar43[0x2d] + fVar44 * pfVar16[5];
                    fVar79 = fVar67 * pfVar43[0x2e] + fVar44 * pfVar16[6];
                    fVar80 = fVar67 * pfVar43[0x2f] + fVar44 * pfVar16[7];
                    *pfVar16 = fVar66;
                    pfVar16[1] = fVar69;
                    pfVar16[2] = fVar70;
                    pfVar16[3] = fVar71;
                    pfVar16[4] = fVar72;
                    pfVar16[5] = fVar73;
                    pfVar16[6] = fVar79;
                    pfVar16[7] = fVar80;
                    auVar57._0_4_ = fVar68 * fVar66 * pfVar42[0x28];
                    auVar57._4_4_ = fVar68 * fVar69 * pfVar42[0x29];
                    auVar57._8_4_ = fVar68 * fVar70 * pfVar42[0x2a];
                    auVar57._12_4_ = fVar68 * fVar71 * pfVar42[0x2b];
                    auVar57._16_4_ = fVar68 * fVar72 * pfVar42[0x2c];
                    auVar57._20_4_ = fVar68 * fVar73 * pfVar42[0x2d];
                    auVar57._24_4_ = fVar68 * fVar79 * pfVar42[0x2e];
                    auVar57._28_4_ = fVar68 * fVar80 * pfVar42[0x2f];
                    auVar6 = vmaxps_avx(auVar57,auVar7);
                    auVar6 = vminps_avx(auVar6,auVar8);
                    *(undefined1 (*) [32])(lVar28 + 0xa0 + lVar18) = auVar6;
                    if (0x30 < (int)uVar33) {
                      pfVar16 = (float *)(lVar15 + 0xc0 + lVar18);
                      fVar66 = fVar67 * pfVar43[0x30] + fVar44 * *pfVar16;
                      fVar69 = fVar67 * pfVar43[0x31] + fVar44 * pfVar16[1];
                      fVar70 = fVar67 * pfVar43[0x32] + fVar44 * pfVar16[2];
                      fVar71 = fVar67 * pfVar43[0x33] + fVar44 * pfVar16[3];
                      fVar72 = fVar67 * pfVar43[0x34] + fVar44 * pfVar16[4];
                      fVar73 = fVar67 * pfVar43[0x35] + fVar44 * pfVar16[5];
                      fVar79 = fVar67 * pfVar43[0x36] + fVar44 * pfVar16[6];
                      fVar80 = fVar67 * pfVar43[0x37] + fVar44 * pfVar16[7];
                      *pfVar16 = fVar66;
                      pfVar16[1] = fVar69;
                      pfVar16[2] = fVar70;
                      pfVar16[3] = fVar71;
                      pfVar16[4] = fVar72;
                      pfVar16[5] = fVar73;
                      pfVar16[6] = fVar79;
                      pfVar16[7] = fVar80;
                      auVar58._0_4_ = fVar68 * fVar66 * pfVar42[0x30];
                      auVar58._4_4_ = fVar68 * fVar69 * pfVar42[0x31];
                      auVar58._8_4_ = fVar68 * fVar70 * pfVar42[0x32];
                      auVar58._12_4_ = fVar68 * fVar71 * pfVar42[0x33];
                      auVar58._16_4_ = fVar68 * fVar72 * pfVar42[0x34];
                      auVar58._20_4_ = fVar68 * fVar73 * pfVar42[0x35];
                      auVar58._24_4_ = fVar68 * fVar79 * pfVar42[0x36];
                      auVar58._28_4_ = fVar68 * fVar80 * pfVar42[0x37];
                      auVar6 = vmaxps_avx(auVar58,auVar7);
                      auVar6 = vminps_avx(auVar6,auVar8);
                      *(undefined1 (*) [32])(lVar28 + 0xc0 + lVar18) = auVar6;
                      if (0x38 < (int)uVar33) {
                        pfVar16 = (float *)(lVar15 + 0xe0 + lVar18);
                        fVar66 = fVar67 * pfVar43[0x38] + fVar44 * *pfVar16;
                        fVar69 = fVar67 * pfVar43[0x39] + fVar44 * pfVar16[1];
                        fVar70 = fVar67 * pfVar43[0x3a] + fVar44 * pfVar16[2];
                        fVar71 = fVar67 * pfVar43[0x3b] + fVar44 * pfVar16[3];
                        fVar72 = fVar67 * pfVar43[0x3c] + fVar44 * pfVar16[4];
                        fVar73 = fVar67 * pfVar43[0x3d] + fVar44 * pfVar16[5];
                        fVar79 = fVar67 * pfVar43[0x3e] + fVar44 * pfVar16[6];
                        fVar80 = fVar67 * pfVar43[0x3f] + fVar44 * pfVar16[7];
                        *pfVar16 = fVar66;
                        pfVar16[1] = fVar69;
                        pfVar16[2] = fVar70;
                        pfVar16[3] = fVar71;
                        pfVar16[4] = fVar72;
                        pfVar16[5] = fVar73;
                        pfVar16[6] = fVar79;
                        pfVar16[7] = fVar80;
                        auVar59._0_4_ = fVar68 * fVar66 * pfVar42[0x38];
                        auVar59._4_4_ = fVar68 * fVar69 * pfVar42[0x39];
                        auVar59._8_4_ = fVar68 * fVar70 * pfVar42[0x3a];
                        auVar59._12_4_ = fVar68 * fVar71 * pfVar42[0x3b];
                        auVar59._16_4_ = fVar68 * fVar72 * pfVar42[0x3c];
                        auVar59._20_4_ = fVar68 * fVar73 * pfVar42[0x3d];
                        auVar59._24_4_ = fVar68 * fVar79 * pfVar42[0x3e];
                        auVar59._28_4_ = fVar68 * fVar80 * pfVar42[0x3f];
                        auVar6 = vmaxps_avx(auVar59,auVar7);
                        auVar6 = vminps_avx(auVar6,auVar8);
                        *(undefined1 (*) [32])(lVar28 + 0xe0 + lVar18) = auVar6;
                        if (0x40 < (int)uVar33) {
                          pfVar16 = (float *)(lVar15 + 0x100 + lVar18);
                          fVar66 = fVar67 * pfVar43[0x40] + fVar44 * *pfVar16;
                          fVar69 = fVar67 * pfVar43[0x41] + fVar44 * pfVar16[1];
                          fVar70 = fVar67 * pfVar43[0x42] + fVar44 * pfVar16[2];
                          fVar71 = fVar67 * pfVar43[0x43] + fVar44 * pfVar16[3];
                          fVar72 = fVar67 * pfVar43[0x44] + fVar44 * pfVar16[4];
                          fVar73 = fVar67 * pfVar43[0x45] + fVar44 * pfVar16[5];
                          fVar79 = fVar67 * pfVar43[0x46] + fVar44 * pfVar16[6];
                          fVar80 = fVar67 * pfVar43[0x47] + fVar44 * pfVar16[7];
                          *pfVar16 = fVar66;
                          pfVar16[1] = fVar69;
                          pfVar16[2] = fVar70;
                          pfVar16[3] = fVar71;
                          pfVar16[4] = fVar72;
                          pfVar16[5] = fVar73;
                          pfVar16[6] = fVar79;
                          pfVar16[7] = fVar80;
                          auVar60._0_4_ = fVar68 * fVar66 * pfVar42[0x40];
                          auVar60._4_4_ = fVar68 * fVar69 * pfVar42[0x41];
                          auVar60._8_4_ = fVar68 * fVar70 * pfVar42[0x42];
                          auVar60._12_4_ = fVar68 * fVar71 * pfVar42[0x43];
                          auVar60._16_4_ = fVar68 * fVar72 * pfVar42[0x44];
                          auVar60._20_4_ = fVar68 * fVar73 * pfVar42[0x45];
                          auVar60._24_4_ = fVar68 * fVar79 * pfVar42[0x46];
                          auVar60._28_4_ = fVar68 * fVar80 * pfVar42[0x47];
                          auVar6 = vmaxps_avx(auVar60,auVar7);
                          auVar6 = vminps_avx(auVar6,auVar8);
                          *(undefined1 (*) [32])(lVar28 + 0x100 + lVar18) = auVar6;
                          if (0x48 < (int)uVar33) {
                            pfVar16 = (float *)(lVar15 + 0x120 + lVar18);
                            fVar66 = fVar67 * pfVar43[0x48] + fVar44 * *pfVar16;
                            fVar69 = fVar67 * pfVar43[0x49] + fVar44 * pfVar16[1];
                            fVar70 = fVar67 * pfVar43[0x4a] + fVar44 * pfVar16[2];
                            fVar71 = fVar67 * pfVar43[0x4b] + fVar44 * pfVar16[3];
                            fVar72 = fVar67 * pfVar43[0x4c] + fVar44 * pfVar16[4];
                            fVar73 = fVar67 * pfVar43[0x4d] + fVar44 * pfVar16[5];
                            fVar79 = fVar67 * pfVar43[0x4e] + fVar44 * pfVar16[6];
                            fVar80 = fVar67 * pfVar43[0x4f] + fVar44 * pfVar16[7];
                            *pfVar16 = fVar66;
                            pfVar16[1] = fVar69;
                            pfVar16[2] = fVar70;
                            pfVar16[3] = fVar71;
                            pfVar16[4] = fVar72;
                            pfVar16[5] = fVar73;
                            pfVar16[6] = fVar79;
                            pfVar16[7] = fVar80;
                            auVar61._0_4_ = fVar68 * fVar66 * pfVar42[0x48];
                            auVar61._4_4_ = fVar68 * fVar69 * pfVar42[0x49];
                            auVar61._8_4_ = fVar68 * fVar70 * pfVar42[0x4a];
                            auVar61._12_4_ = fVar68 * fVar71 * pfVar42[0x4b];
                            auVar61._16_4_ = fVar68 * fVar72 * pfVar42[0x4c];
                            auVar61._20_4_ = fVar68 * fVar73 * pfVar42[0x4d];
                            auVar61._24_4_ = fVar68 * fVar79 * pfVar42[0x4e];
                            auVar61._28_4_ = fVar68 * fVar80 * pfVar42[0x4f];
                            auVar6 = vmaxps_avx(auVar61,auVar7);
                            auVar6 = vminps_avx(auVar6,auVar8);
                            *(undefined1 (*) [32])(lVar28 + 0x120 + lVar18) = auVar6;
                            if (0x50 < (int)uVar33) {
                              pfVar16 = (float *)(lVar15 + 0x140 + lVar18);
                              fVar66 = fVar67 * pfVar43[0x50] + fVar44 * *pfVar16;
                              fVar69 = fVar67 * pfVar43[0x51] + fVar44 * pfVar16[1];
                              fVar70 = fVar67 * pfVar43[0x52] + fVar44 * pfVar16[2];
                              fVar71 = fVar67 * pfVar43[0x53] + fVar44 * pfVar16[3];
                              fVar72 = fVar67 * pfVar43[0x54] + fVar44 * pfVar16[4];
                              fVar73 = fVar67 * pfVar43[0x55] + fVar44 * pfVar16[5];
                              fVar79 = fVar67 * pfVar43[0x56] + fVar44 * pfVar16[6];
                              fVar80 = fVar67 * pfVar43[0x57] + fVar44 * pfVar16[7];
                              *pfVar16 = fVar66;
                              pfVar16[1] = fVar69;
                              pfVar16[2] = fVar70;
                              pfVar16[3] = fVar71;
                              pfVar16[4] = fVar72;
                              pfVar16[5] = fVar73;
                              pfVar16[6] = fVar79;
                              pfVar16[7] = fVar80;
                              auVar62._0_4_ = fVar68 * fVar66 * pfVar42[0x50];
                              auVar62._4_4_ = fVar68 * fVar69 * pfVar42[0x51];
                              auVar62._8_4_ = fVar68 * fVar70 * pfVar42[0x52];
                              auVar62._12_4_ = fVar68 * fVar71 * pfVar42[0x53];
                              auVar62._16_4_ = fVar68 * fVar72 * pfVar42[0x54];
                              auVar62._20_4_ = fVar68 * fVar73 * pfVar42[0x55];
                              auVar62._24_4_ = fVar68 * fVar79 * pfVar42[0x56];
                              auVar62._28_4_ = fVar68 * fVar80 * pfVar42[0x57];
                              auVar6 = vmaxps_avx(auVar62,auVar7);
                              auVar6 = vminps_avx(auVar6,auVar8);
                              *(undefined1 (*) [32])(lVar28 + 0x140 + lVar18) = auVar6;
                              if (0x58 < (int)uVar33) {
                                pfVar16 = (float *)(lVar15 + 0x160 + lVar18);
                                fVar66 = fVar67 * pfVar43[0x58] + fVar44 * *pfVar16;
                                fVar69 = fVar67 * pfVar43[0x59] + fVar44 * pfVar16[1];
                                fVar70 = fVar67 * pfVar43[0x5a] + fVar44 * pfVar16[2];
                                fVar71 = fVar67 * pfVar43[0x5b] + fVar44 * pfVar16[3];
                                fVar72 = fVar67 * pfVar43[0x5c] + fVar44 * pfVar16[4];
                                fVar73 = fVar67 * pfVar43[0x5d] + fVar44 * pfVar16[5];
                                fVar79 = fVar67 * pfVar43[0x5e] + fVar44 * pfVar16[6];
                                fVar80 = fVar67 * pfVar43[0x5f] + fVar44 * pfVar16[7];
                                *pfVar16 = fVar66;
                                pfVar16[1] = fVar69;
                                pfVar16[2] = fVar70;
                                pfVar16[3] = fVar71;
                                pfVar16[4] = fVar72;
                                pfVar16[5] = fVar73;
                                pfVar16[6] = fVar79;
                                pfVar16[7] = fVar80;
                                auVar63._0_4_ = fVar66 * fVar68 * pfVar42[0x58];
                                auVar63._4_4_ = fVar69 * fVar68 * pfVar42[0x59];
                                auVar63._8_4_ = fVar70 * fVar68 * pfVar42[0x5a];
                                auVar63._12_4_ = fVar71 * fVar68 * pfVar42[0x5b];
                                auVar63._16_4_ = fVar72 * fVar68 * pfVar42[0x5c];
                                auVar63._20_4_ = fVar73 * fVar68 * pfVar42[0x5d];
                                auVar63._24_4_ = fVar79 * fVar68 * pfVar42[0x5e];
                                auVar63._28_4_ = fVar80 * fVar68 * pfVar42[0x5f];
                                auVar6 = vmaxps_avx(auVar63,auVar7);
                                auVar6 = vminps_avx(auVar6,auVar8);
                                *(undefined1 (*) [32])(lVar28 + 0x160 + lVar18) = auVar6;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar36 = (uVar33 - 8) + uVar36 + 8;
        }
        if ((int)uVar33 < (int)uVar29) {
          lVar21 = (long)(int)uVar36;
          lVar19 = lVar21 + 2 + local_80;
          lVar18 = param_15 + lVar19 * 4;
          lVar20 = lVar21 + local_60;
          lVar22 = lVar20 * 4 + 4;
          pfVar16 = (float *)(param_13 + lVar20 * 4);
          if ((((((ulong)((long)pfVar16 - (long)(local_90 + 1)) < 0x19 ||
                 pfVar16 < local_78 + 8 && local_78 < (float *)(param_13 + 0x1c + lVar22)) ||
                uVar10 < 3) || (ulong)(lVar18 - (lVar22 + param_13)) < 0x19) ||
               (ulong)(lVar18 - (long)(local_90 + 1)) < 0x19) ||
             ((ulong)(lVar18 - (long)(local_78 + 1)) < 0x19)) {
            lVar18 = lVar21;
            do {
              fVar66 = fVar67 * pfVar43[(lVar26 + lVar18) - lVar21] +
                       fVar44 * *(float *)(lVar15 + lVar18 * 4);
              *(float *)(lVar15 + lVar18 * 4) = fVar66;
              fVar66 = fVar68 * fVar66 * pfVar42[(lVar26 + lVar18) - lVar21];
              if (-1.0 <= fVar66) {
                auVar47 = vminss_avx(auVar48,ZEXT416((uint)fVar66));
                uVar45 = auVar47._0_4_;
              }
              else {
                uVar45 = 0xbf800000;
              }
              *(undefined4 *)(lVar28 + lVar18 * 4) = uVar45;
              lVar18 = lVar18 + 1;
            } while (lVar21 + 1 + (ulong)((uVar29 - 1) - uVar33) != lVar18);
          }
          else if (uVar10 < 7) {
            uVar23 = 0;
            uVar17 = uVar33;
            uVar25 = uVar41;
LAB_00111363:
            auVar77 = _DAT_0011a580;
            auVar47 = vshufps_avx(auVar47,auVar47,0);
            auVar75 = vshufps_avx(auVar46,auVar46,0);
            pfVar16 = (float *)(param_13 + (lVar20 + uVar23) * 4);
            lVar18 = local_60 + lVar26 + uVar23;
            pfVar27 = param_11 + lVar18;
            fVar66 = auVar47._0_4_ * *pfVar27 + auVar75._0_4_ * *pfVar16;
            fVar69 = auVar47._4_4_ * pfVar27[1] + auVar75._4_4_ * pfVar16[1];
            fVar70 = auVar47._8_4_ * pfVar27[2] + auVar75._8_4_ * pfVar16[2];
            fVar71 = auVar47._12_4_ * pfVar27[3] + auVar75._12_4_ * pfVar16[3];
            auVar47 = vshufps_avx(auVar74,auVar74,0);
            *pfVar16 = fVar66;
            pfVar16[1] = fVar69;
            pfVar16[2] = fVar70;
            pfVar16[3] = fVar71;
            pfVar16 = param_12 + lVar18;
            auVar87._0_4_ = auVar47._0_4_ * fVar66 * *pfVar16;
            auVar87._4_4_ = auVar47._4_4_ * fVar69 * pfVar16[1];
            auVar87._8_4_ = auVar47._8_4_ * fVar70 * pfVar16[2];
            auVar87._12_4_ = auVar47._12_4_ * fVar71 * pfVar16[3];
            auVar74 = vcmpps_avx(auVar87,_DAT_0011a560,1);
            auVar75 = vcmpps_avx(auVar77,auVar87,1);
            auVar47 = vblendvps_avx(auVar77,_DAT_0011a560,auVar74);
            auVar76 = vpandn_avx(auVar74,auVar75);
            auVar75 = vpor_avx(auVar75,auVar74);
            auVar74 = vpcmpeqd_avx(auVar74,auVar74);
            auVar47 = vblendvps_avx(auVar47,auVar77,auVar76);
            auVar47 = vblendvps_avx(auVar47,auVar87,auVar75 ^ auVar74);
            *(undefined1 (*) [16])(param_15 + (uVar23 + lVar19) * 4) = auVar47;
            uVar35 = uVar25 & 0xfffffffc;
            uVar36 = uVar36 + uVar35;
            uVar17 = uVar17 + uVar35;
            if (uVar35 != uVar25) {
LAB_0011140e:
              lVar18 = (long)(int)uVar36 * 4;
              fVar66 = fVar67 * pfVar43[(int)uVar17] + fVar44 * *(float *)(lVar15 + lVar18);
              *(float *)(lVar15 + lVar18) = fVar66;
              fVar66 = fVar68 * fVar66 * pfVar42[(int)uVar17];
              uVar88 = 0xbf800000;
              uVar45 = uVar88;
              if (-1.0 <= fVar66) {
                auVar47 = vminss_avx(auVar48,ZEXT416((uint)fVar66));
                uVar45 = auVar47._0_4_;
              }
              *(undefined4 *)(lVar28 + lVar18) = uVar45;
              if ((int)(uVar17 + 1) < (int)uVar29) {
                pfVar16 = (float *)(lVar15 + lVar18 + 4);
                fVar66 = fVar67 * pfVar43[(long)(int)uVar17 + 1] + fVar44 * *pfVar16;
                *pfVar16 = fVar66;
                fVar66 = fVar68 * fVar66 * pfVar42[(long)(int)uVar17 + 1];
                uVar45 = uVar88;
                if (-1.0 <= fVar66) {
                  auVar47 = vminss_avx(auVar48,ZEXT416((uint)fVar66));
                  uVar45 = auVar47._0_4_;
                }
                *(undefined4 *)(lVar18 + 4 + lVar28) = uVar45;
                if ((int)(uVar17 + 2) < (int)uVar29) {
                  pfVar16 = (float *)(lVar15 + lVar18 + 8);
                  fVar66 = fVar67 * pfVar43[(long)(int)uVar17 + 2] + fVar44 * *pfVar16;
                  *pfVar16 = fVar66;
                  fVar66 = fVar68 * fVar66 * pfVar42[(long)(int)uVar17 + 2];
                  if (-1.0 <= fVar66) {
                    auVar47 = vminss_avx(auVar48,ZEXT416((uint)fVar66));
                    uVar88 = auVar47._0_4_;
                  }
                  *(undefined4 *)(lVar18 + 8 + lVar28) = uVar88;
                }
              }
            }
          }
          else {
            lVar22 = 0;
            auVar6 = vpcmpeqd_avx2(in_ZMM14._0_32_,in_ZMM14._0_32_);
            in_ZMM14 = ZEXT3264(auVar6);
            do {
              pfVar27 = (float *)((long)pfVar16 + lVar22);
              pfVar2 = (float *)((long)local_90 + lVar22);
              fVar66 = fVar67 * *pfVar2 + fVar44 * *pfVar27;
              fVar69 = fVar67 * pfVar2[1] + fVar44 * pfVar27[1];
              fVar70 = fVar67 * pfVar2[2] + fVar44 * pfVar27[2];
              fVar71 = fVar67 * pfVar2[3] + fVar44 * pfVar27[3];
              fVar72 = fVar67 * pfVar2[4] + fVar44 * pfVar27[4];
              fVar73 = fVar67 * pfVar2[5] + fVar44 * pfVar27[5];
              fVar79 = fVar67 * pfVar2[6] + fVar44 * pfVar27[6];
              fVar80 = fVar67 * pfVar2[7] + fVar44 * pfVar27[7];
              pfVar27 = (float *)((long)pfVar16 + lVar22);
              *pfVar27 = fVar66;
              pfVar27[1] = fVar69;
              pfVar27[2] = fVar70;
              pfVar27[3] = fVar71;
              pfVar27[4] = fVar72;
              pfVar27[5] = fVar73;
              pfVar27[6] = fVar79;
              pfVar27[7] = fVar80;
              pfVar27 = (float *)((long)local_78 + lVar22);
              auVar64._0_4_ = fVar68 * fVar66 * *pfVar27;
              auVar64._4_4_ = fVar68 * fVar69 * pfVar27[1];
              auVar64._8_4_ = fVar68 * fVar70 * pfVar27[2];
              auVar64._12_4_ = fVar68 * fVar71 * pfVar27[3];
              auVar64._16_4_ = fVar68 * fVar72 * pfVar27[4];
              auVar64._20_4_ = fVar68 * fVar73 * pfVar27[5];
              auVar64._24_4_ = fVar68 * fVar79 * pfVar27[6];
              auVar64._28_4_ = fVar68 * fVar80 * pfVar27[7];
              auVar50 = vcmpps_avx(auVar64,auVar7,1);
              auVar5 = vcmpps_avx(auVar8,auVar64,1);
              auVar4 = vblendvps_avx(auVar8,auVar7,auVar50);
              auVar52 = vpandn_avx2(auVar50,auVar5);
              auVar50 = vpor_avx2(auVar5,auVar50);
              auVar4 = vblendvps_avx(auVar4,auVar8,auVar52);
              auVar4 = vblendvps_avx(auVar4,auVar64,auVar50 ^ auVar6);
              *(undefined1 (*) [32])(lVar18 + lVar22) = auVar4;
              lVar22 = lVar22 + 0x20;
            } while (lVar22 != lVar13);
            uVar36 = uVar36 + uVar31;
            if (uVar41 != uVar31) {
              uVar17 = uVar34;
              if (2 < (uVar41 - uVar31) - 1) {
                uVar23 = (ulong)uVar31;
                uVar25 = uVar41 - uVar31;
                goto LAB_00111363;
              }
              goto LAB_0011140e;
            }
          }
        }
      }
      local_80 = local_80 + 0x68;
      lVar32 = lVar32 + 1;
      pfVar43 = pfVar43 + 100;
      pfVar42 = pfVar42 + 100;
      local_60 = local_60 + 100;
      local_90 = local_90 + 100;
      local_78 = local_78 + 100;
      local_b8 = local_b8 + 100;
      local_68 = local_68 + 100;
      local_c8 = local_c8 + 100;
      local_70 = local_70 + 100;
    } while (param_6 != lVar32);
  }
  *param_14 = uVar29;
  return;
}

