
/* 0010b520 FUN_0010b520 */

void FUN_0010b520(uint param_1,int param_2,float *param_3,float *param_4,long param_5)

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
  undefined8 uVar12;
  long lVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long local_50;
  long local_48;
  
  param_2 = param_2 * param_1;
  if (0 < param_2) {
    if (param_1 == 1) {
      lVar19 = (long)param_2 * 0x10;
      lVar13 = 0;
      do {
        pfVar14 = (float *)((long)param_3 + lVar13 + lVar19);
        fVar5 = pfVar14[1];
        fVar6 = pfVar14[2];
        fVar7 = pfVar14[3];
        pfVar17 = (float *)((long)param_3 + lVar13);
        fVar8 = pfVar17[1];
        fVar9 = pfVar17[2];
        fVar10 = pfVar17[3];
        pfVar20 = (float *)((long)param_4 + lVar13 * 2);
        *pfVar20 = *pfVar14 + *pfVar17;
        pfVar20[1] = fVar5 + fVar8;
        pfVar20[2] = fVar6 + fVar9;
        pfVar20[3] = fVar7 + fVar10;
        pfVar14 = (float *)((long)param_3 + lVar13);
        fVar5 = pfVar14[1];
        fVar6 = pfVar14[2];
        fVar7 = pfVar14[3];
        pfVar17 = (float *)((long)param_3 + lVar13 + lVar19);
        fVar8 = pfVar17[1];
        fVar9 = pfVar17[2];
        fVar10 = pfVar17[3];
        pfVar20 = (float *)((long)param_4 + lVar13 * 2 + 0x10);
        *pfVar20 = *pfVar14 - *pfVar17;
        pfVar20[1] = fVar5 - fVar8;
        pfVar20[2] = fVar6 - fVar9;
        pfVar20[3] = fVar7 - fVar10;
        lVar13 = lVar13 + 0x10;
      } while (lVar19 != lVar13);
      return;
    }
    iVar15 = 0;
    pfVar14 = param_4;
    pfVar17 = param_3;
    do {
      fVar5 = pfVar17[1];
      fVar6 = pfVar17[2];
      fVar7 = pfVar17[3];
      pfVar20 = pfVar17 + (long)param_2 * 4;
      fVar8 = pfVar20[1];
      fVar9 = pfVar20[2];
      fVar10 = pfVar20[3];
      iVar15 = iVar15 + param_1;
      *pfVar14 = *pfVar17 + *pfVar20;
      pfVar14[1] = fVar5 + fVar8;
      pfVar14[2] = fVar6 + fVar9;
      pfVar14[3] = fVar7 + fVar10;
      fVar5 = *pfVar17;
      fVar6 = pfVar17[1];
      fVar7 = pfVar17[2];
      fVar8 = pfVar17[3];
      pfVar20 = pfVar17 + (long)param_2 * 4;
      fVar9 = pfVar20[1];
      fVar10 = pfVar20[2];
      fVar11 = pfVar20[3];
      pfVar17 = pfVar17 + (long)(int)param_1 * 4;
      pfVar18 = pfVar14 + (long)(int)(param_1 * 2) * 4 + -4;
      *pfVar18 = fVar5 - *pfVar20;
      pfVar18[1] = fVar6 - fVar9;
      pfVar18[2] = fVar7 - fVar10;
      pfVar18[3] = fVar8 - fVar11;
      pfVar14 = pfVar14 + (long)(int)(param_1 * 2) * 4;
    } while (iVar15 < param_2);
  }
  if (1 < (int)param_1) {
    if (param_1 == 2) {
      if (0 < param_2) {
        local_48 = 2;
LAB_0010b6c8:
        local_50 = (long)param_2;
        iVar15 = 0;
        param_4 = param_4 + local_48 * 4;
        do {
          param_3 = param_3 + local_48 * 4;
          pfVar14 = param_3 + local_50 * 4 + -4;
          fVar5 = *pfVar14;
          fVar6 = pfVar14[1];
          fVar7 = pfVar14[2];
          fVar8 = pfVar14[3];
          uVar12 = *(undefined8 *)(param_3 + -2);
          iVar15 = iVar15 + param_1;
          *(undefined8 *)(param_4 + -4) = *(undefined8 *)(param_3 + -4);
          *(undefined8 *)(param_4 + -2) = uVar12;
          *param_4 = -fVar5;
          param_4[1] = -fVar6;
          param_4[2] = -fVar7;
          param_4[3] = -fVar8;
          param_4 = param_4 + (long)(int)(param_1 * 2) * 4;
        } while (iVar15 < param_2);
        return;
      }
    }
    else if (0 < param_2) {
      local_48 = (long)(int)param_1;
      iVar15 = 0;
      pfVar20 = param_3 + (long)param_2 * 4;
      pfVar14 = param_3;
      pfVar17 = param_4;
      do {
        iVar15 = iVar15 + param_1;
        lVar13 = 0;
        iVar16 = 2;
        pfVar18 = pfVar17 + (long)(int)(param_1 * 2) * 4;
        do {
          fVar5 = *(float *)(param_5 + 4 + lVar13);
          fVar6 = *(float *)(param_5 + lVar13);
          iVar16 = iVar16 + 2;
          pfVar1 = pfVar20 + lVar13 + 4;
          pfVar2 = pfVar20 + lVar13 + 8;
          pfVar3 = pfVar20 + lVar13 + 4;
          pfVar4 = pfVar20 + lVar13 + 8;
          fVar25 = *pfVar1 * fVar6 + *pfVar2 * fVar5;
          fVar26 = pfVar1[1] * fVar6 + pfVar2[1] * fVar5;
          fVar27 = pfVar1[2] * fVar6 + pfVar2[2] * fVar5;
          fVar28 = pfVar1[3] * fVar6 + pfVar2[3] * fVar5;
          fVar21 = fVar6 * *pfVar4 - fVar5 * *pfVar3;
          fVar22 = fVar6 * pfVar4[1] - fVar5 * pfVar3[1];
          fVar23 = fVar6 * pfVar4[2] - fVar5 * pfVar3[2];
          fVar24 = fVar6 * pfVar4[3] - fVar5 * pfVar3[3];
          pfVar1 = pfVar14 + lVar13 + 8;
          fVar5 = pfVar1[1];
          fVar6 = pfVar1[2];
          fVar7 = pfVar1[3];
          pfVar2 = pfVar14 + lVar13 + 8;
          fVar8 = *pfVar2;
          fVar9 = pfVar2[1];
          fVar10 = pfVar2[2];
          fVar11 = pfVar2[3];
          pfVar2 = pfVar17 + lVar13 + 8;
          *pfVar2 = *pfVar1 + fVar21;
          pfVar2[1] = fVar5 + fVar22;
          pfVar2[2] = fVar6 + fVar23;
          pfVar2[3] = fVar7 + fVar24;
          pfVar18[-8] = fVar21 - fVar8;
          pfVar18[-7] = fVar22 - fVar9;
          pfVar18[-6] = fVar23 - fVar10;
          pfVar18[-5] = fVar24 - fVar11;
          pfVar1 = pfVar14 + lVar13 + 4;
          fVar5 = pfVar1[1];
          fVar6 = pfVar1[2];
          fVar7 = pfVar1[3];
          pfVar2 = pfVar17 + lVar13 + 4;
          *pfVar2 = *pfVar1 + fVar25;
          pfVar2[1] = fVar5 + fVar26;
          pfVar2[2] = fVar6 + fVar27;
          pfVar2[3] = fVar7 + fVar28;
          pfVar1 = pfVar14 + lVar13 + 4;
          fVar5 = pfVar1[1];
          fVar6 = pfVar1[2];
          fVar7 = pfVar1[3];
          lVar13 = lVar13 + 8;
          pfVar18[-0xc] = *pfVar1 - fVar25;
          pfVar18[-0xb] = fVar5 - fVar26;
          pfVar18[-10] = fVar6 - fVar27;
          pfVar18[-9] = fVar7 - fVar28;
          pfVar18 = pfVar18 + -8;
        } while (iVar16 < (int)param_1);
        pfVar20 = pfVar20 + local_48 * 4;
        pfVar14 = pfVar14 + local_48 * 4;
        pfVar17 = pfVar17 + (long)(int)(param_1 * 2) * 4;
      } while (iVar15 < param_2);
      if ((param_1 & 1) == 0) goto LAB_0010b6c8;
    }
  }
  return;
}

