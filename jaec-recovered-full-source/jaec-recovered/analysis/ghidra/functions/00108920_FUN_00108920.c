
/* 00108920 FUN_00108920 */

void FUN_00108920(long param_1,int param_2,float *param_3,undefined8 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  
  *param_4 = 0;
  param_4[0x100] = 0;
  puVar14 = (undefined8 *)((ulong)(param_4 + 1) & 0xfffffffffffffff8);
  for (uVar12 = (ulong)(((int)param_4 -
                        (int)(undefined8 *)((ulong)(param_4 + 1) & 0xfffffffffffffff8)) + 0x808U >>
                       3); uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  if (0 < 100 - param_2) {
    lVar13 = param_1 + (long)param_2 * 0x808;
    pfVar15 = param_3;
    do {
      fVar4 = *pfVar15;
      if ((ulong)((long)param_4 - (lVar13 + 4)) < 9) {
        lVar11 = 0;
        do {
          *(float *)((long)param_4 + lVar11) =
               *(float *)(lVar13 + lVar11) * fVar4 + *(float *)((long)param_4 + lVar11);
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0x808);
      }
      else {
        lVar11 = 0;
        do {
          pfVar1 = (float *)(lVar13 + lVar11);
          fVar5 = pfVar1[1];
          fVar6 = pfVar1[2];
          fVar7 = pfVar1[3];
          pfVar2 = (float *)((long)param_4 + lVar11);
          fVar8 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar10 = pfVar2[3];
          pfVar3 = (float *)((long)param_4 + lVar11);
          *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
          pfVar3[1] = fVar5 * fVar4 + fVar8;
          pfVar3[2] = fVar6 * fVar4 + fVar9;
          pfVar3[3] = fVar7 * fVar4 + fVar10;
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != 0x800);
        param_4[0x100] =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x800) >> 0x20) * fVar4 +
                      (float)((ulong)param_4[0x100] >> 0x20),
                      (float)*(undefined8 *)(lVar13 + 0x800) * fVar4 + (float)param_4[0x100]);
      }
      pfVar15 = pfVar15 + 1;
      lVar13 = lVar13 + 0x808;
    } while (pfVar15 != param_3 + (ulong)(99 - param_2) + 1);
  }
  if (0 < param_2) {
    param_3 = param_3 + (100 - param_2);
    lVar13 = param_1 + 0x808;
    do {
      fVar4 = *param_3;
      if ((ulong)((long)param_4 - (param_1 + 4)) < 9) {
        lVar11 = 0;
        do {
          *(float *)((long)param_4 + lVar11) =
               *(float *)(param_1 + lVar11) * fVar4 + *(float *)((long)param_4 + lVar11);
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0x808);
      }
      else {
        lVar11 = 0;
        do {
          pfVar15 = (float *)(param_1 + lVar11);
          fVar5 = pfVar15[1];
          fVar6 = pfVar15[2];
          fVar7 = pfVar15[3];
          pfVar1 = (float *)((long)param_4 + lVar11);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)((long)param_4 + lVar11);
          *pfVar2 = *pfVar15 * fVar4 + *pfVar1;
          pfVar2[1] = fVar5 * fVar4 + fVar8;
          pfVar2[2] = fVar6 * fVar4 + fVar9;
          pfVar2[3] = fVar7 * fVar4 + fVar10;
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != 0x800);
        param_4[0x100] =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x800) >> 0x20) * fVar4 +
                      (float)((ulong)param_4[0x100] >> 0x20),
                      (float)*(undefined8 *)(param_1 + 0x800) * fVar4 + (float)param_4[0x100]);
      }
      param_1 = param_1 + 0x808;
      param_3 = param_3 + 1;
    } while (param_1 != lVar13 + (ulong)(param_2 - 1) * 0x808);
  }
  return;
}

