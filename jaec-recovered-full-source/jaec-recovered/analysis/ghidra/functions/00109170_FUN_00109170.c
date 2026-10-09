
/* 00109170 FUN_00109170 */

void FUN_00109170(long param_1,float *param_2,long param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,int param_9,long param_10)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float *local_90;
  long local_88;
  long local_80;
  float *local_68;
  long local_60;
  
  if (0 < param_5) {
    local_80 = 0;
    local_60 = 0;
    local_68 = param_2;
    do {
      fVar11 = 0.0;
      if (param_2 != (float *)0x0) {
        fVar11 = *local_68;
      }
      if (0 < param_7) {
        local_88 = 0;
        local_90 = (float *)(param_10 + local_60 * 4);
        do {
          fVar10 = fVar11;
          if (0 < param_4) {
            iVar9 = 0;
            lVar7 = local_80;
            lVar8 = local_88;
            do {
              if (0 < (int)param_8) {
                if (param_8 - 1 < 3) {
                  uVar3 = 0;
                }
                else {
                  lVar5 = 0;
                  do {
                    pfVar1 = (float *)(param_3 + lVar8 * 4 + lVar5);
                    pfVar2 = (float *)(param_1 + lVar7 * 4 + lVar5);
                    lVar5 = lVar5 + 0x10;
                    fVar10 = pfVar1[2] * pfVar2[2] +
                             pfVar1[1] * pfVar2[1] + fVar10 + *pfVar1 * *pfVar2 +
                             pfVar1[3] * pfVar2[3];
                  } while (lVar5 != ((ulong)((param_8 >> 2) - 1) + 1) * 0x10);
                  uVar3 = param_8 & 0xfffffffc;
                  if ((param_8 & 0xfffffffc) == param_8) goto LAB_0010933a;
                }
                iVar6 = uVar3 + 1;
                fVar10 = fVar10 + *(float *)(param_3 + ((int)uVar3 + lVar8) * 4) *
                                  *(float *)(param_1 + ((int)uVar3 + lVar7) * 4);
                if (iVar6 < (int)param_8) {
                  iVar4 = uVar3 + 2;
                  fVar10 = fVar10 + *(float *)(param_1 + (iVar6 + lVar7) * 4) *
                                    *(float *)(param_3 + (iVar6 + lVar8) * 4);
                  if (iVar4 < (int)param_8) {
                    fVar10 = fVar10 + *(float *)(param_3 + (iVar4 + lVar8) * 4) *
                                      *(float *)(param_1 + (iVar4 + lVar7) * 4);
                  }
                }
              }
LAB_0010933a:
              iVar9 = iVar9 + 1;
              lVar7 = lVar7 + (int)param_8;
              lVar8 = lVar8 + param_6;
            } while (param_4 != iVar9);
          }
          local_88 = local_88 + param_9;
          *local_90 = fVar10;
          local_90 = local_90 + 1;
        } while (local_90 != (float *)(param_10 + 4 + ((ulong)(param_7 - 1) + local_60) * 4));
      }
      local_68 = local_68 + 1;
      local_60 = local_60 + param_7;
      local_80 = local_80 + (long)param_4 * (long)(int)param_8;
    } while (local_68 != param_2 + (ulong)(param_5 - 1) + 1);
  }
  return;
}

