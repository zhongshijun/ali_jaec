
/* 001195d0 FUN_001195d0 */

void FUN_001195d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  if ((param_1 - (long)param_2) + 0x17U < 0xf) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 4);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0xc);
  }
  else {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x18) = *param_2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  if ((param_1 - (long)param_2) + 0x17U < 0xf) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x1c);
  }
  else {
    uVar1 = param_2[3];
    *(undefined8 *)(param_1 + 0x28) = param_2[2];
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xffffffc0fffffff;
  *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x20) & 0xffffffc0ffffffc;
  return;
}

