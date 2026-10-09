
/* 00116ee0 FUN_00116ee0 */

void FUN_00116ee0(long param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
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
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_2 < 0)) || (param_4 < 1)) {
    return;
  }
  lVar15 = (long)param_2;
  lVar1 = param_1 + lVar15 * 4;
  if (param_4 < 0x10) {
    iVar12 = 0;
  }
  else {
    lVar10 = 0;
    uVar13 = (param_4 - 0x10U >> 4) + 1;
    do {
      auVar6 = vpmovsxwd_avx2(*(undefined1 (*) [16])(param_3 + lVar10 * 2));
      auVar7 = vpmovsxwd_avx2(SUB3216(*(undefined1 (*) [32])(param_3 + lVar10 * 2),0x10));
      auVar6 = vcvtdq2ps_avx(auVar6);
      auVar7 = vcvtdq2ps_avx(auVar7);
      fVar25 = auVar6._0_4_ * 3.0517578e-05;
      fVar26 = auVar6._4_4_ * 3.0517578e-05;
      fVar27 = auVar6._8_4_ * 3.0517578e-05;
      fVar28 = auVar6._12_4_ * 3.0517578e-05;
      fVar29 = auVar6._16_4_ * 3.0517578e-05;
      fVar30 = auVar6._20_4_ * 3.0517578e-05;
      fVar31 = auVar6._24_4_ * 3.0517578e-05;
      fVar32 = auVar6._28_4_ * 3.0517578e-05;
      fVar16 = auVar7._0_4_ * 3.0517578e-05;
      fVar18 = auVar7._4_4_ * 3.0517578e-05;
      fVar19 = auVar7._8_4_ * 3.0517578e-05;
      fVar20 = auVar7._12_4_ * 3.0517578e-05;
      fVar21 = auVar7._16_4_ * 3.0517578e-05;
      fVar22 = auVar7._20_4_ * 3.0517578e-05;
      fVar23 = auVar7._24_4_ * 3.0517578e-05;
      fVar24 = auVar7._28_4_ * 3.0517578e-05;
      pfVar2 = (float *)(lVar1 + lVar10 * 4);
      *pfVar2 = fVar25;
      pfVar2[1] = fVar26;
      pfVar2[2] = fVar27;
      pfVar2[3] = fVar28;
      pfVar2[4] = fVar29;
      pfVar2[5] = fVar30;
      pfVar2[6] = fVar31;
      pfVar2[7] = fVar32;
      pfVar2 = (float *)(lVar1 + 0x20 + lVar10 * 4);
      *pfVar2 = fVar16;
      pfVar2[1] = fVar18;
      pfVar2[2] = fVar19;
      pfVar2[3] = fVar20;
      pfVar2[4] = fVar21;
      pfVar2[5] = fVar22;
      pfVar2[6] = fVar23;
      pfVar2[7] = fVar24;
      pfVar2 = (float *)(lVar1 + 0x800 + lVar10 * 4);
      *pfVar2 = fVar25;
      pfVar2[1] = fVar26;
      pfVar2[2] = fVar27;
      pfVar2[3] = fVar28;
      pfVar2[4] = fVar29;
      pfVar2[5] = fVar30;
      pfVar2[6] = fVar31;
      pfVar2[7] = fVar32;
      pfVar2 = (float *)(lVar1 + 0x820 + lVar10 * 4);
      *pfVar2 = fVar16;
      pfVar2[1] = fVar18;
      pfVar2[2] = fVar19;
      pfVar2[3] = fVar20;
      pfVar2[4] = fVar21;
      pfVar2[5] = fVar22;
      pfVar2[6] = fVar23;
      pfVar2[7] = fVar24;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != (ulong)uVar13 << 4);
    iVar12 = uVar13 * 0x10;
    if (param_4 <= iVar12) {
      return;
    }
  }
  uVar13 = 1;
  if (iVar12 < param_4) {
    uVar13 = param_4 - iVar12;
  }
  if (((param_4 - iVar12) - 1U < 0xf) || (param_4 <= iVar12)) {
    uVar9 = 0;
    iVar14 = iVar12;
  }
  else {
    auVar6 = *(undefined1 (*) [32])(param_3 + (long)iVar12 * 2);
    lVar10 = (lVar15 + iVar12) * 4;
    auVar7 = vpmovsxwd_avx2(auVar6._0_16_);
    pfVar2 = (float *)(param_1 + lVar10);
    auVar8 = vpmovsxwd_avx2(auVar6._16_16_);
    auVar6 = vcvtdq2ps_avx(auVar7);
    pfVar3 = (float *)(param_1 + 0x800 + lVar10);
    fVar25 = auVar6._0_4_ * 3.0517578e-05;
    fVar26 = auVar6._4_4_ * 3.0517578e-05;
    fVar27 = auVar6._8_4_ * 3.0517578e-05;
    fVar28 = auVar6._12_4_ * 3.0517578e-05;
    fVar29 = auVar6._16_4_ * 3.0517578e-05;
    fVar30 = auVar6._20_4_ * 3.0517578e-05;
    fVar31 = auVar6._24_4_ * 3.0517578e-05;
    fVar32 = auVar6._28_4_ * 3.0517578e-05;
    auVar6 = vcvtdq2ps_avx(auVar8);
    fVar16 = auVar6._0_4_ * 3.0517578e-05;
    fVar18 = auVar6._4_4_ * 3.0517578e-05;
    fVar19 = auVar6._8_4_ * 3.0517578e-05;
    fVar20 = auVar6._12_4_ * 3.0517578e-05;
    fVar21 = auVar6._16_4_ * 3.0517578e-05;
    fVar22 = auVar6._20_4_ * 3.0517578e-05;
    fVar23 = auVar6._24_4_ * 3.0517578e-05;
    fVar24 = auVar6._28_4_ * 3.0517578e-05;
    *pfVar2 = fVar25;
    pfVar2[1] = fVar26;
    pfVar2[2] = fVar27;
    pfVar2[3] = fVar28;
    pfVar2[4] = fVar29;
    pfVar2[5] = fVar30;
    pfVar2[6] = fVar31;
    pfVar2[7] = fVar32;
    pfVar2[8] = fVar16;
    pfVar2[9] = fVar18;
    pfVar2[10] = fVar19;
    pfVar2[0xb] = fVar20;
    pfVar2[0xc] = fVar21;
    pfVar2[0xd] = fVar22;
    pfVar2[0xe] = fVar23;
    pfVar2[0xf] = fVar24;
    *pfVar3 = fVar25;
    pfVar3[1] = fVar26;
    pfVar3[2] = fVar27;
    pfVar3[3] = fVar28;
    pfVar3[4] = fVar29;
    pfVar3[5] = fVar30;
    pfVar3[6] = fVar31;
    pfVar3[7] = fVar32;
    pfVar3[8] = fVar16;
    pfVar3[9] = fVar18;
    pfVar3[10] = fVar19;
    pfVar3[0xb] = fVar20;
    pfVar3[0xc] = fVar21;
    pfVar3[0xd] = fVar22;
    pfVar3[0xe] = fVar23;
    pfVar3[0xf] = fVar24;
    uVar9 = uVar13 & 0xfffffff0;
    iVar14 = uVar9 + iVar12;
    if (uVar9 == uVar13) {
      return;
    }
  }
  uVar13 = uVar13 - uVar9;
  if (6 < uVar13 - 1) {
    auVar17 = *(undefined1 (*) [16])(param_3 + ((long)iVar12 + (ulong)uVar9) * 2);
    lVar15 = (lVar15 + iVar12 + (ulong)uVar9) * 4;
    auVar4 = vpmovsxwd_avx(auVar17);
    auVar17 = vpsrldq_avx(auVar17,8);
    pfVar2 = (float *)(param_1 + lVar15);
    auVar5 = vpmovsxwd_avx(auVar17);
    auVar17 = vcvtdq2ps_avx(auVar4);
    pfVar3 = (float *)(param_1 + 0x800 + lVar15);
    fVar21 = auVar17._0_4_ * 3.0517578e-05;
    fVar22 = auVar17._4_4_ * 3.0517578e-05;
    fVar23 = auVar17._8_4_ * 3.0517578e-05;
    fVar24 = auVar17._12_4_ * 3.0517578e-05;
    auVar17 = vcvtdq2ps_avx(auVar5);
    fVar16 = auVar17._0_4_ * 3.0517578e-05;
    fVar18 = auVar17._4_4_ * 3.0517578e-05;
    fVar19 = auVar17._8_4_ * 3.0517578e-05;
    fVar20 = auVar17._12_4_ * 3.0517578e-05;
    *pfVar2 = fVar21;
    pfVar2[1] = fVar22;
    pfVar2[2] = fVar23;
    pfVar2[3] = fVar24;
    pfVar2[4] = fVar16;
    pfVar2[5] = fVar18;
    pfVar2[6] = fVar19;
    pfVar2[7] = fVar20;
    *pfVar3 = fVar21;
    pfVar3[1] = fVar22;
    pfVar3[2] = fVar23;
    pfVar3[3] = fVar24;
    pfVar3[4] = fVar16;
    pfVar3[5] = fVar18;
    pfVar3[6] = fVar19;
    pfVar3[7] = fVar20;
    iVar14 = iVar14 + (uVar13 & 0xfffffff8);
    if (uVar13 == (uVar13 & 0xfffffff8)) {
      return;
    }
  }
  lVar11 = (long)iVar14;
  lVar10 = lVar11 * 2;
  lVar15 = lVar11 * 4;
  fVar16 = (float)(int)*(short *)(param_3 + lVar11 * 2) * 3.0517578e-05;
  *(float *)(lVar1 + lVar11 * 4) = fVar16;
  *(float *)(lVar1 + 0x800 + lVar11 * 4) = fVar16;
  if (iVar14 + 1 < param_4) {
    fVar16 = (float)(int)*(short *)(param_3 + 2 + lVar10) * 3.0517578e-05;
    *(float *)(lVar1 + 4 + lVar15) = fVar16;
    *(float *)(lVar1 + 0x804 + lVar15) = fVar16;
    if (iVar14 + 2 < param_4) {
      fVar16 = (float)(int)*(short *)(param_3 + 4 + lVar10) * 3.0517578e-05;
      *(float *)(lVar1 + 8 + lVar15) = fVar16;
      *(float *)(lVar1 + 0x808 + lVar15) = fVar16;
      if (iVar14 + 3 < param_4) {
        fVar16 = (float)(int)*(short *)(param_3 + 6 + lVar10) * 3.0517578e-05;
        *(float *)(lVar1 + 0xc + lVar15) = fVar16;
        *(float *)(lVar1 + 0x80c + lVar15) = fVar16;
        if (iVar14 + 4 < param_4) {
          fVar16 = (float)(int)*(short *)(param_3 + 8 + lVar10) * 3.0517578e-05;
          *(float *)(lVar1 + 0x10 + lVar15) = fVar16;
          *(float *)(lVar1 + 0x810 + lVar15) = fVar16;
          if (iVar14 + 5 < param_4) {
            fVar16 = (float)(int)*(short *)(param_3 + 10 + lVar10) * 3.0517578e-05;
            *(float *)(lVar1 + 0x14 + lVar15) = fVar16;
            *(float *)(lVar1 + 0x814 + lVar15) = fVar16;
            if (iVar14 + 6 < param_4) {
              fVar16 = (float)(int)*(short *)(param_3 + 0xc + lVar10) * 3.0517578e-05;
              *(float *)(lVar1 + 0x18 + lVar15) = fVar16;
              *(float *)(lVar1 + 0x818 + lVar15) = fVar16;
              return;
            }
          }
        }
      }
    }
  }
  return;
}

