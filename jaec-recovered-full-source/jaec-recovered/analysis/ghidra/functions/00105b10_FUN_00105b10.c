
/* 00105b10 FUN_00105b10 */

void FUN_00105b10(float param_1,float *param_2,int param_3,long param_4,float *param_5,int param_6,
                 long param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  
  if (param_6 < 1) {
    return;
  }
  pfVar1 = param_5 + (ulong)(param_6 - 1) + 1;
  iVar5 = 0;
  do {
    lVar6 = 2;
    pfVar7 = param_2;
    do {
      fVar8 = *param_5;
      pfVar2 = (float *)(param_4 + (long)(iVar5 * 5) * 4);
      pfVar4 = pfVar7;
      if (0 < param_3) {
        do {
          pfVar3 = pfVar2 + 5;
          fVar8 = pfVar2[4] * pfVar4[4] +
                  pfVar2[3] * pfVar4[3] +
                  pfVar2[2] * pfVar4[2] + pfVar2[1] * pfVar4[1] + fVar8 + *pfVar2 * *pfVar4;
          pfVar2 = pfVar3;
          pfVar4 = pfVar4 + 0x68;
        } while ((float *)(param_4 + 0x14 + ((long)iVar5 + (ulong)(param_3 - 1)) * 0x14) != pfVar3);
      }
      if (fVar8 < 0.0) {
        fVar8 = fVar8 * param_1;
      }
      *(float *)(param_7 + lVar6 * 4) = fVar8;
      lVar6 = lVar6 + 1;
      pfVar7 = pfVar7 + 1;
    } while (lVar6 != 0x66);
    param_5 = param_5 + 1;
    param_7 = param_7 + 0x1a0;
    iVar5 = iVar5 + param_3;
  } while (pfVar1 != param_5);
  return;
}

