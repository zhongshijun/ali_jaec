
/* 00103190 FUN_00103190 */

undefined8 FUN_00103190(undefined1 (*param_1) [16],long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (param_2 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00103410();
      memset(param_1,0,0x32980);
      uVar1 = FUN_001051b0(param_2);
      *(undefined8 *)*param_1 = uVar1;
      uVar1 = FUN_001072d0(param_2);
      *(undefined8 *)(*param_1 + 8) = uVar1;
      lVar2 = FUN_00104080(0x200,0xa0);
      *(long *)param_1[1] = lVar2;
      if (((*(long *)*param_1 == 0) || (*(long *)(*param_1 + 8) == 0)) || (lVar2 == 0)) {
        FUN_00105280();
        free(*(void **)(*param_1 + 8));
        FUN_00104210(*(undefined8 *)param_1[1]);
        uVar1 = 0xffffffff;
        *(undefined8 *)param_1[1] = 0;
        *param_1 = (undefined1  [16])0x0;
      }
      else {
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0xffffffff;
}

