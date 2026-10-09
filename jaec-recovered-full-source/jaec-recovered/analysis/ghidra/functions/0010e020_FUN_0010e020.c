
/* 0010e020 FUN_0010e020 */

long FUN_0010e020(int param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long local_60;
  
  iVar2 = *(int *)(param_6 + 4);
  lVar5 = param_3;
  if (param_2 != param_4) {
    lVar5 = param_4;
  }
  local_60 = param_2;
  if (0 < iVar2) {
    iVar9 = 0;
    lVar6 = 2;
    iVar7 = 1;
    do {
      while( true ) {
        iVar3 = *(int *)(param_6 + lVar6 * 4);
        iVar8 = iVar3 * iVar7;
        iVar4 = (param_1 / iVar8) * 2;
        if (iVar3 == 4) {
          auVar13._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar13._0_4_ = (float)param_7;
          FUN_0010ad40(auVar13._0_8_,iVar4,iVar7,param_2,lVar5,param_5 + (long)iVar9 * 4,
                       param_5 + (long)(iVar4 + iVar9) * 4,
                       param_5 + (long)(iVar4 + iVar9 + iVar4) * 4);
        }
        else if (iVar3 < 5) {
          if (iVar3 == 2) {
            auVar11._4_12_ = SUB1612((undefined1  [16])0x0,4);
            auVar11._0_4_ = (float)param_7;
            FUN_0010aa10(auVar11._0_8_,iVar4,iVar7,param_2,lVar5,param_5 + (long)iVar9 * 4);
          }
          else if (iVar3 == 3) {
            auVar10._4_12_ = SUB1612((undefined1  [16])0x0,4);
            auVar10._0_4_ = (float)param_7;
            FUN_0010ab70(auVar10._0_8_,iVar4,iVar7,param_2,lVar5,param_5 + (long)iVar9 * 4,
                         param_5 + (long)(iVar4 + iVar9) * 4);
          }
        }
        else if (iVar3 == 5) {
          iVar1 = iVar4 + iVar4 + iVar9;
          auVar12._4_12_ = SUB1612((undefined1  [16])0x0,4);
          auVar12._0_4_ = (float)param_7;
          FUN_0010b0d0(auVar12._0_8_,iVar4,iVar7,param_2,lVar5,param_5 + (long)iVar9 * 4,
                       param_5 + (long)(iVar4 + iVar9) * 4,param_5 + (long)iVar1 * 4,
                       param_5 + (long)(iVar4 + iVar1) * 4);
        }
        iVar1 = (int)lVar6;
        iVar9 = iVar9 + (iVar3 + -1) * iVar4;
        iVar7 = iVar8;
        if (param_4 == lVar5) break;
        lVar6 = lVar6 + 1;
        param_2 = param_3;
        lVar5 = param_4;
        if (iVar2 < iVar1) {
          return param_3;
        }
      }
      lVar6 = lVar6 + 1;
      param_2 = param_4;
      lVar5 = param_3;
      local_60 = param_4;
    } while (iVar1 <= iVar2);
  }
  return local_60;
}

