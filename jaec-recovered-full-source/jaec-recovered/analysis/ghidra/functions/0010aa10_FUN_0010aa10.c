
/* 0010aa10 FUN_0010aa10 */

void FUN_0010aa10(float param_1,int param_2,int param_3,float *param_4,float *param_5,long param_6)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  long lVar26;
  float *pfVar27;
  long lVar28;
  int iVar29;
  float fVar30;
  
  param_3 = param_3 * param_2;
  if (param_2 < 3) {
    if (0 < param_3) {
      lVar28 = (long)param_2;
      iVar29 = 0;
      do {
        pfVar27 = param_4 + lVar28 * 4;
        fVar3 = pfVar27[1];
        fVar4 = pfVar27[2];
        fVar5 = pfVar27[3];
        fVar6 = param_4[1];
        fVar7 = param_4[2];
        fVar8 = param_4[3];
        iVar29 = iVar29 + param_2;
        *param_5 = *pfVar27 + *param_4;
        param_5[1] = fVar3 + fVar6;
        param_5[2] = fVar4 + fVar7;
        param_5[3] = fVar5 + fVar8;
        fVar3 = param_4[1];
        fVar4 = param_4[2];
        fVar5 = param_4[3];
        pfVar27 = param_4 + lVar28 * 4;
        fVar6 = pfVar27[1];
        fVar7 = pfVar27[2];
        fVar8 = pfVar27[3];
        pfVar1 = param_5 + (long)param_3 * 4;
        *pfVar1 = *param_4 - *pfVar27;
        pfVar1[1] = fVar3 - fVar6;
        pfVar1[2] = fVar4 - fVar7;
        pfVar1[3] = fVar5 - fVar8;
        pfVar27 = param_4 + lVar28 * 4 + 4;
        fVar3 = pfVar27[1];
        fVar4 = pfVar27[2];
        fVar5 = pfVar27[3];
        fVar6 = param_4[5];
        fVar7 = param_4[6];
        fVar8 = param_4[7];
        param_5[4] = *pfVar27 + param_4[4];
        param_5[5] = fVar3 + fVar6;
        param_5[6] = fVar4 + fVar7;
        param_5[7] = fVar5 + fVar8;
        pfVar27 = param_4 + 4;
        fVar3 = param_4[5];
        fVar4 = param_4[6];
        fVar5 = param_4[7];
        pfVar1 = param_4 + lVar28 * 4 + 4;
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        param_4 = param_4 + (long)(param_2 * 2) * 4;
        pfVar2 = param_5 + (long)param_3 * 4 + 4;
        *pfVar2 = *pfVar27 - *pfVar1;
        pfVar2[1] = fVar3 - fVar6;
        pfVar2[2] = fVar4 - fVar7;
        pfVar2[3] = fVar5 - fVar8;
        param_5 = param_5 + lVar28 * 4;
      } while (iVar29 < param_3);
    }
  }
  else if (0 < param_3) {
    lVar28 = (long)param_3;
    iVar29 = 0;
    param_5 = param_5 + lVar28 * 4;
    do {
      lVar26 = 0;
      pfVar27 = param_4 + (long)param_2 * 4;
      do {
        fVar4 = pfVar27[1];
        fVar5 = pfVar27[2];
        fVar6 = pfVar27[3];
        pfVar1 = param_4 + lVar26;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = param_4 + lVar26;
        fVar10 = *pfVar2;
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar13 = pfVar2[3];
        fVar30 = *(float *)(param_6 + 4 + lVar26) * param_1;
        fVar14 = *pfVar27;
        fVar15 = pfVar27[1];
        fVar16 = pfVar27[2];
        fVar17 = pfVar27[3];
        pfVar2 = param_4 + lVar26 + 4;
        fVar18 = *pfVar2;
        fVar19 = pfVar2[1];
        fVar20 = pfVar2[2];
        fVar21 = pfVar2[3];
        fVar3 = *(float *)(param_6 + lVar26);
        fVar22 = pfVar27[4];
        fVar23 = pfVar27[5];
        fVar24 = pfVar27[6];
        fVar25 = pfVar27[7];
        pfVar2 = param_5 + lVar28 * -4 + lVar26;
        *pfVar2 = *pfVar27 + *pfVar1;
        pfVar2[1] = fVar4 + fVar7;
        pfVar2[2] = fVar5 + fVar8;
        pfVar2[3] = fVar6 + fVar9;
        fVar4 = pfVar27[5];
        fVar5 = pfVar27[6];
        fVar6 = pfVar27[7];
        pfVar1 = param_4 + lVar26 + 4;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar2 = param_5 + lVar28 * -4 + lVar26 + 4;
        *pfVar2 = pfVar27[4] + *pfVar1;
        pfVar2[1] = fVar4 + fVar7;
        pfVar2[2] = fVar5 + fVar8;
        pfVar2[3] = fVar6 + fVar9;
        pfVar1 = param_5 + lVar26;
        *pfVar1 = (fVar10 - fVar14) * fVar3 - fVar30 * (fVar18 - fVar22);
        pfVar1[1] = (fVar11 - fVar15) * fVar3 - fVar30 * (fVar19 - fVar23);
        pfVar1[2] = (fVar12 - fVar16) * fVar3 - fVar30 * (fVar20 - fVar24);
        pfVar1[3] = (fVar13 - fVar17) * fVar3 - fVar30 * (fVar21 - fVar25);
        pfVar1 = param_5 + lVar26 + 4;
        *pfVar1 = fVar30 * (fVar10 - fVar14) + (fVar18 - fVar22) * fVar3;
        pfVar1[1] = fVar30 * (fVar11 - fVar15) + (fVar19 - fVar23) * fVar3;
        pfVar1[2] = fVar30 * (fVar12 - fVar16) + (fVar20 - fVar24) * fVar3;
        pfVar1[3] = fVar30 * (fVar13 - fVar17) + (fVar21 - fVar25) * fVar3;
        lVar26 = lVar26 + 8;
        pfVar27 = pfVar27 + 8;
      } while ((ulong)((param_2 - 2U >> 1) + 1) << 3 != lVar26);
      iVar29 = iVar29 + param_2;
      param_4 = param_4 + (long)(param_2 * 2) * 4;
      param_5 = param_5 + (long)param_2 * 4;
    } while (iVar29 < param_3);
  }
  return;
}

