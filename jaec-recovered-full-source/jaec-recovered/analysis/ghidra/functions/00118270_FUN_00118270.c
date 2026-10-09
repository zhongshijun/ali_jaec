
/* 00118270 FUN_00118270 */

void FUN_00118270(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + param_2;
    do {
      *param_1 = 0;
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
  }
  return;
}

