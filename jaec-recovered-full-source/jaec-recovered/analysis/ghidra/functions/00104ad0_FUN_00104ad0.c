
/* 00104ad0 FUN_00104ad0 */

void FUN_00104ad0(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  iVar1 = *piVar2;
  puVar3 = *(undefined4 **)(piVar2 + 4);
  *puVar3 = *param_2;
  puVar3[1] = param_2[(long)(iVar1 / 2) * 2];
  memcpy(puVar3 + 2,param_2 + 2,(long)(iVar1 / 2) * 8 - 8);
  FUN_0010f2a0(*(undefined8 *)(piVar2 + 2),*(undefined8 *)(piVar2 + 4),param_3,0,1);
  FUN_001047f0(param_1,param_3,param_4,param_5);
  return;
}

