
/* 0010e9f0 FUN_0010e9f0 */

void FUN_0010e9f0(int *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4,int param_5,
                 uint param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  undefined4 *puVar23;
  long *plVar24;
  long *plVar25;
  int iVar27;
  int iVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  long in_FS_OFFSET;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  long local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  ulong uStack_50;
  long local_40;
  long *plVar26;
  
  plVar24 = &local_68;
  plVar25 = &local_68;
  plVar26 = &local_68;
  uVar3 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = param_1[3] & 1;
  if (param_4 == 0) {
    uVar15 = (long)(int)(uVar3 * 2) * 0x10 + 0x10;
    plVar12 = &local_68;
    while (plVar26 != (long *)((long)&local_68 - (uVar15 & 0xfffffffffffff000))) {
      plVar25 = (long *)((long)plVar12 + -0x1000);
      *(undefined8 *)((long)plVar12 + -8) = *(undefined8 *)((long)plVar12 + -8);
      plVar26 = (long *)((long)plVar12 + -0x1000);
      plVar12 = (long *)((long)plVar12 + -0x1000);
    }
    uVar15 = (ulong)((uint)uVar15 & 0xfff);
    lVar13 = -uVar15;
    plVar24 = (long *)((long)plVar25 + lVar13);
    if (uVar15 != 0) {
      *(undefined8 *)((long)plVar25 + -8) = *(undefined8 *)((long)plVar25 + -8);
    }
    param_4 = (ulong)((long)plVar25 + lVar13 + 0xf) & 0xfffffffffffffff0;
  }
  iVar20 = param_1[0x1b];
  uVar15 = (ulong)(uVar17 != param_6);
  piVar1 = param_1 + 2;
  local_58 = param_3;
  uStack_50 = param_4;
  if (param_5 == 0) {
    puVar14 = (&local_58)[uVar15];
    puVar29 = (&local_58)[uVar17 == param_6];
    if (iVar20 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)((long)plVar24 + -8) = 0x10ecc9;
      puVar14 = (undefined4 *)FUN_0010c2e0(uVar3 * 2,param_2,puVar29,puVar14,uVar4,piVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x1e);
      puVar29 = (&local_58)[puVar14 == param_3];
      puVar31 = (&local_58)[puVar14 != param_3];
      *(undefined8 *)((long)plVar24 + -8) = 0x10ecf4;
      FUN_0010d650(uVar3,puVar31,puVar29,uVar4);
    }
    else {
      lVar13 = 0;
      if (0 < (int)uVar3) {
        do {
          puVar31 = (undefined4 *)((long)param_2 + lVar13);
          uVar32 = *puVar31;
          uVar34 = puVar31[2];
          uVar5 = puVar31[3];
          uVar37 = *(undefined4 *)((long)param_2 + lVar13 + 0x14);
          uVar35 = *(undefined4 *)((long)param_2 + lVar13 + 0x1c);
          puVar30 = (undefined4 *)((long)param_2 + lVar13 + 0x10);
          uVar36 = *puVar30;
          uVar33 = puVar30[2];
          puVar30 = (undefined4 *)((long)puVar29 + lVar13 + 0x10);
          *puVar30 = puVar31[1];
          puVar30[1] = uVar5;
          puVar30[2] = uVar37;
          puVar30[3] = uVar35;
          puVar31 = (undefined4 *)((long)puVar29 + lVar13);
          *puVar31 = uVar32;
          puVar31[1] = uVar34;
          puVar31[2] = uVar36;
          puVar31[3] = uVar33;
          lVar13 = lVar13 + 0x20;
        } while (lVar13 != (long)(int)uVar3 * 0x20);
      }
      *(undefined8 *)((long)plVar24 + -0x10) = 0xffffffffffffffff;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)((long)plVar24 + -0x18) = 0x10ead8;
      puVar14 = (undefined4 *)FUN_0010e020(uVar3,puVar29,puVar14,puVar29,uVar4,piVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x1e);
      puVar29 = (&local_58)[puVar14 == param_3];
      puVar31 = (&local_58)[puVar14 != param_3];
      *(undefined8 *)((long)plVar24 + -8) = 0x10eb07;
      FUN_0010e6e0(uVar3,puVar31,puVar29,uVar4,*(undefined8 *)((long)plVar24 + -0x10));
    }
    puVar14 = puVar29;
    if (param_6 != 0) {
      iVar20 = *param_1;
      uVar17 = param_1[1];
      puVar14 = puVar31;
      if (param_1[0x1b] == 0) {
        iVar19 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar19 = iVar20;
        }
        iVar19 = iVar19 >> 5;
        if (0x1f < iVar20) {
          iVar27 = 0;
          puVar30 = puVar31;
          puVar16 = puVar29;
          do {
            uVar36 = *puVar16;
            uVar37 = puVar16[1];
            uVar33 = puVar16[3];
            iVar27 = iVar27 + 1;
            uVar35 = puVar16[6];
            uVar32 = puVar16[7];
            uVar34 = puVar16[4];
            uVar5 = puVar16[5];
            puVar30[4] = puVar16[2];
            puVar30[5] = uVar35;
            puVar30[6] = uVar33;
            puVar30[7] = uVar32;
            *puVar30 = uVar36;
            puVar30[1] = uVar34;
            puVar30[2] = uVar37;
            puVar30[3] = uVar5;
            uVar36 = puVar16[0x10];
            uVar37 = puVar16[0x11];
            uVar33 = puVar16[0x13];
            uVar35 = puVar16[0x16];
            uVar32 = puVar16[0x17];
            uVar34 = puVar16[0x14];
            uVar5 = puVar16[0x15];
            puVar23 = puVar30 + (long)(iVar19 * 2) * 8 + 4;
            *puVar23 = puVar16[0x12];
            puVar23[1] = uVar35;
            puVar23[2] = uVar33;
            puVar23[3] = uVar32;
            puVar23 = puVar30 + (long)(iVar19 * 2) * 8;
            *puVar23 = uVar36;
            puVar23[1] = uVar34;
            puVar23[2] = uVar37;
            puVar23[3] = uVar5;
            puVar30 = puVar30 + 8;
            puVar16 = puVar16 + 0x20;
          } while (iVar27 < iVar19);
        }
        uVar36 = puVar29[8];
        uVar37 = puVar29[9];
        uVar33 = puVar29[0xb];
        iVar28 = 1;
        uVar35 = puVar29[0xe];
        uVar32 = puVar29[0xf];
        iVar27 = iVar20 / 2;
        uVar34 = puVar29[0xc];
        uVar5 = puVar29[0xd];
        puVar31[(long)iVar27 + -4] = puVar29[10];
        puVar31[(long)iVar27 + -3] = uVar35;
        puVar31[(long)iVar27 + -2] = uVar37;
        puVar31[(long)iVar27 + -1] = uVar5;
        puVar30 = puVar31 + (long)iVar20 + -4;
        puVar16 = puVar31 + (long)iVar27 + -4;
        puVar23 = puVar29 + 0x28;
        if (iVar20 < 0x40) {
          puVar31[(long)iVar27 + -8] = uVar36;
          puVar31[(long)iVar27 + -7] = uVar34;
          puVar31[(long)iVar27 + -6] = uVar33;
          puVar31[(long)iVar27 + -5] = uVar32;
          uVar37 = puVar29[0x1c];
          uVar32 = puVar29[0x1d];
          uVar34 = puVar29[0x1e];
          uVar35 = puVar29[0x1f];
          uVar36 = puVar29[0x18];
          uVar5 = puVar29[0x19];
          uVar33 = puVar29[0x1b];
          puVar31[(long)iVar20 + -4] = puVar29[0x1a];
          puVar31[(long)iVar20 + -3] = uVar34;
          puVar31[(long)iVar20 + -2] = uVar5;
          puVar31[(long)iVar20 + -1] = uVar32;
        }
        else {
          do {
            uVar37 = puVar23[1];
            uVar35 = puVar23[2];
            uVar5 = puVar23[3];
            iVar28 = iVar28 + 1;
            uVar6 = puVar23[6];
            uVar7 = puVar23[7];
            uVar8 = puVar23[4];
            uVar9 = puVar23[5];
            puVar16[-4] = *puVar23;
            puVar16[-3] = uVar8;
            puVar16[-2] = uVar33;
            puVar16[-1] = uVar32;
            puVar16[-8] = uVar35;
            puVar16[-7] = uVar6;
            puVar16[-6] = uVar37;
            puVar16[-5] = uVar9;
            puVar16 = puVar16 + -8;
            puVar23 = puVar23 + 0x20;
            uVar33 = uVar5;
            uVar32 = uVar7;
          } while (iVar28 < iVar19);
          lVar13 = (ulong)(iVar19 - 2) * -0x20;
          if (iVar20 < 0x40) {
            lVar13 = 0;
          }
          iVar28 = 1;
          puVar16 = (undefined4 *)((long)puVar31 + lVar13 + (long)iVar27 * 4 + -0x40);
          *puVar16 = uVar36;
          puVar16[1] = uVar34;
          puVar16[2] = uVar5;
          puVar16[3] = uVar7;
          uVar36 = puVar29[0x18];
          uVar33 = puVar29[0x19];
          uVar32 = puVar29[0x1b];
          uVar35 = puVar29[0x1e];
          uVar34 = puVar29[0x1f];
          uVar37 = puVar29[0x1c];
          uVar5 = puVar29[0x1d];
          puVar31[(long)iVar20 + -4] = puVar29[0x1a];
          puVar31[(long)iVar20 + -3] = uVar35;
          puVar31[(long)iVar20 + -2] = uVar33;
          puVar31[(long)iVar20 + -1] = uVar5;
          puVar31 = puVar30;
          puVar29 = puVar29 + 0x38;
          do {
            uVar5 = puVar29[1];
            uVar6 = puVar29[2];
            uVar33 = puVar29[3];
            iVar28 = iVar28 + 1;
            uVar7 = puVar29[6];
            uVar35 = puVar29[7];
            uVar8 = puVar29[4];
            uVar9 = puVar29[5];
            puVar31[-4] = *puVar29;
            puVar31[-3] = uVar8;
            puVar31[-2] = uVar32;
            puVar31[-1] = uVar34;
            puVar31[-8] = uVar6;
            puVar31[-7] = uVar7;
            puVar31[-6] = uVar5;
            puVar31[-5] = uVar9;
            puVar31 = puVar31 + -8;
            puVar29 = puVar29 + 0x20;
            uVar32 = uVar33;
            uVar34 = uVar35;
          } while (iVar28 < iVar19);
          lVar13 = -0x20;
          if (0x3f < iVar20) {
            lVar13 = ~(ulong)(iVar19 - 2) << 5;
          }
          puVar30 = (undefined4 *)((long)puVar30 + lVar13);
        }
        puVar30[-4] = uVar36;
        puVar30[-3] = uVar37;
        puVar30[-2] = uVar33;
        puVar30[-1] = uVar35;
      }
      else {
        uVar18 = 0;
        if (0 < (int)uVar17) {
          do {
            uVar36 = *puVar29;
            uVar37 = puVar29[1];
            uVar33 = puVar29[3];
            uVar21 = uVar18 + 1;
            uVar35 = puVar29[6];
            uVar32 = puVar29[7];
            uVar34 = puVar29[4];
            uVar5 = puVar29[5];
            lVar13 = (long)(int)(((uVar18 & 3) * ((int)uVar17 >> 2) + ((int)uVar18 >> 2)) * 2);
            puVar30 = puVar31 + lVar13 * 4 + 4;
            *puVar30 = puVar29[2];
            puVar30[1] = uVar35;
            puVar30[2] = uVar33;
            puVar30[3] = uVar32;
            puVar30 = puVar31 + lVar13 * 4;
            *puVar30 = uVar36;
            puVar30[1] = uVar34;
            puVar30[2] = uVar37;
            puVar30[3] = uVar5;
            puVar29 = puVar29 + 8;
            uVar18 = uVar21;
          } while (uVar17 != uVar21);
        }
      }
    }
LAB_0010eb10:
    if ((param_3 == puVar14) || ((int)uVar3 < 1)) goto LAB_0010eb40;
  }
  else {
    puVar14 = (&local_58)[(int)(uint)(uVar17 != param_6)];
    if (puVar14 == param_2) {
      uVar15 = (ulong)(uVar17 == param_6);
      puVar14 = (&local_58)[uVar17 == param_6];
    }
    puVar29 = puVar14;
    if (param_6 != 0) {
      iVar19 = *param_1;
      if (iVar20 == 0) {
        iVar20 = iVar19 + 0x1f;
        if (-1 < iVar19) {
          iVar20 = iVar19;
        }
        iVar20 = iVar20 >> 5;
        if (iVar19 < 0x20) {
          iVar27 = iVar19 + 3;
          if (-1 < iVar19) {
            iVar27 = iVar19;
          }
          local_68 = (long)iVar19 * 4;
          puVar31 = puVar14 + (long)iVar19 + -0x18;
          puVar29 = param_2 + (iVar27 >> 2);
          uVar36 = *puVar29;
          uVar37 = puVar29[1];
          uVar33 = puVar29[2];
          uVar35 = puVar29[3];
          local_60 = puVar29 + 4;
        }
        else {
          iVar27 = 0;
          lVar13 = (long)(iVar20 * 2);
          puVar29 = param_2;
          puVar31 = puVar14;
          do {
            uVar32 = *puVar29;
            uVar34 = puVar29[2];
            uVar5 = puVar29[3];
            iVar27 = iVar27 + 1;
            uVar37 = puVar29[5];
            uVar35 = puVar29[7];
            uVar36 = puVar29[4];
            uVar33 = puVar29[6];
            puVar31[4] = puVar29[1];
            puVar31[5] = uVar5;
            puVar31[6] = uVar37;
            puVar31[7] = uVar35;
            *puVar31 = uVar32;
            puVar31[1] = uVar34;
            puVar31[2] = uVar36;
            puVar31[3] = uVar33;
            puVar30 = puVar29 + lVar13 * 8;
            uVar32 = *puVar30;
            uVar34 = puVar30[2];
            uVar5 = puVar30[3];
            uVar37 = puVar29[lVar13 * 8 + 5];
            uVar35 = puVar29[lVar13 * 8 + 7];
            uVar36 = puVar29[lVar13 * 8 + 4];
            uVar33 = (puVar29 + lVar13 * 8 + 4)[2];
            puVar31[0x14] = puVar30[1];
            puVar31[0x15] = uVar5;
            puVar31[0x16] = uVar37;
            puVar31[0x17] = uVar35;
            puVar31[0x10] = uVar32;
            puVar31[0x11] = uVar34;
            puVar31[0x12] = uVar36;
            puVar31[0x13] = uVar33;
            puVar29 = puVar29 + 8;
            puVar31 = puVar31 + 0x20;
          } while (iVar27 < iVar20);
          iVar27 = iVar19 + 3;
          if (-1 < iVar19) {
            iVar27 = iVar19;
          }
          local_68 = (long)iVar19 * 4;
          puVar31 = puVar14 + (long)iVar19 + -0x18;
          puVar29 = param_2 + (iVar27 >> 2);
          local_60 = puVar29 + 4;
          uVar36 = *puVar29;
          uVar37 = puVar29[1];
          uVar33 = puVar29[2];
          uVar35 = puVar29[3];
          if (0x3f < iVar19) {
            iVar27 = 1;
            puVar29 = puVar31;
            puVar30 = local_60;
            uVar32 = uVar33;
            uVar34 = uVar35;
            do {
              uVar5 = *puVar30;
              uVar6 = puVar30[1];
              uVar7 = puVar30[2];
              uVar8 = puVar30[3];
              iVar27 = iVar27 + 1;
              uVar9 = puVar30[4];
              uVar33 = puVar30[6];
              uVar35 = puVar30[7];
              puVar29[4] = puVar30[5];
              puVar29[5] = uVar8;
              puVar29[6] = uVar6;
              puVar29[7] = uVar34;
              *puVar29 = uVar9;
              puVar29[1] = uVar7;
              puVar29[2] = uVar5;
              puVar29[3] = uVar32;
              puVar29 = puVar29 + -0x20;
              puVar30 = puVar30 + 8;
              uVar32 = uVar33;
              uVar34 = uVar35;
            } while (iVar27 < iVar20);
            lVar22 = (ulong)(iVar20 - 2) + 1;
            lVar13 = lVar22 * 0x20;
            if (iVar19 < 0x40) {
              lVar13 = 0x20;
            }
            local_60 = (undefined4 *)((long)local_60 + lVar13);
            lVar22 = lVar22 * -0x80;
            if (iVar19 < 0x40) {
              lVar22 = -0x80;
            }
            puVar31 = (undefined4 *)((long)puVar31 + lVar22);
          }
        }
        uVar32 = *local_60;
        uVar34 = local_60[1];
        uVar5 = local_60[2];
        uVar6 = local_60[3];
        puVar29 = (undefined4 *)((long)puVar14 + local_68 + -0x20);
        iVar27 = iVar19 * 3;
        iVar28 = iVar27 + 3;
        if (-1 < iVar27) {
          iVar28 = iVar27;
        }
        puVar31[4] = uVar37;
        puVar31[5] = uVar6;
        puVar31[6] = uVar34;
        puVar31[7] = uVar35;
        *puVar31 = uVar36;
        puVar31[1] = uVar5;
        puVar31[2] = uVar32;
        puVar31[3] = uVar33;
        param_2 = param_2 + (iVar28 >> 2);
        uVar36 = *param_2;
        uVar37 = param_2[1];
        uVar33 = param_2[2];
        uVar35 = param_2[3];
        param_2 = param_2 + 4;
        if (0x3f < iVar19) {
          iVar27 = 1;
          puVar31 = puVar29;
          puVar30 = param_2;
          uVar32 = uVar33;
          uVar34 = uVar35;
          do {
            uVar5 = *puVar30;
            uVar6 = puVar30[1];
            uVar7 = puVar30[2];
            uVar8 = puVar30[3];
            iVar27 = iVar27 + 1;
            uVar9 = puVar30[4];
            uVar33 = puVar30[6];
            uVar35 = puVar30[7];
            puVar31[4] = puVar30[5];
            puVar31[5] = uVar8;
            puVar31[6] = uVar6;
            puVar31[7] = uVar34;
            *puVar31 = uVar9;
            puVar31[1] = uVar7;
            puVar31[2] = uVar5;
            puVar31[3] = uVar32;
            puVar31 = puVar31 + -0x20;
            puVar30 = puVar30 + 8;
            uVar32 = uVar33;
            uVar34 = uVar35;
          } while (iVar27 < iVar20);
          lVar22 = (ulong)(iVar20 - 2) + 1;
          lVar13 = lVar22 * 0x20;
          if (iVar19 < 0x40) {
            lVar13 = 0x20;
          }
          lVar22 = lVar22 * -0x80;
          param_2 = (undefined4 *)((long)param_2 + lVar13);
          if (iVar19 < 0x40) {
            lVar22 = -0x80;
          }
          puVar29 = (undefined4 *)((long)puVar29 + lVar22);
        }
        uVar32 = *param_2;
        uVar34 = param_2[1];
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        puVar29[4] = uVar37;
        puVar29[5] = uVar6;
        puVar29[6] = uVar34;
        puVar29[7] = uVar35;
        *puVar29 = uVar36;
        puVar29[1] = uVar5;
        puVar29[2] = uVar32;
        puVar29[3] = uVar33;
        iVar20 = param_1[0x1b];
      }
      else {
        uVar17 = 0;
        if (0 < (int)uVar3) {
          do {
            uVar18 = uVar17 + 1;
            lVar13 = (long)(int)(((uVar17 & 3) * ((int)uVar3 >> 2) + ((int)uVar17 >> 2)) * 2);
            puVar31 = param_2 + lVar13 * 4;
            uVar36 = *puVar31;
            uVar37 = puVar31[2];
            uVar33 = puVar31[3];
            puVar30 = param_2 + lVar13 * 4 + 4;
            uVar35 = *puVar30;
            uVar32 = puVar30[1];
            uVar34 = puVar30[2];
            uVar5 = puVar30[3];
            puVar29[4] = puVar31[1];
            puVar29[5] = uVar33;
            puVar29[6] = uVar32;
            puVar29[7] = uVar5;
            *puVar29 = uVar36;
            puVar29[1] = uVar37;
            puVar29[2] = uVar35;
            puVar29[3] = uVar34;
            puVar29 = puVar29 + 8;
            uVar17 = uVar18;
          } while (uVar3 != uVar18);
          iVar20 = param_1[0x1b];
        }
      }
      puVar29 = (&local_58)[(int)((uint)uVar15 ^ 1)];
      param_2 = puVar14;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1e);
    if (iVar20 == 0) {
      *(undefined8 *)((long)plVar24 + -8) = 0x10eb99;
      FUN_0010da00();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)((long)plVar24 + -8) = 0x10ebb5;
      puVar14 = (undefined4 *)FUN_0010cb90(uVar3 * 2,puVar29,param_3,param_4,uVar4,piVar1);
      puVar14 = (&local_58)[param_3 != puVar14];
      goto LAB_0010eb10;
    }
    *(undefined8 *)((long)plVar24 + -8) = 0x10ec35;
    FUN_0010e860(uVar3,param_2,puVar29,uVar4);
    *(undefined8 *)((long)plVar24 + -0x10) = 1;
    *(undefined8 *)((long)plVar24 + -0x18) = 0x10ec53;
    puVar14 = (undefined4 *)FUN_0010e020();
    if ((int)uVar3 < 1) goto LAB_0010eb40;
    puVar14 = (&local_58)[param_3 != puVar14];
    puVar29 = puVar14;
    do {
      uVar36 = puVar29[1];
      puVar31 = puVar29 + 8;
      uVar37 = puVar29[4];
      uVar33 = puVar29[5];
      puVar29[4] = puVar29[2];
      puVar29[5] = puVar29[6];
      puVar29[6] = puVar29[3];
      puVar29[7] = puVar29[7];
      *puVar29 = *puVar29;
      puVar29[1] = uVar37;
      puVar29[2] = uVar36;
      puVar29[3] = uVar33;
      puVar29 = puVar31;
    } while (puVar31 != puVar14 + (ulong)uVar3 * 8);
    if (puVar14 == param_3) goto LAB_0010eb40;
  }
  lVar13 = 0;
  iVar20 = 0;
  do {
    puVar2 = (undefined8 *)((long)puVar14 + lVar13 + 0x10);
    uVar4 = *puVar2;
    uVar10 = puVar2[1];
    uVar11 = ((undefined8 *)((long)puVar14 + lVar13))[1];
    iVar20 = iVar20 + 1;
    *(undefined8 *)((long)param_3 + lVar13) = *(undefined8 *)((long)puVar14 + lVar13);
    ((undefined8 *)((long)param_3 + lVar13))[1] = uVar11;
    puVar2 = (undefined8 *)((long)param_3 + lVar13 + 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar10;
    lVar13 = lVar13 + 0x20;
  } while (iVar20 < (int)uVar3);
LAB_0010eb40:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)plVar24 + -8) = 0x10f29a;
  __stack_chk_fail();
}

