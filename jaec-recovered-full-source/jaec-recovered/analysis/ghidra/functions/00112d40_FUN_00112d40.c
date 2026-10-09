
/* 00112d40 FUN_00112d40 */

void FUN_00112d40(long param_1,int param_2,float *param_3,undefined8 *param_4,long *param_5,
                 float *param_6)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
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
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  long *plVar102;
  ulong uVar103;
  float *pfVar104;
  int iVar105;
  int iVar106;
  undefined8 *puVar107;
  long lVar108;
  int iVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  
  if (param_5 == (long *)0x0) {
    return;
  }
  if (param_6 != (float *)0x0) {
    iVar106 = param_2 + 100;
    iVar109 = 0;
    do {
      fVar110 = *param_3;
      if (1e-12 <= fVar110) {
        iVar105 = param_2 + -100;
        if (param_2 < 100) {
          iVar105 = param_2;
        }
        param_5[iVar109] = param_1 + (long)iVar105 * 0x808;
        param_6[iVar109] = fVar110;
        iVar109 = iVar109 + 1;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (iVar106 != param_2);
    *param_4 = 0;
    param_4[0xff] = 0;
    puVar107 = (undefined8 *)((ulong)(param_4 + 1) & 0xfffffffffffffff8);
    for (uVar103 = (ulong)(((int)param_4 -
                           (int)(undefined8 *)((ulong)(param_4 + 1) & 0xfffffffffffffff8)) + 0x800U
                          >> 3); uVar103 != 0; uVar103 = uVar103 - 1) {
      *puVar107 = 0;
      puVar107 = puVar107 + 1;
    }
    param_4[0x100] = 0;
    if (iVar109 != 0) {
      uVar103 = 8;
      plVar102 = param_5;
      pfVar104 = param_6;
      iVar106 = iVar109;
      do {
        if (iVar106 < 10) {
          pfVar3 = param_6 + uVar103;
          plVar1 = param_5 + uVar103;
          lVar108 = 0;
          do {
            pfVar2 = (float *)((long)param_4 + lVar108);
            fVar110 = *pfVar2;
            fVar111 = pfVar2[1];
            fVar112 = pfVar2[2];
            fVar113 = pfVar2[3];
            fVar114 = pfVar2[4];
            fVar115 = pfVar2[5];
            fVar116 = pfVar2[6];
            fVar117 = pfVar2[7];
            if (0 < iVar106) {
              fVar14 = *pfVar104;
              pfVar2 = (float *)(*plVar102 + lVar108);
              fVar110 = fVar14 * *pfVar2 + fVar110;
              fVar111 = fVar14 * pfVar2[1] + fVar111;
              fVar112 = fVar14 * pfVar2[2] + fVar112;
              fVar113 = fVar14 * pfVar2[3] + fVar113;
              fVar114 = fVar14 * pfVar2[4] + fVar114;
              fVar115 = fVar14 * pfVar2[5] + fVar115;
              fVar116 = fVar14 * pfVar2[6] + fVar116;
              fVar117 = fVar14 * pfVar2[7] + fVar117;
              if (iVar106 != 1) {
                fVar14 = pfVar104[1];
                pfVar2 = (float *)(plVar102[1] + lVar108);
                fVar110 = fVar14 * *pfVar2 + fVar110;
                fVar111 = fVar14 * pfVar2[1] + fVar111;
                fVar112 = fVar14 * pfVar2[2] + fVar112;
                fVar113 = fVar14 * pfVar2[3] + fVar113;
                fVar114 = fVar14 * pfVar2[4] + fVar114;
                fVar115 = fVar14 * pfVar2[5] + fVar115;
                fVar116 = fVar14 * pfVar2[6] + fVar116;
                fVar117 = fVar14 * pfVar2[7] + fVar117;
                if (iVar106 != 2) {
                  fVar14 = pfVar104[2];
                  pfVar2 = (float *)(plVar102[2] + lVar108);
                  fVar110 = fVar14 * *pfVar2 + fVar110;
                  fVar111 = fVar14 * pfVar2[1] + fVar111;
                  fVar112 = fVar14 * pfVar2[2] + fVar112;
                  fVar113 = fVar14 * pfVar2[3] + fVar113;
                  fVar114 = fVar14 * pfVar2[4] + fVar114;
                  fVar115 = fVar14 * pfVar2[5] + fVar115;
                  fVar116 = fVar14 * pfVar2[6] + fVar116;
                  fVar117 = fVar14 * pfVar2[7] + fVar117;
                  if (iVar106 != 3) {
                    fVar14 = pfVar104[3];
                    pfVar2 = (float *)(plVar102[3] + lVar108);
                    fVar110 = fVar14 * *pfVar2 + fVar110;
                    fVar111 = fVar14 * pfVar2[1] + fVar111;
                    fVar112 = fVar14 * pfVar2[2] + fVar112;
                    fVar113 = fVar14 * pfVar2[3] + fVar113;
                    fVar114 = fVar14 * pfVar2[4] + fVar114;
                    fVar115 = fVar14 * pfVar2[5] + fVar115;
                    fVar116 = fVar14 * pfVar2[6] + fVar116;
                    fVar117 = fVar14 * pfVar2[7] + fVar117;
                    if (iVar106 != 4) {
                      fVar14 = pfVar104[4];
                      pfVar2 = (float *)(plVar102[4] + lVar108);
                      fVar110 = fVar14 * *pfVar2 + fVar110;
                      fVar111 = fVar14 * pfVar2[1] + fVar111;
                      fVar112 = fVar14 * pfVar2[2] + fVar112;
                      fVar113 = fVar14 * pfVar2[3] + fVar113;
                      fVar114 = fVar14 * pfVar2[4] + fVar114;
                      fVar115 = fVar14 * pfVar2[5] + fVar115;
                      fVar116 = fVar14 * pfVar2[6] + fVar116;
                      fVar117 = fVar14 * pfVar2[7] + fVar117;
                      if (iVar106 != 5) {
                        fVar14 = pfVar104[5];
                        pfVar2 = (float *)(plVar102[5] + lVar108);
                        fVar110 = fVar14 * *pfVar2 + fVar110;
                        fVar111 = fVar14 * pfVar2[1] + fVar111;
                        fVar112 = fVar14 * pfVar2[2] + fVar112;
                        fVar113 = fVar14 * pfVar2[3] + fVar113;
                        fVar114 = fVar14 * pfVar2[4] + fVar114;
                        fVar115 = fVar14 * pfVar2[5] + fVar115;
                        fVar116 = fVar14 * pfVar2[6] + fVar116;
                        fVar117 = fVar14 * pfVar2[7] + fVar117;
                        if (iVar106 != 6) {
                          fVar14 = pfVar104[6];
                          pfVar2 = (float *)(plVar102[6] + lVar108);
                          fVar110 = fVar14 * *pfVar2 + fVar110;
                          fVar111 = fVar14 * pfVar2[1] + fVar111;
                          fVar112 = fVar14 * pfVar2[2] + fVar112;
                          fVar113 = fVar14 * pfVar2[3] + fVar113;
                          fVar114 = fVar14 * pfVar2[4] + fVar114;
                          fVar115 = fVar14 * pfVar2[5] + fVar115;
                          fVar116 = fVar14 * pfVar2[6] + fVar116;
                          fVar117 = fVar14 * pfVar2[7] + fVar117;
                          if (iVar106 != 7) {
                            fVar14 = pfVar104[7];
                            pfVar2 = (float *)(plVar102[7] + lVar108);
                            fVar110 = fVar14 * *pfVar2 + fVar110;
                            fVar111 = fVar14 * pfVar2[1] + fVar111;
                            fVar112 = fVar14 * pfVar2[2] + fVar112;
                            fVar113 = fVar14 * pfVar2[3] + fVar113;
                            fVar114 = fVar14 * pfVar2[4] + fVar114;
                            fVar115 = fVar14 * pfVar2[5] + fVar115;
                            fVar116 = fVar14 * pfVar2[6] + fVar116;
                            fVar117 = fVar14 * pfVar2[7] + fVar117;
                            if (iVar106 == 9) {
                              fVar14 = *pfVar3;
                              pfVar2 = (float *)(*plVar1 + lVar108);
                              fVar110 = fVar14 * *pfVar2 + fVar110;
                              fVar111 = fVar14 * pfVar2[1] + fVar111;
                              fVar112 = fVar14 * pfVar2[2] + fVar112;
                              fVar113 = fVar14 * pfVar2[3] + fVar113;
                              fVar114 = fVar14 * pfVar2[4] + fVar114;
                              fVar115 = fVar14 * pfVar2[5] + fVar115;
                              fVar116 = fVar14 * pfVar2[6] + fVar116;
                              fVar117 = fVar14 * pfVar2[7] + fVar117;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            pfVar2 = (float *)((long)param_4 + lVar108);
            *pfVar2 = fVar110;
            pfVar2[1] = fVar111;
            pfVar2[2] = fVar112;
            pfVar2[3] = fVar113;
            pfVar2[4] = fVar114;
            pfVar2[5] = fVar115;
            pfVar2[6] = fVar116;
            pfVar2[7] = fVar117;
            lVar108 = lVar108 + 0x20;
          } while (lVar108 != 0x800);
          if (iVar106 < 1) {
            fVar110 = *(float *)((long)param_4 + 0x804);
          }
          else {
            fVar110 = *(float *)(*plVar102 + 0x800) * *pfVar104 + *(float *)(param_4 + 0x100);
            if (((((iVar106 != 1) &&
                  (fVar110 = fVar110 + *(float *)(plVar102[1] + 0x800) * pfVar104[1], iVar106 != 2))
                 && (fVar110 = fVar110 + *(float *)(plVar102[2] + 0x800) * pfVar104[2], iVar106 != 3
                    )) && ((fVar110 = fVar110 + *(float *)(plVar102[3] + 0x800) * pfVar104[3],
                           iVar106 != 4 &&
                           (fVar110 = fVar110 + *(float *)(plVar102[4] + 0x800) * pfVar104[4],
                           iVar106 != 5)))) &&
               ((fVar110 = fVar110 + *(float *)(plVar102[5] + 0x800) * pfVar104[5], iVar106 != 6 &&
                ((fVar110 = fVar110 + *(float *)(plVar102[6] + 0x800) * pfVar104[6], iVar106 != 7 &&
                 (fVar110 = fVar110 + *(float *)(plVar102[7] + 0x800) * pfVar104[7], iVar106 == 9)))
                ))) {
              fVar110 = fVar110 + *(float *)(*plVar1 + 0x800) * *pfVar3;
            }
            lVar108 = *plVar102;
            *(float *)(param_4 + 0x100) = fVar110;
            fVar110 = *(float *)(lVar108 + 0x804) * *pfVar104 + *(float *)((long)param_4 + 0x804);
            if ((((iVar106 != 1) &&
                 (fVar110 = fVar110 + *(float *)(plVar102[1] + 0x804) * pfVar104[1], iVar106 != 2))
                && (fVar110 = fVar110 + *(float *)(plVar102[2] + 0x804) * pfVar104[2], iVar106 != 3)
                ) && (((fVar110 = fVar110 + *(float *)(plVar102[3] + 0x804) * pfVar104[3],
                       iVar106 != 4 &&
                       (fVar110 = fVar110 + *(float *)(plVar102[4] + 0x804) * pfVar104[4],
                       iVar106 != 5)) &&
                      ((fVar110 = fVar110 + *(float *)(plVar102[5] + 0x804) * pfVar104[5],
                       iVar106 != 6 &&
                       ((fVar110 = fVar110 + *(float *)(plVar102[6] + 0x804) * pfVar104[6],
                        iVar106 != 7 &&
                        (fVar110 = fVar110 + *(float *)(plVar102[7] + 0x804) * pfVar104[7],
                        iVar106 == 9)))))))) {
              fVar110 = fVar110 + *(float *)(*plVar1 + 0x804) * *pfVar3;
            }
          }
          *(float *)((long)param_4 + 0x804) = fVar110;
        }
        else {
          fVar110 = *pfVar104;
          fVar111 = pfVar104[1];
          lVar108 = 0;
          fVar112 = pfVar104[2];
          fVar113 = pfVar104[3];
          fVar114 = pfVar104[4];
          fVar115 = pfVar104[5];
          fVar116 = pfVar104[6];
          fVar117 = pfVar104[7];
          fVar14 = pfVar104[8];
          fVar15 = pfVar104[9];
          do {
            pfVar3 = (float *)(*plVar102 + lVar108);
            fVar95 = pfVar3[1];
            fVar96 = pfVar3[2];
            fVar97 = pfVar3[3];
            fVar98 = pfVar3[4];
            fVar99 = pfVar3[5];
            fVar100 = pfVar3[6];
            fVar101 = pfVar3[7];
            pfVar2 = (float *)((long)param_4 + lVar108);
            fVar16 = pfVar2[1];
            fVar26 = pfVar2[2];
            fVar36 = pfVar2[3];
            fVar46 = pfVar2[4];
            fVar56 = pfVar2[5];
            fVar66 = pfVar2[6];
            fVar76 = pfVar2[7];
            pfVar4 = (float *)(plVar102[1] + lVar108);
            fVar17 = pfVar4[1];
            fVar27 = pfVar4[2];
            fVar37 = pfVar4[3];
            fVar47 = pfVar4[4];
            fVar57 = pfVar4[5];
            fVar67 = pfVar4[6];
            fVar77 = pfVar4[7];
            pfVar5 = (float *)(plVar102[2] + lVar108);
            fVar18 = pfVar5[1];
            fVar28 = pfVar5[2];
            fVar38 = pfVar5[3];
            fVar48 = pfVar5[4];
            fVar58 = pfVar5[5];
            fVar68 = pfVar5[6];
            fVar78 = pfVar5[7];
            pfVar6 = (float *)(plVar102[3] + lVar108);
            fVar19 = pfVar6[1];
            fVar29 = pfVar6[2];
            fVar39 = pfVar6[3];
            fVar49 = pfVar6[4];
            fVar59 = pfVar6[5];
            fVar69 = pfVar6[6];
            fVar79 = pfVar6[7];
            pfVar7 = (float *)(plVar102[4] + lVar108);
            fVar20 = pfVar7[1];
            fVar30 = pfVar7[2];
            fVar40 = pfVar7[3];
            fVar50 = pfVar7[4];
            fVar60 = pfVar7[5];
            fVar70 = pfVar7[6];
            fVar80 = pfVar7[7];
            pfVar8 = (float *)(plVar102[5] + lVar108);
            fVar21 = pfVar8[1];
            fVar31 = pfVar8[2];
            fVar41 = pfVar8[3];
            fVar51 = pfVar8[4];
            fVar61 = pfVar8[5];
            fVar71 = pfVar8[6];
            fVar81 = pfVar8[7];
            pfVar9 = (float *)(plVar102[6] + lVar108);
            fVar22 = pfVar9[1];
            fVar32 = pfVar9[2];
            fVar42 = pfVar9[3];
            fVar52 = pfVar9[4];
            fVar62 = pfVar9[5];
            fVar72 = pfVar9[6];
            fVar82 = pfVar9[7];
            pfVar10 = (float *)(plVar102[7] + lVar108);
            fVar23 = pfVar10[1];
            fVar33 = pfVar10[2];
            fVar43 = pfVar10[3];
            fVar53 = pfVar10[4];
            fVar63 = pfVar10[5];
            fVar73 = pfVar10[6];
            fVar83 = pfVar10[7];
            pfVar11 = (float *)(plVar102[8] + lVar108);
            fVar24 = pfVar11[1];
            fVar34 = pfVar11[2];
            fVar44 = pfVar11[3];
            fVar54 = pfVar11[4];
            fVar64 = pfVar11[5];
            fVar74 = pfVar11[6];
            fVar84 = pfVar11[7];
            pfVar12 = (float *)(plVar102[9] + lVar108);
            fVar25 = pfVar12[1];
            fVar35 = pfVar12[2];
            fVar45 = pfVar12[3];
            fVar55 = pfVar12[4];
            fVar65 = pfVar12[5];
            fVar75 = pfVar12[6];
            fVar85 = pfVar12[7];
            pfVar13 = (float *)((long)param_4 + lVar108);
            *pfVar13 = fVar15 * *pfVar12 +
                       fVar14 * *pfVar11 +
                       fVar117 * *pfVar10 +
                       fVar116 * *pfVar9 +
                       fVar115 * *pfVar8 +
                       fVar114 * *pfVar7 +
                       fVar113 * *pfVar6 +
                       fVar112 * *pfVar5 + fVar111 * *pfVar4 + fVar110 * *pfVar3 + *pfVar2;
            pfVar13[1] = fVar15 * fVar25 +
                         fVar14 * fVar24 +
                         fVar117 * fVar23 +
                         fVar116 * fVar22 +
                         fVar115 * fVar21 +
                         fVar114 * fVar20 +
                         fVar113 * fVar19 +
                         fVar112 * fVar18 + fVar111 * fVar17 + fVar110 * fVar95 + fVar16;
            pfVar13[2] = fVar15 * fVar35 +
                         fVar14 * fVar34 +
                         fVar117 * fVar33 +
                         fVar116 * fVar32 +
                         fVar115 * fVar31 +
                         fVar114 * fVar30 +
                         fVar113 * fVar29 +
                         fVar112 * fVar28 + fVar111 * fVar27 + fVar110 * fVar96 + fVar26;
            pfVar13[3] = fVar15 * fVar45 +
                         fVar14 * fVar44 +
                         fVar117 * fVar43 +
                         fVar116 * fVar42 +
                         fVar115 * fVar41 +
                         fVar114 * fVar40 +
                         fVar113 * fVar39 +
                         fVar112 * fVar38 + fVar111 * fVar37 + fVar110 * fVar97 + fVar36;
            pfVar13[4] = fVar15 * fVar55 +
                         fVar14 * fVar54 +
                         fVar117 * fVar53 +
                         fVar116 * fVar52 +
                         fVar115 * fVar51 +
                         fVar114 * fVar50 +
                         fVar113 * fVar49 +
                         fVar112 * fVar48 + fVar111 * fVar47 + fVar110 * fVar98 + fVar46;
            pfVar13[5] = fVar15 * fVar65 +
                         fVar14 * fVar64 +
                         fVar117 * fVar63 +
                         fVar116 * fVar62 +
                         fVar115 * fVar61 +
                         fVar114 * fVar60 +
                         fVar113 * fVar59 +
                         fVar112 * fVar58 + fVar111 * fVar57 + fVar110 * fVar99 + fVar56;
            pfVar13[6] = fVar15 * fVar75 +
                         fVar14 * fVar74 +
                         fVar117 * fVar73 +
                         fVar116 * fVar72 +
                         fVar115 * fVar71 +
                         fVar114 * fVar70 +
                         fVar113 * fVar69 +
                         fVar112 * fVar68 + fVar111 * fVar67 + fVar110 * fVar100 + fVar66;
            pfVar13[7] = fVar15 * fVar85 +
                         fVar14 * fVar84 +
                         fVar117 * fVar83 +
                         fVar116 * fVar82 +
                         fVar115 * fVar81 +
                         fVar114 * fVar80 +
                         fVar113 * fVar79 +
                         fVar112 * fVar78 + fVar111 * fVar77 + fVar110 * fVar101 + fVar76;
            lVar108 = lVar108 + 0x20;
          } while (lVar108 != 0x800);
          lVar108 = plVar102[1];
          lVar86 = *plVar102;
          lVar87 = plVar102[2];
          lVar88 = plVar102[3];
          lVar89 = plVar102[4];
          lVar90 = plVar102[5];
          lVar91 = plVar102[6];
          lVar92 = plVar102[7];
          lVar93 = plVar102[8];
          lVar94 = plVar102[9];
          *(float *)(param_4 + 0x100) =
               pfVar104[9] * *(float *)(lVar94 + 0x800) +
               pfVar104[8] * *(float *)(lVar93 + 0x800) +
               pfVar104[7] * *(float *)(lVar92 + 0x800) +
               pfVar104[6] * *(float *)(lVar91 + 0x800) +
               pfVar104[5] * *(float *)(lVar90 + 0x800) +
               pfVar104[4] * *(float *)(lVar89 + 0x800) +
               pfVar104[3] * *(float *)(lVar88 + 0x800) +
               pfVar104[2] * *(float *)(lVar87 + 0x800) +
               pfVar104[1] * *(float *)(lVar108 + 0x800) +
               *pfVar104 * *(float *)(lVar86 + 0x800) + *(float *)(param_4 + 0x100);
          *(float *)((long)param_4 + 0x804) =
               pfVar104[9] * *(float *)(lVar94 + 0x804) +
               pfVar104[8] * *(float *)(lVar93 + 0x804) +
               pfVar104[7] * *(float *)(lVar92 + 0x804) +
               pfVar104[6] * *(float *)(lVar91 + 0x804) +
               pfVar104[5] * *(float *)(lVar90 + 0x804) +
               pfVar104[4] * *(float *)(lVar89 + 0x804) +
               pfVar104[3] * *(float *)(lVar88 + 0x804) +
               pfVar104[2] * *(float *)(lVar87 + 0x804) +
               pfVar104[1] * *(float *)(lVar108 + 0x804) +
               *pfVar104 * *(float *)(lVar86 + 0x804) + *(float *)((long)param_4 + 0x804);
        }
        iVar106 = iVar106 + -10;
        pfVar104 = pfVar104 + 10;
        plVar102 = plVar102 + 10;
        uVar103 = (ulong)((int)uVar103 + 10);
      } while (iVar109 - iVar106 < iVar109);
    }
  }
  return;
}

