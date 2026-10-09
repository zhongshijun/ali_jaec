
/* 001175e0 FUN_001175e0 */

long FUN_001175e0(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 int *param_5,ulong param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  byte local_138;
  byte local_120;
  byte local_11c;
  byte local_118;
  byte local_114;
  byte local_108;
  byte local_e0;
  byte local_dc;
  byte local_d8;
  byte local_d4;
  int local_c8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [2];
  long local_40;
  
  iVar21 = (int)(param_6 >> 0x20);
  iVar1 = *param_5;
  iVar2 = param_5[1];
  uStack_90 = *(undefined8 *)param_5;
  local_b8 = *param_4;
  uStack_b0 = param_4[1];
  local_a8 = param_4[2];
  uStack_a0 = param_4[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = local_c8;
  local_c8[0] = 0x61707865;
  local_c8[1] = 0x3320646e;
  local_c8[2] = 0x79622d32;
  local_c8[3] = 0x6b206574;
  local_98 = param_6;
  FUN_00117200(&local_88,piVar5);
  uVar18 = (int)uStack_a0 + local_60;
  uVar7 = local_a8._4_4_ + local_64;
  uVar19 = local_58 + (int)param_6;
  uVar3 = (int)uStack_b0 + local_70;
  uVar20 = (int)local_a8 + local_68;
  uVar8 = uStack_a0._4_4_ + local_5c;
  uVar14 = local_c8[0] + local_88;
  uVar16 = local_c8[1] + local_84;
  uVar13 = local_80 + local_c8[2];
  uVar15 = local_7c + local_c8[3];
  uVar6 = local_78 + (int)local_b8;
  uVar12 = local_b8._4_4_ + local_74;
  uVar11 = uStack_b0._4_4_ + local_6c;
  uVar10 = iVar2 + local_4c;
  uVar17 = iVar1 + local_50;
  uVar9 = local_54 + iVar21;
  local_108 = (byte)(uVar14 >> 8);
  local_d4 = (byte)(uVar15 >> 8);
  local_d8 = (byte)(uVar13 >> 0x18);
  local_dc = (byte)(uVar13 >> 0x10);
  local_e0 = (byte)(uVar13 >> 8);
  *param_1 = (((((((ulong)(uVar16 >> 0x18) << 8 | (ulong)(uVar16 >> 0x10 & 0xff)) << 8 |
                 (ulong)(uVar16 >> 8 & 0xff)) << 8 | (ulong)(uVar16 & 0xff)) << 8 |
               (ulong)(uVar14 >> 0x18)) << 8 | (ulong)(uVar14 >> 0x10 & 0xff)) << 8 |
             (ulong)local_108) << 8 | (ulong)(uVar14 & 0xff);
  param_1[1] = (((((((ulong)(uVar15 >> 0x18) << 8 | (ulong)(uVar15 >> 0x10 & 0xff)) << 8 |
                   (ulong)local_d4) << 8 | (ulong)(uVar15 & 0xff)) << 8 | (ulong)local_d8) << 8 |
                (ulong)local_dc) << 8 | (ulong)local_e0) << 8 | (ulong)(uVar13 & 0xff);
  local_e0 = (byte)(uVar3 >> 0x10);
  local_138 = (byte)uVar3;
  param_1[2] = (((((((ulong)(uVar12 >> 0x18) << 8 | (ulong)(uVar12 >> 0x10 & 0xff)) << 8 |
                   (ulong)(uVar12 >> 8 & 0xff)) << 8 | (ulong)(uVar12 & 0xff)) << 8 |
                 (ulong)(uVar6 >> 0x18)) << 8 | (ulong)(uVar6 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar6 >> 8 & 0xff)) << 8 | (ulong)(uVar6 & 0xff);
  param_1[3] = (((((((ulong)(uVar11 >> 0x18) << 8 | (ulong)(uVar11 >> 0x10 & 0xff)) << 8 |
                   (ulong)(uVar11 >> 8 & 0xff)) << 8 | (ulong)(uVar11 & 0xff)) << 8 |
                 (ulong)(uVar3 >> 0x18)) << 8 | (ulong)local_e0) << 8 | (ulong)(uVar3 >> 8) & 0xff)
               << 8 | (ulong)local_138;
  local_120 = (byte)uVar7;
  local_11c = (byte)uVar18;
  param_1[4] = (((((((ulong)(uVar7 >> 0x18) << 8 | (ulong)(uVar7 >> 0x10 & 0xff)) << 8 |
                   (ulong)(uVar7 >> 8 & 0xff)) << 8 | (ulong)local_120) << 8 |
                 (ulong)(uVar20 >> 0x18)) << 8 | (ulong)(uVar20 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar20 >> 8 & 0xff)) << 8 | (ulong)(uVar20 & 0xff);
  param_1[5] = (((((((ulong)(uVar8 >> 0x18) << 8 | (ulong)(uVar8 >> 0x10 & 0xff)) << 8 |
                   (ulong)(uVar8 >> 8 & 0xff)) << 8 | (ulong)(uVar8 & 0xff)) << 8 |
                 (ulong)(uVar18 >> 0x18)) << 8 | (ulong)(uVar18 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar18 >> 8 & 0xff)) << 8 | (ulong)local_11c;
  local_118 = (byte)uVar9;
  local_114 = (byte)uVar17;
  uVar3 = (int)param_6 + 1;
  uVar22 = param_6 >> 0x20;
  if (uVar3 == 0) {
    uVar22 = (ulong)(iVar21 + 1);
  }
  param_1[6] = (((((((ulong)(uVar9 >> 0x18) << 8 | (ulong)(uVar9 >> 0x10 & 0xff)) << 8 |
                   (ulong)(uVar9 >> 8 & 0xff)) << 8 | (ulong)local_118) << 8 |
                 (ulong)(uVar19 >> 0x18)) << 8 | (ulong)(uVar19 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar19 >> 8 & 0xff)) << 8 | (ulong)(uVar19 & 0xff);
  param_1[7] = (((((((ulong)(uVar10 >> 0x18) << 8 | (ulong)(uVar10 >> 0x10 & 0xff)) << 8 |
                   (ulong)(uVar10 >> 8 & 0xff)) << 8 | (ulong)(uVar10 & 0xff)) << 8 |
                 (ulong)(uVar17 >> 0x18)) << 8 | (ulong)(uVar17 >> 0x10 & 0xff)) << 8 |
               (ulong)(uVar17 >> 8 & 0xff)) << 8 | (ulong)local_114;
  piVar4 = &local_88;
  do {
    *(undefined1 *)piVar4 = 0;
    piVar4 = (int *)((long)piVar4 + 1);
  } while (piVar4 != local_48);
  do {
    *(undefined1 *)piVar5 = 0;
    piVar5 = (int *)((long)piVar5 + 1);
  } while (piVar5 != &local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (uVar22 << 0x20) + (ulong)uVar3;
}

