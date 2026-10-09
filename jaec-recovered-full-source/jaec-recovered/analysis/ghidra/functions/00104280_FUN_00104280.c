
/* 00104280 FUN_00104280 */

void FUN_00104280(uint *param_1,long param_2,long param_3,undefined4 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar20;
  ulong uVar19;
  
  lVar20 = *(long *)(param_1 + 4);
  uVar17 = *param_1;
  if (param_1[2] != 0) {
    FUN_00103b10();
    goto LAB_00104367;
  }
  if ((int)uVar17 < 1) goto LAB_00104367;
  if (((ulong)(param_3 - (param_2 + 4)) < 9 || uVar17 == 1) || ((ulong)(param_3 - (lVar20 + 4)) < 9)
     ) {
    lVar16 = 0;
    do {
      *(float *)(param_3 + lVar16 * 4) =
           *(float *)(param_2 + lVar16 * 4) * *(float *)(lVar20 + lVar16 * 4);
      lVar16 = lVar16 + 1;
    } while ((int)uVar17 != lVar16);
    goto LAB_00104367;
  }
  if (uVar17 - 1 < 3) {
    uVar18 = 0;
LAB_00104336:
    uVar19 = (ulong)uVar18;
    uVar5 = *(undefined8 *)(param_2 + uVar19 * 4);
    uVar6 = *(undefined8 *)(lVar20 + uVar19 * 4);
    *(ulong *)(param_3 + uVar19 * 4) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar6 >> 0x20),
                  (float)uVar5 * (float)uVar6);
    uVar18 = uVar18 + (uVar17 & 0xfffffffe);
    if (uVar17 == (uVar17 & 0xfffffffe)) goto LAB_00104367;
  }
  else {
    lVar16 = 0;
    do {
      pfVar1 = (float *)(param_2 + lVar16);
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar2 = (float *)(lVar20 + lVar16);
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar3 = (float *)(param_3 + lVar16);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar10 * fVar13;
      pfVar3[2] = fVar11 * fVar14;
      pfVar3[3] = fVar12 * fVar15;
      lVar16 = lVar16 + 0x10;
    } while ((ulong)(uVar17 >> 2) << 4 != lVar16);
    uVar18 = uVar17 & 0xfffffffc;
    if (uVar17 == uVar18) goto LAB_00104367;
    uVar17 = uVar17 - uVar18;
    if (uVar17 != 1) goto LAB_00104336;
  }
  lVar16 = (long)(int)uVar18;
  *(float *)(param_3 + lVar16 * 4) =
       *(float *)(param_2 + lVar16 * 4) * *(float *)(lVar20 + lVar16 * 4);
LAB_00104367:
  piVar8 = *(int **)(param_1 + 6);
  iVar7 = *piVar8;
  FUN_0010f2a0(*(undefined8 *)(piVar8 + 2),param_3,*(undefined8 *)(piVar8 + 4),0,0);
  puVar9 = *(undefined4 **)(piVar8 + 4);
  uVar4 = *puVar9;
  lVar20 = (long)(iVar7 / 2 + -1);
  param_4[1] = 0;
  *param_4 = uVar4;
  memcpy(param_4 + 2,puVar9 + 2,lVar20 * 8);
  uVar4 = *(undefined4 *)(*(long *)(piVar8 + 4) + 4);
  (param_4 + lVar20 * 2 + 2)[1] = 0;
  param_4[lVar20 * 2 + 2] = uVar4;
  return;
}

