
/* 00105280 FUN_00105280 */

void FUN_00105280(void *param_1)

{
  if (((param_1 != (void *)0x0) && (*(long *)((long)param_1 + 8) != 0)) &&
     (DAT_0011e098 != (code *)0x0)) {
    (*DAT_0011e098)();
  }
  free(param_1);
  return;
}

