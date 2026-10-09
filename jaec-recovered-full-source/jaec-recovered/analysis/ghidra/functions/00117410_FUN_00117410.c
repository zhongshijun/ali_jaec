
/* 00117410 FUN_00117410 */

ulong FUN_00117410(long param_1,uint *param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  param_3 = param_3 + *(int *)(param_1 + 0x48);
  uVar11 = (ulong)*(uint *)(param_1 + 0x18);
  uVar13 = *(uint *)(param_1 + 0x1c);
  uVar8 = (ulong)uVar13;
  uVar4 = (*(uint *)(param_1 + 0x24) >> 2) + *(int *)(param_1 + 0x24);
  uVar3 = (ulong)uVar4;
  uVar2 = (*(uint *)(param_1 + 0x20) >> 2) + *(int *)(param_1 + 0x20);
  lVar5 = (ulong)*(uint *)(param_1 + 0x38) + (ulong)*param_2;
  uVar13 = (uVar13 >> 2) + uVar13;
  lVar10 = (ulong)*(uint *)(param_1 + 0x3c) + (ulong)param_2[1];
  lVar9 = (ulong)*(uint *)(param_1 + 0x44) + (ulong)param_2[3];
  lVar7 = (ulong)*(uint *)(param_1 + 0x40) + (ulong)param_2[2];
  uVar1 = lVar5 * uVar11 + (ulong)uVar13 * lVar9 + lVar10 * uVar3 + lVar7 * (ulong)uVar2 +
          (ulong)((*(uint *)(param_1 + 0x18) >> 2) * param_3 * 5);
  uVar6 = (ulong)uVar2 * lVar9 + lVar10 * uVar11 + lVar5 * uVar8 + lVar7 * uVar3 +
          (ulong)(uVar13 * param_3);
  uVar3 = (ulong)(uVar2 * param_3) +
          uVar3 * lVar9 + lVar7 * uVar11 + lVar10 * uVar8 + lVar5 * (ulong)*(uint *)(param_1 + 0x20)
  ;
  uVar8 = lVar7 * uVar8 +
          lVar9 * uVar11 +
          lVar10 * (ulong)*(uint *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x24) * lVar5 +
          (ulong)(uVar4 * param_3);
  uVar13 = (*(uint *)(param_1 + 0x18) & 3) * param_3 + (int)(uVar8 >> 0x20);
  uVar11 = (ulong)((uVar13 >> 2) + (uVar13 & 0xfffffffc)) + (uVar1 & 0xffffffff);
  uVar12 = (uVar6 & 0xffffffff) + (uVar1 >> 0x20) + (uVar11 >> 0x20);
  uVar1 = (uVar3 & 0xffffffff) + (uVar6 >> 0x20) + (uVar12 >> 0x20);
  lVar5 = (uVar3 >> 0x20) + (uVar8 & 0xffffffff) + (uVar1 >> 0x20);
  *(uint *)(param_1 + 0x48) = (uVar13 & 3) + (int)((ulong)lVar5 >> 0x20);
  *(int *)(param_1 + 0x38) = (int)uVar11;
  *(int *)(param_1 + 0x3c) = (int)uVar12;
  *(int *)(param_1 + 0x40) = (int)uVar1;
  *(int *)(param_1 + 0x44) = (int)lVar5;
  return uVar1;
}

