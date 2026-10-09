
/* 001051b0 FUN_001051b0 */

undefined8 * FUN_001051b0(long *param_1)

{
  undefined8 *__ptr;
  long lVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] == 0x19ae0)) {
    FUN_00103410();
    __ptr = calloc(1,0xbba0);
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = param_1;
      if (DAT_0011e090 != (code *)0x0) {
        lVar1 = (*DAT_0011e090)(param_1);
        __ptr[1] = lVar1;
        if (lVar1 == 0) {
          free(__ptr);
          return (undefined8 *)0x0;
        }
      }
      __ptr[2] = 0x1a0000000d;
      __ptr[3] = 0x3300000026;
      __ptr[4] = 0x4d00000040;
      __ptr[5] = 0x660000005a;
      __ptr[6] = 0x8000000073;
      __ptr[7] = 0x9a0000008d;
      __ptr[8] = 0xb3000000a6;
      __ptr[9] = 0xcd000000c0;
      return __ptr;
    }
  }
  return (undefined8 *)0x0;
}

