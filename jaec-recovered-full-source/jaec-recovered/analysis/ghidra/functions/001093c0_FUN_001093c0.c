
/* 001093c0 FUN_001093c0 */

void FUN_001093c0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 int *param_7,long param_8,long param_9,long param_10,float *param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
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
  
  iVar8 = param_7[3];
  iVar9 = *param_7;
  iVar10 = param_7[2];
  iVar11 = param_7[1];
  lVar12 = 0;
  do {
    fVar16 = -10.0;
    fVar13 = *(float *)(param_1 + lVar12 * 2);
    fVar1 = *(float *)(param_1 + 4 + lVar12 * 2);
    *(float *)(param_3 + (long)iVar8 * 4 + lVar12) = fVar13;
    *(float *)((long)iVar8 * 4 + param_4 + lVar12) = fVar1;
    fVar17 = *(float *)(param_3 + (long)iVar9 * 4 + lVar12);
    fVar19 = *(float *)((long)iVar9 * 4 + param_4 + lVar12);
    fVar21 = *(float *)(param_3 + (long)iVar11 * 4 + lVar12);
    fVar22 = *(float *)((long)iVar11 * 4 + param_4 + lVar12);
    fVar2 = *(float *)(param_3 + (long)iVar10 * 4 + lVar12);
    fVar3 = *(float *)(param_4 + (long)iVar10 * 4 + lVar12);
    fVar4 = *(float *)(param_5 + 0xc60 + lVar12);
    fVar5 = *(float *)(param_6 + 0xc60 + lVar12);
    fVar14 = fVar2 * fVar2 + fVar22 * fVar22 + fVar21 * fVar21 + fVar19 * fVar19 + fVar17 * fVar17 +
             fVar3 * fVar3 + fVar13 * fVar13 + fVar1 * fVar1;
    fVar6 = *(float *)(param_2 + 4 + lVar12 * 2);
    fVar7 = *(float *)(param_2 + lVar12 * 2);
    fVar15 = fVar7 * fVar7 + fVar6 * fVar6;
    fVar18 = (fVar13 * fVar4 +
             ((*(float *)(param_5 + 0x840 + lVar12) * fVar2 +
              ((*(float *)(param_5 + 0x420 + lVar12) * fVar21 +
               (*(float *)(param_5 + lVar12) * fVar17 - *(float *)(param_6 + lVar12) * fVar19)) -
              *(float *)(param_6 + 0x420 + lVar12) * fVar22)) -
             *(float *)(param_6 + 0x840 + lVar12) * fVar3)) - fVar1 * fVar5;
    fVar20 = fVar7 - fVar18;
    fVar22 = fVar4 * fVar1 +
             fVar5 * fVar13 +
             fVar3 * *(float *)(param_5 + 0x840 + lVar12) +
             fVar21 * *(float *)(param_6 + 0x420 + lVar12) +
             fVar17 * *(float *)(param_6 + lVar12) + fVar19 * *(float *)(param_5 + lVar12) +
             fVar22 * *(float *)(param_5 + 0x420 + lVar12) +
             fVar2 * *(float *)(param_6 + 0x840 + lVar12);
    *(float *)(param_8 + lVar12) = fVar20;
    fVar21 = fVar6 - fVar22;
    *(float *)(param_9 + lVar12) = fVar21;
    *(float *)(param_10 + lVar12) = fVar14;
    fVar19 = SQRT((fVar13 * fVar13 + fVar1 * fVar1) * fVar15 + 1e-06);
    fVar17 = 1e-06;
    if (1e-06 <= fVar19) {
      fVar17 = fVar19;
    }
    fVar19 = (fVar13 * fVar7 + fVar1 * fVar6) / fVar17;
    fVar17 = (fVar13 * fVar6 - fVar1 * fVar7) / fVar17;
    if (-10.0 <= fVar19) {
      if (10.0 < fVar19) {
        fVar19 = 10.0;
      }
      param_11[0x404] = fVar19;
    }
    else {
      param_11[0x404] = -10.0;
    }
    if ((-10.0 <= fVar17) && (fVar16 = fVar17, 10.0 < fVar17)) {
      fVar16 = 10.0;
    }
    param_11[0x505] = fVar16;
    lVar12 = lVar12 + 4;
    fVar13 = logf(fVar14 + 1e-06);
    *param_11 = fVar13;
    fVar13 = logf(fVar15 + 1e-06);
    param_11[0x101] = fVar13;
    fVar13 = logf(fVar18 * fVar18 + fVar22 * fVar22 + 1e-06);
    param_11[0x202] = fVar13;
    fVar13 = logf(fVar20 * fVar20 + fVar21 * fVar21 + 1e-06);
    param_11[0x303] = fVar13;
    param_11 = param_11 + 1;
  } while (lVar12 != 0x404);
  return;
}

