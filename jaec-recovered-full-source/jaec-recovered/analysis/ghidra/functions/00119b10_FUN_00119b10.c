
/* 00119b10 FUN_00119b10 */

void FUN_00119b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  puVar1 = &local_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00118290(local_70,param_3,param_4);
  local_50 = *(undefined8 *)(param_4 + 0x10);
  local_78 = 0;
  FUN_00119970(puVar1,param_1,param_2,param_5,param_6,param_7);
  do {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined8 *)((long)puVar1 + 1);
  } while (&local_48 != puVar1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0x119b63,param_8);
}

