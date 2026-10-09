
/* 00103d80 FUN_00103d80 */

void FUN_00103d80(long param_1,long param_2,long param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  
  if (param_4 < 8) {
    iVar26 = 0;
  }
  else {
    lVar28 = 0;
    uVar27 = (param_4 - 8U >> 3) + 1;
    do {
      pfVar1 = (float *)(param_3 + lVar28);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + lVar28);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_1 + lVar28);
      fVar19 = pfVar3[1];
      fVar20 = pfVar3[2];
      fVar21 = pfVar3[3];
      fVar22 = pfVar3[4];
      fVar23 = pfVar3[5];
      fVar24 = pfVar3[6];
      fVar25 = pfVar3[7];
      pfVar4 = (float *)(param_1 + lVar28);
      *pfVar4 = *pfVar1 * *pfVar2 + *pfVar3;
      pfVar4[1] = fVar5 * fVar12 + fVar19;
      pfVar4[2] = fVar6 * fVar13 + fVar20;
      pfVar4[3] = fVar7 * fVar14 + fVar21;
      pfVar4[4] = fVar8 * fVar15 + fVar22;
      pfVar4[5] = fVar9 * fVar16 + fVar23;
      pfVar4[6] = fVar10 * fVar17 + fVar24;
      pfVar4[7] = fVar11 * fVar18 + fVar25;
      lVar28 = lVar28 + 0x20;
    } while (lVar28 != (ulong)uVar27 << 5);
    iVar26 = uVar27 * 8;
  }
  if (param_4 <= iVar26) {
    return;
  }
  lVar29 = (long)iVar26;
  lVar30 = lVar29 * 4;
  uVar27 = param_4 - iVar26;
  pfVar1 = (float *)(param_1 + lVar30);
  lVar28 = lVar30 + 4;
  if (((ulong)((long)pfVar1 - (param_3 + lVar28)) < 0x19 ||
       (ulong)((long)pfVar1 - (param_2 + lVar28)) < 0x19) || (uVar27 - 1 < 3)) {
    *pfVar1 = *(float *)(param_2 + lVar29 * 4) * *(float *)(param_3 + lVar29 * 4) + *pfVar1;
    if (param_4 <= iVar26 + 1) {
      return;
    }
    *(float *)(lVar28 + param_1) =
         *(float *)(param_2 + lVar28) * *(float *)(param_3 + lVar28) + *(float *)(lVar28 + param_1);
    if (param_4 <= iVar26 + 2) {
      return;
    }
    pfVar1 = (float *)(param_1 + 8 + lVar30);
    *pfVar1 = *(float *)(param_2 + 8 + lVar30) * *(float *)(param_3 + 8 + lVar30) + *pfVar1;
    if (param_4 <= iVar26 + 3) {
      return;
    }
    pfVar1 = (float *)(param_1 + 0xc + lVar30);
    *pfVar1 = *(float *)(param_2 + 0xc + lVar30) * *(float *)(param_3 + 0xc + lVar30) + *pfVar1;
    if (param_4 <= iVar26 + 4) {
      return;
    }
    pfVar1 = (float *)(param_1 + 0x10 + lVar30);
    *pfVar1 = *(float *)(param_2 + 0x10 + lVar30) * *(float *)(param_3 + 0x10 + lVar30) + *pfVar1;
    if (param_4 <= iVar26 + 5) {
      return;
    }
    pfVar1 = (float *)(param_1 + 0x14 + lVar30);
    *pfVar1 = *(float *)(param_2 + 0x14 + lVar30) * *(float *)(param_3 + 0x14 + lVar30) + *pfVar1;
    if (param_4 <= iVar26 + 6) {
      return;
    }
    pfVar1 = (float *)(param_1 + 0x18 + lVar30);
    *pfVar1 = *(float *)(param_2 + 0x18 + lVar30) * *(float *)(param_3 + 0x18 + lVar30) + *pfVar1;
    if (param_4 <= iVar26 + 7) {
      return;
    }
    pfVar1 = (float *)(param_1 + 0x1c + lVar30);
    *pfVar1 = *(float *)(param_2 + 0x1c + lVar30) * *(float *)(param_3 + 0x1c + lVar30) + *pfVar1;
    return;
  }
  if (uVar27 - 1 < 7) {
    uVar32 = 0;
  }
  else {
    pfVar2 = (float *)(param_2 + lVar29 * 4);
    fVar5 = pfVar2[1];
    fVar6 = pfVar2[2];
    fVar7 = pfVar2[3];
    fVar8 = pfVar2[4];
    fVar9 = pfVar2[5];
    fVar10 = pfVar2[6];
    fVar11 = pfVar2[7];
    pfVar3 = (float *)(param_3 + lVar29 * 4);
    fVar12 = pfVar3[1];
    fVar13 = pfVar3[2];
    fVar14 = pfVar3[3];
    fVar15 = pfVar3[4];
    fVar16 = pfVar3[5];
    fVar17 = pfVar3[6];
    fVar18 = pfVar3[7];
    uVar31 = uVar27 & 0xfffffff8;
    uVar32 = (ulong)uVar31;
    iVar26 = iVar26 + uVar31;
    *pfVar1 = *pfVar2 * *pfVar3 + *pfVar1;
    pfVar1[1] = fVar5 * fVar12 + pfVar1[1];
    pfVar1[2] = fVar6 * fVar13 + pfVar1[2];
    pfVar1[3] = fVar7 * fVar14 + pfVar1[3];
    pfVar1[4] = fVar8 * fVar15 + pfVar1[4];
    pfVar1[5] = fVar9 * fVar16 + pfVar1[5];
    pfVar1[6] = fVar10 * fVar17 + pfVar1[6];
    pfVar1[7] = fVar11 * fVar18 + pfVar1[7];
    if (uVar27 == uVar31) {
      return;
    }
    uVar27 = uVar27 - uVar31;
    if (uVar27 - 1 < 3) goto LAB_00103eb0;
  }
  lVar29 = lVar29 + uVar32;
  pfVar1 = (float *)(param_2 + lVar29 * 4);
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar7 = pfVar1[3];
  pfVar2 = (float *)(param_1 + lVar29 * 4);
  pfVar3 = (float *)(param_3 + lVar29 * 4);
  fVar8 = pfVar3[1];
  fVar9 = pfVar3[2];
  fVar10 = pfVar3[3];
  iVar26 = iVar26 + (uVar27 & 0xfffffffc);
  *pfVar2 = *pfVar1 * *pfVar3 + *pfVar2;
  pfVar2[1] = fVar5 * fVar8 + pfVar2[1];
  pfVar2[2] = fVar6 * fVar9 + pfVar2[2];
  pfVar2[3] = fVar7 * fVar10 + pfVar2[3];
  if (uVar27 == (uVar27 & 0xfffffffc)) {
    return;
  }
LAB_00103eb0:
  lVar30 = (long)iVar26;
  lVar28 = lVar30 * 4;
  *(float *)(param_1 + lVar28) =
       *(float *)(param_2 + lVar30 * 4) * *(float *)(param_3 + lVar30 * 4) +
       *(float *)(param_1 + lVar28);
  if ((iVar26 + 1 < param_4) &&
     (pfVar1 = (float *)(param_1 + 4 + lVar28),
     *pfVar1 = *(float *)(param_2 + 4 + lVar28) * *(float *)(param_3 + 4 + lVar28) + *pfVar1,
     iVar26 + 2 < param_4)) {
    pfVar1 = (float *)(param_1 + 8 + lVar28);
    *pfVar1 = *(float *)(param_2 + 8 + lVar28) * *(float *)(param_3 + 8 + lVar28) + *pfVar1;
  }
  return;
}

