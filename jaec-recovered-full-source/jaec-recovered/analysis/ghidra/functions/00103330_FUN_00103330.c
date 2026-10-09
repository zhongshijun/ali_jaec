
/* 00103330 FUN_00103330 */

void FUN_00103330(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  FUN_001054a0(*param_1,param_2,param_3,(long)param_1 + 0x327ec);
  puVar5 = param_1 + 3 + (long)*(int *)(param_1 + 0x64fd) * 0x101;
  *puVar5 = *param_2;
  puVar5[0x100] = param_2[0x100];
  lVar1 = (long)puVar5 - (long)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)param_2 - lVar1);
  puVar5 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)((int)lVar1 + 0x808U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x64fd) + 1;
  if (*(int *)(param_1 + 0x64fd) == 99) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x64fd) = iVar3;
  (*DAT_0011e080)(param_1 + 3,iVar3,(long)param_1 + 0x327ec,param_4,param_1 + 0x6467,
                  param_1 + 0x64cb);
  FUN_00108540(param_1[1],param_4,param_3,param_5);
  return;
}

