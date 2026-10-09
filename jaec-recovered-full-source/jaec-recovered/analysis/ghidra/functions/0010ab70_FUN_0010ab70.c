
/* 0010ab70 FUN_0010ab70 */

void FUN_0010ab70(float param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  param_3 = param_3 * param_2;
  fVar28 = param_1 * 0.8660254;
  if (0 < param_3) {
    lVar9 = (long)param_2 * 0x10;
    if (1 < param_2) {
      iVar10 = 0;
      lVar7 = param_5 + (long)param_3 * 0x10;
      param_5 = param_5 + (long)(param_3 * 2) * 0x10;
      do {
        lVar8 = lVar7 + (long)param_3 * -0x10;
        lVar4 = 0;
        pfVar5 = (float *)(param_4 + (long)(param_2 * 2) * 0x10);
        pfVar6 = (float *)(lVar9 + param_4);
        do {
          fVar3 = pfVar5[1];
          fVar20 = pfVar5[2];
          fVar21 = pfVar5[3];
          fVar22 = pfVar6[1];
          fVar23 = pfVar6[2];
          fVar19 = pfVar6[3];
          pfVar1 = (float *)(param_4 + lVar4 * 4);
          fVar24 = pfVar1[1];
          fVar25 = pfVar1[2];
          fVar26 = pfVar1[3];
          pfVar2 = (float *)(param_4 + lVar4 * 4);
          fVar11 = (*pfVar5 + *pfVar6) * -0.5 + *pfVar2;
          fVar12 = (fVar3 + fVar22) * -0.5 + pfVar2[1];
          fVar13 = (fVar20 + fVar23) * -0.5 + pfVar2[2];
          fVar14 = (fVar21 + fVar19) * -0.5 + pfVar2[3];
          pfVar2 = (float *)(lVar8 + lVar4 * 4);
          *pfVar2 = *pfVar5 + *pfVar6 + *pfVar1;
          pfVar2[1] = fVar3 + fVar22 + fVar24;
          pfVar2[2] = fVar20 + fVar23 + fVar25;
          pfVar2[3] = fVar21 + fVar19 + fVar26;
          fVar3 = pfVar5[5];
          fVar20 = pfVar5[6];
          fVar21 = pfVar5[7];
          fVar22 = pfVar6[5];
          fVar23 = pfVar6[6];
          fVar19 = pfVar6[7];
          pfVar1 = (float *)(param_4 + 0x10 + lVar4 * 4);
          fVar24 = pfVar1[1];
          fVar25 = pfVar1[2];
          fVar26 = pfVar1[3];
          pfVar2 = (float *)(param_4 + 0x10 + lVar4 * 4);
          fVar15 = (pfVar5[4] + pfVar6[4]) * -0.5 + *pfVar2;
          fVar16 = (fVar3 + fVar22) * -0.5 + pfVar2[1];
          fVar17 = (fVar20 + fVar23) * -0.5 + pfVar2[2];
          fVar18 = (fVar21 + fVar19) * -0.5 + pfVar2[3];
          pfVar2 = (float *)(lVar8 + 0x10 + lVar4 * 4);
          *pfVar2 = pfVar5[4] + pfVar6[4] + *pfVar1;
          pfVar2[1] = fVar3 + fVar22 + fVar24;
          pfVar2[2] = fVar20 + fVar23 + fVar25;
          pfVar2[3] = fVar21 + fVar19 + fVar26;
          fVar3 = *(float *)(param_6 + lVar4);
          fVar20 = (*pfVar6 - *pfVar5) * fVar28;
          fVar21 = (pfVar6[1] - pfVar5[1]) * fVar28;
          fVar22 = (pfVar6[2] - pfVar5[2]) * fVar28;
          fVar23 = (pfVar6[3] - pfVar5[3]) * fVar28;
          fVar24 = (pfVar6[4] - pfVar5[4]) * fVar28;
          fVar25 = (pfVar6[5] - pfVar5[5]) * fVar28;
          fVar26 = (pfVar6[6] - pfVar5[6]) * fVar28;
          fVar27 = (pfVar6[7] - pfVar5[7]) * fVar28;
          fVar33 = *(float *)(param_6 + 4 + lVar4) * param_1;
          fVar29 = fVar15 + fVar20;
          fVar30 = fVar16 + fVar21;
          fVar31 = fVar17 + fVar22;
          fVar32 = fVar18 + fVar23;
          fVar15 = fVar15 - fVar20;
          fVar16 = fVar16 - fVar21;
          fVar17 = fVar17 - fVar22;
          fVar18 = fVar18 - fVar23;
          fVar20 = *(float *)(param_7 + lVar4);
          fVar21 = fVar11 - fVar24;
          fVar22 = fVar12 - fVar25;
          fVar23 = fVar13 - fVar26;
          fVar19 = fVar14 - fVar27;
          fVar11 = fVar11 + fVar24;
          fVar12 = fVar12 + fVar25;
          fVar13 = fVar13 + fVar26;
          fVar14 = fVar14 + fVar27;
          fVar24 = *(float *)(param_7 + 4 + lVar4) * param_1;
          pfVar1 = (float *)(lVar7 + 0x10 + lVar4 * 4);
          *pfVar1 = fVar21 * fVar33 + fVar29 * fVar3;
          pfVar1[1] = fVar22 * fVar33 + fVar30 * fVar3;
          pfVar1[2] = fVar23 * fVar33 + fVar31 * fVar3;
          pfVar1[3] = fVar19 * fVar33 + fVar32 * fVar3;
          pfVar1 = (float *)(lVar7 + lVar4 * 4);
          *pfVar1 = fVar21 * fVar3 - fVar29 * fVar33;
          pfVar1[1] = fVar22 * fVar3 - fVar30 * fVar33;
          pfVar1[2] = fVar23 * fVar3 - fVar31 * fVar33;
          pfVar1[3] = fVar19 * fVar3 - fVar32 * fVar33;
          pfVar1 = (float *)(param_5 + lVar4 * 4);
          *pfVar1 = fVar11 * fVar20 - fVar15 * fVar24;
          pfVar1[1] = fVar12 * fVar20 - fVar16 * fVar24;
          pfVar1[2] = fVar13 * fVar20 - fVar17 * fVar24;
          pfVar1[3] = fVar14 * fVar20 - fVar18 * fVar24;
          pfVar1 = (float *)(param_5 + 0x10 + lVar4 * 4);
          *pfVar1 = fVar11 * fVar24 + fVar15 * fVar20;
          pfVar1[1] = fVar12 * fVar24 + fVar16 * fVar20;
          pfVar1[2] = fVar13 * fVar24 + fVar17 * fVar20;
          pfVar1[3] = fVar14 * fVar24 + fVar18 * fVar20;
          lVar4 = lVar4 + 8;
          pfVar5 = pfVar5 + 8;
          pfVar6 = pfVar6 + 8;
        } while ((ulong)((param_2 - 2U >> 1) + 1) << 3 != lVar4);
        iVar10 = iVar10 + param_2;
        param_4 = param_4 + (long)(param_2 * 3) * 0x10;
        lVar7 = lVar7 + lVar9;
        param_5 = param_5 + lVar9;
      } while (iVar10 < param_3);
    }
  }
  return;
}

