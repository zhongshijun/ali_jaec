
/* 00104b60 FUN_00104b60 */

void FUN_00104b60(int *param_1,long param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  size_t __n;
  float *pfVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  
  iVar13 = param_1[1];
  iVar9 = *param_1;
  if (iVar13 < 1) {
    return;
  }
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  else {
    iVar5 = iVar13;
    if (iVar9 <= iVar13) {
      iVar5 = iVar9;
    }
    if (iVar13 == 1) {
      lVar4 = *(long *)(param_1 + 4);
      lVar15 = 0;
      iVar13 = 0;
      do {
        uVar6 = iVar9 - iVar13;
        if (iVar9 <= iVar13) {
          uVar6 = 1;
        }
        fVar16 = 0.0;
        if (((uint)((iVar9 + -1) - iVar13) < 3) || (iVar9 <= iVar13)) {
          uVar8 = 0;
          iVar11 = iVar13;
LAB_00104c6f:
          fVar3 = *(float *)(lVar4 + (long)iVar11 * 4);
          iVar11 = iVar13 + 1 + uVar8;
          fVar16 = fVar16 + fVar3 * fVar3;
          if (iVar11 < iVar9) {
            iVar2 = iVar13 + 2 + uVar8;
            fVar3 = *(float *)(lVar4 + (long)iVar11 * 4);
            fVar16 = fVar16 + fVar3 * fVar3;
            if (iVar2 < iVar9) {
              fVar3 = *(float *)(lVar4 + (long)iVar2 * 4);
              fVar16 = fVar16 + fVar3 * fVar3;
            }
          }
        }
        else {
          pfVar1 = (float *)(lVar4 + lVar15) + 4;
          pfVar7 = pfVar1;
          pfVar12 = (float *)(lVar4 + lVar15);
          while (pfVar10 = pfVar7,
                fVar16 = fVar16 + *pfVar12 * *pfVar12 + pfVar12[1] * pfVar12[1] +
                         pfVar12[2] * pfVar12[2] + pfVar12[3] * pfVar12[3],
                pfVar10 != pfVar1 + (ulong)((uVar6 >> 2) - 1) * 4) {
            pfVar12 = pfVar10;
            pfVar7 = pfVar10 + 4;
          }
          uVar8 = uVar6 & 0xfffffffc;
          iVar11 = iVar13 + uVar8;
          if (uVar6 != uVar8) goto LAB_00104c6f;
        }
        if (0.0 < fVar16) {
          iVar13 = iVar13 + 1;
          *(float *)(param_2 + lVar15) = 1.0 / ((float)iVar9 * fVar16);
          lVar15 = lVar15 + 4;
          if (iVar5 <= iVar13) {
            return;
          }
        }
        else {
          iVar13 = iVar13 + 1;
          *(undefined4 *)(param_2 + lVar15) = 0;
          lVar15 = lVar15 + 4;
          if (iVar5 <= iVar13) {
            return;
          }
        }
      } while( true );
    }
    lVar4 = *(long *)(param_1 + 4);
    lVar15 = 0;
    do {
      while( true ) {
        lVar14 = lVar15;
        fVar16 = 0.0;
        lVar15 = lVar14;
        do {
          fVar3 = *(float *)(lVar4 + lVar15 * 4);
          lVar15 = lVar15 + iVar13;
          fVar16 = fVar16 + fVar3 * fVar3;
        } while ((int)lVar15 < iVar9);
        if (fVar16 <= 0.0) break;
        *(float *)(param_2 + lVar14 * 4) = 1.0 / ((float)iVar9 * fVar16);
        lVar15 = lVar14 + 1;
        if (iVar5 <= (int)(lVar14 + 1)) goto LAB_00104d7f;
      }
      *(undefined4 *)(param_2 + lVar14 * 4) = 0;
      lVar15 = lVar14 + 1;
    } while ((int)(lVar14 + 1) < iVar5);
LAB_00104d7f:
    iVar9 = (int)lVar14 + 1;
    if (iVar13 <= iVar9) {
      return;
    }
  }
  __n = (ulong)(uint)((iVar13 + -1) - iVar9) * 4 + 4;
  if (iVar13 <= iVar9) {
    __n = 4;
  }
  memset((void *)(param_2 + (long)iVar9 * 4),0,__n);
  return;
}

