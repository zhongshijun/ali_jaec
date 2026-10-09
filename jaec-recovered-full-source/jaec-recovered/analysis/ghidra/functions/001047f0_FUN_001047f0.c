
/* 001047f0 FUN_001047f0 */

void FUN_001047f0(int *param_1,long param_2,long param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  long lVar26;
  ulong uVar25;
  
  iVar9 = *param_1;
  lVar10 = *(long *)(param_1 + 4);
  uVar23 = iVar9 - param_4;
  if (param_1[2] != 0) {
    FUN_00103d80(param_3 + (long)(int)param_4 * 4,param_2,lVar10);
    FUN_00103d80(param_3,param_2 + (long)(int)uVar23 * 4,lVar10 + (long)(int)uVar23 * 4,param_4);
    return;
  }
  if (0 < (int)uVar23) {
    lVar26 = param_3 + (long)(int)param_4 * 4;
    if (((ulong)(lVar26 - (lVar10 + 4)) < 9 || (ulong)(lVar26 - (param_2 + 4)) < 9) || (uVar23 == 1)
       ) {
      lVar21 = 0;
      do {
        *(float *)(lVar26 + lVar21 * 4) =
             *(float *)(param_2 + lVar21 * 4) * *(float *)(lVar10 + lVar21 * 4) +
             *(float *)(lVar26 + lVar21 * 4);
        lVar21 = lVar21 + 1;
      } while ((int)uVar23 != lVar21);
    }
    else if (uVar23 - 1 < 3) {
      uVar24 = 0;
      uVar25 = 0;
      uVar20 = uVar23;
LAB_001048b4:
      uVar6 = *(undefined8 *)(lVar10 + uVar25 * 4);
      uVar7 = *(undefined8 *)(param_2 + uVar25 * 4);
      puVar5 = (undefined8 *)(param_3 + ((long)(int)param_4 + uVar25) * 4);
      uVar8 = *puVar5;
      uVar24 = uVar24 + (uVar20 & 0xfffffffe);
      *puVar5 = CONCAT44((float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar6 >> 0x20) +
                         (float)((ulong)uVar8 >> 0x20),(float)uVar7 * (float)uVar6 + (float)uVar8);
      if (uVar20 != (uVar20 & 0xfffffffe)) {
LAB_001048e1:
        pfVar1 = (float *)(param_3 + (long)(int)(param_4 + uVar24) * 4);
        *pfVar1 = *(float *)(param_2 + (long)(int)uVar24 * 4) *
                  *(float *)(lVar10 + (long)(int)uVar24 * 4) + *pfVar1;
      }
    }
    else {
      lVar21 = 0;
      do {
        pfVar1 = (float *)(param_2 + lVar21);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)(lVar10 + lVar21);
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar3 = (float *)(lVar26 + lVar21);
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
        pfVar4 = (float *)(lVar26 + lVar21);
        *pfVar4 = *pfVar1 * *pfVar2 + *pfVar3;
        pfVar4[1] = fVar11 * fVar14 + fVar17;
        pfVar4[2] = fVar12 * fVar15 + fVar18;
        pfVar4[3] = fVar13 * fVar16 + fVar19;
        lVar21 = lVar21 + 0x10;
      } while (lVar21 != (ulong)(uVar23 >> 2) << 4);
      uVar24 = uVar23 & 0xfffffffc;
      uVar25 = (ulong)uVar24;
      if (uVar23 != uVar24) {
        uVar20 = uVar23 - uVar24;
        if (uVar23 - uVar24 != 1) goto LAB_001048b4;
        goto LAB_001048e1;
      }
    }
  }
  if ((int)param_4 < 1) {
    return;
  }
  lVar21 = (long)iVar9 - (long)(int)param_4;
  lVar26 = lVar21 * 4;
  if (((ulong)(param_3 - (param_2 + lVar26 + 4)) < 9 || (ulong)(param_3 - (lVar10 + lVar26 + 4)) < 9
      ) || (param_4 == 1)) {
    lVar26 = 0;
    do {
      *(float *)(param_3 + lVar26 * 4) =
           *(float *)(lVar10 + lVar21 * 4 + lVar26 * 4) *
           *(float *)(param_2 + lVar21 * 4 + lVar26 * 4) + *(float *)(param_3 + lVar26 * 4);
      lVar26 = lVar26 + 1;
    } while (lVar26 != (int)param_4);
    return;
  }
  if (param_4 - 1 < 3) {
    uVar20 = 0;
  }
  else {
    lVar22 = 0;
    do {
      pfVar1 = (float *)(param_2 + lVar26 + lVar22);
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = (float *)(lVar26 + lVar10 + lVar22);
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar3 = (float *)(param_3 + lVar22);
      fVar17 = pfVar3[1];
      fVar18 = pfVar3[2];
      fVar19 = pfVar3[3];
      pfVar4 = (float *)(param_3 + lVar22);
      *pfVar4 = *pfVar1 * *pfVar2 + *pfVar3;
      pfVar4[1] = fVar11 * fVar14 + fVar17;
      pfVar4[2] = fVar12 * fVar15 + fVar18;
      pfVar4[3] = fVar13 * fVar16 + fVar19;
      lVar22 = lVar22 + 0x10;
    } while (lVar22 != (ulong)(param_4 >> 2) << 4);
    uVar20 = param_4 & 0xfffffffc;
    if (param_4 == uVar20) {
      return;
    }
    param_4 = param_4 - uVar20;
    if (param_4 == 1) goto LAB_001049e3;
  }
  puVar5 = (undefined8 *)(param_3 + (ulong)uVar20 * 4);
  lVar21 = (ulong)uVar20 + lVar21;
  uVar6 = *(undefined8 *)(lVar10 + lVar21 * 4);
  uVar7 = *(undefined8 *)(param_2 + lVar21 * 4);
  uVar8 = *puVar5;
  uVar20 = uVar20 + (param_4 & 0xfffffffe);
  *puVar5 = CONCAT44((float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar6 >> 0x20) +
                     (float)((ulong)uVar8 >> 0x20),(float)uVar7 * (float)uVar6 + (float)uVar8);
  if (param_4 == (param_4 & 0xfffffffe)) {
    return;
  }
LAB_001049e3:
  pfVar1 = (float *)(param_3 + (long)(int)uVar20 * 4);
  *pfVar1 = *(float *)(param_2 + (long)(int)(uVar23 + uVar20) * 4) *
            *(float *)(lVar10 + (long)(int)(uVar23 + uVar20) * 4) + *pfVar1;
  return;
}

