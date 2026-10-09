
/* 001032b0 FUN_001032b0 */

void FUN_001032b0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    FUN_001052c0(*param_1);
    FUN_00108420(param_1[1]);
    memset(param_1 + 3,0,0x32320);
    *(undefined8 *)((long)param_1 + 0x327ec) = 0;
    *(undefined8 *)((long)param_1 + 0x32974) = 0;
    puVar2 = (undefined8 *)((long)param_1 + 0x327f4U & 0xfffffffffffffff8);
    uVar1 = (ulong)(((int)param_1 - (int)puVar2) + 0x3297cU >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
    }
    *(undefined4 *)(param_1 + 0x64fd) = 0;
    return;
  }
  return;
}

