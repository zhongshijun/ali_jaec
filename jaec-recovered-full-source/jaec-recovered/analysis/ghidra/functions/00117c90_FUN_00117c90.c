
/* 00117c90 FUN_00117c90 */

void FUN_00117c90(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  ulong local_50;
  
  lVar6 = *(long *)(param_1 + 0x10);
  uVar18 = (ulong)(-(int)lVar6 & 0xf);
  if (param_3 < uVar18) {
    uVar18 = param_3;
  }
  local_50 = param_3;
  if (uVar18 != 0) {
    *(char *)(param_1 + lVar6) = (char)*param_2;
    *(long *)(param_1 + 0x10) = lVar6 + 1;
    if (uVar18 != 1) {
      *(undefined1 *)(param_1 + 1 + lVar6) = *(undefined1 *)((long)param_2 + 1);
      *(long *)(param_1 + 0x10) = lVar6 + 2;
      if (uVar18 != 2) {
        *(undefined1 *)(param_1 + 2 + lVar6) = *(undefined1 *)((long)param_2 + 2);
        *(long *)(param_1 + 0x10) = lVar6 + 3;
        if (uVar18 != 3) {
          *(undefined1 *)(param_1 + 3 + lVar6) = *(undefined1 *)((long)param_2 + 3);
          *(long *)(param_1 + 0x10) = lVar6 + 4;
          if (uVar18 != 4) {
            *(char *)(param_1 + 4 + lVar6) = (char)param_2[1];
            *(long *)(param_1 + 0x10) = lVar6 + 5;
            if (uVar18 != 5) {
              *(undefined1 *)(param_1 + 5 + lVar6) = *(undefined1 *)((long)param_2 + 5);
              *(long *)(param_1 + 0x10) = lVar6 + 6;
              if (uVar18 != 6) {
                *(undefined1 *)(param_1 + 6 + lVar6) = *(undefined1 *)((long)param_2 + 6);
                *(long *)(param_1 + 0x10) = lVar6 + 7;
                if (uVar18 != 7) {
                  *(undefined1 *)(param_1 + 7 + lVar6) = *(undefined1 *)((long)param_2 + 7);
                  *(long *)(param_1 + 0x10) = lVar6 + 8;
                  if (uVar18 != 8) {
                    *(char *)(param_1 + 8 + lVar6) = (char)param_2[2];
                    *(long *)(param_1 + 0x10) = lVar6 + 9;
                    if (uVar18 != 9) {
                      *(undefined1 *)(param_1 + 9 + lVar6) = *(undefined1 *)((long)param_2 + 9);
                      *(long *)(param_1 + 0x10) = lVar6 + 10;
                      if (uVar18 != 10) {
                        *(undefined1 *)(param_1 + 10 + lVar6) = *(undefined1 *)((long)param_2 + 10);
                        *(long *)(param_1 + 0x10) = lVar6 + 0xb;
                        if (uVar18 != 0xb) {
                          *(undefined1 *)(param_1 + 0xb + lVar6) =
                               *(undefined1 *)((long)param_2 + 0xb);
                          *(long *)(param_1 + 0x10) = lVar6 + 0xc;
                          if (uVar18 != 0xc) {
                            *(char *)(param_1 + 0xc + lVar6) = (char)param_2[3];
                            *(long *)(param_1 + 0x10) = lVar6 + 0xd;
                            if (uVar18 != 0xd) {
                              *(undefined1 *)(param_1 + 0xd + lVar6) =
                                   *(undefined1 *)((long)param_2 + 0xd);
                              *(long *)(param_1 + 0x10) = lVar6 + 0xe;
                              if (uVar18 == 0xf) {
                                *(undefined1 *)(param_1 + 0xe + lVar6) =
                                     *(undefined1 *)((long)param_2 + 0xe);
                                *(long *)(param_1 + 0x10) = lVar6 + 0xf;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_50 = param_3 - uVar18;
    lVar6 = lVar6 + uVar18;
    param_2 = (uint *)((long)param_2 + uVar18);
  }
  if (lVar6 == 0x10) {
    FUN_00117410(param_1,param_1,1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar15 = (ulong)uVar2;
  uVar23 = *(uint *)(param_1 + 0x1c);
  uVar16 = (ulong)uVar23;
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar4 = *(uint *)(param_1 + 0x24);
  uVar18 = *(ulong *)(param_1 + 0x38);
  uVar7 = *(ulong *)(param_1 + 0x40);
  iVar10 = *(int *)(param_1 + 0x48);
  uVar19 = uVar18 >> 0x20;
  uVar8 = uVar7 >> 0x20;
  uVar23 = (uVar23 >> 2) + uVar23;
  uVar5 = (uVar3 >> 2) + uVar3;
  uVar1 = (uVar4 >> 2) + uVar4;
  uVar17 = (ulong)uVar1;
  if (local_50 >> 4 != 0) {
    puVar13 = param_2;
    uVar21 = uVar18;
    uVar9 = uVar7;
    do {
      iVar10 = iVar10 + 1;
      puVar14 = puVar13 + 4;
      lVar20 = (ulong)puVar13[1] + (uVar19 & 0xffffffff);
      lVar24 = (ulong)*puVar13 + (uVar21 & 0xffffffff);
      lVar6 = (ulong)puVar13[3] + (uVar8 & 0xffffffff);
      lVar22 = (ulong)puVar13[2] + (uVar9 & 0xffffffff);
      uVar18 = (ulong)uVar23 * lVar6 +
               (ulong)((uVar2 >> 2) * iVar10 * 5) + lVar24 * uVar15 + lVar20 * uVar17 +
               lVar22 * (ulong)uVar5;
      uVar8 = lVar6 * (ulong)uVar5 + (ulong)(uVar23 * iVar10) + lVar20 * uVar15 + lVar24 * uVar16 +
              lVar22 * uVar17;
      uVar12 = lVar6 * uVar17 + (ulong)(uVar5 * iVar10) + lVar20 * uVar16 + lVar24 * (ulong)uVar3 +
               lVar22 * uVar15;
      uVar7 = lVar6 * uVar15 +
              (ulong)(uVar1 * iVar10) + lVar20 * (ulong)uVar3 + lVar24 * (ulong)uVar4 +
              lVar22 * uVar16;
      uVar11 = iVar10 * (uVar2 & 3) + (int)(uVar7 >> 0x20);
      uVar21 = (ulong)((uVar11 >> 2) + (uVar11 & 0xfffffffc)) + (uVar18 & 0xffffffff);
      uVar19 = (uVar18 >> 0x20) + (uVar8 & 0xffffffff) + (uVar21 >> 0x20);
      uVar18 = CONCAT44((int)uVar19,(int)uVar21);
      uVar9 = (uVar8 >> 0x20) + (uVar12 & 0xffffffff) + (uVar19 >> 0x20);
      uVar8 = (uVar7 & 0xffffffff) + (uVar12 >> 0x20) + (uVar9 >> 0x20);
      uVar7 = CONCAT44((int)uVar8,(int)uVar9);
      iVar10 = (uVar11 & 3) + (int)(uVar8 >> 0x20);
      puVar13 = puVar14;
    } while (puVar14 != param_2 + (local_50 >> 4) * 4);
  }
  *(int *)(param_1 + 0x48) = iVar10;
  *(ulong *)(param_1 + 0x38) = uVar18;
  *(ulong *)(param_1 + 0x40) = uVar7;
  uVar18 = local_50 & 0xfffffffffffffff0;
  uVar5 = (uint)local_50 & 0xf;
  if ((local_50 & 0xf) != 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + lVar6) = *(undefined1 *)((long)param_2 + uVar18);
    *(long *)(param_1 + 0x10) = lVar6 + 1;
    if (uVar5 != 1) {
      *(undefined1 *)(param_1 + 1 + lVar6) = *(undefined1 *)((long)param_2 + uVar18 + 1);
      *(long *)(param_1 + 0x10) = lVar6 + 2;
      if (uVar5 != 2) {
        *(undefined1 *)(param_1 + 2 + lVar6) = *(undefined1 *)((long)param_2 + uVar18 + 2);
        *(long *)(param_1 + 0x10) = lVar6 + 3;
        if (uVar5 != 3) {
          *(undefined1 *)(param_1 + 3 + lVar6) = *(undefined1 *)((long)param_2 + uVar18 + 3);
          *(long *)(param_1 + 0x10) = lVar6 + 4;
          if (uVar5 != 4) {
            *(undefined1 *)(param_1 + 4 + lVar6) = *(undefined1 *)((long)param_2 + uVar18 + 4);
            *(long *)(param_1 + 0x10) = lVar6 + 5;
            if (uVar5 != 5) {
              *(undefined1 *)(param_1 + 5 + lVar6) = *(undefined1 *)((long)param_2 + uVar18 + 5);
              *(long *)(param_1 + 0x10) = lVar6 + 6;
              if (uVar5 != 6) {
                *(undefined1 *)(param_1 + 6 + lVar6) = *(undefined1 *)((long)param_2 + uVar18 + 6);
                *(long *)(param_1 + 0x10) = lVar6 + 7;
                if (uVar5 != 7) {
                  *(undefined1 *)(param_1 + 7 + lVar6) = *(undefined1 *)((long)param_2 + uVar18 + 7)
                  ;
                  *(long *)(param_1 + 0x10) = lVar6 + 8;
                  if (uVar5 != 8) {
                    *(undefined1 *)(param_1 + 8 + lVar6) =
                         *(undefined1 *)((long)param_2 + uVar18 + 8);
                    *(long *)(param_1 + 0x10) = lVar6 + 9;
                    if (uVar5 != 9) {
                      *(undefined1 *)(param_1 + 9 + lVar6) =
                           *(undefined1 *)((long)param_2 + uVar18 + 9);
                      *(long *)(param_1 + 0x10) = lVar6 + 10;
                      if (uVar5 != 10) {
                        *(undefined1 *)(param_1 + 10 + lVar6) =
                             *(undefined1 *)((long)param_2 + uVar18 + 10);
                        *(long *)(param_1 + 0x10) = lVar6 + 0xb;
                        if (uVar5 != 0xb) {
                          *(undefined1 *)(param_1 + 0xb + lVar6) =
                               *(undefined1 *)((long)param_2 + uVar18 + 0xb);
                          *(long *)(param_1 + 0x10) = lVar6 + 0xc;
                          if (uVar5 != 0xc) {
                            *(undefined1 *)(param_1 + 0xc + lVar6) =
                                 *(undefined1 *)((long)param_2 + uVar18 + 0xc);
                            *(long *)(param_1 + 0x10) = lVar6 + 0xd;
                            if (uVar5 != 0xd) {
                              *(undefined1 *)(param_1 + 0xd + lVar6) =
                                   *(undefined1 *)((long)param_2 + uVar18 + 0xd);
                              *(long *)(param_1 + 0x10) = lVar6 + 0xe;
                              if (uVar5 == 0xf) {
                                *(undefined1 *)(param_1 + 0xe + lVar6) =
                                     *(undefined1 *)((long)param_2 + uVar18 + 0xe);
                                *(long *)(param_1 + 0x10) = lVar6 + 0xf;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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

