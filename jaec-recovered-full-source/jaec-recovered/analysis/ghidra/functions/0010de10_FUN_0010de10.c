
/* 0010de10 FUN_0010de10 */

void FUN_0010de10(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  int local_90;
  int local_8c;
  int local_88;
  int *local_58;
  int local_48;
  float local_40;
  float local_3c [3];
  
  iVar6 = FUN_0010d530(param_1,param_3,&DAT_0011a370);
  if (0 < iVar6) {
    local_58 = (int *)(param_3 + 8);
    local_48 = 1;
    local_88 = 1;
    do {
      iVar4 = *local_58;
      iVar5 = ((int)param_1 / (local_48 * iVar4)) * 2;
      if (1 < iVar4) {
        local_90 = 0;
        uVar7 = iVar5 - 2U >> 1;
        local_8c = 1;
        uVar1 = uVar7 + 1;
        do {
          lVar8 = (long)local_88;
          local_90 = local_90 + local_48;
          lVar9 = lVar8 * 4;
          puVar3 = (undefined8 *)(param_2 + -4 + lVar9);
          puVar2 = (undefined4 *)(param_2 + lVar9);
          *puVar3 = 0x3f800000;
          puVar10 = puVar2;
          puVar11 = puVar3;
          if (3 < iVar5 + 2) {
            uVar12 = 0;
            do {
              uVar12 = uVar12 + 1;
              sincosf((float)(int)uVar12 * (float)local_90 * (6.2831855 / (float)(int)param_1),
                      local_3c,&local_40);
              puVar10[1] = local_40;
              puVar10[2] = local_3c[0];
              puVar10 = puVar10 + 2;
            } while (uVar12 != uVar1);
            local_88 = local_88 + 2 + uVar7 * 2;
            lVar8 = (lVar8 + (ulong)uVar1 * 2) * 4;
            puVar10 = (undefined4 *)(lVar8 + param_2);
            puVar11 = (undefined8 *)(param_2 + -4 + lVar8);
          }
          if (5 < iVar4) {
            *(undefined4 *)puVar3 = *(undefined4 *)puVar11;
            *puVar2 = *puVar10;
          }
          local_8c = local_8c + 1;
        } while (iVar4 != local_8c);
      }
      local_58 = local_58 + 1;
      local_48 = local_48 * iVar4;
    } while ((int *)(param_3 + 0xc + (ulong)(iVar6 - 1) * 4) != local_58);
  }
  return;
}

