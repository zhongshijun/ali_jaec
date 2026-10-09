
/* 00116980 FUN_00116980 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116980(void *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [32];
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [32];
  float fVar8;
  undefined1 auVar9 [16];
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  size_t __n;
  long lVar14;
  undefined2 uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  
  auVar18 = _DAT_0011a9e0;
  auVar7 = _DAT_0011a9c0;
  if ((param_2 == 0 || param_4 < 1) || (param_1 == (void *)0x0)) {
                    /* WARNING: Read-only address (ram,0x0011a9c0) is written */
                    /* WARNING: Read-only address (ram,0x0011a9e0) is written */
    return;
  }
  if (param_3 == 0) {
    iVar12 = 0;
    if (7 < param_4) {
      uVar1 = (param_4 - 8U >> 3) + 1;
      param_1 = memset(param_1,0,(ulong)uVar1 << 5);
      iVar12 = uVar1 * 8;
      if (param_4 <= iVar12) {
        return;
      }
    }
    __n = (ulong)(uint)((param_4 + -1) - iVar12) * 4 + 4;
    if (param_4 <= iVar12) {
      __n = 4;
    }
    memset((void *)((long)param_1 + (long)iVar12 * 4),0,__n);
    return;
  }
  if (param_4 < 0x10) {
    iVar12 = 7;
    iVar11 = 0;
  }
  else {
    uVar1 = (param_4 - 0x10U >> 4) + 1;
    lVar13 = 0;
    do {
      pfVar2 = (float *)((long)param_1 + lVar13 * 4);
      pfVar3 = (float *)(param_2 + lVar13 * 4);
      pfVar5 = (float *)((long)param_1 + lVar13 * 4 + 0x20);
      pfVar6 = (float *)(param_2 + 0x20 + lVar13 * 4);
      auVar16._0_4_ = *pfVar2 * *pfVar3 * 32768.0;
      auVar16._4_4_ = pfVar2[1] * pfVar3[1] * 32768.0;
      auVar16._8_4_ = pfVar2[2] * pfVar3[2] * 32768.0;
      auVar16._12_4_ = pfVar2[3] * pfVar3[3] * 32768.0;
      auVar16._16_4_ = pfVar2[4] * pfVar3[4] * 32768.0;
      auVar16._20_4_ = pfVar2[5] * pfVar3[5] * 32768.0;
      auVar16._24_4_ = pfVar2[6] * pfVar3[6] * 32768.0;
      auVar16._28_4_ = pfVar2[7] * pfVar3[7] * 32768.0;
      auVar20._0_4_ = *pfVar5 * *pfVar6 * 32768.0;
      auVar20._4_4_ = pfVar5[1] * pfVar6[1] * 32768.0;
      auVar20._8_4_ = pfVar5[2] * pfVar6[2] * 32768.0;
      auVar20._12_4_ = pfVar5[3] * pfVar6[3] * 32768.0;
      auVar20._16_4_ = pfVar5[4] * pfVar6[4] * 32768.0;
      auVar20._20_4_ = pfVar5[5] * pfVar6[5] * 32768.0;
      auVar20._24_4_ = pfVar5[6] * pfVar6[6] * 32768.0;
      auVar20._28_4_ = pfVar5[7] * pfVar6[7] * 32768.0;
      auVar19 = vcmpps_avx(auVar16,auVar16,7);
      auVar17._0_4_ = (uint)auVar16._0_4_ & auVar19._0_4_;
      auVar17._4_4_ = (uint)auVar16._4_4_ & auVar19._4_4_;
      auVar17._8_4_ = (uint)auVar16._8_4_ & auVar19._8_4_;
      auVar17._12_4_ = (uint)auVar16._12_4_ & auVar19._12_4_;
      auVar17._16_4_ = (uint)auVar16._16_4_ & auVar19._16_4_;
      auVar17._20_4_ = (uint)auVar16._20_4_ & auVar19._20_4_;
      auVar17._24_4_ = (uint)auVar16._24_4_ & auVar19._24_4_;
      auVar17._28_4_ = (uint)auVar16._28_4_ & auVar19._28_4_;
      auVar19 = vcmpps_avx(auVar20,auVar20,7);
      auVar16 = vminps_avx(auVar7,auVar17);
      auVar21._0_4_ = (uint)auVar20._0_4_ & auVar19._0_4_;
      auVar21._4_4_ = (uint)auVar20._4_4_ & auVar19._4_4_;
      auVar21._8_4_ = (uint)auVar20._8_4_ & auVar19._8_4_;
      auVar21._12_4_ = (uint)auVar20._12_4_ & auVar19._12_4_;
      auVar21._16_4_ = (uint)auVar20._16_4_ & auVar19._16_4_;
      auVar21._20_4_ = (uint)auVar20._20_4_ & auVar19._20_4_;
      auVar21._24_4_ = (uint)auVar20._24_4_ & auVar19._24_4_;
      auVar21._28_4_ = (uint)auVar20._28_4_ & auVar19._28_4_;
      auVar17 = vminps_avx(auVar7,auVar21);
      auVar19 = vmaxps_avx(auVar18,auVar16);
      auVar16 = vmaxps_avx(auVar18,auVar17);
      auVar19 = vcvtps2dq_avx(auVar19);
      auVar16 = vcvtps2dq_avx(auVar16);
      auVar19 = vpackssdw_avx2(auVar19,auVar16);
      auVar19 = vpermq_avx2(auVar19,0xd8);
      *(undefined1 (*) [32])(param_3 + lVar13 * 2) = auVar19;
      *(undefined1 (*) [32])((long)param_1 + lVar13 * 4) = ZEXT1232(ZEXT812(0));
      *(undefined1 (*) [32])((long)param_1 + lVar13 * 4 + 0x20) = ZEXT1232(ZEXT812(0));
      lVar13 = lVar13 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar13);
    iVar11 = uVar1 * 0x10;
    iVar12 = iVar11 + 7;
  }
  if (iVar12 < param_4) {
    lVar13 = (long)iVar11;
    iVar11 = iVar11 + 8;
    pauVar4 = (undefined1 (*) [32])((long)param_1 + lVar13 * 4);
    pfVar2 = (float *)(param_2 + lVar13 * 4);
    auVar18._0_4_ = *pfVar2 * *(float *)*pauVar4 * 32768.0;
    auVar18._4_4_ = pfVar2[1] * *(float *)((long)*pauVar4 + 4) * 32768.0;
    auVar18._8_4_ = pfVar2[2] * *(float *)((long)*pauVar4 + 8) * 32768.0;
    auVar18._12_4_ = pfVar2[3] * *(float *)((long)*pauVar4 + 0xc) * 32768.0;
    auVar18._16_4_ = pfVar2[4] * *(float *)((long)*pauVar4 + 0x10) * 32768.0;
    auVar18._20_4_ = pfVar2[5] * *(float *)((long)*pauVar4 + 0x14) * 32768.0;
    auVar18._24_4_ = pfVar2[6] * *(float *)((long)*pauVar4 + 0x18) * 32768.0;
    auVar18._28_4_ = pfVar2[7] * *(float *)((long)*pauVar4 + 0x1c) * 32768.0;
    auVar7 = vcmpps_avx(auVar18,auVar18,7);
    auVar19._0_4_ = (uint)auVar18._0_4_ & auVar7._0_4_;
    auVar19._4_4_ = (uint)auVar18._4_4_ & auVar7._4_4_;
    auVar19._8_4_ = (uint)auVar18._8_4_ & auVar7._8_4_;
    auVar19._12_4_ = (uint)auVar18._12_4_ & auVar7._12_4_;
    auVar19._16_4_ = (uint)auVar18._16_4_ & auVar7._16_4_;
    auVar19._20_4_ = (uint)auVar18._20_4_ & auVar7._20_4_;
    auVar19._24_4_ = (uint)auVar18._24_4_ & auVar7._24_4_;
    auVar19._28_4_ = (uint)auVar18._28_4_ & auVar7._28_4_;
    auVar7 = vminps_avx(_DAT_0011a9c0,auVar19);
    auVar7 = vmaxps_avx(_DAT_0011a9e0,auVar7);
    auVar7 = vcvtps2dq_avx(auVar7);
    auVar9 = vpackssdw_avx(auVar7._0_16_,auVar7._16_16_);
    *(undefined1 (*) [16])(param_3 + lVar13 * 2) = auVar9;
    *pauVar4 = ZEXT832(0) << 0x20;
  }
  if (iVar11 < param_4) {
    lVar14 = (long)iVar11;
    uVar15 = 0;
    lVar13 = lVar14 * 4;
    lVar10 = lVar14 * 2;
    fVar8 = *(float *)(param_2 + lVar14 * 4) * *(float *)((long)param_1 + lVar13);
    if (!NAN(fVar8)) {
      fVar8 = fVar8 * 32768.0;
      uVar15 = 0x7fff;
      if ((fVar8 < 32767.0) && (uVar15 = (undefined2)(long)ROUND(fVar8), fVar8 <= -32768.0)) {
        uVar15 = 0x8000;
      }
    }
    *(undefined2 *)(param_3 + lVar10) = uVar15;
    *(float *)((long)param_1 + lVar13) = 0.0;
    if (iVar11 + 1 < param_4) {
      pfVar2 = (float *)((long)param_1 + lVar13 + 4);
      uVar15 = 0;
      fVar8 = *(float *)(param_2 + 4 + lVar13) * *pfVar2;
      if (!NAN(fVar8)) {
        fVar8 = fVar8 * 32768.0;
        uVar15 = 0x7fff;
        if ((fVar8 < 32767.0) && (uVar15 = (undefined2)(long)ROUND(fVar8), fVar8 <= -32768.0)) {
          uVar15 = 0x8000;
        }
      }
      *(undefined2 *)(param_3 + 2 + lVar10) = uVar15;
      *pfVar2 = 0.0;
      if (iVar11 + 2 < param_4) {
        pfVar2 = (float *)((long)param_1 + lVar13 + 8);
        uVar15 = 0;
        fVar8 = *(float *)(param_2 + 8 + lVar13) * *pfVar2;
        if (!NAN(fVar8)) {
          fVar8 = fVar8 * 32768.0;
          uVar15 = 0x7fff;
          if ((fVar8 < 32767.0) && (uVar15 = (undefined2)(long)ROUND(fVar8), fVar8 <= -32768.0)) {
            uVar15 = 0x8000;
          }
        }
        *(undefined2 *)(param_3 + 4 + lVar10) = uVar15;
        *pfVar2 = 0.0;
        if (iVar11 + 3 < param_4) {
          pfVar2 = (float *)((long)param_1 + lVar13 + 0xc);
          uVar15 = 0;
          fVar8 = *(float *)(param_2 + 0xc + lVar13) * *pfVar2;
          if (!NAN(fVar8)) {
            fVar8 = fVar8 * 32768.0;
            uVar15 = 0x7fff;
            if ((fVar8 < 32767.0) && (uVar15 = (undefined2)(long)ROUND(fVar8), fVar8 <= -32768.0)) {
              uVar15 = 0x8000;
            }
          }
          *(undefined2 *)(param_3 + 6 + lVar10) = uVar15;
          *pfVar2 = 0.0;
          if (iVar11 + 4 < param_4) {
            pfVar2 = (float *)((long)param_1 + lVar13 + 0x10);
            uVar15 = 0;
            fVar8 = *(float *)(param_2 + 0x10 + lVar13) * *pfVar2;
            if (!NAN(fVar8)) {
              fVar8 = fVar8 * 32768.0;
              uVar15 = 0x7fff;
              if ((fVar8 < 32767.0) && (uVar15 = (undefined2)(long)ROUND(fVar8), fVar8 <= -32768.0))
              {
                uVar15 = 0x8000;
              }
            }
            *(undefined2 *)(param_3 + 8 + lVar10) = uVar15;
            *pfVar2 = 0.0;
            if (iVar11 + 5 < param_4) {
              pfVar2 = (float *)((long)param_1 + lVar13 + 0x14);
              uVar15 = 0;
              fVar8 = *(float *)(param_2 + 0x14 + lVar13) * *pfVar2;
              if (!NAN(fVar8)) {
                fVar8 = fVar8 * 32768.0;
                uVar15 = 0x7fff;
                if ((fVar8 < 32767.0) &&
                   (uVar15 = (undefined2)(long)ROUND(fVar8), fVar8 <= -32768.0)) {
                  uVar15 = 0x8000;
                }
              }
              *(undefined2 *)(param_3 + 10 + lVar10) = uVar15;
              *pfVar2 = 0.0;
              if (iVar11 + 6 < param_4) {
                pfVar2 = (float *)((long)param_1 + lVar13 + 0x18);
                uVar15 = 0;
                fVar8 = *(float *)(param_2 + 0x18 + lVar13) * *pfVar2;
                if (!NAN(fVar8)) {
                  fVar8 = fVar8 * 32768.0;
                  uVar15 = 0x7fff;
                  if ((fVar8 < 32767.0) &&
                     (uVar15 = (undefined2)(long)ROUND(fVar8), fVar8 <= -32768.0)) {
                    uVar15 = 0x8000;
                  }
                }
                *(undefined2 *)(param_3 + 0xc + lVar10) = uVar15;
                *pfVar2 = 0.0;
                if (iVar11 + 7 < param_4) {
                  pfVar2 = (float *)((long)param_1 + lVar13 + 0x1c);
                  uVar15 = 0;
                  fVar8 = *(float *)(param_2 + 0x1c + lVar13) * *pfVar2;
                  if (!NAN(fVar8)) {
                    fVar8 = fVar8 * 32768.0;
                    uVar15 = 0x7fff;
                    if ((fVar8 < 32767.0) &&
                       (uVar15 = (undefined2)(long)ROUND(fVar8), fVar8 <= -32768.0)) {
                      uVar15 = 0x8000;
                    }
                  }
                  *(undefined2 *)(param_3 + 0xe + lVar10) = uVar15;
                  *pfVar2 = 0.0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

