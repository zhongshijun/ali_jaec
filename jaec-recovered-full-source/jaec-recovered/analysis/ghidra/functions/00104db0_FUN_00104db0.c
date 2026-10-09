
/* 00104db0 FUN_00104db0 */

undefined8 * FUN_00104db0(char *param_1)

{
  long *__src;
  long *__ptr;
  int iVar1;
  FILE *__stream;
  long lVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  byte bVar8;
  long *local_a0;
  byte local_98 [32];
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    __stream = fopen(param_1,"rb");
    if (__stream != (FILE *)0x0) {
      iVar1 = fseek(__stream,0,2);
      if (iVar1 == 0) {
        lVar2 = ftell(__stream);
        if (lVar2 == 0x19b00) {
          iVar1 = fseek(__stream,0,0);
          if (iVar1 == 0) {
            local_a0 = (long *)0x0;
            iVar1 = posix_memalign(&local_a0,0x20,0x19b00);
            __ptr = local_a0;
            if ((iVar1 == 0) && (local_a0 != (long *)0x0)) {
              sVar3 = fread(local_a0,1,0x19b00,__stream);
              iVar1 = fclose(__stream);
              if ((((iVar1 == 0) && (sVar3 == 0x19b00)) && (*__ptr == 0x3145414345414a)) &&
                 ((((int)__ptr[1] == 1 && (*(int *)((long)__ptr + 0xc) == 0x40)) &&
                  (__ptr[2] == 0x19ae0)))) {
                local_78 = *__ptr;
                lStack_70 = __ptr[1];
                lVar2 = 0;
                local_68 = __ptr[2];
                lStack_60 = __ptr[3];
                local_58 = __ptr[4];
                lStack_50 = __ptr[5];
                local_48 = 0x80dbdaccee6be7d7;
                do {
                  local_98[lVar2] = (&DAT_0011e040)[lVar2] ^ (&DAT_0011e020)[lVar2];
                  lVar2 = lVar2 + 1;
                } while (lVar2 != 0x20);
                __src = __ptr + 8;
                iVar1 = FUN_00119b10(__src,__ptr + 6,local_98,__ptr + 3,&local_78,0x38,__src,0x19ac0
                                    );
                FUN_00118270(local_98,0x20);
                FUN_00118270(&local_78,0x38);
                if (iVar1 == 0) {
                  memmove(__ptr + 4,__src,0x19ac0);
                  FUN_00118270(__ptr + 0x335c,0x20);
                  __ptr[3] = -0x7f24253311941829;
                  *__ptr = 0x31504c4345414a;
                  *(undefined1 (*) [16])(__ptr + 1) = (undefined1  [16])0x0;
                  *(undefined1 *)(__ptr + 1) = 1;
                  *(undefined1 *)((long)__ptr + 0xc) = 0x20;
                  *(undefined2 *)(__ptr + 2) = 0x9ae0;
                  *(undefined1 *)((long)__ptr + 0x12) = 1;
                  puVar4 = calloc(1,0x18);
                  if (puVar4 == (undefined8 *)0x0) {
                    lVar2 = __tls_get_addr(&PTR_0011df40);
                    pcVar6 = "initialization failed";
                    pcVar7 = (char *)(lVar2 + 0x200);
                    for (lVar5 = 0x16; lVar5 != 0; lVar5 = lVar5 + -1) {
                      *pcVar7 = *pcVar6;
                      pcVar6 = pcVar6 + (ulong)bVar8 * -2 + 1;
                      pcVar7 = pcVar7 + (ulong)bVar8 * -2 + 1;
                    }
                    FUN_00118270(__ptr,0x19b00);
                    free(__ptr);
                  }
                  else {
                    *puVar4 = __ptr;
                    puVar4[1] = 0x19ae0;
                    puVar4[2] = __ptr;
                    lVar2 = __tls_get_addr(&PTR_0011df40);
                    *(undefined1 *)(lVar2 + 0x200) = 0;
                  }
                  goto LAB_00105074;
                }
              }
              lVar2 = __tls_get_addr(&PTR_0011df40);
              puVar4 = (undefined8 *)0x0;
              *(undefined4 *)(lVar2 + 0x210) = 0x656c6961;
              *(undefined2 *)(lVar2 + 0x214) = 100;
              *(undefined8 *)(lVar2 + 0x200) = 0x696c616974696e69;
              *(undefined8 *)(lVar2 + 0x208) = 0x66206e6f6974617a;
              FUN_00118270(__ptr,0x19b00);
              free(__ptr);
              goto LAB_00105074;
            }
          }
        }
      }
      lVar2 = __tls_get_addr(&PTR_0011df40);
      puVar4 = (undefined8 *)0x0;
      *(undefined2 *)(lVar2 + 0x214) = 100;
      *(undefined4 *)(lVar2 + 0x210) = 0x656c6961;
      *(undefined8 *)(lVar2 + 0x200) = 0x696c616974696e69;
      *(undefined8 *)(lVar2 + 0x208) = 0x66206e6f6974617a;
      fclose(__stream);
      goto LAB_00105074;
    }
  }
  lVar2 = __tls_get_addr(&PTR_0011df40);
  puVar4 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 0x210) = 0x656c6961;
  *(undefined2 *)(lVar2 + 0x214) = 100;
  *(undefined8 *)(lVar2 + 0x200) = 0x696c616974696e69;
  *(undefined8 *)(lVar2 + 0x208) = 0x66206e6f6974617a;
LAB_00105074:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

