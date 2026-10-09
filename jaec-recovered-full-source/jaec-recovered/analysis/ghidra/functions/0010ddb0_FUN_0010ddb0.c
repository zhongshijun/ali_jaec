
/* 0010ddb0 FUN_0010ddb0 */

long FUN_0010ddb0(long param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = malloc(param_1 + 0x40);
  if (pvVar1 == (void *)0x0) {
    lVar2 = 0;
  }
  else {
    *(void **)(((ulong)pvVar1 & 0xffffffffffffffc0) + 0x38) = pvVar1;
    lVar2 = ((ulong)pvVar1 & 0xffffffffffffffc0) + 0x40;
  }
  return lVar2;
}

