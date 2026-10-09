
/* 001054a0 FUN_001054a0 */

void FUN_001054a0(undefined8 *param_1,long param_2,long param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long in_FS_OFFSET;
  byte bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  long *plVar27;
  undefined8 *puVar28;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 != (undefined8 *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     (param_4 != (float *)0x0)) {
    local_48 = 0;
    local_44 = 0;
    if ((DAT_0011e0b8 != 0) && (*(int *)(param_1 + 0x9c4) != 0)) {
      iVar8 = 1;
      if (0.9999999 <= *(float *)(param_1 + 0x9c5)) {
        iVar1 = *(int *)((long)param_1 + 0x4e2c);
        iVar8 = 0x80;
        if (((iVar1 < 0x100) && (iVar8 = 4, iVar1 < 0x60)) && (iVar8 = 3, iVar1 < 0x40)) {
          iVar8 = (0xf < iVar1) + 1;
        }
      }
      if ((0.999 <= *(float *)(param_1 + 0x9c5)) && (*(int *)((long)param_1 + 0x4e24) < iVar8)) {
        if (DAT_0011e0c8 == (code *)0x0) {
          if (DAT_0011e0bc == 0) {
            puVar26 = &local_44;
            puVar25 = &local_48;
            puVar24 = param_1 + 0x9c7;
          }
          else {
            puVar26 = (undefined4 *)0x0;
            puVar25 = (undefined4 *)0x0;
            puVar24 = (undefined8 *)0x0;
          }
          (*DAT_0011e0a8)(0x3f79999a,0x3cccccc0,0x322bcc77,param_2,param_3,param_1 + 2,0x10,
                          param_1 + 10,param_1 + 0x12,param_1 + 0x1a,param_1 + 0x22,param_1 + 0x2a,
                          param_1 + 0x34a,param_1 + 0x66a,(long)param_1 + 0x4e34,puVar24,puVar25,
                          puVar26);
        }
        else {
          (*DAT_0011e0c8)(0x3f79999a,0x3cccccc0,0x322bcc77);
        }
        *(int *)((long)param_1 + 0x4e24) = *(int *)((long)param_1 + 0x4e24) + 1;
        *(undefined8 *)param_4 = param_1[0x98a];
        *(undefined8 *)(param_4 + 0x62) = param_1[0x9bb];
        lVar17 = (long)param_4 - (long)((ulong)(param_4 + 2) & 0xfffffffffffffff8);
        puVar24 = (undefined8 *)((long)param_1 + (0x4c50 - lVar17));
        puVar18 = (undefined8 *)((ulong)(param_4 + 2) & 0xfffffffffffffff8);
        for (uVar12 = (ulong)((int)lVar17 + 400U >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar18 = *puVar24;
          puVar24 = puVar24 + (ulong)bVar20 * -2 + 1;
          puVar18 = puVar18 + (ulong)bVar20 * -2 + 1;
        }
        goto LAB_0010563e;
      }
    }
    puVar24 = param_1 + 0x9c7;
    pfVar15 = (float *)(param_1 + 0x16c7);
    puVar18 = param_1 + 0x11e7;
    (*DAT_0011e0a8)(0x3f79999a,0x3cccccc0,0x322bcc77,param_2,param_3,param_1 + 2,0x10,param_1 + 10,
                    param_1 + 0x12,param_1 + 0x1a,param_1 + 0x22,param_1 + 0x2a,param_1 + 0x34a,
                    param_1 + 0x66a,(long)param_1 + 0x4e34,puVar24,&local_48,&local_44);
    plVar27 = (long *)*param_1;
    *(undefined4 *)((long)param_1 + 0x4e24) = 0;
    puVar28 = param_1 + 0xd07;
    if ((param_1[1] == 0) || (DAT_0011e0a0 == (code *)0x0)) {
      lVar17 = *plVar27;
      (*DAT_0011e088)(*(undefined4 *)(lVar17 + 0x16cc0),puVar24,0x10,lVar17 + 0x14ec0,
                      lVar17 + 0x14e60,0x18,puVar28,plVar27,puVar28);
      lVar17 = *plVar27;
      (*DAT_0011e088)(*(undefined4 *)(lVar17 + 0x19a40),puVar28,0x18,lVar17 + 0x16d40,
                      lVar17 + 0x16ce0,0x18,puVar18);
    }
    else {
      (*DAT_0011e0a0)(param_1[1],puVar24,puVar28,puVar18);
    }
    lVar17 = *plVar27;
    fVar22 = *(float *)(lVar17 + 0x19a60);
    if (DAT_0011e0c0 == (code *)0x0) {
      pfVar9 = (float *)(param_1 + 0x16f9);
      pfVar11 = pfVar15;
      do {
        *pfVar11 = fVar22;
        pfVar11[1] = fVar22;
        pfVar11[2] = fVar22;
        pfVar11[3] = fVar22;
        pfVar11 = pfVar11 + 4;
      } while (pfVar11 != pfVar9);
      lVar19 = 0;
      lVar16 = 0;
      uVar12 = 0x26f4;
      do {
        while( true ) {
          fVar22 = *(float *)(lVar17 + 0x19a80 + lVar19);
          fVar23 = 0.0;
          pfVar11 = pfVar15;
          if (8 < uVar12) break;
          do {
            pfVar14 = pfVar11 + 1;
            fVar23 = fVar23 + pfVar11[lVar16 + -0x9be];
            *pfVar11 = pfVar11[lVar16 + -0x9be] * fVar22 + *pfVar11;
            pfVar11 = pfVar14;
          } while (pfVar14 != pfVar9);
          uVar12 = uVar12 - 0x1a0;
          lVar16 = lVar16 + 0x68;
          *(float *)((long)param_1 + lVar19 + 0xb958) = fVar23 * 0.01;
          lVar19 = lVar19 + 4;
        }
        lVar10 = 0;
        do {
          pfVar11 = (float *)((long)param_1 + lVar10 + (0xb634 - uVar12));
          fVar21 = *pfVar11;
          fVar2 = pfVar11[1];
          fVar3 = pfVar11[2];
          fVar4 = pfVar11[3];
          pfVar11 = (float *)((long)param_1 + lVar10 + 0xb638);
          fVar5 = pfVar11[1];
          fVar6 = pfVar11[2];
          fVar7 = pfVar11[3];
          pfVar14 = (float *)((long)param_1 + lVar10 + 0xb638);
          *pfVar14 = fVar21 * fVar22 + *pfVar11;
          pfVar14[1] = fVar2 * fVar22 + fVar5;
          pfVar14[2] = fVar3 * fVar22 + fVar6;
          pfVar14[3] = fVar4 * fVar22 + fVar7;
          lVar10 = lVar10 + 0x10;
          fVar23 = fVar23 + fVar21 + fVar2 + fVar3 + fVar4;
        } while (lVar10 != 400);
        uVar12 = uVar12 - 0x1a0;
        lVar16 = lVar16 + 0x68;
        *(float *)((long)param_1 + lVar19 + 0xb958) = fVar23 * 0.01;
        lVar19 = lVar19 + 4;
        pfVar11 = pfVar15;
      } while (uVar12 != 0xfffffffffffffff4);
      do {
        pfVar14 = pfVar11 + 4;
        *pfVar11 = *pfVar11 * 8.0;
        pfVar11[1] = pfVar11[1] * 8.0;
        pfVar11[2] = pfVar11[2] * 8.0;
        pfVar11[3] = pfVar11[3] * 8.0;
        pfVar11 = pfVar14;
      } while (pfVar14 != pfVar9);
    }
    else {
      (*DAT_0011e0c0)(fVar22,0x41000000,puVar18,lVar17 + 0x19a80,param_1 + 0x172b,pfVar15);
    }
    pfVar11 = (float *)(param_1 + 0x16f9);
    pfVar9 = (float *)((long)param_1 + 0xb63c);
    fVar22 = *(float *)(param_1 + 0x16c7);
    do {
      fVar23 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      if (fVar23 <= fVar22) {
        fVar23 = fVar22;
      }
      fVar22 = fVar23;
    } while (pfVar9 != pfVar11);
    fVar22 = 0.0;
    do {
      pfVar9 = pfVar15 + 1;
      fVar21 = expf(*pfVar15 - fVar23);
      pfVar15[100] = fVar21;
      fVar22 = fVar21 + fVar22;
      pfVar15 = pfVar9;
    } while (pfVar9 != pfVar11);
    fVar22 = 1.0 / (fVar22 + 1e-20);
    pfVar15 = pfVar11;
    do {
      pfVar9 = pfVar15 + 4;
      *pfVar15 = *pfVar15 * fVar22;
      pfVar15[1] = pfVar15[1] * fVar22;
      pfVar15[2] = pfVar15[2] * fVar22;
      pfVar15[3] = pfVar15[3] * fVar22;
      pfVar15 = pfVar9;
    } while (pfVar9 != (float *)(param_1 + 0x172b));
    (*DAT_0011e0b0)(local_48,local_44,*param_1,pfVar11,pfVar9,param_1 + 0x9bc,param_1 + 0x98a,
                    param_1 + 0x9c4,param_4,param_1 + 0x1737,param_1 + 0x1744,param_1 + 0x175c);
    fVar22 = *param_4;
    uVar12 = 1;
    uVar13 = 0;
    do {
      if (fVar22 < param_4[uVar12]) {
        uVar13 = uVar12 & 0xffffffff;
        fVar22 = param_4[uVar12];
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 100);
    iVar8 = *(int *)((long)param_1 + 0x4e2c);
    *(float *)(param_1 + 0x9c5) = fVar22;
    if ((iVar8 < 1) || (*(int *)(param_1 + 0x9c6) != (int)uVar13)) {
      *(undefined4 *)((long)param_1 + 0x4e2c) = 1;
      *(int *)(param_1 + 0x9c6) = (int)uVar13;
    }
    else if (iVar8 != 0x7fffffff) {
      *(int *)((long)param_1 + 0x4e2c) = iVar8 + 1;
    }
  }
LAB_0010563e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

