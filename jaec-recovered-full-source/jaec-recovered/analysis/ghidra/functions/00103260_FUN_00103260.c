
/* 00103260 FUN_00103260 */

void FUN_00103260(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    FUN_00105280(*(undefined8 *)*param_1);
    free(*(void **)(*param_1 + 8));
    FUN_00104210(*(undefined8 *)param_1[1]);
    *(undefined8 *)param_1[1] = 0;
    *param_1 = (undefined1  [16])0x0;
    return;
  }
  return;
}

