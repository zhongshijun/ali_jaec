
/* 00103660 FUN_00103660 */

void FUN_00103660(long param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  uint uVar28;
  long lVar29;
  ulong uVar27;
  
  if (param_6 < 8) {
    iVar23 = 0;
  }
  else {
    lVar26 = 0;
    uVar28 = (param_6 - 8U >> 3) + 1;
    do {
      pfVar1 = (float *)(param_3 + lVar26);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      fVar12 = pfVar1[4];
      fVar13 = pfVar1[5];
      fVar14 = pfVar1[6];
      fVar15 = pfVar1[7];
      pfVar1 = (float *)(param_1 + lVar26);
      fVar16 = pfVar1[1];
      fVar17 = pfVar1[2];
      fVar18 = pfVar1[3];
      fVar19 = pfVar1[4];
      fVar20 = pfVar1[5];
      fVar21 = pfVar1[6];
      fVar22 = pfVar1[7];
      pfVar2 = (float *)(param_4 + lVar26);
      *pfVar2 = fVar8 * *pfVar1;
      pfVar2[1] = fVar9 * fVar16;
      pfVar2[2] = fVar10 * fVar17;
      pfVar2[3] = fVar11 * fVar18;
      pfVar2[4] = fVar12 * fVar19;
      pfVar2[5] = fVar13 * fVar20;
      pfVar2[6] = fVar14 * fVar21;
      pfVar2[7] = fVar15 * fVar22;
      pfVar1 = (float *)(param_2 + lVar26);
      fVar16 = pfVar1[1];
      fVar17 = pfVar1[2];
      fVar18 = pfVar1[3];
      fVar19 = pfVar1[4];
      fVar20 = pfVar1[5];
      fVar21 = pfVar1[6];
      fVar22 = pfVar1[7];
      pfVar2 = (float *)(param_5 + lVar26);
      *pfVar2 = fVar8 * *pfVar1;
      pfVar2[1] = fVar9 * fVar16;
      pfVar2[2] = fVar10 * fVar17;
      pfVar2[3] = fVar11 * fVar18;
      pfVar2[4] = fVar12 * fVar19;
      pfVar2[5] = fVar13 * fVar20;
      pfVar2[6] = fVar14 * fVar21;
      pfVar2[7] = fVar15 * fVar22;
      lVar26 = lVar26 + 0x20;
    } while (lVar26 != (ulong)uVar28 << 5);
    iVar23 = uVar28 * 8;
  }
  if (param_6 <= iVar23) {
    return;
  }
  uVar28 = param_6 - iVar23;
  lVar24 = (long)iVar23;
  lVar7 = lVar24 * 4;
  lVar26 = lVar7 + 4;
  pfVar1 = (float *)(param_4 + lVar7);
  pfVar2 = (float *)(param_5 + lVar7);
  pfVar3 = (float *)(param_1 + lVar26);
  lVar29 = lVar7 + 0x20;
  pfVar4 = (float *)(param_3 + lVar7);
  pfVar5 = (float *)(param_3 + lVar26);
  pfVar6 = (float *)(param_2 + lVar7);
  if (((((((pfVar1 < (float *)(lVar29 + param_2) && pfVar6 < (float *)(param_4 + lVar29) ||
           pfVar4 < (float *)(param_4 + lVar29) && pfVar1 < (float *)(param_3 + lVar29)) ||
          uVar28 - 1 < 3) || (ulong)((long)pfVar1 - (long)pfVar3) < 0x19) ||
        (ulong)((long)pfVar2 - (long)pfVar3) < 0x19) || (ulong)((long)pfVar2 - (long)pfVar5) < 0x19)
       || (ulong)((long)pfVar2 - (param_4 + lVar26)) < 0x19) ||
     ((ulong)((long)pfVar2 - (lVar26 + param_2)) < 0x19)) {
    *pfVar1 = *(float *)(param_1 + lVar24 * 4) * *pfVar4;
    *pfVar2 = *pfVar6 * *pfVar4;
    if (param_6 <= iVar23 + 1) {
      return;
    }
    *(float *)(param_4 + lVar26) = *pfVar3 * *pfVar5;
    *(float *)(param_5 + 4 + lVar7) = *(float *)(lVar26 + param_2) * *pfVar5;
    if (param_6 <= iVar23 + 2) {
      return;
    }
    pfVar1 = (float *)(param_3 + 8 + lVar7);
    *(float *)(param_4 + 8 + lVar7) = *(float *)(param_1 + 8 + lVar7) * *pfVar1;
    *(float *)(param_5 + 8 + lVar7) = *(float *)(param_2 + 8 + lVar7) * *pfVar1;
    if (param_6 <= iVar23 + 3) {
      return;
    }
    pfVar1 = (float *)(param_3 + 0xc + lVar7);
    *(float *)(param_4 + 0xc + lVar7) = *(float *)(param_1 + 0xc + lVar7) * *pfVar1;
    *(float *)(param_5 + 0xc + lVar7) = *(float *)(param_2 + 0xc + lVar7) * *pfVar1;
    if (param_6 <= iVar23 + 4) {
      return;
    }
    pfVar1 = (float *)(param_3 + 0x10 + lVar7);
    *(float *)(param_4 + 0x10 + lVar7) = *(float *)(param_1 + 0x10 + lVar7) * *pfVar1;
    *(float *)(param_5 + 0x10 + lVar7) = *(float *)(param_2 + 0x10 + lVar7) * *pfVar1;
    if (param_6 <= iVar23 + 5) {
      return;
    }
    pfVar1 = (float *)(param_3 + 0x14 + lVar7);
    *(float *)(param_4 + 0x14 + lVar7) = *(float *)(param_1 + 0x14 + lVar7) * *pfVar1;
    *(float *)(param_5 + 0x14 + lVar7) = *(float *)(param_2 + 0x14 + lVar7) * *pfVar1;
    if (param_6 <= iVar23 + 6) {
      return;
    }
    pfVar1 = (float *)(param_3 + 0x18 + lVar7);
    *(float *)(param_4 + 0x18 + lVar7) = *(float *)(param_1 + 0x18 + lVar7) * *pfVar1;
    *(float *)(param_5 + 0x18 + lVar7) = *(float *)(param_2 + 0x18 + lVar7) * *pfVar1;
    if (param_6 <= iVar23 + 7) {
      return;
    }
    pfVar1 = (float *)(param_3 + 0x1c + lVar7);
    *(float *)(param_4 + 0x1c + lVar7) = *(float *)(param_1 + 0x1c + lVar7) * *pfVar1;
    *(float *)(param_5 + 0x1c + lVar7) = *(float *)(param_2 + 0x1c + lVar7) * *pfVar1;
    return;
  }
  if (uVar28 - 1 < 7) {
    uVar27 = 0;
  }
  else {
    uVar25 = uVar28 & 0xfffffff8;
    uVar27 = (ulong)uVar25;
    pfVar3 = (float *)(param_1 + lVar24 * 4);
    fVar8 = pfVar3[1];
    fVar9 = pfVar3[2];
    fVar10 = pfVar3[3];
    fVar11 = pfVar3[4];
    fVar12 = pfVar3[5];
    fVar13 = pfVar3[6];
    fVar14 = pfVar3[7];
    iVar23 = iVar23 + uVar25;
    fVar15 = pfVar4[1];
    fVar16 = pfVar4[2];
    fVar17 = pfVar4[3];
    fVar18 = pfVar4[4];
    fVar19 = pfVar4[5];
    fVar20 = pfVar4[6];
    fVar21 = pfVar4[7];
    *pfVar1 = *pfVar3 * *pfVar4;
    pfVar1[1] = fVar8 * fVar15;
    pfVar1[2] = fVar9 * fVar16;
    pfVar1[3] = fVar10 * fVar17;
    pfVar1[4] = fVar11 * fVar18;
    pfVar1[5] = fVar12 * fVar19;
    pfVar1[6] = fVar13 * fVar20;
    pfVar1[7] = fVar14 * fVar21;
    fVar8 = pfVar4[1];
    fVar9 = pfVar4[2];
    fVar10 = pfVar4[3];
    fVar11 = pfVar4[4];
    fVar12 = pfVar4[5];
    fVar13 = pfVar4[6];
    fVar14 = pfVar4[7];
    fVar15 = pfVar6[1];
    fVar16 = pfVar6[2];
    fVar17 = pfVar6[3];
    fVar18 = pfVar6[4];
    fVar19 = pfVar6[5];
    fVar20 = pfVar6[6];
    fVar21 = pfVar6[7];
    *pfVar2 = *pfVar4 * *pfVar6;
    pfVar2[1] = fVar8 * fVar15;
    pfVar2[2] = fVar9 * fVar16;
    pfVar2[3] = fVar10 * fVar17;
    pfVar2[4] = fVar11 * fVar18;
    pfVar2[5] = fVar12 * fVar19;
    pfVar2[6] = fVar13 * fVar20;
    pfVar2[7] = fVar14 * fVar21;
    if (uVar28 == uVar25) {
      return;
    }
    uVar28 = uVar28 - uVar25;
    if (uVar28 - 1 < 3) goto LAB_0010388a;
  }
  lVar24 = uVar27 + lVar24;
  pfVar1 = (float *)(param_3 + lVar24 * 4);
  pfVar2 = (float *)(param_1 + lVar24 * 4);
  fVar8 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar10 = pfVar2[3];
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  pfVar3 = (float *)(param_4 + lVar24 * 4);
  *pfVar3 = *pfVar2 * *pfVar1;
  pfVar3[1] = fVar8 * fVar11;
  pfVar3[2] = fVar9 * fVar12;
  pfVar3[3] = fVar10 * fVar13;
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar10 = pfVar1[3];
  pfVar2 = (float *)(param_2 + lVar24 * 4);
  fVar11 = pfVar2[1];
  fVar12 = pfVar2[2];
  fVar13 = pfVar2[3];
  pfVar3 = (float *)(param_5 + lVar24 * 4);
  *pfVar3 = *pfVar1 * *pfVar2;
  pfVar3[1] = fVar8 * fVar11;
  pfVar3[2] = fVar9 * fVar12;
  pfVar3[3] = fVar10 * fVar13;
  iVar23 = iVar23 + (uVar28 & 0xfffffffc);
  if (uVar28 == (uVar28 & 0xfffffffc)) {
    return;
  }
LAB_0010388a:
  lVar29 = (long)iVar23;
  lVar26 = lVar29 * 4;
  *(float *)(param_4 + lVar29 * 4) = *(float *)(param_1 + lVar29 * 4) * *(float *)(param_3 + lVar26)
  ;
  *(float *)(param_5 + lVar29 * 4) = *(float *)(param_2 + lVar29 * 4) * *(float *)(param_3 + lVar26)
  ;
  if (iVar23 + 1 < param_6) {
    pfVar1 = (float *)(param_3 + 4 + lVar26);
    *(float *)(param_4 + 4 + lVar26) = *(float *)(param_1 + 4 + lVar26) * *pfVar1;
    *(float *)(param_5 + 4 + lVar26) = *(float *)(param_2 + 4 + lVar26) * *pfVar1;
    if (iVar23 + 2 < param_6) {
      pfVar1 = (float *)(param_3 + 8 + lVar26);
      *(float *)(param_4 + 8 + lVar26) = *(float *)(param_1 + 8 + lVar26) * *pfVar1;
      *(float *)(param_5 + 8 + lVar26) = *(float *)(param_2 + 8 + lVar26) * *pfVar1;
    }
  }
  return;
}

