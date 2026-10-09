
/* 0010e6e0 FUN_0010e6e0 */

void FUN_0010e6e0(int param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  iVar2 = param_1 + 3;
  if (-1 < param_1) {
    iVar2 = param_1;
  }
  if (3 < param_1) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      fVar19 = *param_4 * param_2[1] - param_4[4] * param_2[5];
      fVar20 = param_4[1] * param_2[9] - param_4[5] * param_2[0xd];
      fVar21 = param_4[2] * param_2[0x11] - param_4[6] * param_2[0x15];
      fVar22 = param_4[3] * param_2[0x19] - param_4[7] * param_2[0x1d];
      fVar11 = param_2[1] * param_4[4] + param_2[5] * *param_4;
      fVar12 = param_2[9] * param_4[5] + param_2[0xd] * param_4[1];
      fVar13 = param_2[0x11] * param_4[6] + param_2[0x15] * param_4[2];
      fVar14 = param_2[0x19] * param_4[7] + param_2[0x1d] * param_4[3];
      fVar15 = param_4[8] * param_2[2] - param_4[0xc] * param_2[6];
      fVar16 = param_4[9] * param_2[10] - param_4[0xd] * param_2[0xe];
      fVar17 = param_4[10] * param_2[0x12] - param_4[0xe] * param_2[0x16];
      fVar18 = param_4[0xb] * param_2[0x1a] - param_4[0xf] * param_2[0x1e];
      fVar27 = *param_2 + fVar15;
      fVar28 = param_2[8] + fVar16;
      fVar29 = param_2[0x10] + fVar17;
      fVar30 = param_2[0x18] + fVar18;
      fVar15 = *param_2 - fVar15;
      fVar16 = param_2[8] - fVar16;
      fVar17 = param_2[0x10] - fVar17;
      fVar18 = param_2[0x18] - fVar18;
      fVar7 = param_2[2] * param_4[0xc] + param_4[8] * param_2[6];
      fVar8 = param_2[10] * param_4[0xd] + param_4[9] * param_2[0xe];
      fVar9 = param_2[0x12] * param_4[0xe] + param_4[10] * param_2[0x16];
      fVar10 = param_2[0x1a] * param_4[0xf] + param_4[0xb] * param_2[0x1e];
      fVar31 = param_4[0x10] * param_2[3] - param_4[0x14] * param_2[7];
      fVar32 = param_4[0x11] * param_2[0xb] - param_4[0x15] * param_2[0xf];
      fVar33 = param_4[0x12] * param_2[0x13] - param_4[0x16] * param_2[0x17];
      fVar34 = param_4[0x13] * param_2[0x1b] - param_4[0x17] * param_2[0x1f];
      fVar3 = param_2[7] * param_4[0x10] + param_2[3] * param_4[0x14];
      fVar4 = param_2[0xf] * param_4[0x11] + param_2[0xb] * param_4[0x15];
      fVar5 = param_2[0x17] * param_4[0x12] + param_2[0x13] * param_4[0x16];
      fVar6 = param_2[0x1f] * param_4[0x13] + param_2[0x1b] * param_4[0x17];
      fVar23 = param_2[4] - fVar7;
      fVar24 = param_2[0xc] - fVar8;
      fVar25 = param_2[0x14] - fVar9;
      fVar26 = param_2[0x1c] - fVar10;
      fVar7 = param_2[4] + fVar7;
      fVar8 = param_2[0xc] + fVar8;
      fVar9 = param_2[0x14] + fVar9;
      fVar10 = param_2[0x1c] + fVar10;
      fVar35 = fVar19 + fVar31;
      fVar36 = fVar20 + fVar32;
      fVar37 = fVar21 + fVar33;
      fVar38 = fVar22 + fVar34;
      fVar19 = fVar19 - fVar31;
      fVar20 = fVar20 - fVar32;
      fVar21 = fVar21 - fVar33;
      fVar22 = fVar22 - fVar34;
      fVar31 = fVar11 + fVar3;
      fVar32 = fVar12 + fVar4;
      fVar33 = fVar13 + fVar5;
      fVar34 = fVar14 + fVar6;
      fVar11 = fVar11 - fVar3;
      fVar12 = fVar12 - fVar4;
      fVar13 = fVar13 - fVar5;
      fVar14 = fVar14 - fVar6;
      *param_3 = fVar27 + fVar35;
      param_3[1] = fVar28 + fVar36;
      param_3[2] = fVar29 + fVar37;
      param_3[3] = fVar30 + fVar38;
      param_3[0x10] = fVar27 - fVar35;
      param_3[0x11] = fVar28 - fVar36;
      param_3[0x12] = fVar29 - fVar37;
      param_3[0x13] = fVar30 - fVar38;
      param_3[0x14] = fVar7 - fVar31;
      param_3[0x15] = fVar8 - fVar32;
      param_3[0x16] = fVar9 - fVar33;
      param_3[0x17] = fVar10 - fVar34;
      param_3[4] = fVar7 + fVar31;
      param_3[5] = fVar8 + fVar32;
      param_3[6] = fVar9 + fVar33;
      param_3[7] = fVar10 + fVar34;
      param_3[0x18] = fVar15 - fVar11;
      param_3[0x19] = fVar16 - fVar12;
      param_3[0x1a] = fVar17 - fVar13;
      param_3[0x1b] = fVar18 - fVar14;
      param_3[8] = fVar15 + fVar11;
      param_3[9] = fVar16 + fVar12;
      param_3[10] = fVar17 + fVar13;
      param_3[0xb] = fVar18 + fVar14;
      param_3[0xc] = fVar23 - fVar19;
      param_3[0xd] = fVar24 - fVar20;
      param_3[0xe] = fVar25 - fVar21;
      param_3[0xf] = fVar26 - fVar22;
      param_3[0x1c] = fVar19 + fVar23;
      param_3[0x1d] = fVar20 + fVar24;
      param_3[0x1e] = fVar21 + fVar25;
      param_3[0x1f] = fVar22 + fVar26;
      param_4 = param_4 + 0x18;
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
    } while (iVar1 < iVar2 >> 2);
  }
  return;
}

