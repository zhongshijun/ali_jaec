
/* 00106900 FUN_00106900 */

void FUN_00106900(undefined4 param_1,undefined4 param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5,float *param_6,undefined8 *param_7,int *param_8,float *param_9,
                 float *param_10,long param_11,long param_12)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  bVar12 = 0;
  if (param_11 == 0 || param_12 == 0) {
    return;
  }
  if (param_10 != (float *)0x0) {
    uVar2 = param_5[1];
    lVar9 = 0;
    *(undefined8 *)param_10 = *param_5;
    *(undefined8 *)(param_10 + 2) = uVar2;
    uVar2 = param_5[3];
    *(undefined8 *)(param_10 + 4) = param_5[2];
    *(undefined8 *)(param_10 + 6) = uVar2;
    uVar2 = param_5[5];
    *(undefined8 *)(param_10 + 8) = param_5[4];
    *(undefined8 *)(param_10 + 10) = uVar2;
    uVar2 = param_5[7];
    *(undefined8 *)(param_10 + 0xc) = param_5[6];
    *(undefined8 *)(param_10 + 0xe) = uVar2;
    uVar2 = param_5[9];
    *(undefined8 *)(param_10 + 0x10) = param_5[8];
    *(undefined8 *)(param_10 + 0x12) = uVar2;
    uVar2 = param_5[10];
    uVar3 = param_5[0xb];
    *(ulong *)(param_10 + 0x18) = CONCAT44(param_2,param_1);
    *(undefined8 *)(param_10 + 0x14) = uVar2;
    *(undefined8 *)(param_10 + 0x16) = uVar3;
    lVar4 = *param_3;
    pfVar5 = (float *)(lVar4 + 0x12ee0);
    pfVar7 = (float *)(lVar4 + 0x13ae0);
    do {
      pfVar8 = pfVar7 + 0x1a;
      *(float *)(param_11 + lVar9) =
           (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20) *
           (float)((ulong)*(undefined8 *)(pfVar7 + 0x18) >> 0x20) +
           param_10[0x17] * pfVar7[0x17] +
           param_10[0x16] * pfVar7[0x16] +
           param_10[0x15] * pfVar7[0x15] +
           param_10[0x12] * pfVar7[0x12] +
           param_10[0x11] * pfVar7[0x11] +
           pfVar7[0xf] * param_10[0xf] +
           pfVar7[0xe] * param_10[0xe] +
           pfVar7[0xd] * param_10[0xd] +
           pfVar7[4] * param_10[4] +
           pfVar7[2] * param_10[2] + pfVar7[1] * param_10[1] + *pfVar7 * *param_10 + 0.0 +
           pfVar7[3] * param_10[3] + pfVar7[5] * param_10[5] + pfVar7[6] * param_10[6] +
           pfVar7[7] * param_10[7] + pfVar7[8] * param_10[8] + pfVar7[9] * param_10[9] +
           pfVar7[10] * param_10[10] + pfVar7[0xb] * param_10[0xb] + pfVar7[0xc] * param_10[0xc] +
           param_10[0x10] * pfVar7[0x10] + param_10[0x13] * pfVar7[0x13] +
           param_10[0x14] * pfVar7[0x14] +
           (float)*(undefined8 *)(param_10 + 0x18) * (float)*(undefined8 *)(pfVar7 + 0x18) +
           *(float *)(lVar4 + 0x12e20 + lVar9);
      *(float *)(param_12 + lVar9) =
           pfVar5[0xf] * param_6[0xf] +
           pfVar5[0xe] * param_6[0xe] +
           pfVar5[0xd] * param_6[0xd] +
           pfVar5[0xc] * param_6[0xc] +
           pfVar5[0xb] * param_6[0xb] +
           pfVar5[10] * param_6[10] +
           pfVar5[9] * param_6[9] +
           pfVar5[8] * param_6[8] +
           pfVar5[7] * param_6[7] +
           pfVar5[6] * param_6[6] +
           pfVar5[5] * param_6[5] +
           pfVar5[4] * param_6[4] +
           pfVar5[3] * param_6[3] +
           pfVar5[2] * param_6[2] + pfVar5[1] * param_6[1] + *pfVar5 * *param_6 + 0.0 +
           *(float *)(lVar4 + 0x12d60 + lVar9);
      lVar9 = lVar9 + 4;
      pfVar5 = pfVar5 + 0x10;
      pfVar7 = pfVar8;
    } while ((float *)(lVar4 + 0x14e60) != pfVar8);
    lVar9 = 0;
    do {
      fVar14 = *(float *)(param_11 + lVar9) + *(float *)(param_12 + lVar9);
      if (fVar14 < 0.0) {
        fVar14 = expf(fVar14);
        fVar14 = fVar14 / (fVar14 + 1.0);
      }
      else {
        fVar14 = expf(-fVar14);
        fVar14 = 1.0 / (fVar14 + 1.0);
      }
      fVar13 = *(float *)(param_11 + 0x40 + lVar9) + *(float *)(param_12 + 0x40 + lVar9);
      if (0.0 <= fVar13) {
        fVar13 = expf(-fVar13);
        fVar14 = tanhf(fVar14 * *(float *)(param_12 + 0x80 + lVar9) +
                       *(float *)(param_11 + 0x80 + lVar9));
        fVar14 = (1.0 / (fVar13 + 1.0)) * (*(float *)((long)param_6 + lVar9) - fVar14) + fVar14;
      }
      else {
        fVar13 = expf(fVar13);
        fVar14 = tanhf(fVar14 * *(float *)(param_12 + 0x80 + lVar9) +
                       *(float *)(param_11 + 0x80 + lVar9));
        fVar14 = (*(float *)((long)param_6 + lVar9) - fVar14) * (fVar13 / (fVar13 + 1.0)) + fVar14;
      }
      *(float *)((long)param_6 + lVar9) = fVar14;
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0x40);
    fVar14 = param_6[0xf] * *(float *)(lVar4 + 0x12d5c) +
             param_6[0xe] * *(float *)(lVar4 + 0x12d58) +
             param_6[0xd] * *(float *)(lVar4 + 0x12d54) +
             param_6[8] * *(float *)(lVar4 + 0x12d40) +
             param_6[6] * *(float *)(lVar4 + 0x12d38) +
             param_6[1] * *(float *)(lVar4 + 0x12d24) + *param_6 * *(float *)(lVar4 + 0x12d20) + 0.0
             + param_6[2] * *(float *)(lVar4 + 0x12d28) + param_6[3] * *(float *)(lVar4 + 0x12d2c) +
             param_6[4] * *(float *)(lVar4 + 0x12d30) + param_6[5] * *(float *)(lVar4 + 0x12d34) +
             param_6[7] * *(float *)(lVar4 + 0x12d3c) + param_6[9] * *(float *)(lVar4 + 0x12d44) +
             param_6[10] * *(float *)(lVar4 + 0x12d48) + param_6[0xb] * *(float *)(lVar4 + 0x12d4c)
             + param_6[0xc] * *(float *)(lVar4 + 0x12d50) + *(float *)(lVar4 + 0x12d00);
    if (0.0 <= fVar14) {
      fVar14 = expf(-fVar14);
      iVar1 = *param_8;
      fVar14 = 1.0 / (fVar14 + 1.0);
    }
    else {
      fVar14 = expf(fVar14);
      iVar1 = *param_8;
      fVar14 = fVar14 / (fVar14 + 1.0);
    }
    if (iVar1 == 0) {
      *(undefined8 *)param_9 = *param_4;
      *(undefined8 *)(param_9 + 0x62) = param_4[0x31];
      lVar4 = (long)param_9 - (long)((ulong)(param_9 + 2) & 0xfffffffffffffff8);
      puVar10 = (undefined8 *)((long)param_4 - lVar4);
      puVar11 = (undefined8 *)((ulong)(param_9 + 2) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)((int)lVar4 + 400U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
        puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
      }
      *param_8 = 1;
    }
    else {
      fVar13 = 0.0;
      fVar19 = 1.0 - fVar14;
      if (((ulong)((long)param_9 - ((long)param_7 + 4)) < 9) ||
         ((ulong)((long)param_9 - ((long)param_4 + 4)) < 9)) {
        lVar4 = 0;
        do {
          fVar15 = *(float *)((long)param_7 + lVar4) * fVar19 +
                   *(float *)((long)param_4 + lVar4) * fVar14;
          *(float *)((long)param_9 + lVar4) = fVar15;
          lVar4 = lVar4 + 4;
          fVar13 = fVar13 + fVar15;
        } while (lVar4 != 400);
      }
      else {
        lVar4 = 0;
        do {
          pfVar7 = (float *)((long)param_7 + lVar4);
          pfVar5 = (float *)((long)param_4 + lVar4);
          fVar15 = *pfVar7 * fVar19 + *pfVar5 * fVar14;
          fVar16 = pfVar7[1] * fVar19 + pfVar5[1] * fVar14;
          fVar17 = pfVar7[2] * fVar19 + pfVar5[2] * fVar14;
          fVar18 = pfVar7[3] * fVar19 + pfVar5[3] * fVar14;
          pfVar5 = (float *)((long)param_9 + lVar4);
          *pfVar5 = fVar15;
          pfVar5[1] = fVar16;
          pfVar5[2] = fVar17;
          pfVar5[3] = fVar18;
          lVar4 = lVar4 + 0x10;
          fVar13 = fVar17 + fVar16 + fVar13 + fVar15 + fVar18;
        } while (lVar4 != 400);
      }
      fVar14 = 1.0 / (fVar13 + 1e-08);
      pfVar5 = param_9;
      do {
        pfVar7 = pfVar5 + 4;
        *pfVar5 = *pfVar5 * fVar14;
        pfVar5[1] = pfVar5[1] * fVar14;
        pfVar5[2] = pfVar5[2] * fVar14;
        pfVar5[3] = pfVar5[3] * fVar14;
        pfVar5 = pfVar7;
      } while (pfVar7 != param_9 + 100);
    }
    *param_7 = *(undefined8 *)param_9;
    param_7[0x31] = *(undefined8 *)(param_9 + 0x62);
    lVar4 = (long)param_7 - (long)((ulong)(param_7 + 1) & 0xfffffffffffffff8);
    puVar10 = (undefined8 *)((long)param_9 - lVar4);
    puVar11 = (undefined8 *)((ulong)(param_7 + 1) & 0xfffffffffffffff8);
    for (uVar6 = (ulong)((int)lVar4 + 400U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
      puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
    }
    return;
  }
  return;
}

