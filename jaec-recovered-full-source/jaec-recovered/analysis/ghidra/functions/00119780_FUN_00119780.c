
/* 00119780 FUN_00119780 */

void FUN_00119780(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,ulong param_6)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined1 local_a8 [80];
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (((((((param_4 >> 0x38) << 8 | param_4 >> 0x30 & 0xff) << 8 | param_4 >> 0x28 & 0xff)
                 << 8 | param_4 >> 0x20 & 0xff) << 8 | param_4 >> 0x18 & 0xff) << 8 |
              param_4 >> 0x10 & 0xff) << 8 | param_4 >> 8 & 0xff) << 8 | param_4 & 0xff;
  uStack_50 = (((((((param_6 >> 0x38) << 8 | param_6 >> 0x30 & 0xff) << 8 | param_6 >> 0x28 & 0xff)
                  << 8 | param_6 >> 0x20 & 0xff) << 8 | param_6 >> 0x18 & 0xff) << 8 |
               param_6 >> 0x10 & 0xff) << 8 | param_6 >> 8 & 0xff) << 8 | param_6 & 0xff;
  FUN_001195d0(local_a8);
  if (param_4 != 0) {
    FUN_00117c90();
    if ((-(int)param_4 & 0xfU) != 0) {
      FUN_00117c90(local_a8,&DAT_0011aa20);
    }
  }
  if (param_6 != 0) {
    FUN_00117c90(local_a8,param_5,param_6);
    uVar1 = -(int)param_6 & 0xf;
    if (uVar1 != 0) {
      FUN_00117c90(local_a8,&DAT_0011aa20,uVar1);
    }
  }
  FUN_00117c90(local_a8,&local_58,0x10);
  FUN_00119680(local_a8,param_1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

