
/* 001151e0 FUN_001151e0 */

void FUN_001151e0(undefined1 (*param_1) [32],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16 = ZEXT1632(auVar15);
  pauVar13 = param_2;
  do {
    pauVar14 = pauVar13 + 0xc;
    auVar6 = vunpcklps_avx(*param_1,param_1[8]);
    auVar3 = vunpckhps_avx(*param_1,param_1[8]);
    auVar7 = vunpcklps_avx(param_1[0x10],param_1[0x18]);
    auVar8 = vunpcklps_avx(param_1[0x20],param_1[0x28]);
    auVar4 = vunpckhps_avx(param_1[0x10],param_1[0x18]);
    auVar5 = vunpckhps_avx(param_1[0x20],param_1[0x28]);
    auVar1 = vshufps_avx(auVar6,auVar7,0x44);
    auVar6 = vshufps_avx(auVar6,auVar7,0xee);
    auVar7 = vshufps_avx(auVar8,auVar16,0x44);
    auVar8 = vshufps_avx(auVar8,ZEXT1632(auVar15),0xee);
    auVar2 = vshufps_avx(auVar3,auVar4,0x44);
    auVar9 = vperm2f128_avx(auVar6,auVar8,0x31);
    auVar3 = vshufps_avx(auVar3,auVar4,0xee);
    auVar4 = vshufps_avx(auVar5,auVar16,0x44);
    auVar10 = vperm2f128_avx(auVar1,auVar7,0x31);
    auVar5 = vshufps_avx(auVar5,auVar16,0xee);
    auVar11 = vperm2f128_avx(auVar2,auVar4,0x31);
    auVar12 = vperm2f128_avx(auVar3,auVar5,0x31);
    *(undefined1 (*) [16])(pauVar13[7] + 8) = auVar9._0_16_;
    *pauVar13 = auVar1._0_16_;
    *(undefined1 (*) [16])(pauVar13[1] + 8) = auVar6._0_16_;
    pauVar13[3] = auVar2._0_16_;
    pauVar13[6] = auVar10._0_16_;
    *(long *)(pauVar13[8] + 8) = auVar9._16_8_;
    *(undefined1 (*) [16])(pauVar13[10] + 8) = auVar12._0_16_;
    *(long *)pauVar13[1] = auVar7._0_8_;
    *(long *)(pauVar13[2] + 8) = auVar8._0_8_;
    *(long *)pauVar13[4] = auVar4._0_8_;
    *(undefined1 (*) [16])(pauVar13[4] + 8) = auVar3._0_16_;
    *(long *)(pauVar13[5] + 8) = auVar5._0_8_;
    *(long *)pauVar13[7] = auVar10._16_8_;
    pauVar13[9] = auVar11._0_16_;
    *(long *)pauVar13[10] = auVar11._16_8_;
    *(long *)(pauVar13[0xb] + 8) = auVar12._16_8_;
    pauVar13 = pauVar14;
    param_1 = param_1 + 1;
  } while (param_2 + 0x60 != pauVar14);
  return;
}

