
/* 00108b00 FUN_00108b00 */

void FUN_00108b00(float *param_1,long param_2,float *param_3,float *param_4,float *param_5,
                 long param_6,long param_7,float *param_8,int param_9,int param_10,int param_11,
                 float *param_12,float *param_13)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_84;
  int local_44;
  
  if (((((param_1 != (float *)0x0) && (param_2 != 0)) && (param_3 != (float *)0x0)) &&
      ((((param_4 != (float *)0x0 && (param_5 != (float *)0x0)) &&
        ((param_6 != 0 && ((param_7 != 0 && (param_8 != (float *)0x0)))))) &&
       (param_12 != (float *)0x0)))) &&
     (((param_13 != (float *)0x0 && (0 < param_9 && param_10 == 0x20)) && (param_11 == 6)))) {
    local_44 = 0;
    do {
      lVar2 = 0;
      pfVar1 = param_1;
      do {
        *(float *)((long)param_13 + lVar2) =
             pfVar1[5] * param_8[5] +
             pfVar1[4] * param_8[4] +
             pfVar1[3] * param_8[3] +
             pfVar1[2] * param_8[2] +
             pfVar1[1] * param_8[1] + *pfVar1 * *param_8 + *(float *)(param_2 + lVar2);
        lVar2 = lVar2 + 4;
        pfVar1 = pfVar1 + 6;
      } while (lVar2 != 0x80);
      fVar6 = *param_3;
      pfVar1 = param_13;
      do {
        while (*pfVar1 < 0.0) {
          *pfVar1 = *pfVar1 * fVar6;
          if (param_13 + 0x20 == pfVar1 + 1) goto LAB_00108c9c;
          fVar6 = *param_3;
          pfVar1 = pfVar1 + 1;
        }
        pfVar1 = pfVar1 + 1;
      } while (param_13 + 0x20 != pfVar1);
LAB_00108c9c:
      lVar2 = 0;
      pfVar1 = param_4;
      do {
        *(float *)((long)param_13 + lVar2 + 0x500) =
             param_13[0x1f] * pfVar1[0x1f] +
             param_13[0x1e] * pfVar1[0x1e] +
             param_13[0x1d] * pfVar1[0x1d] +
             param_13[0x1a] * pfVar1[0x1a] +
             param_13[0x19] * pfVar1[0x19] +
             param_13[0x16] * pfVar1[0x16] +
             param_13[0x15] * pfVar1[0x15] +
             param_13[0x12] * pfVar1[0x12] +
             param_13[0x11] * pfVar1[0x11] +
             param_13[0xe] * pfVar1[0xe] +
             param_13[0xd] * pfVar1[0xd] +
             param_13[10] * pfVar1[10] +
             param_13[9] * pfVar1[9] +
             param_13[6] * pfVar1[6] +
             param_13[5] * pfVar1[5] +
             param_13[2] * pfVar1[2] +
             param_13[1] * pfVar1[1] + *(float *)(param_6 + lVar2) + *param_13 * *pfVar1 +
             param_13[3] * pfVar1[3] + param_13[4] * pfVar1[4] + param_13[7] * pfVar1[7] +
             param_13[8] * pfVar1[8] + param_13[0xb] * pfVar1[0xb] + param_13[0xc] * pfVar1[0xc] +
             param_13[0xf] * pfVar1[0xf] + param_13[0x10] * pfVar1[0x10] +
             param_13[0x13] * pfVar1[0x13] + param_13[0x14] * pfVar1[0x14] +
             param_13[0x17] * pfVar1[0x17] + param_13[0x18] * pfVar1[0x18] +
             param_13[0x1b] * pfVar1[0x1b] + param_13[0x1c] * pfVar1[0x1c];
        lVar2 = lVar2 + 4;
        pfVar1 = pfVar1 + 0x20;
      } while (lVar2 != 0x180);
      lVar2 = 0;
      pfVar1 = param_5;
      do {
        *(float *)((long)param_13 + lVar2 + 0x1400) =
             param_12[0x1f] * pfVar1[0x1f] +
             param_12[0x1e] * pfVar1[0x1e] +
             param_12[0x1d] * pfVar1[0x1d] +
             param_12[0x1a] * pfVar1[0x1a] +
             param_12[0x19] * pfVar1[0x19] +
             param_12[0x16] * pfVar1[0x16] +
             param_12[0x15] * pfVar1[0x15] +
             param_12[0x12] * pfVar1[0x12] +
             param_12[0x11] * pfVar1[0x11] +
             param_12[0xf] * pfVar1[0xf] +
             param_12[0xe] * pfVar1[0xe] +
             param_12[0xd] * pfVar1[0xd] +
             *(float *)(param_7 + lVar2) + *pfVar1 * *param_12 + pfVar1[1] * param_12[1] +
             pfVar1[2] * param_12[2] + pfVar1[3] * param_12[3] + pfVar1[4] * param_12[4] +
             pfVar1[5] * param_12[5] + pfVar1[6] * param_12[6] + pfVar1[7] * param_12[7] +
             pfVar1[8] * param_12[8] + pfVar1[9] * param_12[9] + pfVar1[10] * param_12[10] +
             pfVar1[0xb] * param_12[0xb] + param_12[0xc] * pfVar1[0xc] +
             param_12[0x10] * pfVar1[0x10] + param_12[0x13] * pfVar1[0x13] +
             param_12[0x14] * pfVar1[0x14] + param_12[0x17] * pfVar1[0x17] +
             param_12[0x18] * pfVar1[0x18] + param_12[0x1b] * pfVar1[0x1b] +
             param_12[0x1c] * pfVar1[0x1c];
        lVar2 = lVar2 + 4;
        pfVar1 = pfVar1 + 0x20;
        pfVar3 = param_12;
        pfVar4 = param_13 + 0x140;
      } while (lVar2 != 0x180);
      do {
        fVar6 = *pfVar4 + pfVar4[0x3c0];
        if (fVar6 < 0.0) {
          fVar6 = expf(fVar6);
          fVar6 = fVar6 / (fVar6 + 1.0);
        }
        else {
          fVar6 = expf(-fVar6);
          fVar6 = 1.0 / (fVar6 + 1.0);
        }
        fVar5 = pfVar4[0x20] + pfVar4[0x3e0];
        if (0.0 <= fVar5) {
          fVar5 = expf(-fVar5);
          local_84 = 1.0 / (fVar5 + 1.0);
        }
        else {
          local_84 = expf(fVar5);
          local_84 = local_84 / (local_84 + 1.0);
        }
        pfVar1 = pfVar4 + 1;
        fVar6 = tanhf(pfVar4[0x40] + fVar6 * pfVar4[0x400]);
        *pfVar3 = (*pfVar3 - fVar6) * local_84 + fVar6;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar1;
      } while (param_13 + 0x160 != pfVar1);
      local_44 = local_44 + 1;
      param_12 = param_12 + 0x20;
      param_8 = param_8 + 6;
    } while (local_44 < param_9);
  }
  return;
}

