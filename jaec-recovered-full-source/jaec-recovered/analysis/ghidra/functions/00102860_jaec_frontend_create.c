
/* 00102860 jaec_frontend_create */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * jaec_frontend_create(char *model_path)

{
  long *__ptr;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)__tls_get_addr(&PTR_0011df40);
  *(undefined1 *)puVar2 = 0;
  if ((model_path == (char *)0x0) || (*model_path == '\0')) {
    puVar2 = (undefined8 *)__tls_get_addr(&PTR_0011df40);
    plVar4 = (long *)0x0;
    *(undefined4 *)(puVar2 + 2) = 0x72697571;
    *(undefined2 *)((long)puVar2 + 0x14) = 0x6465;
    *(undefined1 *)((long)puVar2 + 0x16) = 0;
    *puVar2 = 0x61705f6c65646f6d;
    puVar2[1] = 0x6572207369206874;
  }
  else {
    local_38 = (long *)0x0;
    iVar1 = posix_memalign(&local_38,0x20,0x38c80);
    __ptr = local_38;
    if ((iVar1 == 0) && (local_38 != (long *)0x0)) {
      memset(local_38,0,0x38c80);
      lVar3 = FUN_00104db0(model_path);
      *__ptr = lVar3;
      if (lVar3 == 0) {
        plVar4 = (long *)0x0;
        *puVar2 = 0x696c616974696e69;
        puVar2[1] = 0x66206e6f6974617a;
        *(undefined4 *)(puVar2 + 2) = 0x656c6961;
        *(undefined2 *)((long)puVar2 + 0x14) = 100;
        free(__ptr);
      }
      else {
        iVar1 = FUN_00103190(__ptr + 1,lVar3);
        if (iVar1 == 0) {
          lVar3 = FUN_00104080(0x200,0xa0);
          __ptr[0x6531] = lVar3;
          if (lVar3 != 0) {
            FUN_00104b60(lVar3,__ptr + 0x713d);
            plVar4 = __ptr;
            goto LAB_00102949;
          }
        }
        plVar4 = (long *)0x0;
        *puVar2 = 0x696c616974696e69;
        puVar2[1] = 0x66206e6f6974617a;
        *(undefined4 *)(puVar2 + 2) = 0x656c6961;
        *(undefined2 *)((long)puVar2 + 0x14) = 100;
        jaec_frontend_destroy(__ptr);
      }
    }
    else {
      puVar2 = (undefined8 *)__tls_get_addr(&PTR_0011df40);
      plVar4 = (long *)0x0;
      *(undefined4 *)(puVar2 + 2) = 0x656c6961;
      *(undefined2 *)((long)puVar2 + 0x14) = 100;
      *puVar2 = 0x696c616974696e69;
      puVar2[1] = 0x66206e6f6974617a;
    }
  }
LAB_00102949:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

