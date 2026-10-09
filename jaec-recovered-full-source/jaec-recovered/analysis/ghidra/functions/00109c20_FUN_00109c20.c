
/* 00109c20 FUN_00109c20 */

void FUN_00109c20(long *param_1,undefined8 param_2,undefined8 param_3,float *param_4,long param_5,
                 float *param_6,float *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  pfVar17 = (float *)(param_5 + 0x4000);
  lVar7 = *param_1;
  lVar22 = lVar7 + 0x34c0;
  pfVar16 = (float *)(lVar7 + 0x444);
  lVar9 = 0;
  lVar21 = lVar7 + 0x34c4;
  lVar18 = param_5;
  pfVar24 = (float *)(lVar7 + 0x440);
  do {
    iVar20 = -1;
    lVar8 = 1;
    fVar3 = *(float *)(lVar7 + 0x3440 + lVar9);
    fVar25 = *(float *)(lVar7 + 0x3c0 + lVar9);
    pfVar15 = param_4;
    pfVar23 = param_4 + -1;
    do {
      fVar26 = fVar25;
      fVar27 = fVar3;
      if (iVar20 < 0) {
        pfVar14 = pfVar16;
        pfVar11 = pfVar15;
        if (lVar8 == 0x40) {
          do {
            pfVar12 = pfVar14 + 0xc20;
            fVar28 = *pfVar14;
            pfVar14 = pfVar14 + 3;
            fVar26 = fVar26 + fVar28 * *pfVar11;
            fVar27 = fVar27 + *pfVar12 * *pfVar11;
            pfVar11 = pfVar11 + 0x40;
          } while (pfVar14 != pfVar24 + 0x61);
        }
        else {
          lVar13 = 0;
          pfVar14 = pfVar15;
          do {
            uVar4 = *(undefined8 *)pfVar14;
            puVar1 = (undefined8 *)((long)pfVar16 + lVar13);
            pfVar14 = pfVar14 + 0x40;
            puVar2 = (undefined8 *)(lVar21 + lVar13);
            lVar13 = lVar13 + 0xc;
            fVar28 = (float)uVar4;
            fVar29 = (float)((ulong)uVar4 >> 0x20);
            fVar26 = fVar26 + (float)*puVar1 * fVar28 + (float)((ulong)*puVar1 >> 0x20) * fVar29;
            fVar27 = fVar27 + (float)*puVar2 * fVar28 + (float)((ulong)*puVar2 >> 0x20) * fVar29;
          } while (lVar13 != 0x174);
          fVar28 = (float)*(undefined8 *)(pfVar15 + 0x7c0);
          fVar29 = (float)((ulong)*(undefined8 *)(pfVar15 + 0x7c0) >> 0x20);
          fVar26 = pfVar24[0x5e] * fVar28 + fVar26 + pfVar24[0x5f] * fVar29;
          fVar27 = pfVar24[0xc7e] * fVar28 + fVar27 + pfVar24[0xc7f] * fVar29;
        }
      }
      else {
        pfVar14 = pfVar24;
        pfVar11 = pfVar23;
        if (lVar8 == 0x40) {
          lVar13 = 0;
          pfVar14 = pfVar23;
          do {
            uVar4 = *(undefined8 *)pfVar14;
            puVar1 = (undefined8 *)((long)pfVar24 + lVar13);
            pfVar14 = pfVar14 + 0x40;
            puVar2 = (undefined8 *)(lVar22 + lVar13);
            lVar13 = lVar13 + 0xc;
            fVar28 = (float)uVar4;
            fVar29 = (float)((ulong)uVar4 >> 0x20);
            fVar26 = fVar26 + (float)*puVar1 * fVar28 + (float)((ulong)*puVar1 >> 0x20) * fVar29;
            fVar27 = fVar27 + (float)*puVar2 * fVar28 + (float)((ulong)*puVar2 >> 0x20) * fVar29;
          } while (lVar13 != 0x174);
          fVar28 = (float)*(undefined8 *)(pfVar15 + 0x7bf);
          fVar29 = (float)((ulong)*(undefined8 *)(pfVar15 + 0x7bf) >> 0x20);
          fVar26 = pfVar24[0x5d] * fVar28 + fVar26 + pfVar24[0x5e] * fVar29;
          fVar27 = pfVar24[0xc7d] * fVar28 + fVar27 + pfVar24[0xc7e] * fVar29;
        }
        else {
          do {
            pfVar12 = pfVar14 + 3;
            fVar28 = (float)*(undefined8 *)pfVar11;
            fVar29 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
            fVar26 = fVar26 + *pfVar14 * fVar28 + pfVar14[1] * fVar29 + pfVar14[2] * pfVar11[2];
            fVar27 = fVar27 + pfVar14[0xc20] * fVar28 + pfVar14[0xc21] * fVar29 +
                     pfVar14[0xc22] * pfVar11[2];
            pfVar14 = pfVar12;
            pfVar11 = pfVar11 + 0x40;
          } while (pfVar12 != pfVar24 + 0x60);
        }
      }
      pfVar14 = (float *)(lVar18 + -8 + lVar8 * 8);
      *pfVar14 = fVar26;
      pfVar14[1] = fVar27;
      lVar8 = lVar8 + 1;
      pfVar15 = pfVar15 + 1;
      pfVar23 = pfVar23 + 1;
      iVar20 = iVar20 + 1;
    } while (lVar8 != 0x41);
    lVar9 = lVar9 + 4;
    lVar18 = lVar18 + 0x200;
    lVar22 = lVar22 + 0x180;
    pfVar16 = pfVar16 + 0x60;
    lVar21 = lVar21 + 0x180;
    pfVar24 = pfVar24 + 0x60;
  } while (lVar9 != 0x80);
  pfVar16 = (float *)(lVar7 + 0x6540);
  pfVar24 = (float *)(lVar7 + 0x66c0);
  pfVar15 = (float *)(lVar7 + 0x66c8);
  pfVar23 = (float *)(lVar7 + 0x66c4);
  lVar21 = 0;
  lVar22 = param_5;
  do {
    uVar19 = 1;
    iVar20 = -1;
    fVar3 = *(float *)(lVar7 + 0x64c0 + lVar21 * 4);
    fVar25 = *(float *)(lVar7 + 0x9540 + lVar21 * 4);
    lVar18 = 0;
    pfVar14 = (float *)(param_5 + -4);
    do {
      fVar26 = fVar25;
      fVar27 = fVar3;
      if (iVar20 < 0) {
        if (uVar19 < 0x80) {
          if (lVar18 == 0x80) {
            pfVar11 = pfVar14 + 2;
            pfVar12 = pfVar24 + -0x5e;
            do {
              fVar28 = *pfVar11;
              pfVar10 = pfVar12 + 3;
              pfVar11 = pfVar11 + 0x80;
              fVar27 = fVar27 + *pfVar12 * fVar28;
              fVar26 = fVar26 + fVar28 * pfVar12[0xc20];
              pfVar12 = pfVar10;
            } while (pfVar10 != pfVar15);
          }
          else {
            pfVar11 = pfVar14 + 1;
            lVar9 = 0;
            do {
              uVar4 = *(undefined8 *)pfVar11;
              uVar5 = *(undefined8 *)((long)pfVar24 + lVar9 + -0x17c);
              pfVar11 = pfVar11 + 0x80;
              uVar6 = *(undefined8 *)((long)pfVar24 + lVar9 + 0x2f04);
              lVar9 = lVar9 + 0xc;
              fVar28 = (float)uVar4;
              fVar29 = (float)((ulong)uVar4 >> 0x20);
              fVar27 = fVar27 + (float)uVar5 * fVar28 + (float)((ulong)uVar5 >> 0x20) * fVar29;
              fVar26 = fVar26 + (float)uVar6 * fVar28 + (float)((ulong)uVar6 >> 0x20) * fVar29;
            } while (lVar9 != 0x174);
            fVar26 = pfVar14[0xf82] * pfVar24[0xc1f] + fVar26 + pfVar14[0xf81] * pfVar24[0xc1e];
            fVar27 = pfVar24[-1] * pfVar14[0xf82] + pfVar24[-2] * pfVar14[0xf81] + fVar27;
          }
        }
        else if (lVar18 != 0x80) {
          pfVar11 = pfVar14 + 1;
          pfVar12 = pfVar24 + -0x5f;
          do {
            fVar28 = *pfVar11;
            pfVar10 = pfVar12 + 3;
            pfVar11 = pfVar11 + 0x80;
            fVar27 = fVar27 + *pfVar12 * fVar28;
            fVar26 = fVar26 + fVar28 * pfVar12[0xc20];
            pfVar12 = pfVar10;
          } while (pfVar10 != pfVar23);
        }
      }
      else if (uVar19 < 0x80) {
        pfVar11 = pfVar16;
        pfVar12 = pfVar14;
        if (lVar18 == 0x80) {
          do {
            pfVar10 = pfVar11 + 3;
            fVar27 = fVar27 + *pfVar11 * *pfVar12 + pfVar11[2] * pfVar12[2];
            fVar26 = fVar26 + *pfVar12 * pfVar11[0xc20] + pfVar12[2] * pfVar11[0xc22];
            pfVar11 = pfVar10;
            pfVar12 = pfVar12 + 0x80;
          } while (pfVar10 != pfVar24);
        }
        else {
          do {
            pfVar10 = pfVar11 + 3;
            fVar27 = pfVar11[2] * pfVar12[2] +
                     pfVar11[1] * pfVar12[1] + fVar27 + *pfVar11 * *pfVar12;
            fVar26 = pfVar12[2] * pfVar11[0xc22] +
                     pfVar12[1] * pfVar11[0xc21] + fVar26 + *pfVar12 * pfVar11[0xc20];
            pfVar11 = pfVar10;
            pfVar12 = pfVar12 + 0x80;
          } while (pfVar10 != pfVar24);
        }
      }
      else {
        pfVar11 = pfVar16;
        pfVar12 = pfVar14;
        if (lVar18 == 0x80) {
          do {
            fVar28 = *pfVar12;
            pfVar10 = pfVar11 + 3;
            pfVar12 = pfVar12 + 0x80;
            fVar27 = fVar27 + *pfVar11 * fVar28;
            fVar26 = fVar26 + fVar28 * pfVar11[0xc20];
            pfVar11 = pfVar10;
          } while (pfVar10 != pfVar24);
        }
        else {
          lVar9 = 0;
          pfVar11 = pfVar14;
          do {
            uVar4 = *(undefined8 *)pfVar11;
            puVar1 = (undefined8 *)((long)pfVar16 + lVar9);
            pfVar11 = pfVar11 + 0x80;
            uVar5 = *(undefined8 *)((long)pfVar24 + lVar9 + 0x2f00);
            lVar9 = lVar9 + 0xc;
            fVar28 = (float)uVar4;
            fVar29 = (float)((ulong)uVar4 >> 0x20);
            fVar27 = fVar27 + (float)*puVar1 * fVar28 + (float)((ulong)*puVar1 >> 0x20) * fVar29;
            fVar26 = fVar26 + (float)uVar5 * fVar28 + (float)((ulong)uVar5 >> 0x20) * fVar29;
          } while (lVar9 != 0x174);
          fVar26 = pfVar14[0xf81] * pfVar24[0xc1e] + fVar26 + pfVar14[0xf80] * pfVar24[0xc1d];
          fVar27 = pfVar24[-2] * pfVar14[0xf81] + pfVar24[-3] * pfVar14[0xf80] + fVar27;
        }
      }
      pfVar14 = pfVar14 + 1;
      *(float *)(lVar22 + 0x4000 + lVar18 * 8) = fVar27;
      if (((uint)uVar19 & 0x7fffffff) != 0x81) {
        *(float *)(lVar22 + 0x4004 + lVar18 * 8) = fVar26;
      }
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 1;
      iVar20 = iVar20 + 1;
    } while (uVar19 != 0x82);
    lVar21 = lVar21 + 1;
    lVar22 = lVar22 + 0x404;
    pfVar16 = pfVar16 + 0x60;
    pfVar24 = pfVar24 + 0x60;
    pfVar15 = pfVar15 + 0x60;
    pfVar23 = pfVar23 + 0x60;
  } while (lVar21 != 0x20);
  fVar3 = *(float *)(lVar7 + 0x20);
  pfVar24 = (float *)(param_5 + 0x4404);
  pfVar16 = pfVar17;
  do {
    while (fVar25 = pfVar16[0x1f1f] * *(float *)(lVar7 + 0xbc) +
                    pfVar16[0x1e1e] * *(float *)(lVar7 + 0xb8) +
                    pfVar16[0x1d1d] * *(float *)(lVar7 + 0xb4) +
                    pfVar16[0x1c1c] * *(float *)(lVar7 + 0xb0) +
                    pfVar16[0x202] * *(float *)(lVar7 + 0x48) +
                    pfVar16[0x101] * *(float *)(lVar7 + 0x44) +
                    fVar3 + *pfVar16 * *(float *)(lVar7 + 0x40) +
                    pfVar16[0x303] * *(float *)(lVar7 + 0x4c) +
                    pfVar16[0x404] * *(float *)(lVar7 + 0x50) +
                    pfVar16[0x505] * *(float *)(lVar7 + 0x54) +
                    pfVar16[0x606] * *(float *)(lVar7 + 0x58) +
                    pfVar16[0x707] * *(float *)(lVar7 + 0x5c) +
                    pfVar16[0x808] * *(float *)(lVar7 + 0x60) +
                    pfVar16[0x909] * *(float *)(lVar7 + 100) +
                    pfVar16[0xa0a] * *(float *)(lVar7 + 0x68) +
                    pfVar16[0xb0b] * *(float *)(lVar7 + 0x6c) +
                    pfVar16[0xc0c] * *(float *)(lVar7 + 0x70) +
                    pfVar16[0xd0d] * *(float *)(lVar7 + 0x74) +
                    pfVar16[0xe0e] * *(float *)(lVar7 + 0x78) +
                    pfVar16[0xf0f] * *(float *)(lVar7 + 0x7c) +
                    pfVar16[0x1010] * *(float *)(lVar7 + 0x80) +
                    pfVar16[0x1111] * *(float *)(lVar7 + 0x84) +
                    pfVar16[0x1212] * *(float *)(lVar7 + 0x88) +
                    pfVar16[0x1313] * *(float *)(lVar7 + 0x8c) +
                    pfVar16[0x1414] * *(float *)(lVar7 + 0x90) +
                    pfVar16[0x1515] * *(float *)(lVar7 + 0x94) +
                    pfVar16[0x1616] * *(float *)(lVar7 + 0x98) +
                    pfVar16[0x1717] * *(float *)(lVar7 + 0x9c) +
                    pfVar16[0x1818] * *(float *)(lVar7 + 0xa0) +
                    pfVar16[0x1919] * *(float *)(lVar7 + 0xa4) +
                    pfVar16[0x1a1a] * *(float *)(lVar7 + 0xa8) +
                    pfVar16[0x1b1b] * *(float *)(lVar7 + 0xac), 0.0 <= fVar25) {
      pfVar16 = pfVar16 + 1;
      fVar25 = expf(-fVar25);
      *param_6 = 1.0 / (fVar25 + 1.0);
      param_6 = param_6 + 1;
      if (pfVar16 == pfVar24) goto LAB_0010a322;
    }
    fVar25 = expf(fVar25);
    pfVar16 = pfVar16 + 1;
    *param_6 = fVar25 / (fVar25 + 1.0);
    param_6 = param_6 + 1;
  } while (pfVar16 != pfVar24);
LAB_0010a322:
  fVar3 = *(float *)(lVar7 + 0x128c0);
  do {
    while (fVar25 = pfVar17[0x1a1a] * *(float *)(lVar7 + 0x12948) +
                    pfVar17[0x1818] * *(float *)(lVar7 + 0x12940) +
                    pfVar17[0x1717] * *(float *)(lVar7 + 0x1293c) +
                    pfVar17[0xe0e] * *(float *)(lVar7 + 0x12918) +
                    pfVar17[0xd0d] * *(float *)(lVar7 + 0x12914) +
                    pfVar17[0x909] * *(float *)(lVar7 + 0x12904) +
                    fVar3 + *pfVar17 * *(float *)(lVar7 + 76000) +
                    pfVar17[0x101] * *(float *)(lVar7 + 0x128e4) +
                    pfVar17[0x202] * *(float *)(lVar7 + 0x128e8) +
                    pfVar17[0x303] * *(float *)(lVar7 + 0x128ec) +
                    pfVar17[0x404] * *(float *)(lVar7 + 0x128f0) +
                    pfVar17[0x505] * *(float *)(lVar7 + 0x128f4) +
                    pfVar17[0x606] * *(float *)(lVar7 + 0x128f8) +
                    pfVar17[0x707] * *(float *)(lVar7 + 0x128fc) +
                    pfVar17[0x808] * *(float *)(lVar7 + 0x12900) +
                    pfVar17[0xa0a] * *(float *)(lVar7 + 0x12908) +
                    pfVar17[0xb0b] * *(float *)(lVar7 + 0x1290c) +
                    pfVar17[0xc0c] * *(float *)(lVar7 + 0x12910) +
                    pfVar17[0xf0f] * *(float *)(lVar7 + 0x1291c) +
                    pfVar17[0x1010] * *(float *)(lVar7 + 0x12920) +
                    pfVar17[0x1111] * *(float *)(lVar7 + 0x12924) +
                    pfVar17[0x1212] * *(float *)(lVar7 + 0x12928) +
                    pfVar17[0x1313] * *(float *)(lVar7 + 0x1292c) +
                    pfVar17[0x1414] * *(float *)(lVar7 + 0x12930) +
                    pfVar17[0x1515] * *(float *)(lVar7 + 0x12934) +
                    pfVar17[0x1616] * *(float *)(lVar7 + 0x12938) +
                    pfVar17[0x1919] * *(float *)(lVar7 + 0x12944) +
                    pfVar17[0x1b1b] * *(float *)(lVar7 + 0x1294c) +
                    pfVar17[0x1c1c] * *(float *)(lVar7 + 0x12950) +
                    pfVar17[0x1d1d] * *(float *)(lVar7 + 0x12954) +
                    pfVar17[0x1e1e] * *(float *)(lVar7 + 0x12958) +
                    pfVar17[0x1f1f] * *(float *)(lVar7 + 0x1295c), 0.0 <= fVar25) {
      pfVar17 = pfVar17 + 1;
      fVar25 = expf(-fVar25);
      *param_7 = 1.0 / (fVar25 + 1.0);
      param_7 = param_7 + 1;
      if (pfVar17 == pfVar24) {
        return;
      }
    }
    fVar25 = expf(fVar25);
    pfVar17 = pfVar17 + 1;
    *param_7 = fVar25 / (fVar25 + 1.0);
    param_7 = param_7 + 1;
  } while (pfVar17 != pfVar24);
  return;
}

