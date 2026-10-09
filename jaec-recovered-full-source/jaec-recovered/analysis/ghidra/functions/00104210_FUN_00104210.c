
/* 00104210 FUN_00104210 */

void FUN_00104210(void *param_1)

{
  void *__ptr;
  
  if (param_1 != (void *)0x0) {
    __ptr = *(void **)((long)param_1 + 0x18);
    if (__ptr != (void *)0x0) {
      if (*(long *)((long)__ptr + 8) != 0) {
        FUN_0010e6b0();
      }
      if (*(long *)((long)__ptr + 0x10) != 0) {
        FUN_0010ddf0();
      }
      free(__ptr);
    }
    free(*(void **)((long)param_1 + 0x10));
    free(param_1);
    return;
  }
  return;
}

