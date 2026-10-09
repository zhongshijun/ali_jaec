
/* 00119970 FUN_00119970 */

int FUN_00119970(long *param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 local_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 local_88 [32];
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  undefined1 local_48 [8];
  long local_40;
  
  puVar2 = local_88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001175e0(puVar2,0,0x40,param_1 + 1,param_1 + 5,*param_1);
  FUN_00119780(&local_98,puVar2,param_4,param_5,param_6,param_7);
  uVar1 = CONCAT17(uStack_91,
                   CONCAT16(uStack_92,
                            CONCAT15(uStack_93,
                                     CONCAT14(uStack_94,
                                              CONCAT13(uStack_95,
                                                       CONCAT12(uStack_96,
                                                                CONCAT11(uStack_97,local_98))))))) ^
          *param_3 |
          CONCAT17(uStack_89,
                   CONCAT16(uStack_8a,
                            CONCAT15(uStack_8b,
                                     CONCAT14(uStack_8c,
                                              CONCAT13(uStack_8d,
                                                       CONCAT12(uStack_8e,
                                                                CONCAT11(uStack_8f,local_90))))))) ^
          param_3[1];
  iVar3 = -1 - (int)((long)((uVar1 >> 0x20 | uVar1 & 0xffffffff) - 1) >> 0x3f);
  if (iVar3 == 0) {
    FUN_00118560(param_2,param_6,param_7,param_1 + 1,param_1 + 5,*param_1 + 1);
    param_1[1] = local_68;
    param_1[2] = lStack_60;
    param_1[3] = local_58;
    param_1[4] = lStack_50;
  }
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (local_48 != puVar2);
  local_98 = 0;
  uStack_97 = 0;
  uStack_96 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  uStack_93 = 0;
  uStack_92 = 0;
  uStack_91 = 0;
  local_90 = 0;
  uStack_8f = 0;
  uStack_8e = 0;
  uStack_8d = 0;
  uStack_8c = 0;
  uStack_8b = 0;
  uStack_8a = 0;
  uStack_89 = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

