
/* 00118290 FUN_00118290 */

void FUN_00118290(ulong *param_1,undefined8 *param_2,ulong *param_3)

{
  uint *puVar1;
  long in_FS_OFFSET;
  uint local_88 [2];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48 [2];
  long local_40;
  
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  puVar1 = local_88;
  local_88[0] = 0x61707865;
  local_88[1] = 0x3320646e;
  uStack_80 = 0x6b20657479622d32;
  FUN_00117200(puVar1,puVar1);
  *param_1 = (((((((ulong)(local_88[1] >> 0x18) << 8 | (ulong)(local_88[1] >> 0x10 & 0xff)) << 8 |
                 (ulong)(local_88[1] >> 8 & 0xff)) << 8 | (ulong)(local_88[1] & 0xff)) << 8 |
               (ulong)(local_88[0] >> 0x18)) << 8 | (ulong)(local_88[0] >> 0x10 & 0xff)) << 8 |
             (ulong)(local_88[0] >> 8 & 0xff)) << 8 | (ulong)(local_88[0] & 0xff);
  param_1[1] = (((((((ulong)(uStack_80._4_4_ >> 0x18) << 8 | (ulong)(uStack_80._4_4_ >> 0x10 & 0xff)
                    ) << 8 | (ulong)(uStack_80._4_4_ >> 8 & 0xff)) << 8 |
                  (ulong)(uStack_80._4_4_ & 0xff)) << 8 | uStack_80 >> 0x18 & 0xff) << 8 |
                uStack_80 >> 0x10 & 0xff) << 8 | uStack_80 >> 8 & 0xff) << 8 |
               (ulong)((uint)uStack_80 & 0xff);
  param_1[2] = (((((((ulong)(local_58._4_4_ >> 0x18) << 8 | (ulong)(local_58._4_4_ >> 0x10 & 0xff))
                    << 8 | (ulong)(local_58._4_4_ >> 8 & 0xff)) << 8 | local_58 >> 0x20 & 0xff) << 8
                 | (ulong)((uint)local_58 >> 0x18)) << 8 | (ulong)((uint)local_58 >> 0x10 & 0xff))
                << 8 | (ulong)((uint)local_58 >> 8 & 0xff)) << 8 | local_58 & 0xff;
  param_1[3] = (((((((ulong)(uStack_50._4_4_ >> 0x18) << 8 | (ulong)(uStack_50._4_4_ >> 0x10 & 0xff)
                    ) << 8 | (ulong)(uStack_50._4_4_ >> 8 & 0xff)) << 8 | uStack_50 >> 0x20 & 0xff)
                  << 8 | (ulong)((uint)uStack_50 >> 0x18)) << 8 |
                (ulong)((uint)uStack_50 >> 0x10 & 0xff)) << 8 | (ulong)((uint)uStack_50 >> 8 & 0xff)
               ) << 8 | uStack_50 & 0xff;
  do {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (uint *)((long)puVar1 + 1);
  } while (puVar1 != local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

