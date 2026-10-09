
/* 00104080 FUN_00104080 */

undefined8 * FUN_00104080(int param_1,undefined4 param_2)

{
  size_t __size;
  uint uVar1;
  undefined8 *__ptr;
  void *pvVar2;
  undefined8 *__ptr_00;
  long lVar3;
  float fVar4;
  
  __ptr = calloc(1,0x20);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = CONCAT44(param_2,param_1);
    __size = (long)param_1 * 4;
    _INIT_0();
    uVar1 = DAT_0011e14c >> 0xe & 1;
    if ((DAT_0011e14c & 0x400) == 0) {
      uVar1 = 0;
    }
    *(uint *)(__ptr + 1) = uVar1;
    pvVar2 = malloc(__size);
    __ptr[2] = pvVar2;
    if (pvVar2 != (void *)0x0) {
      if (0 < param_1) {
        lVar3 = 0;
        do {
          fVar4 = cosf(((float)(int)lVar3 * 6.2831855) / (float)param_1);
          *(float *)((long)pvVar2 + lVar3 * 4) = SQRT((1.0 - fVar4) * 0.5);
          lVar3 = lVar3 + 1;
        } while (lVar3 != param_1);
      }
      __ptr_00 = calloc(1,0x18);
      if (__ptr_00 != (undefined8 *)0x0) {
        *__ptr_00 = CONCAT44(param_1 / 2 + 1,param_1);
        lVar3 = FUN_0010e250(param_1,0);
        __ptr_00[1] = lVar3;
        if (lVar3 != 0) {
          lVar3 = FUN_0010ddb0(__size);
          __ptr_00[2] = lVar3;
          if (lVar3 != 0) {
            __ptr[3] = __ptr_00;
            return __ptr;
          }
          FUN_0010e6b0(__ptr_00[1]);
        }
        free(__ptr_00);
      }
      free((void *)__ptr[2]);
    }
    free(__ptr);
  }
  return (undefined8 *)0x0;
}

