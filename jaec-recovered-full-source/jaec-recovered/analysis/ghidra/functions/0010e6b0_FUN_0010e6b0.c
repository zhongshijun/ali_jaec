
/* 0010e6b0 FUN_0010e6b0 */

void FUN_0010e6b0(void *param_1)

{
  if (*(long *)((long)param_1 + 0x70) != 0) {
    free(*(void **)(*(long *)((long)param_1 + 0x70) + -8));
  }
  free(param_1);
  return;
}

