
/* 00103b10 FUN_00103b10 */

void FUN_00103b10(long param_1,long param_2,long param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  long lVar23;
  ulong uVar22;
  
  if (param_4 < 8) {
    iVar17 = 0;
  }
  else {
    uVar19 = (param_4 - 8U >> 3) + 1;
    lVar18 = 0;
    do {
      pfVar1 = (float *)(param_2 + lVar18);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_1 + lVar18);
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      fVar13 = pfVar2[4];
      fVar14 = pfVar2[5];
      fVar15 = pfVar2[6];
      fVar16 = pfVar2[7];
      pfVar21 = (float *)(param_3 + lVar18);
      *pfVar21 = *pfVar1 * *pfVar2;
      pfVar21[1] = fVar3 * fVar10;
      pfVar21[2] = fVar4 * fVar11;
      pfVar21[3] = fVar5 * fVar12;
      pfVar21[4] = fVar6 * fVar13;
      pfVar21[5] = fVar7 * fVar14;
      pfVar21[6] = fVar8 * fVar15;
      pfVar21[7] = fVar9 * fVar16;
      lVar18 = lVar18 + 0x20;
    } while (lVar18 != (ulong)uVar19 << 5);
    iVar17 = uVar19 * 8;
  }
  if (param_4 <= iVar17) {
    return;
  }
  lVar23 = (long)iVar17;
  lVar18 = lVar23 * 4;
  uVar19 = param_4 - iVar17;
  pfVar1 = (float *)(param_1 + lVar18 + 4);
  pfVar21 = (float *)(lVar18 + 4 + param_2);
  pfVar2 = (float *)(param_3 + lVar18);
  if (((ulong)((long)pfVar2 - (long)pfVar1) < 0x19 || (ulong)((long)pfVar2 - (long)pfVar21) < 0x19)
     || (uVar19 - 1 < 3)) {
    *pfVar2 = *(float *)(param_1 + lVar23 * 4) * *(float *)(param_2 + lVar23 * 4);
    if (param_4 <= iVar17 + 1) {
      return;
    }
    *(float *)(param_3 + 4 + lVar18) = *pfVar1 * *pfVar21;
    if (param_4 <= iVar17 + 2) {
      return;
    }
    *(float *)(param_3 + 8 + lVar18) =
         *(float *)(param_1 + 8 + lVar18) * *(float *)(param_2 + 8 + lVar18);
    if (param_4 <= iVar17 + 3) {
      return;
    }
    *(float *)(param_3 + 0xc + lVar18) =
         *(float *)(param_1 + 0xc + lVar18) * *(float *)(param_2 + 0xc + lVar18);
    if (param_4 <= iVar17 + 4) {
      return;
    }
    *(float *)(param_3 + 0x10 + lVar18) =
         *(float *)(param_1 + 0x10 + lVar18) * *(float *)(param_2 + 0x10 + lVar18);
    if (param_4 <= iVar17 + 5) {
      return;
    }
    *(float *)(param_3 + 0x14 + lVar18) =
         *(float *)(param_1 + 0x14 + lVar18) * *(float *)(param_2 + 0x14 + lVar18);
    if (param_4 <= iVar17 + 6) {
      return;
    }
    *(float *)(param_3 + 0x18 + lVar18) =
         *(float *)(param_1 + 0x18 + lVar18) * *(float *)(param_2 + 0x18 + lVar18);
    if (param_4 <= iVar17 + 7) {
      return;
    }
    *(float *)(param_3 + 0x1c + lVar18) =
         *(float *)(param_1 + 0x1c + lVar18) * *(float *)(param_2 + 0x1c + lVar18);
    return;
  }
  if (uVar19 - 1 < 7) {
    uVar22 = 0;
  }
  else {
    pfVar1 = (float *)(param_1 + lVar23 * 4);
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    fVar6 = pfVar1[4];
    fVar7 = pfVar1[5];
    fVar8 = pfVar1[6];
    fVar9 = pfVar1[7];
    pfVar21 = (float *)(param_2 + lVar23 * 4);
    fVar10 = pfVar21[1];
    fVar11 = pfVar21[2];
    fVar12 = pfVar21[3];
    fVar13 = pfVar21[4];
    fVar14 = pfVar21[5];
    fVar15 = pfVar21[6];
    fVar16 = pfVar21[7];
    uVar20 = uVar19 & 0xfffffff8;
    uVar22 = (ulong)uVar20;
    iVar17 = iVar17 + uVar20;
    *pfVar2 = *pfVar1 * *pfVar21;
    pfVar2[1] = fVar3 * fVar10;
    pfVar2[2] = fVar4 * fVar11;
    pfVar2[3] = fVar5 * fVar12;
    pfVar2[4] = fVar6 * fVar13;
    pfVar2[5] = fVar7 * fVar14;
    pfVar2[6] = fVar8 * fVar15;
    pfVar2[7] = fVar9 * fVar16;
    if (uVar19 == uVar20) {
      return;
    }
    uVar19 = uVar19 - uVar20;
    if (uVar19 - 1 < 3) goto LAB_00103c0f;
  }
  lVar23 = uVar22 + lVar23;
  pfVar1 = (float *)(param_1 + lVar23 * 4);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  pfVar2 = (float *)(param_2 + lVar23 * 4);
  fVar6 = pfVar2[1];
  fVar7 = pfVar2[2];
  fVar8 = pfVar2[3];
  pfVar21 = (float *)(param_3 + lVar23 * 4);
  *pfVar21 = *pfVar1 * *pfVar2;
  pfVar21[1] = fVar3 * fVar6;
  pfVar21[2] = fVar4 * fVar7;
  pfVar21[3] = fVar5 * fVar8;
  iVar17 = iVar17 + (uVar19 & 0xfffffffc);
  if (uVar19 == (uVar19 & 0xfffffffc)) {
    return;
  }
LAB_00103c0f:
  lVar23 = (long)iVar17;
  lVar18 = lVar23 * 4;
  *(float *)(param_3 + lVar23 * 4) =
       *(float *)(param_1 + lVar23 * 4) * *(float *)(param_2 + lVar23 * 4);
  if ((iVar17 + 1 < param_4) &&
     (*(float *)(param_3 + 4 + lVar18) =
           *(float *)(param_1 + 4 + lVar18) * *(float *)(param_2 + 4 + lVar18), iVar17 + 2 < param_4
     )) {
    *(float *)(param_3 + 8 + lVar18) =
         *(float *)(param_1 + 8 + lVar18) * *(float *)(param_2 + 8 + lVar18);
  }
  return;
}

