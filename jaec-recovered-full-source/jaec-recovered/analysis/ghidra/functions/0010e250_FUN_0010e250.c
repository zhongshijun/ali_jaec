
/* 0010e250 FUN_0010e250 */

uint * FUN_0010e250(uint param_1,uint param_2)

{
  void *pvVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float *local_90;
  uint local_88;
  uint *local_70;
  int local_64;
  uint *local_60;
  int local_58;
  float local_40;
  float local_3c [3];
  
  local_60 = (uint *)0x0;
  if (param_1 < 0x4000001) {
    local_60 = malloc(0x88);
    uVar4 = (int)param_1 >> 2;
    *local_60 = param_1;
    uVar5 = (int)param_1 >> 3;
    if (param_2 != 0) {
      uVar5 = uVar4;
    }
    local_60[0x1b] = param_2;
    local_60[1] = uVar5;
    pvVar1 = malloc((long)(int)uVar5 * 0x20 + 0x40);
    if (pvVar1 == (void *)0x0) {
      lVar8 = 0;
    }
    else {
      *(void **)(((ulong)pvVar1 & 0xffffffffffffffc0) + 0x38) = pvVar1;
      lVar8 = ((ulong)pvVar1 & 0xffffffffffffffc0) + 0x40;
    }
    *(long *)(local_60 + 0x1c) = lVar8;
    *(long *)(local_60 + 0x1e) = lVar8;
    lVar2 = (long)((int)(uVar5 * 6) >> 2) * 0x10 + lVar8;
    *(long *)(local_60 + 0x20) = lVar2;
    if (uVar5 != 0) {
      uVar9 = 0;
      fVar15 = (float)(int)param_1;
      do {
        fVar14 = (float)(int)uVar9;
        iVar11 = (int)uVar9 >> 2;
        uVar6 = uVar9 & 3;
        uVar9 = uVar9 + 1;
        sincosf((fVar14 * -6.2831855) / fVar15,local_3c,&local_40);
        *(float *)(lVar8 + (long)(int)(uVar6 + iVar11 * 0x18) * 4) = local_40;
        iVar12 = iVar11 * 3 + 1;
        *(float *)(lVar8 + (long)(int)(uVar6 + 4 + iVar11 * 0x18) * 4) = local_3c[0];
        sincosf((fVar14 * -12.566371) / fVar15,local_3c,&local_40);
        *(float *)(lVar8 + (long)(int)(uVar6 + iVar12 * 8) * 4) = local_40;
        *(float *)(lVar8 + (long)(int)(uVar6 + 4 + iVar12 * 8) * 4) = local_3c[0];
        sincosf((fVar14 * -18.849556) / fVar15,local_3c,&local_40);
        *(float *)(lVar8 + (long)(int)(uVar6 + 8 + iVar12 * 8) * 4) = local_40;
        *(float *)(lVar8 + (long)(int)(uVar6 + 0xc + iVar12 * 8) * 4) = local_3c[0];
      } while (uVar5 != uVar9);
    }
    if (param_2 == 0) {
      iVar11 = FUN_0010d530(uVar4,local_60 + 2,&DAT_0011a350);
      if (1 < iVar11) {
        local_64 = 0;
        local_58 = 1;
        local_70 = local_60 + 4;
        do {
          uVar5 = *local_70;
          iVar12 = (int)uVar4 / (int)(local_58 * uVar5);
          if (1 < (int)uVar5) {
            local_88 = 1;
            iVar7 = 0;
            local_90 = (float *)(lVar2 + (long)local_64 * 4);
            do {
              iVar7 = iVar7 + local_58;
              iVar10 = 0;
              pfVar13 = local_90;
              if (2 < iVar12) {
                do {
                  iVar10 = iVar10 + 1;
                  sincosf((float)iVar10 * (float)iVar7 * (6.2831855 / (float)(int)uVar4),local_3c,
                          &local_40);
                  *pfVar13 = local_40;
                  pfVar13[1] = local_3c[0];
                  pfVar13 = pfVar13 + 2;
                } while (iVar10 != (iVar12 - 3U >> 1) + 1);
              }
              local_88 = local_88 + 1;
              local_90 = local_90 + iVar12;
            } while (uVar5 != local_88);
            local_64 = (uVar5 - 2) * iVar12 + local_64 + iVar12;
          }
          local_70 = local_70 + 1;
          local_58 = local_58 * uVar5;
        } while (local_60 + (ulong)(iVar11 - 2) + 5 != local_70);
      }
    }
    else {
      FUN_0010de10(uVar4,lVar2,local_60 + 2);
    }
    if ((int)local_60[3] < 1) {
      uVar5 = 1;
    }
    else {
      puVar3 = local_60 + 4;
      uVar5 = 1;
      do {
        uVar5 = uVar5 * *puVar3;
        puVar3 = puVar3 + 1;
      } while (puVar3 != local_60 + (ulong)(local_60[3] - 1) + 5);
    }
    if (uVar5 != uVar4) {
      if (*(long *)(local_60 + 0x1c) != 0) {
        free(*(void **)(*(long *)(local_60 + 0x1c) + -8));
      }
      free(local_60);
      local_60 = (uint *)0x0;
    }
  }
  return local_60;
}

