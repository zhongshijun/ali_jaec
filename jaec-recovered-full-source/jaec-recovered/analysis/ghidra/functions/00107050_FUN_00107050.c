
/* 00107050 FUN_00107050 */

void FUN_00107050(undefined8 *param_1,long param_2,long param_3,long param_4,float *param_5,
                 long param_6,float *param_7,long param_8,int param_9,int param_10,uint param_11)

{
  double dVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  double *pdVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  long lVar14;
  double *pdVar15;
  long lVar16;
  int iVar17;
  float *pfVar18;
  double *local_70;
  
  lVar16 = 0;
  *param_1 = 0;
  iVar17 = param_10 << 5;
  param_1[0xff] = 0;
  puVar13 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar6 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x800U >> 3
                      ); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  while( true ) {
    lVar10 = 0;
    local_70 = (double *)(param_3 + (long)(iVar17 * 3) * 8);
    *(undefined8 *)(param_2 + lVar16 * 8) =
         *(undefined8 *)(param_4 + (long)param_10 * 8 + lVar16 * 0x10);
    do {
      if ((param_11 >> ((uint)lVar10 & 0x1f) & 1) != 0) {
        iVar2 = *(int *)(&DAT_0011a280 + lVar10 * 4 + (long)param_9 * 0xc);
        lVar9 = param_8;
        pfVar11 = param_7;
        if (*(int *)(&DAT_0011a2a0 + lVar10 * 4 + (long)param_9 * 0xc) == 0) {
          lVar9 = param_6;
          pfVar11 = param_5;
        }
        iVar3 = iVar2 + 2;
        if (param_9 == 0) {
          iVar3 = iVar2 + 3;
        }
        lVar4 = (long)(int)(iVar2 + (uint)(param_9 == 0));
        lVar8 = iVar2 - lVar4;
        lVar7 = iVar3 - lVar4;
        lVar14 = 0;
        pdVar15 = local_70;
        do {
          pfVar12 = pfVar11 + 0x60;
          dVar1 = *pdVar15;
          *(double *)(param_2 + lVar16 * 8) =
               (double)*(float *)(lVar9 + lVar14 * 4) * dVar1 + *(double *)(param_2 + lVar16 * 8);
          pdVar5 = (double *)(param_1 + lVar16 * 0x80 + lVar4);
          if (param_9 == 0) {
            do {
              pfVar18 = pfVar11 + 3;
              *pdVar5 = (double)*pfVar11 * dVar1 + *pdVar5;
              pdVar5[lVar8 + 2] = (double)pfVar11[1] * dVar1 + pdVar5[lVar8 + 2];
              pdVar5[lVar7] = (double)pfVar11[2] * dVar1 + pdVar5[lVar7];
              pdVar5 = pdVar5 + 4;
              pfVar11 = pfVar18;
            } while (pfVar12 != pfVar18);
          }
          else {
            do {
              pfVar18 = pfVar11 + 3;
              *pdVar5 = (double)*pfVar11 * dVar1 + *pdVar5;
              pdVar5[lVar8 + 1] = (double)pfVar11[1] * dVar1 + pdVar5[lVar8 + 1];
              pdVar5[lVar7] = (double)pfVar11[2] * dVar1 + pdVar5[lVar7];
              pdVar5 = pdVar5 + 4;
              pfVar11 = pfVar18;
            } while (pfVar12 != pfVar18);
          }
          lVar14 = lVar14 + 1;
          pdVar15 = pdVar15 + 3;
          pfVar11 = pfVar12;
        } while (lVar14 != 0x20);
      }
      lVar10 = lVar10 + 1;
      local_70 = local_70 + 1;
    } while (lVar10 != 3);
    iVar17 = iVar17 + 0x40;
    if (lVar16 == 1) break;
    lVar16 = 1;
  }
  return;
}

