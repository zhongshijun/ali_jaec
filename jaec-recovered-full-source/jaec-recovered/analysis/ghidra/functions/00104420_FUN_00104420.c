
/* 00104420 FUN_00104420 */

void FUN_00104420(uint *param_1,long param_2,long param_3,long param_4,undefined4 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  uint uVar17;
  long lVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  ulong uVar18;
  
  uVar20 = *param_1;
  lVar21 = (long)(int)uVar20;
  lVar22 = *(long *)(param_1 + 4);
  lVar19 = param_4 + lVar21 * 4;
  if (param_1[2] != 0) {
    FUN_00103660();
    piVar8 = *(int **)(param_1 + 6);
    iVar6 = *piVar8;
    iVar7 = piVar8[1];
    FUN_0010f2a0(*(undefined8 *)(piVar8 + 2),param_4,*(undefined8 *)(piVar8 + 4),0,0);
    puVar9 = *(undefined4 **)(piVar8 + 4);
    uVar3 = *puVar9;
    param_5[1] = 0;
    lVar22 = (long)(iVar6 / 2 + -1);
    *param_5 = uVar3;
    memcpy(param_5 + 2,puVar9 + 2,lVar22 * 8);
    lVar19 = *(long *)(piVar8 + 4);
    uVar4 = *(undefined8 *)(piVar8 + 2);
    uVar3 = *(undefined4 *)(lVar19 + 4);
    (param_5 + lVar22 * 2 + 2)[1] = 0;
    param_5[lVar22 * 2 + 2] = uVar3;
    param_5 = param_5 + (long)iVar7 * 2;
    iVar7 = *piVar8;
    FUN_0010f2a0(uVar4,param_4 + (long)iVar6 * 4,lVar19,0,0);
    puVar9 = *(undefined4 **)(piVar8 + 4);
    uVar3 = *puVar9;
    lVar19 = (long)(iVar7 / 2 + -1);
    param_5[1] = 0;
    *param_5 = uVar3;
    memcpy(param_5 + 2,puVar9 + 2,lVar19 * 8);
    uVar3 = *(undefined4 *)(*(long *)(piVar8 + 4) + 4);
    (param_5 + lVar19 * 2 + 2)[1] = 0;
    param_5[lVar19 * 2 + 2] = uVar3;
    return;
  }
  if ((int)uVar20 < 1) goto LAB_001045b2;
  if (((lVar21 * 4 - 4U < 9 ||
       (((ulong)(param_4 - (lVar22 + 4)) < 9 ||
        ((ulong)((param_4 + 0xf) - param_3) < 0x1f ||
        ((ulong)(param_4 - (param_2 + 4)) < 9 || uVar20 == 1))) ||
       (ulong)(lVar19 - (lVar22 + 4)) < 9)) || (ulong)(lVar19 - (param_2 + 4)) < 9) ||
     ((ulong)(lVar19 - (param_3 + 4)) < 9)) {
    lVar16 = 0;
    do {
      fVar23 = *(float *)(lVar22 + lVar16 * 4);
      *(float *)(param_4 + lVar16 * 4) = *(float *)(param_2 + lVar16 * 4) * fVar23;
      *(float *)(lVar19 + lVar16 * 4) = fVar23 * *(float *)(param_3 + lVar16 * 4);
      lVar16 = lVar16 + 1;
    } while (lVar21 != lVar16);
    goto LAB_001045b2;
  }
  if (uVar20 - 1 < 3) {
    uVar17 = 0;
LAB_00104565:
    uVar18 = (ulong)uVar17;
    uVar4 = *(undefined8 *)(lVar22 + uVar18 * 4);
    uVar5 = *(undefined8 *)(param_2 + uVar18 * 4);
    fVar23 = (float)uVar4;
    fVar24 = (float)((ulong)uVar4 >> 0x20);
    *(ulong *)(param_4 + uVar18 * 4) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar24,(float)uVar5 * fVar23);
    uVar4 = *(undefined8 *)(param_3 + uVar18 * 4);
    *(ulong *)(param_4 + (uVar18 + lVar21) * 4) =
         CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar24,(float)uVar4 * fVar23);
    uVar17 = uVar17 + (uVar20 & 0xfffffffe);
    if (uVar20 == (uVar20 & 0xfffffffe)) goto LAB_001045b2;
  }
  else {
    lVar16 = 0;
    do {
      pfVar1 = (float *)(lVar22 + lVar16);
      fVar23 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar1 = (float *)(param_2 + lVar16);
      fVar13 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      pfVar2 = (float *)(param_4 + lVar16);
      *pfVar2 = *pfVar1 * fVar23;
      pfVar2[1] = fVar13 * fVar24;
      pfVar2[2] = fVar14 * fVar11;
      pfVar2[3] = fVar15 * fVar12;
      pfVar1 = (float *)(param_3 + lVar16);
      fVar13 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      pfVar2 = (float *)(lVar19 + lVar16);
      *pfVar2 = *pfVar1 * fVar23;
      pfVar2[1] = fVar13 * fVar24;
      pfVar2[2] = fVar14 * fVar11;
      pfVar2[3] = fVar15 * fVar12;
      lVar16 = lVar16 + 0x10;
    } while ((ulong)(uVar20 >> 2) << 4 != lVar16);
    uVar17 = uVar20 & 0xfffffffc;
    if (uVar20 == uVar17) goto LAB_001045b2;
    uVar20 = uVar20 - uVar17;
    if (uVar20 != 1) goto LAB_00104565;
  }
  lVar21 = (long)(int)uVar17;
  fVar23 = *(float *)(lVar22 + lVar21 * 4);
  *(float *)(param_4 + lVar21 * 4) = *(float *)(param_2 + lVar21 * 4) * fVar23;
  *(float *)(lVar19 + lVar21 * 4) = fVar23 * *(float *)(param_3 + lVar21 * 4);
LAB_001045b2:
  piVar8 = *(int **)(param_1 + 6);
  iVar6 = *piVar8;
  iVar7 = piVar8[1];
  FUN_0010f2a0(*(undefined8 *)(piVar8 + 2),param_4,*(undefined8 *)(piVar8 + 4),0,0);
  puVar9 = *(undefined4 **)(piVar8 + 4);
  uVar3 = *puVar9;
  param_5[1] = 0;
  lVar22 = (long)(iVar6 / 2 + -1);
  *param_5 = uVar3;
  memcpy(param_5 + 2,puVar9 + 2,lVar22 * 8);
  lVar19 = *(long *)(piVar8 + 4);
  puVar9 = param_5 + (long)iVar7 * 2;
  uVar4 = *(undefined8 *)(piVar8 + 2);
  uVar3 = *(undefined4 *)(lVar19 + 4);
  (param_5 + lVar22 * 2 + 2)[1] = 0;
  param_5[lVar22 * 2 + 2] = uVar3;
  iVar7 = *piVar8;
  FUN_0010f2a0(uVar4,param_4 + (long)iVar6 * 4,lVar19,0,0);
  puVar10 = *(undefined4 **)(piVar8 + 4);
  uVar3 = *puVar10;
  lVar19 = (long)(iVar7 / 2 + -1);
  puVar9[1] = 0;
  *puVar9 = uVar3;
  memcpy(puVar9 + 2,puVar10 + 2,lVar19 * 8);
  uVar3 = *(undefined4 *)(*(long *)(piVar8 + 4) + 4);
  (puVar9 + lVar19 * 2 + 2)[1] = 0;
  puVar9[lVar19 * 2 + 2] = uVar3;
  return;
}

