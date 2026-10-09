
/* 00119680 FUN_00119680 */

void FUN_00119680(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (lVar2 != 0x10) {
      uVar3 = 0;
      do {
        param_1[uVar3 + lVar2] = 0;
        lVar2 = *(long *)(param_1 + 0x10);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x10U - lVar2);
    }
    param_1[lVar2] = 1;
    FUN_00117410(param_1,param_1,0);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x38) +
          ((ulong)*(uint *)(param_1 + 0x48) +
           ((ulong)*(uint *)(param_1 + 0x44) +
            ((ulong)*(uint *)(param_1 + 0x40) +
             ((ulong)*(uint *)(param_1 + 0x3c) + ((ulong)*(uint *)(param_1 + 0x38) + 5 >> 0x20) >>
             0x20) >> 0x20) >> 0x20) >> 2) * 5;
  *param_2 = (int)uVar3;
  uVar3 = (ulong)*(uint *)(param_1 + 0x2c) + (ulong)*(uint *)(param_1 + 0x3c) + (uVar3 >> 0x20);
  param_2[1] = (int)uVar3;
  lVar2 = (ulong)*(uint *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x40) + (uVar3 >> 0x20);
  param_2[2] = (int)lVar2;
  puVar1 = param_1 + 0x50;
  param_2[3] = (int)((ulong)lVar2 >> 0x20) + *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x34);
  do {
    *param_1 = 0;
    param_1 = param_1 + 1;
  } while (param_1 != puVar1);
  return;
}

