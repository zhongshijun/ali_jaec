
/* 0010b740 FUN_0010b740 */

void FUN_0010b740(uint param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
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
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long local_58;
  long local_50;
  
  param_2 = param_2 * param_1;
  if (0 < param_2) {
    if (param_1 == 1) {
      lVar16 = 0;
      do {
        pfVar17 = (float *)((long)param_3 + lVar16 * 2 + 0x10);
        fVar2 = *pfVar17;
        fVar3 = pfVar17[1];
        fVar4 = pfVar17[2];
        fVar5 = pfVar17[3];
        pfVar17 = (float *)((long)param_3 + lVar16 * 2);
        fVar6 = *pfVar17;
        fVar7 = pfVar17[1];
        fVar8 = pfVar17[2];
        fVar9 = pfVar17[3];
        pfVar17 = (float *)((long)param_4 + lVar16);
        *pfVar17 = fVar2 + fVar6;
        pfVar17[1] = fVar3 + fVar7;
        pfVar17[2] = fVar4 + fVar8;
        pfVar17[3] = fVar5 + fVar9;
        pfVar17 = (float *)((long)param_4 + lVar16 + (long)param_2 * 0x10);
        *pfVar17 = fVar6 - fVar2;
        pfVar17[1] = fVar7 - fVar3;
        pfVar17[2] = fVar8 - fVar4;
        pfVar17[3] = fVar9 - fVar5;
        lVar16 = lVar16 + 0x10;
      } while ((long)param_2 * 0x10 != lVar16);
      return;
    }
    iVar20 = 0;
    pfVar17 = param_4;
    pfVar22 = param_3;
    do {
      fVar2 = *pfVar22;
      fVar3 = pfVar22[1];
      fVar4 = pfVar22[2];
      fVar5 = pfVar22[3];
      pfVar18 = pfVar22 + (long)(int)(param_1 * 2) * 4 + -4;
      fVar6 = *pfVar18;
      fVar7 = pfVar18[1];
      fVar8 = pfVar18[2];
      fVar9 = pfVar18[3];
      iVar20 = iVar20 + param_1;
      pfVar22 = pfVar22 + (long)(int)(param_1 * 2) * 4;
      *pfVar17 = fVar2 + fVar6;
      pfVar17[1] = fVar3 + fVar7;
      pfVar17[2] = fVar4 + fVar8;
      pfVar17[3] = fVar5 + fVar9;
      pfVar18 = pfVar17 + (long)param_2 * 4;
      *pfVar18 = fVar2 - fVar6;
      pfVar18[1] = fVar3 - fVar7;
      pfVar18[2] = fVar4 - fVar8;
      pfVar18[3] = fVar5 - fVar9;
      pfVar17 = pfVar17 + (long)(int)param_1 * 4;
    } while (iVar20 < param_2);
  }
  if (1 < (int)param_1) {
    if (param_1 == 2) {
      if (0 < param_2) {
        local_58 = 2;
LAB_0010b912:
        local_50 = (long)param_2;
        iVar20 = 0;
        param_3 = param_3 + local_58 * 4;
        do {
          param_4 = param_4 + local_58 * 4;
          fVar2 = *param_3;
          fVar3 = param_3[1];
          fVar4 = param_3[2];
          fVar5 = param_3[3];
          pfVar17 = param_3 + -4;
          fVar6 = param_3[-3];
          fVar7 = param_3[-2];
          fVar8 = param_3[-1];
          iVar20 = iVar20 + param_1;
          param_3 = param_3 + (long)(int)(param_1 * 2) * 4;
          param_4[-4] = *pfVar17 + *pfVar17;
          param_4[-3] = fVar6 + fVar6;
          param_4[-2] = fVar7 + fVar7;
          param_4[-1] = fVar8 + fVar8;
          pfVar17 = param_4 + local_50 * 4 + -4;
          *pfVar17 = fVar2 * -2.0;
          pfVar17[1] = fVar3 * -2.0;
          pfVar17[2] = fVar4 * -2.0;
          pfVar17[3] = fVar5 * -2.0;
        } while (iVar20 < param_2);
        return;
      }
    }
    else if (0 < param_2) {
      local_58 = (long)(int)param_1;
      iVar20 = 0;
      pfVar17 = param_3;
      pfVar22 = param_4;
      do {
        iVar20 = iVar20 + param_1;
        iVar25 = 2;
        pfVar18 = pfVar22;
        pfVar21 = param_5;
        pfVar23 = pfVar17 + (long)(int)(param_1 * 2) * 4;
        pfVar24 = pfVar17;
        do {
          fVar2 = pfVar24[5];
          fVar3 = pfVar24[6];
          fVar4 = pfVar24[7];
          pfVar1 = pfVar23 + -0xc;
          fVar5 = pfVar23[-0xb];
          fVar6 = pfVar23[-10];
          fVar7 = pfVar23[-9];
          iVar25 = iVar25 + 2;
          fVar8 = pfVar24[8];
          fVar9 = pfVar24[9];
          fVar10 = pfVar24[10];
          fVar11 = pfVar24[0xb];
          fVar12 = pfVar23[-8];
          fVar13 = pfVar23[-7];
          fVar14 = pfVar23[-6];
          fVar15 = pfVar23[-5];
          pfVar19 = pfVar18 + 8;
          pfVar23 = pfVar23 + -8;
          fVar26 = pfVar24[4] - *pfVar1;
          fVar27 = fVar2 - fVar5;
          fVar28 = fVar3 - fVar6;
          fVar29 = fVar4 - fVar7;
          fVar30 = fVar8 + fVar12;
          fVar31 = fVar9 + fVar13;
          fVar32 = fVar10 + fVar14;
          fVar33 = fVar11 + fVar15;
          pfVar18[4] = pfVar24[4] + *pfVar1;
          pfVar18[5] = fVar2 + fVar5;
          pfVar18[6] = fVar3 + fVar6;
          pfVar18[7] = fVar4 + fVar7;
          *pfVar19 = fVar8 - fVar12;
          pfVar18[9] = fVar9 - fVar13;
          pfVar18[10] = fVar10 - fVar14;
          pfVar18[0xb] = fVar11 - fVar15;
          fVar2 = pfVar21[1];
          fVar3 = *pfVar21;
          pfVar18 = pfVar18 + (long)param_2 * 4 + 4;
          *pfVar18 = fVar26 * fVar3 - fVar30 * fVar2;
          pfVar18[1] = fVar27 * fVar3 - fVar31 * fVar2;
          pfVar18[2] = fVar28 * fVar3 - fVar32 * fVar2;
          pfVar18[3] = fVar29 * fVar3 - fVar33 * fVar2;
          pfVar18 = pfVar19 + (long)param_2 * 4;
          *pfVar18 = fVar26 * fVar2 + fVar30 * fVar3;
          pfVar18[1] = fVar27 * fVar2 + fVar31 * fVar3;
          pfVar18[2] = fVar28 * fVar2 + fVar32 * fVar3;
          pfVar18[3] = fVar29 * fVar2 + fVar33 * fVar3;
          pfVar18 = pfVar19;
          pfVar21 = pfVar21 + 2;
          pfVar24 = pfVar24 + 8;
        } while (iVar25 < (int)param_1);
        pfVar22 = pfVar22 + local_58 * 4;
        pfVar17 = pfVar17 + (long)(int)(param_1 * 2) * 4;
      } while (iVar20 < param_2);
      if ((param_1 & 1) == 0) goto LAB_0010b912;
    }
  }
  return;
}

