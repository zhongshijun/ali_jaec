
/* 00108540 FUN_00108540 */

void FUN_00108540(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  if ((((param_1 != (undefined8 *)0x0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    iVar2 = *(int *)(param_1 + 0x30b8);
    plVar3 = (long *)*param_1;
    uVar12 = CONCAT44(iVar2 + 2,iVar2 + 1U) & 0x300000003;
    *(int *)(param_1 + 0x2d2c) = (int)uVar12 * 0x108;
    *(int *)((long)param_1 + 0x16964) = (int)(uVar12 >> 0x20) * 0x108;
    *(uint *)(param_1 + 0x2d2d) = ((iVar2 + 3U & 3) * 0x20 + (iVar2 + 3U & 3)) * 8;
    *(int *)((long)param_1 + 0x1696c) = iVar2 * 0x108;
    (*DAT_0011e108)(param_2,param_3,param_1 + 0x1994,param_1 + 0x1ba4,param_1 + 0x1574,
                    param_1 + 0x1784,param_1 + 0x2d2c,param_1 + 0x1db4,param_1 + 0x1e38,
                    param_1 + 0x1ebc,param_1 + 8000);
    puVar10 = param_1 + 0x2244;
    (*DAT_0011e0e0)(*plVar3 + 0xe0,*plVar3 + 0xc0,param_1 + 8000,6,6,0x101,0x40,5,4,puVar10);
    puVar11 = puVar10;
    if (DAT_0011e0dc == 0) {
      puVar11 = param_1 + 0x2304;
      if (DAT_0011e0e8 == (code *)0x0) {
        puVar7 = puVar11;
        do {
          puVar5 = puVar7 + 3;
          *(undefined4 *)puVar7 = *(undefined4 *)puVar10;
          *(undefined4 *)((long)puVar7 + 4) = *(undefined4 *)(puVar10 + 0x20);
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar10 + 0x40);
          *(undefined4 *)((long)puVar7 + 0xc) = *(undefined4 *)(puVar10 + 0x60);
          *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar10 + 0x80);
          *(undefined4 *)((long)puVar7 + 0x14) = *(undefined4 *)(puVar10 + 0xa0);
          puVar7 = puVar5;
          puVar10 = (undefined8 *)((long)puVar10 + 4);
        } while (puVar5 != param_1 + 0x23c4);
      }
      else {
        (*DAT_0011e0e8)(puVar10);
      }
    }
    puVar10 = param_1 + 0x1174;
    lVar4 = *plVar3;
    (*DAT_0011e0d0)(param_1[1],lVar4 + 0x12960,lVar4 + 0x12ce0,param_1[2],param_1[3],lVar4 + 0xc740,
                    lVar4 + 0xc5c0,puVar11,0x40,0x20,6,puVar10,param_1 + 0x28cc);
    puVar11 = puVar10;
    if (DAT_0011e0dc == 0) {
      puVar11 = param_1 + 0x23c4;
      puVar7 = param_1 + 0x23e4;
      iVar9 = 0;
      if (DAT_0011e0f0 == (code *)0x0) {
        do {
          puVar5 = puVar7 + -0x20;
          puVar8 = puVar10;
          do {
            uVar1 = *(undefined4 *)puVar8;
            puVar6 = (undefined8 *)((long)puVar5 + 4);
            puVar8 = puVar8 + 0x10;
            *(undefined4 *)puVar5 = uVar1;
            puVar5 = puVar6;
          } while (puVar7 != puVar6);
          iVar9 = iVar9 + 1;
          puVar10 = (undefined8 *)((long)puVar10 + 4);
          puVar7 = puVar7 + 0x20;
        } while (iVar9 != 0x20);
      }
      else {
        (*DAT_0011e0f0)(puVar10,puVar11);
      }
    }
    (*DAT_0011e0f8)(plVar3,param_1 + 0xc68,param_1 + 0x1168,puVar11,param_1[4],param_1 + 0x27c4,
                    param_1 + 0x2848);
    *(undefined8 *)((long)param_1 + 0x14234) = 0;
    *(undefined4 *)((long)param_1 + 0x1423c) = 0;
    *(undefined8 *)((long)param_1 + 0x14654) = 0;
    *(undefined4 *)((long)param_1 + 0x1465c) = 0;
    *(undefined1 (*) [16])((long)param_1 + 0x14224) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)param_1 + 0x14644) = (undefined1  [16])0x0;
    (*DAT_0011e110)(param_3,param_1 + 0x1994,param_1 + 0x1ba4,param_1 + 0x1574,param_1 + 0x1784,
                    param_1 + 0x2d2c,param_1 + 0x1db4,param_1 + 0x1e38,param_1 + 0x1ebc,
                    param_1 + 0x27c4,param_1 + 0x2848,param_4);
    *(uint *)(param_1 + 0x30b8) = iVar2 + 1U & 3;
  }
  return;
}

