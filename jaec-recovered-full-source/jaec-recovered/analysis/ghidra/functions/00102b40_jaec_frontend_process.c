
/* 00102b40 jaec_frontend_process */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int jaec_frontend_process(void *state,short *mic,short *ref,int sample_count,short *output)

{
  void *__s;
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  float fVar11;
  int local_74;
  int local_3c;
  
  bVar10 = 0;
  if ((((state == (void *)0x0) || (mic == (short *)0x0)) ||
      (ref == (short *)0x0 || output == (short *)0x0)) ||
     ((sample_count < 1 || (sample_count % 0xa0 != 0)))) {
    puVar4 = (undefined8 *)__tls_get_addr(&PTR_0011df40);
    local_3c = -1;
    *puVar4 = 0x2064696c61766e69;
    puVar4[1] = 0x20737365636f7270;
    puVar4[2] = 0x746e656d75677261;
    *(undefined2 *)(puVar4 + 3) = 0x73;
  }
  else {
    local_74 = 0;
    do {
      iVar1 = memcmp(ref,&DAT_0011a000,0x140);
      if (iVar1 == 0) {
        if (*(int *)((long)state + 0x32994) != 0) {
          if (*(uint *)((long)state + 0x32998) < 300) {
            *(uint *)((long)state + 0x32998) = *(uint *)((long)state + 0x32998) + 1;
          }
          else {
            *(undefined4 *)((long)state + 0x32994) = 0;
          }
        }
      }
      else {
        *(undefined8 *)((long)state + 0x32994) = 1;
      }
      iVar1 = *(int *)((long)state + 0x38c68);
      FUN_001023b0((long)state + 0x339a0,iVar1,ref);
      FUN_001023b0((long)state + 0x329a0,iVar1,mic);
      iVar1 = (iVar1 + 0xa0) % 0x200;
      *(int *)((long)state + 0x38c68) = iVar1;
      if (*(char *)((long)state + 0x32990) == '\0') {
        output[0] = 0;
        output[1] = 0;
        output[2] = 0;
        output[3] = 0;
        output[0x9c] = 0;
        output[0x9d] = 0;
        output[0x9e] = 0;
        output[0x9f] = 0;
        puVar4 = (undefined8 *)((ulong)(output + 4) & 0xfffffffffffffff8);
        for (uVar7 = (ulong)(((int)output -
                             (int)(undefined8 *)((ulong)(output + 4) & 0xfffffffffffffff8)) + 0x140U
                            >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + (ulong)bVar10 * -2 + 1;
        }
        *(undefined1 *)((long)state + 0x32990) = 1;
      }
      else {
        lVar3 = (long)state + 0x371a8;
        lVar8 = (long)iVar1 * 4;
        lVar9 = (long)state + 0x351a0;
        lVar2 = (long)state + 0x329a0 + lVar8;
        __s = (void *)((long)state + 0x349a0);
        if (*(int *)((long)state + 0x32994) == 1) {
          FUN_00104420(*(undefined8 *)((long)state + 0x18),lVar8 + (long)state + 0x339a0,lVar2,
                       (long)state + 0x359a0,(long)state + 0x369a0);
          FUN_00103330((long)state + 8,(long)state + 0x369a0,lVar3,(long)state + 0x379c0,
                       (long)state + 0x381e0);
          FUN_00104ad0(*(undefined8 *)((long)state + 0x32988),(long)state + 0x381e0,lVar9,__s,
                       *(undefined4 *)((long)state + 0x38c6c));
        }
        else {
          FUN_00104280(*(undefined8 *)((long)state + 0x18),lVar2,lVar9,lVar3);
          FUN_00104ad0(*(undefined8 *)((long)state + 0x32988),lVar3,lVar9,__s,
                       *(undefined4 *)((long)state + 0x38c6c));
        }
        iVar1 = *(int *)((long)state + 0x38c6c);
        lVar3 = (long)state + 0x389e8;
        iVar6 = 0x200 - iVar1;
        puVar4 = (undefined8 *)((long)__s + (long)iVar1 * 4);
        if (iVar6 < 0xa0) {
          lVar9 = (long)iVar6;
          if (DAT_0011e118 == (code *)0x0) {
            lVar2 = 0;
            if (0 < iVar6) {
              do {
                while ((fVar11 = *(float *)((long)puVar4 + lVar2 * 4) *
                                 *(float *)((long)state + lVar2 * 4 + 0x389e8),
                       ((uint)fVar11 & 0x7f800000) == 0x7f800000 && (((uint)fVar11 & 0x7fffff) != 0)
                       )) {
                  output[lVar2] = 0;
                  lVar2 = lVar2 + 1;
                  if (lVar9 == lVar2) goto LAB_00102fd0;
                }
                fVar11 = fVar11 * 32768.0;
                sVar5 = 0x7fff;
                if (fVar11 < 32767.0) {
                  if (fVar11 <= -32768.0) {
                    sVar5 = -0x8000;
                  }
                  else {
                    sVar5 = (short)(long)ROUND(fVar11);
                  }
                }
                output[lVar2] = sVar5;
                lVar2 = lVar2 + 1;
              } while (lVar9 != lVar2);
            }
LAB_00102fd0:
            memset(puVar4,0,lVar9 * 4);
          }
          else {
            (*DAT_0011e118)(puVar4,lVar3,output);
          }
          if (DAT_0011e118 == (code *)0x0) {
            uVar7 = 0;
            if (0 < iVar1 + -0x160) {
              while( true ) {
                fVar11 = *(float *)((long)state + uVar7 * 4 + 0x349a0) *
                         *(float *)(lVar3 + lVar9 * 4 + uVar7 * 4);
                if ((((uint)fVar11 & 0x7f800000) == 0x7f800000) && (((uint)fVar11 & 0x7fffff) != 0))
                {
                  output[lVar9 + uVar7] = 0;
                }
                else {
                  fVar11 = fVar11 * 32768.0;
                  sVar5 = 0x7fff;
                  if (fVar11 < 32767.0) {
                    if (fVar11 <= -32768.0) {
                      sVar5 = -0x8000;
                    }
                    else {
                      sVar5 = (short)(long)ROUND(fVar11);
                    }
                  }
                  output[lVar9 + uVar7] = sVar5;
                }
                if (iVar1 - 0x161 == uVar7) break;
                uVar7 = uVar7 + 1;
              }
            }
            memset(__s,0,(long)iVar1 * 4 - 0x580);
          }
          else {
            (*DAT_0011e118)(__s);
          }
        }
        else if (DAT_0011e118 == (code *)0x0) {
          lVar3 = 0;
          do {
            fVar11 = *(float *)((long)puVar4 + lVar3 * 4) *
                     *(float *)((long)state + lVar3 * 4 + 0x389e8);
            if ((((uint)fVar11 & 0x7f800000) != 0x7f800000) ||
               (sVar5 = 0, ((uint)fVar11 & 0x7fffff) == 0)) {
              fVar11 = fVar11 * 32768.0;
              sVar5 = 0x7fff;
              if (fVar11 < 32767.0) {
                if (fVar11 <= -32768.0) {
                  sVar5 = -0x8000;
                }
                else {
                  sVar5 = (short)(long)ROUND(fVar11);
                }
              }
            }
            output[lVar3] = sVar5;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 0xa0);
          *puVar4 = 0;
          puVar4[0x4f] = 0;
          uVar7 = (ulong)(((int)puVar4 -
                          (int)(undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8)) + 0x280U >>
                         3);
          puVar4 = (undefined8 *)((ulong)(puVar4 + 1) & 0xfffffffffffffff8);
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + (ulong)bVar10 * -2 + 1;
          }
        }
        else {
          (*DAT_0011e118)(puVar4,lVar3,output,0xa0);
        }
        *(int *)((long)state + 0x38c6c) = (*(int *)((long)state + 0x38c6c) + 0xa0) % 0x200;
      }
      local_74 = local_74 + 0xa0;
      ref = ref + 0xa0;
      output = output + 0xa0;
      mic = mic + 0xa0;
      local_3c = 0;
    } while (local_74 < sample_count);
  }
  return local_3c;
}

