
/* 00109830 FUN_00109830 */

void FUN_00109830(long param_1,long param_2,long param_3,float *param_4,float *param_5,int *param_6,
                 long param_7,long param_8,long param_9,long param_10,long param_11,long param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar9 = *param_6;
  iVar10 = param_6[1];
  iVar11 = param_6[2];
  iVar12 = param_6[3];
  lVar13 = 0;
  do {
    fVar1 = *(float *)(param_2 + (long)iVar9 * 4 + lVar13);
    fVar2 = *(float *)((long)iVar9 * 4 + param_3 + lVar13);
    fVar14 = *(float *)(param_10 + lVar13) / (*(float *)(param_9 + lVar13) + 1e-06);
    fVar18 = -fVar14;
    fVar19 = (*param_4 * *(float *)(param_11 + lVar13) +
             fVar14 * fVar1 * *(float *)(param_7 + lVar13)) -
             fVar2 * fVar18 * *(float *)(param_8 + lVar13);
    fVar15 = *(float *)(param_11 + lVar13) * *param_5 +
             fVar14 * fVar1 * *(float *)(param_8 + lVar13) +
             fVar2 * fVar18 * *(float *)(param_7 + lVar13);
    *param_4 = fVar19;
    *param_5 = fVar15;
    fVar3 = *(float *)((long)iVar10 * 4 + param_3 + lVar13);
    fVar4 = *(float *)(param_2 + (long)iVar10 * 4 + lVar13);
    fVar20 = (param_4[0x108] * *(float *)(param_11 + lVar13) +
             fVar14 * fVar4 * *(float *)(param_7 + lVar13)) -
             fVar18 * fVar3 * *(float *)(param_8 + lVar13);
    fVar16 = *(float *)(param_11 + lVar13) * param_5[0x108] +
             fVar14 * fVar4 * *(float *)(param_8 + lVar13) +
             fVar18 * fVar3 * *(float *)(param_7 + lVar13);
    param_4[0x108] = fVar20;
    param_5[0x108] = fVar16;
    fVar5 = *(float *)(param_2 + (long)iVar11 * 4 + lVar13);
    fVar6 = *(float *)((long)iVar11 * 4 + param_3 + lVar13);
    fVar21 = (param_4[0x210] * *(float *)(param_11 + lVar13) +
             fVar14 * fVar5 * *(float *)(param_7 + lVar13)) -
             fVar18 * fVar6 * *(float *)(param_8 + lVar13);
    fVar17 = *(float *)(param_11 + lVar13) * param_5[0x210] +
             fVar14 * fVar5 * *(float *)(param_8 + lVar13) +
             fVar18 * fVar6 * *(float *)(param_7 + lVar13);
    param_4[0x210] = fVar21;
    param_5[0x210] = fVar17;
    fVar7 = *(float *)(param_2 + (long)iVar12 * 4 + lVar13);
    fVar8 = *(float *)((long)iVar12 * 4 + param_3 + lVar13);
    fVar22 = (param_4[0x318] * *(float *)(param_11 + lVar13) +
             fVar14 * fVar7 * *(float *)(param_7 + lVar13)) -
             fVar18 * fVar8 * *(float *)(param_8 + lVar13);
    fVar14 = fVar14 * fVar7 * *(float *)(param_8 + lVar13) +
             *(float *)(param_11 + lVar13) * param_5[0x318] +
             fVar18 * fVar8 * *(float *)(param_7 + lVar13);
    param_4[0x318] = fVar22;
    param_5[0x318] = fVar14;
    *(float *)(param_12 + lVar13 * 2) =
         *(float *)(param_1 + lVar13 * 2) -
         ((fVar7 * fVar22 - fVar8 * fVar14) +
         (fVar5 * fVar21 - fVar6 * fVar17) +
         (fVar4 * fVar20 - fVar3 * fVar16) + (fVar1 * fVar19 - fVar2 * fVar15) + 0.0);
    *(float *)(param_12 + 4 + lVar13 * 2) =
         *(float *)(param_1 + 4 + lVar13 * 2) -
         (fVar7 * fVar14 + fVar8 * fVar22 +
         fVar5 * fVar17 + fVar6 * fVar21 +
         fVar4 * fVar16 + fVar3 * fVar20 + fVar2 * fVar19 + fVar1 * fVar15 + 0.0);
    lVar13 = lVar13 + 4;
    param_4 = param_4 + 1;
    param_5 = param_5 + 1;
  } while (lVar13 != 0x404);
  return;
}

