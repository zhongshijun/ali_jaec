
/* 00108420 FUN_00108420 */

void FUN_00108420(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x8ba0) = 0;
    iVar2 = (int)param_1;
    *(undefined8 *)(param_1 + 0xab98) = 0;
    puVar4 = (undefined8 *)(param_1 + 0x8ba8U & 0xfffffffffffffff8);
    puVar3 = (undefined8 *)(param_1 + 0xbc28U & 0xfffffffffffffff8);
    uVar1 = (ulong)((iVar2 - (int)puVar4) + 0xaba0U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined8 *)(param_1 + 0xaba0) = 0;
    puVar4 = (undefined8 *)(param_1 + 0xaba8U & 0xfffffffffffffff8);
    *(undefined8 *)(param_1 + 0xbc18) = 0;
    uVar1 = (ulong)((iVar2 - (int)puVar4) + 0xbc20U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined8 *)(param_1 + 0xbc20) = 0;
    *(undefined8 *)(param_1 + 0xcc98) = 0;
    puVar4 = (undefined8 *)(param_1 + 0xdd28U & 0xfffffffffffffff8);
    uVar1 = (ulong)((iVar2 - (int)puVar3) + 0xcca0U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined8 *)(param_1 + 0xcca0) = 0;
    *(undefined8 *)(param_1 + 0xdd18) = 0;
    puVar3 = (undefined8 *)(param_1 + 0xcca8U & 0xfffffffffffffff8);
    uVar1 = (ulong)((iVar2 - (int)puVar3) + 0xdd20U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined8 *)(param_1 + 0xdd20) = 0;
    *(undefined8 *)(param_1 + 0xed98) = 0;
    uVar1 = (ulong)((iVar2 - (int)puVar4) + 0xeda0U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x185c0) = 0;
  }
  return;
}

