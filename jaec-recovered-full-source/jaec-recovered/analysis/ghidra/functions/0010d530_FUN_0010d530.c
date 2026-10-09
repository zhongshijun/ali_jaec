
/* 0010d530 FUN_0010d530 */

int FUN_0010d530(uint param_1,undefined8 *param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  size_t __n;
  int iVar6;
  int iVar7;
  int *local_48;
  
  iVar6 = *param_3;
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (ulong)param_1;
    iVar7 = 0;
    do {
      local_48 = param_3 + 1;
      iVar4 = (int)uVar5;
      if ((iVar4 != 1) && (uVar1 = (long)iVar4 / (long)iVar6, iVar4 % iVar6 == 0)) {
        lVar3 = (long)(iVar7 + 1);
        do {
          uVar5 = uVar1 & 0xffffffff;
          *(int *)((long)param_2 + lVar3 * 4 + 4) = iVar6;
          iVar7 = (int)lVar3;
          if ((iVar7 != 1) && (iVar6 == 2)) {
            __n = (ulong)(iVar7 - 2) * 4 + 4;
            lVar2 = (ulong)(iVar7 - 2) * -4;
            if (iVar7 + -1 < 1) {
              __n = 4;
              lVar2 = 0;
            }
            memmove((void *)(lVar3 * 4 + 4 + lVar2 + (long)param_2),
                    (void *)(lVar3 * 4 + lVar2 + (long)param_2),__n);
            *(undefined4 *)(param_2 + 1) = 2;
          }
          iVar4 = (int)uVar1;
          if (iVar4 == 1) break;
          lVar3 = lVar3 + 1;
          uVar1 = (long)iVar4 / (long)iVar6;
        } while (iVar4 % iVar6 == 0);
      }
      iVar6 = *local_48;
      param_3 = local_48;
    } while (iVar6 != 0);
  }
  *param_2 = CONCAT44(iVar7,param_1);
  return iVar7;
}

