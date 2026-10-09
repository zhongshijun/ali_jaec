
/* 00105c30 FUN_00105c30 */

void FUN_00105c30(float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
                 int param_7,long param_8,long param_9,long param_10,long param_11,long param_12,
                 ulong param_13,ulong param_14,uint *param_15,long param_16,float *param_17,
                 float *param_18)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  ulong uVar18;
  float *pfVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  float local_140;
  
  fVar47 = 0.0;
  lVar13 = 0;
  fVar46 = 0.0;
  do {
    pfVar17 = (float *)(param_4 + lVar13);
    pfVar19 = (float *)(param_4 + 0x10 + lVar13);
    pfVar11 = (float *)(param_5 + 0x10 + lVar13);
    pfVar12 = (float *)(param_5 + lVar13);
    lVar13 = lVar13 + 0x20;
    fVar46 = fVar46 + *pfVar17 * *pfVar17 + pfVar17[1] * pfVar17[1] +
             pfVar17[2] * pfVar17[2] + pfVar17[3] * pfVar17[3] +
             *pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1] +
             pfVar19[2] * pfVar19[2] + pfVar19[3] * pfVar19[3];
    fVar47 = fVar47 + *pfVar12 * *pfVar12 + pfVar12[1] * pfVar12[1] +
             pfVar12[2] * pfVar12[2] + pfVar12[3] * pfVar12[3] +
             *pfVar11 * *pfVar11 + pfVar11[1] * pfVar11[1] +
             pfVar11[2] * pfVar11[2] + pfVar11[3] * pfVar11[3];
  } while (lVar13 != 0x800);
  fVar46 = (*(float *)(param_4 + 0x804) * *(float *)(param_4 + 0x804) +
            *(float *)(param_4 + 0x800) * *(float *)(param_4 + 0x800) + fVar46) / 257.0;
  fVar47 = (*(float *)(param_5 + 0x804) * *(float *)(param_5 + 0x804) +
            *(float *)(param_5 + 0x800) * *(float *)(param_5 + 0x800) + fVar47) / 257.0;
  if (fVar46 <= param_3) {
    fVar46 = param_3;
  }
  fVar38 = SQRT(fVar46);
  if (SQRT(fVar46) <= param_3) {
    fVar38 = param_3;
  }
  if (fVar47 <= param_3) {
    fVar47 = param_3;
  }
  fVar38 = log10f(fVar38);
  fVar46 = SQRT(fVar47);
  if (SQRT(fVar47) <= param_3) {
    fVar46 = param_3;
  }
  fVar46 = log10f(fVar46);
  fVar47 = (fVar38 * 20.0 + 80.0) / 80.0;
  if (fVar47 < 0.0) {
    fVar38 = 0.0;
  }
  else {
    fVar38 = 1.0;
    if (fVar47 <= 1.0) {
      fVar38 = fVar47;
    }
  }
  *param_17 = fVar38;
  fVar46 = (fVar46 * 20.0 + 80.0) / 80.0;
  if (fVar46 < 0.0) {
    fVar47 = 0.0;
  }
  else {
    fVar47 = 1.0;
    if (fVar46 <= 1.0) {
      fVar47 = fVar46;
    }
  }
  *param_18 = fVar47;
  uVar30 = (int)(*param_15 + 1) % 100;
  uVar20 = 100 - uVar30;
  if (0 < param_7) {
    lVar5 = (long)(int)*param_15 * 4;
    lVar13 = param_16 + 8;
    lVar15 = (long)(int)uVar30;
    lVar26 = param_16 + 0x198 + lVar15 * -4;
    lVar25 = param_12 + lVar15 * 4;
    uVar24 = param_13 + lVar15 * 4;
    uVar28 = uVar20 & 0xfffffffc;
    lVar6 = (long)(int)(uVar30 + uVar28) * 4;
    uVar1 = uVar28 + 1;
    lVar7 = (long)(int)(uVar1 + uVar30) * 4;
    uVar2 = uVar28 + 2;
    uVar27 = uVar30 & 0xfffffffc;
    lVar8 = (long)(int)(uVar30 + uVar2) * 4;
    iVar14 = uVar27 + uVar20;
    lVar21 = (long)(iVar14 + 1) * 4;
    lVar22 = (long)(int)(uVar27 + 1) * 4;
    lVar9 = (long)(iVar14 + 2) * 4;
    lVar10 = (long)(int)(uVar27 + 2) * 4;
    lVar16 = (long)(int)uVar20;
    lVar23 = 0;
    lVar31 = param_12 + lVar16 * -4;
    lVar32 = param_13 + lVar16 * -4;
    lVar33 = 0;
    lVar3 = param_12 + lVar5;
    lVar5 = param_13 + lVar5;
    uVar29 = param_14 + lVar15 * -4;
    do {
      lVar15 = (long)*(int *)(param_6 + lVar23 * 4) * 8;
      pfVar19 = (float *)(param_4 + lVar15);
      pfVar17 = (float *)(lVar15 + param_5);
      fVar46 = *pfVar19;
      fVar47 = pfVar19[1];
      fVar38 = *pfVar17;
      fVar48 = pfVar17[1];
      fVar49 = *(float *)(param_8 + lVar23 * 4);
      fVar47 = SQRT(fVar47 * fVar47 + fVar46 * fVar46 + param_3);
      fVar38 = SQRT(fVar38 * fVar38 + fVar48 * fVar48 + param_3);
      *(float *)(param_8 + lVar23 * 4) = (fVar47 - fVar49) * param_2 + fVar49;
      fVar46 = *(float *)(param_9 + lVar23 * 4);
      fVar46 = (fVar38 - fVar46) * param_2 + fVar46;
      *(float *)(param_9 + lVar23 * 4) = fVar46;
      fVar47 = fVar47 - *(float *)(param_8 + lVar23 * 4);
      fVar38 = fVar38 - fVar46;
      fVar46 = *(float *)(param_10 + lVar23 * 4);
      *(float *)(param_10 + lVar23 * 4) = (fVar47 * fVar47 - fVar46) * param_2 + fVar46;
      fVar46 = *(float *)(param_11 + lVar23 * 4);
      fVar48 = fVar38 * param_2;
      fVar46 = (fVar38 * fVar38 - fVar46) * param_2 + fVar46;
      *(float *)(param_11 + lVar23 * 4) = fVar46;
      if (fVar46 <= param_3) {
        fVar46 = param_3;
      }
      fVar38 = *(float *)(param_10 + lVar23 * 4);
      if (fVar38 <= param_3) {
        fVar38 = param_3;
      }
      *(float *)(lVar3 + lVar33) = fVar47;
      local_140 = 1.0;
      fVar47 = local_140;
      fVar49 = 1.0 / SQRT(fVar46);
      *(float *)(lVar5 + lVar33) = 1.0 / SQRT(fVar38);
      local_140 = 1.0;
      fVar46 = local_140;
      local_140 = 1.0;
      if ((((ulong)(lVar13 - (lVar25 + 4)) < 9 ||
           (param_14 - (lVar25 + 4) < 9 ||
           (param_14 < uVar24 + 0x10 && uVar24 < param_14 + 0x10 || 99 - uVar30 < 3))) ||
           lVar13 - (uVar24 + 4) < 9) || (lVar13 - (param_14 + 4) < 9)) {
        uVar18 = 0;
        do {
          fVar47 = *(float *)(lVar25 + uVar18 * 4) * fVar48 +
                   *(float *)(param_14 + uVar18 * 4) * param_1;
          *(float *)(param_14 + uVar18 * 4) = fVar47;
          fVar47 = fVar47 * fVar49 * *(float *)(uVar24 + uVar18 * 4);
          if (-1.0 <= fVar47) {
            fVar38 = fVar46;
            if (fVar47 <= 1.0) {
              fVar38 = fVar47;
            }
          }
          else {
            fVar38 = -1.0;
          }
          *(float *)(lVar13 + uVar18 * 4) = fVar38;
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar20);
      }
      else {
        lVar15 = 0;
        do {
          pfVar17 = (float *)(param_14 + lVar15);
          pfVar19 = (float *)(lVar25 + lVar15);
          fVar38 = *pfVar17 * param_1 + *pfVar19 * fVar48;
          fVar39 = pfVar17[1] * param_1 + pfVar19[1] * fVar48;
          fVar40 = pfVar17[2] * param_1 + pfVar19[2] * fVar48;
          fVar41 = pfVar17[3] * param_1 + pfVar19[3] * fVar48;
          pfVar17 = (float *)(param_14 + lVar15);
          *pfVar17 = fVar38;
          pfVar17[1] = fVar39;
          pfVar17[2] = fVar40;
          pfVar17[3] = fVar41;
          pfVar17 = (float *)(uVar24 + lVar15);
          fVar38 = fVar38 * fVar49 * *pfVar17;
          fVar39 = fVar39 * fVar49 * pfVar17[1];
          fVar40 = fVar40 * fVar49 * pfVar17[2];
          fVar41 = fVar41 * fVar49 * pfVar17[3];
          uVar34 = -(uint)(fVar38 < -1.0);
          uVar35 = -(uint)(fVar39 < -1.0);
          uVar36 = -(uint)(fVar40 < -1.0);
          uVar37 = -(uint)(fVar41 < -1.0);
          uVar50 = ~uVar34 & -(uint)(1.0 < fVar38);
          uVar51 = ~uVar35 & -(uint)(1.0 < fVar39);
          uVar52 = ~uVar36 & -(uint)(1.0 < fVar40);
          uVar53 = ~uVar37 & -(uint)(1.0 < fVar41);
          uVar42 = (-(uint)(1.0 < fVar38) | uVar34) ^ 0xffffffff;
          uVar43 = (-(uint)(1.0 < fVar39) | uVar35) ^ 0xffffffff;
          uVar44 = (-(uint)(1.0 < fVar40) | uVar36) ^ 0xffffffff;
          uVar45 = (-(uint)(1.0 < fVar41) | uVar37) ^ 0xffffffff;
          puVar4 = (uint *)(lVar13 + lVar15);
          *puVar4 = ~uVar42 & (~uVar50 & (~uVar34 & 0x3f800000 | uVar34 & 0xbf800000) |
                              uVar50 & 0x3f800000) | (uint)fVar38 & uVar42;
          puVar4[1] = ~uVar43 & (~uVar51 & (~uVar35 & 0x3f800000 | uVar35 & 0xbf800000) |
                                uVar51 & 0x3f800000) | (uint)fVar39 & uVar43;
          puVar4[2] = ~uVar44 & (~uVar52 & (~uVar36 & 0x3f800000 | uVar36 & 0xbf800000) |
                                uVar52 & 0x3f800000) | (uint)fVar40 & uVar44;
          puVar4[3] = ~uVar45 & (~uVar53 & (~uVar37 & 0x3f800000 | uVar37 & 0xbf800000) |
                                uVar53 & 0x3f800000) | (uint)fVar41 & uVar45;
          lVar15 = lVar15 + 0x10;
        } while (lVar15 != ((ulong)((uVar20 >> 2) - 1) + 1) * 0x10);
        if (uVar20 != uVar28) {
          pfVar17 = (float *)(param_14 + (ulong)uVar28 * 4);
          fVar38 = *(float *)(param_12 + lVar6) * fVar48 + *pfVar17 * param_1;
          *pfVar17 = fVar38;
          fVar38 = fVar38 * fVar49 * *(float *)(param_13 + lVar6);
          if (fVar38 < -1.0) {
            fVar47 = -1.0;
          }
          else if (fVar38 <= 1.0) {
            fVar47 = fVar38;
          }
          *(float *)(lVar13 + (ulong)uVar28 * 4) = fVar47;
          if ((int)uVar1 < (int)uVar20) {
            pfVar17 = (float *)(param_14 + (ulong)uVar1 * 4);
            fVar47 = *(float *)(param_12 + lVar7) * fVar48 + *pfVar17 * param_1;
            *pfVar17 = fVar47;
            fVar47 = fVar47 * fVar49 * *(float *)(param_13 + lVar7);
            if (fVar47 < -1.0) {
              fVar38 = -1.0;
            }
            else {
              fVar38 = local_140;
              if (fVar47 <= 1.0) {
                fVar38 = fVar47;
              }
            }
            *(float *)(lVar13 + (ulong)uVar1 * 4) = fVar38;
            if ((int)uVar2 < (int)uVar20) {
              pfVar17 = (float *)(param_14 + (ulong)uVar2 * 4);
              fVar47 = *(float *)(param_12 + lVar8) * fVar48 + *pfVar17 * param_1;
              *pfVar17 = fVar47;
              fVar47 = fVar47 * fVar49 * *(float *)(param_13 + lVar8);
              if (-1.0 <= fVar47) {
                fVar38 = local_140;
                if (fVar47 <= 1.0) {
                  fVar38 = fVar47;
                }
              }
              else {
                fVar38 = -1.0;
              }
              *(float *)(lVar13 + (ulong)uVar2 * 4) = fVar38;
            }
          }
        }
      }
      uVar18 = uVar29 + 400;
      if (0 < (int)uVar30) {
        if (((uVar18 - (param_12 + 4) < 9 ||
             (lVar26 - (uVar29 + 0x194) < 9 ||
             (param_13 < uVar29 + 0x1a0 && uVar18 < param_13 + 0x10 || uVar30 - 1 < 3))) ||
             (ulong)(lVar26 - (param_12 + 4)) < 9) || (lVar26 - (param_13 + 4) < 9)) {
          lVar15 = lVar16 * 4;
          do {
            fVar46 = *(float *)(lVar31 + lVar33 + lVar15) * fVar48 +
                     *(float *)(param_14 + lVar15) * param_1;
            *(float *)(param_14 + lVar15) = fVar46;
            fVar46 = fVar46 * fVar49 * *(float *)(lVar32 + lVar33 + lVar15);
            if (-1.0 <= fVar46) {
              fVar47 = local_140;
              if (fVar46 <= 1.0) {
                fVar47 = fVar46;
              }
            }
            else {
              fVar47 = -1.0;
            }
            *(float *)(lVar13 + lVar15) = fVar47;
            lVar15 = lVar15 + 4;
          } while ((lVar16 + 1 + (ulong)(uVar30 - 1)) * 4 != lVar15);
        }
        else {
          lVar15 = 0;
          do {
            pfVar17 = (float *)(uVar18 + lVar15);
            pfVar19 = (float *)(param_12 + lVar15);
            fVar47 = *pfVar17 * param_1 + *pfVar19 * fVar48;
            fVar38 = pfVar17[1] * param_1 + pfVar19[1] * fVar48;
            fVar39 = pfVar17[2] * param_1 + pfVar19[2] * fVar48;
            fVar40 = pfVar17[3] * param_1 + pfVar19[3] * fVar48;
            pfVar17 = (float *)(uVar18 + lVar15);
            *pfVar17 = fVar47;
            pfVar17[1] = fVar38;
            pfVar17[2] = fVar39;
            pfVar17[3] = fVar40;
            pfVar17 = (float *)(param_13 + lVar15);
            fVar47 = fVar47 * fVar49 * *pfVar17;
            fVar38 = fVar38 * fVar49 * pfVar17[1];
            fVar39 = fVar39 * fVar49 * pfVar17[2];
            fVar40 = fVar40 * fVar49 * pfVar17[3];
            uVar34 = -(uint)(fVar47 < -1.0);
            uVar35 = -(uint)(fVar38 < -1.0);
            uVar36 = -(uint)(fVar39 < -1.0);
            uVar37 = -(uint)(fVar40 < -1.0);
            uVar50 = ~uVar34 & -(uint)(1.0 < fVar47);
            uVar51 = ~uVar35 & -(uint)(1.0 < fVar38);
            uVar52 = ~uVar36 & -(uint)(1.0 < fVar39);
            uVar53 = ~uVar37 & -(uint)(1.0 < fVar40);
            uVar42 = (-(uint)(1.0 < fVar47) | uVar34) ^ 0xffffffff;
            uVar43 = (-(uint)(1.0 < fVar38) | uVar35) ^ 0xffffffff;
            uVar44 = (-(uint)(1.0 < fVar39) | uVar36) ^ 0xffffffff;
            uVar45 = (-(uint)(1.0 < fVar40) | uVar37) ^ 0xffffffff;
            puVar4 = (uint *)(lVar26 + lVar15);
            *puVar4 = ~uVar42 & (~uVar50 & (~uVar34 & 0x3f800000 | uVar34 & 0xbf800000) |
                                uVar50 & 0x3f800000) | (uint)fVar47 & uVar42;
            puVar4[1] = ~uVar43 & (~uVar51 & (~uVar35 & 0x3f800000 | uVar35 & 0xbf800000) |
                                  uVar51 & 0x3f800000) | (uint)fVar38 & uVar43;
            puVar4[2] = ~uVar44 & (~uVar52 & (~uVar36 & 0x3f800000 | uVar36 & 0xbf800000) |
                                  uVar52 & 0x3f800000) | (uint)fVar39 & uVar44;
            puVar4[3] = ~uVar45 & (~uVar53 & (~uVar37 & 0x3f800000 | uVar37 & 0xbf800000) |
                                  uVar53 & 0x3f800000) | (uint)fVar40 & uVar45;
            lVar15 = lVar15 + 0x10;
          } while (lVar15 != ((ulong)((uVar30 >> 2) - 1) + 1) * 0x10);
          if (uVar30 != uVar27) {
            pfVar17 = (float *)(param_14 + (long)iVar14 * 4);
            fVar47 = *(float *)(param_12 + (long)(int)uVar27 * 4) * fVar48 + *pfVar17 * param_1;
            *pfVar17 = fVar47;
            fVar47 = fVar47 * fVar49 * *(float *)(param_13 + (long)(int)uVar27 * 4);
            if (fVar47 < -1.0) {
              fVar38 = -1.0;
            }
            else {
              fVar38 = fVar46;
              if (fVar47 <= 1.0) {
                fVar38 = fVar47;
              }
            }
            *(float *)(lVar13 + (long)iVar14 * 4) = fVar38;
            if ((int)(uVar27 + 1) < (int)uVar30) {
              pfVar17 = (float *)(param_14 + lVar21);
              fVar47 = *(float *)(param_12 + lVar22) * fVar48 + *pfVar17 * param_1;
              *pfVar17 = fVar47;
              fVar47 = fVar47 * fVar49 * *(float *)(param_13 + lVar22);
              if (fVar47 < -1.0) {
                fVar38 = -1.0;
              }
              else {
                fVar38 = fVar46;
                if (fVar47 <= 1.0) {
                  fVar38 = fVar47;
                }
              }
              *(float *)(lVar13 + lVar21) = fVar38;
              if ((int)(uVar27 + 2) < (int)uVar30) {
                pfVar17 = (float *)(param_14 + lVar9);
                fVar47 = fVar48 * *(float *)(param_12 + lVar10) + *pfVar17 * param_1;
                *pfVar17 = fVar47;
                fVar47 = fVar47 * fVar49 * *(float *)(param_13 + lVar10);
                if (-1.0 <= fVar47) {
                  if (fVar47 <= 1.0) {
                    fVar46 = fVar47;
                  }
                }
                else {
                  fVar46 = -1.0;
                }
                *(float *)(lVar13 + lVar9) = fVar46;
              }
            }
          }
        }
      }
      lVar23 = lVar23 + 1;
      param_14 = param_14 + 400;
      lVar13 = lVar13 + 0x1a0;
      param_12 = param_12 + 400;
      param_13 = param_13 + 400;
      lVar26 = lVar26 + 0x1a0;
      lVar25 = lVar25 + 400;
      uVar24 = uVar24 + 400;
      lVar33 = lVar33 + 400;
      uVar29 = uVar18;
    } while (param_7 != lVar23);
  }
  *param_15 = uVar30;
  return;
}

