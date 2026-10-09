
/* 001023b0 FUN_001023b0 */

void FUN_001023b0(float *param_1,int param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar20;
  undefined1 auVar17 [12];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar30;
  float fVar31;
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar32 [14];
  undefined1 auVar16 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  
  uVar13 = 0x200 - param_2;
  uVar8 = 0xa0;
  if ((int)uVar13 < 0xa1) {
    uVar8 = uVar13;
  }
  if (DAT_0011e120 != (code *)0x0) {
    (*DAT_0011e120)();
    if (0x9f < (int)uVar13) {
      return;
    }
    pauVar12 = (undefined1 (*) [16])(param_3 + (long)(int)uVar8 * 2);
    if (DAT_0011e120 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001027ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0011e120)(param_1,0,pauVar12);
      return;
    }
    goto LAB_001025d7;
  }
  lVar10 = (long)param_2;
  lVar11 = lVar10 * 4;
  if (0 < (int)uVar13) {
    if ((int)uVar13 < 8) {
      uVar7 = 0;
LAB_0010248f:
      lVar4 = (long)(int)uVar7;
      lVar11 = lVar4 * 2;
      fVar15 = (float)(int)*(short *)(param_3 + lVar4 * 2) * 3.0517578e-05;
      param_1[lVar10 + lVar4] = fVar15;
      param_1[lVar10 + lVar4 + 0x200] = fVar15;
      if ((int)(uVar7 + 1) < (int)uVar8) {
        fVar15 = (float)(int)*(short *)(param_3 + 2 + lVar11) * 3.0517578e-05;
        param_1[lVar10 + lVar4 + 1] = fVar15;
        param_1[lVar10 + lVar4 + 0x201] = fVar15;
        if ((int)(uVar7 + 2) < (int)uVar8) {
          fVar15 = (float)(int)*(short *)(param_3 + 4 + lVar11) * 3.0517578e-05;
          param_1[lVar10 + lVar4 + 2] = fVar15;
          param_1[lVar10 + lVar4 + 0x202] = fVar15;
          if ((int)(uVar7 + 3) < (int)uVar8) {
            fVar15 = (float)(int)*(short *)(param_3 + 6 + lVar11) * 3.0517578e-05;
            param_1[lVar10 + lVar4 + 3] = fVar15;
            param_1[lVar10 + lVar4 + 0x203] = fVar15;
            if ((int)(uVar7 + 4) < (int)uVar8) {
              fVar15 = (float)(int)*(short *)(param_3 + 8 + lVar11) * 3.0517578e-05;
              param_1[lVar10 + lVar4 + 4] = fVar15;
              param_1[lVar10 + lVar4 + 0x204] = fVar15;
              if ((int)(uVar7 + 5) < (int)uVar8) {
                fVar15 = (float)(int)*(short *)(param_3 + 10 + lVar11) * 3.0517578e-05;
                param_1[lVar10 + lVar4 + 5] = fVar15;
                param_1[lVar10 + lVar4 + 0x205] = fVar15;
                if ((int)(uVar7 + 6) < (int)uVar8) {
                  fVar15 = (float)(int)*(short *)(param_3 + 0xc + lVar11) * 3.0517578e-05;
                  param_1[lVar10 + lVar4 + 6] = fVar15;
                  param_1[lVar10 + lVar4 + 0x206] = fVar15;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar4 = 0;
      do {
        auVar1 = *(undefined1 (*) [16])(param_3 + lVar4);
        auVar32 = SUB1614((undefined1  [16])0x0,2);
        auVar26._0_12_ = auVar1._0_12_;
        auVar26._12_2_ = auVar1._6_2_;
        auVar26._14_2_ = -(ushort)(auVar1._6_2_ < 0);
        auVar25._12_4_ = auVar26._12_4_;
        auVar25._0_10_ = auVar1._0_10_;
        auVar25._10_2_ = -(ushort)(auVar1._4_2_ < 0);
        auVar24._10_6_ = auVar25._10_6_;
        auVar24._0_8_ = auVar1._0_8_;
        auVar24._8_2_ = auVar1._4_2_;
        auVar2._4_8_ = auVar24._8_8_;
        auVar2._2_2_ = -(ushort)(auVar1._2_2_ < 0);
        auVar2._0_2_ = auVar1._2_2_;
        iVar14 = CONCAT22(-(ushort)(auVar1._8_2_ < 0),auVar1._8_2_);
        auVar16._0_8_ =
             CONCAT26(-(ushort)(auVar1._10_2_ < auVar32._8_2_),CONCAT24(auVar1._10_2_,iVar14));
        auVar16._8_2_ = auVar1._12_2_;
        auVar16._10_2_ = -(ushort)(auVar1._12_2_ < auVar32._10_2_);
        auVar18._12_2_ = auVar1._14_2_;
        auVar18._0_12_ = auVar16;
        auVar18._14_2_ = -(ushort)(auVar1._14_2_ < auVar32._12_2_);
        fVar23 = (float)CONCAT22(-(ushort)(auVar1._0_2_ < 0),auVar1._0_2_) * 3.0517578e-05;
        fVar30 = (float)auVar2._0_4_ * 3.0517578e-05;
        fVar31 = (float)auVar24._8_4_ * 3.0517578e-05;
        fVar15 = (float)iVar14 * 3.0517578e-05;
        fVar20 = (float)(int)((ulong)auVar16._0_8_ >> 0x20) * 3.0517578e-05;
        fVar21 = (float)auVar16._8_4_ * 3.0517578e-05;
        fVar22 = (float)auVar18._12_4_ * 3.0517578e-05;
        pfVar5 = (float *)((long)param_1 + lVar4 * 2 + lVar11);
        *pfVar5 = fVar23;
        pfVar5[1] = fVar30;
        pfVar5[2] = fVar31;
        pfVar5[3] = (float)auVar25._12_4_ * 3.0517578e-05;
        pfVar5 = (float *)((long)param_1 + lVar4 * 2 + lVar11 + 0x10);
        *pfVar5 = fVar15;
        pfVar5[1] = fVar20;
        pfVar5[2] = fVar21;
        pfVar5[3] = fVar22;
        pfVar5 = (float *)((long)param_1 + lVar4 * 2 + lVar11 + 0x800);
        *pfVar5 = fVar23;
        pfVar5[1] = fVar30;
        pfVar5[2] = fVar31;
        pfVar5[3] = (float)auVar25._12_4_ * 3.0517578e-05;
        pfVar5 = (float *)((long)param_1 + lVar4 * 2 + lVar11 + 0x810);
        *pfVar5 = fVar15;
        pfVar5[1] = fVar20;
        pfVar5[2] = fVar21;
        pfVar5[3] = fVar22;
        lVar4 = lVar4 + 0x10;
      } while ((ulong)(uVar8 >> 3) << 4 != lVar4);
      uVar7 = uVar8 & 0xfffffff8;
      if ((uVar8 & 7) != 0) goto LAB_0010248f;
    }
    if (0x9f < (int)uVar13) {
      return;
    }
  }
  pauVar12 = (undefined1 (*) [16])(param_3 + (long)(int)uVar8 * 2);
LAB_001025d7:
  uVar13 = -uVar8 + 0xa0;
  if (uVar13 != 0) {
    if (-uVar8 + 0x9f < 7) {
      uVar8 = 0;
    }
    else {
      pfVar5 = param_1;
      pauVar9 = pauVar12;
      do {
        auVar1 = *pauVar9;
        pfVar6 = pfVar5 + 8;
        pauVar9 = pauVar9 + 1;
        auVar32 = SUB1614((undefined1  [16])0x0,2);
        auVar29._0_12_ = auVar1._0_12_;
        auVar29._12_2_ = auVar1._6_2_;
        auVar29._14_2_ = -(ushort)(auVar1._6_2_ < 0);
        auVar28._12_4_ = auVar29._12_4_;
        auVar28._0_10_ = auVar1._0_10_;
        auVar28._10_2_ = -(ushort)(auVar1._4_2_ < 0);
        auVar27._10_6_ = auVar28._10_6_;
        auVar27._0_8_ = auVar1._0_8_;
        auVar27._8_2_ = auVar1._4_2_;
        auVar3._4_8_ = auVar27._8_8_;
        auVar3._2_2_ = -(ushort)(auVar1._2_2_ < 0);
        auVar3._0_2_ = auVar1._2_2_;
        iVar14 = CONCAT22(-(ushort)(auVar1._8_2_ < 0),auVar1._8_2_);
        auVar17._0_8_ =
             CONCAT26(-(ushort)(auVar1._10_2_ < auVar32._8_2_),CONCAT24(auVar1._10_2_,iVar14));
        auVar17._8_2_ = auVar1._12_2_;
        auVar17._10_2_ = -(ushort)(auVar1._12_2_ < auVar32._10_2_);
        auVar19._12_2_ = auVar1._14_2_;
        auVar19._0_12_ = auVar17;
        auVar19._14_2_ = -(ushort)(auVar1._14_2_ < auVar32._12_2_);
        fVar23 = (float)CONCAT22(-(ushort)(auVar1._0_2_ < 0),auVar1._0_2_) * 3.0517578e-05;
        fVar30 = (float)auVar3._0_4_ * 3.0517578e-05;
        fVar31 = (float)auVar27._8_4_ * 3.0517578e-05;
        fVar15 = (float)iVar14 * 3.0517578e-05;
        fVar20 = (float)(int)((ulong)auVar17._0_8_ >> 0x20) * 3.0517578e-05;
        fVar21 = (float)auVar17._8_4_ * 3.0517578e-05;
        fVar22 = (float)auVar19._12_4_ * 3.0517578e-05;
        *pfVar5 = fVar23;
        pfVar5[1] = fVar30;
        pfVar5[2] = fVar31;
        pfVar5[3] = (float)auVar28._12_4_ * 3.0517578e-05;
        pfVar5[4] = fVar15;
        pfVar5[5] = fVar20;
        pfVar5[6] = fVar21;
        pfVar5[7] = fVar22;
        pfVar5[0x200] = fVar23;
        pfVar5[0x201] = fVar30;
        pfVar5[0x202] = fVar31;
        pfVar5[0x203] = (float)auVar28._12_4_ * 3.0517578e-05;
        pfVar5[0x204] = fVar15;
        pfVar5[0x205] = fVar20;
        pfVar5[0x206] = fVar21;
        pfVar5[0x207] = fVar22;
        pfVar5 = pfVar6;
      } while (pfVar6 != param_1 + (ulong)((uVar13 >> 3) - 1) * 8 + 8);
      uVar8 = uVar13 & 0xfffffff8;
      if ((uVar13 & 7) == 0) {
        return;
      }
    }
    lVar11 = (long)(int)uVar8;
    lVar10 = lVar11 * 2;
    fVar15 = (float)(int)*(short *)(*pauVar12 + lVar11 * 2) * 3.0517578e-05;
    param_1[lVar11] = fVar15;
    param_1[lVar11 + 0x200] = fVar15;
    if ((int)(uVar8 + 1) < (int)uVar13) {
      fVar15 = (float)(int)*(short *)(*pauVar12 + lVar10 + 2) * 3.0517578e-05;
      param_1[lVar11 + 1] = fVar15;
      param_1[lVar11 + 0x201] = fVar15;
      if ((int)(uVar8 + 2) < (int)uVar13) {
        fVar15 = (float)(int)*(short *)(*pauVar12 + lVar10 + 4) * 3.0517578e-05;
        param_1[lVar11 + 2] = fVar15;
        param_1[lVar11 + 0x202] = fVar15;
        if ((int)(uVar8 + 3) < (int)uVar13) {
          fVar15 = (float)(int)*(short *)(*pauVar12 + lVar10 + 6) * 3.0517578e-05;
          param_1[lVar11 + 3] = fVar15;
          param_1[lVar11 + 0x203] = fVar15;
          if ((int)(uVar8 + 4) < (int)uVar13) {
            fVar15 = (float)(int)*(short *)(*pauVar12 + lVar10 + 8) * 3.0517578e-05;
            param_1[lVar11 + 4] = fVar15;
            param_1[lVar11 + 0x204] = fVar15;
            if ((int)(uVar8 + 5) < (int)uVar13) {
              fVar15 = (float)(int)*(short *)(*pauVar12 + lVar10 + 10) * 3.0517578e-05;
              param_1[lVar11 + 5] = fVar15;
              param_1[lVar11 + 0x205] = fVar15;
              if ((int)(uVar8 + 6) < (int)uVar13) {
                fVar15 = (float)(int)*(short *)(*pauVar12 + lVar10 + 0xc) * 3.0517578e-05;
                param_1[lVar11 + 6] = fVar15;
                param_1[lVar11 + 0x206] = fVar15;
              }
            }
          }
        }
      }
    }
  }
  return;
}

