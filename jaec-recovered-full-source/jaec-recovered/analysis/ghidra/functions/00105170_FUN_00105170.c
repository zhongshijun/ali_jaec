
/* 00105170 FUN_00105170 */

void FUN_00105170(void *param_1)

{
  void *__ptr;
  
  if (param_1 != (void *)0x0) {
    __ptr = (void *)0x0;
    if (*(long *)((long)param_1 + 0x10) != 0) {
      FUN_00118270(*(long *)((long)param_1 + 0x10),0x19ae0);
      __ptr = *(void **)((long)param_1 + 0x10);
    }
    free(__ptr);
    free(param_1);
    return;
  }
  return;
}

