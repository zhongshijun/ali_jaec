
/* 001052c0 FUN_001052c0 */

void FUN_001052c0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 != 0) {
    *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
    iVar3 = (int)param_1;
    *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
    puVar2 = (undefined8 *)(param_1 + 0x1a58U & 0xfffffffffffffff8);
    *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
    puVar4 = (undefined8 *)(param_1 + 0x3358U & 0xfffffffffffffff8);
    *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x90) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xa0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xb0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xc0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xd0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xf0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x100) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x110) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x120) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x130) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x140) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x1a48) = 0;
    puVar5 = (undefined8 *)(param_1 + 0x158U & 0xfffffffffffffff8);
    uVar1 = (ulong)((iVar3 - (int)puVar5) + 0x1a50U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined8 *)(param_1 + 0x1a50) = 0;
    *(undefined8 *)(param_1 + 0x3348) = 0;
    puVar5 = (undefined8 *)(param_1 + 0x4c58U & 0xfffffffffffffff8);
    uVar1 = (ulong)((iVar3 - (int)puVar2) + 0x3350U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined8 *)(param_1 + 0x3350) = 0;
    *(undefined8 *)(param_1 + 0x4c48) = 0;
    uVar1 = (ulong)((iVar3 - (int)puVar4) + 0x4c50U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined8 *)(param_1 + 0x4c50) = 0;
    *(undefined8 *)(param_1 + 0x4dd8) = 0;
    uVar1 = (ulong)((iVar3 - (int)puVar5) + 0x4de0U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 (*) [16])(param_1 + 0x4de0) = (undefined1  [16])0x0;
    puVar4 = (undefined8 *)(param_1 + 0x4e40U & 0xfffffffffffffff8);
    *(undefined1 (*) [16])(param_1 + 0x4df0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x4e00) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x4e10) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1 + 0x4e38) = 0;
    *(undefined8 *)(param_1 + 0x6830) = 0;
    uVar1 = (ulong)((iVar3 - (int)puVar4) + 0x6838U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    memset((void *)(param_1 + 0x6838),0,0x2700);
    memset((void *)(param_1 + 0x8f38),0,0x2700);
    *(undefined8 *)(param_1 + 20000) = 0;
    *(undefined8 *)(param_1 + 0x4e28) = 0;
    *(undefined8 *)(param_1 + 0x4e30) = 0xffffffff;
    return;
  }
  return;
}

