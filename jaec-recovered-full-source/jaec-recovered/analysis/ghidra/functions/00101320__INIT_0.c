
/* 00101320 _INIT_0 */

/* WARNING: Removing unreachable block (ram,0x0010192e) */
/* WARNING: Removing unreachable block (ram,0x00101891) */
/* WARNING: Removing unreachable block (ram,0x0010187c) */
/* WARNING: Removing unreachable block (ram,0x0010186c) */
/* WARNING: Removing unreachable block (ram,0x00101856) */
/* WARNING: Removing unreachable block (ram,0x00101828) */
/* WARNING: Removing unreachable block (ram,0x001017e6) */
/* WARNING: Removing unreachable block (ram,0x00101524) */
/* WARNING: Removing unreachable block (ram,0x00101374) */
/* WARNING: Removing unreachable block (ram,0x00101365) */
/* WARNING: Removing unreachable block (ram,0x00101353) */
/* WARNING: Removing unreachable block (ram,0x00101346) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _INIT_0(void)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  uint in_XCR0;
  
  if (DAT_0011e140 != 0) {
    return 0;
  }
  piVar1 = (int *)cpuid_basic_info(0);
  if (*piVar1 == 0) {
    DAT_0011e140 = 3;
    return 0xffffffff;
  }
  puVar2 = (uint *)cpuid_basic_info(0);
  uVar14 = *puVar2;
  uVar4 = puVar2[1];
  if ((int)uVar14 < 1) {
    DAT_0011e140 = 3;
    return 0xffffffff;
  }
  piVar1 = (int *)cpuid_basic_info(0);
  if (*piVar1 == 0) {
    DAT_0011e140 = 3;
    return 0xffffffff;
  }
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar15 = *puVar2;
  uVar17 = puVar2[2];
  uVar9 = uVar15 >> 4 & 0xf;
  uVar13 = (ulong)puVar2[3];
  uVar10 = uVar15 >> 8 & 0xf;
  uVar11 = uVar15 >> 0xc & 0xf0;
  uVar19 = puVar2[3] & 0x8000000;
  if (uVar19 == 0) {
    bVar21 = false;
    bVar8 = false;
    bVar20 = false;
  }
  else {
    uVar5 = xinuse(0);
    uVar6 = in_XCR0 & (uint)uVar5;
    bVar20 = (uVar6 & 6) == 6;
    bVar8 = bVar20 && (uVar6 & 0xe6) == 0xe6;
    bVar21 = (uVar6 & 0x60000) == 0x60000;
  }
  if ((uVar17 & 0x8000) != 0) {
    DAT_0011e14c = DAT_0011e14c | 1;
  }
  if ((uVar17 & 0x800000) != 0) {
    DAT_0011e14c = DAT_0011e14c | 2;
  }
  if ((uVar17 & 0x2000000) != 0) {
    DAT_0011e14c = DAT_0011e14c | 8;
  }
  if ((uVar17 & 0x4000000) != 0) {
    DAT_0011e14c = DAT_0011e14c | 0x10;
  }
  if ((uVar17 & 0x100) != 0) {
    FUN_00119be0(0x2f);
  }
  if ((uVar17 & 0x1000000) != 0) {
    FUN_00119be0(0x33);
  }
  if ((uVar13 & 0x800000) != 0) {
    DAT_0011e14c = DAT_0011e14c | 4;
  }
  uVar17 = (uint)uVar13 & 0x2000000;
  if ((uVar13 & 0x2000000) != 0) {
    DAT_0011e14c = DAT_0011e14c | 0x40000;
  }
  if ((uVar13 & 2) != 0) {
    DAT_0011e14c = DAT_0011e14c | 0x80000;
  }
  if ((uVar13 & 1) != 0) {
    DAT_0011e14c = DAT_0011e14c | 0x20;
  }
  if ((uVar13 & 0x200) != 0) {
    DAT_0011e14c = DAT_0011e14c | 0x40;
  }
  if ((uVar13 & 0x80000) != 0) {
    DAT_0011e14c = DAT_0011e14c | 0x80;
  }
  if ((uVar13 & 0x100000) != 0) {
    DAT_0011e14c = DAT_0011e14c | 0x100;
  }
  if (uVar19 != 0) {
    FUN_00119be0(0x3e);
  }
  if ((uVar13 & 0x2000) != 0) {
    FUN_00119be0(0x2e);
  }
  if ((uVar13 & 0x400000) != 0) {
    FUN_00119be0(0x3a);
  }
  if (uVar17 != 0) {
    DAT_0011e14c = DAT_0011e14c | 0x40000;
  }
  if ((uVar13 & 0x40000000) != 0) {
    FUN_00119be0(0x45);
  }
  if ((uVar13 & 0x4000000) != 0) {
    FUN_00119be0(0x51);
  }
  if (bVar20) {
    if ((uVar13 & 0x10000000) != 0) {
      DAT_0011e14c = DAT_0011e14c | 0x200;
    }
    if ((uVar13 & 0x1000) != 0) {
      DAT_0011e14c = DAT_0011e14c | 0x4000;
    }
    if ((uVar13 & 0x20000000) != 0) {
      FUN_00119be0(0x31);
    }
  }
  uVar17 = 0;
  if (6 < uVar14) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar19 = *(uint *)(lVar3 + 4);
    uVar18 = (ulong)*(uint *)(lVar3 + 8);
    uVar13 = (ulong)*(uint *)(lVar3 + 0xc);
    if ((uVar19 & 8) != 0) {
      DAT_0011e14c = DAT_0011e14c | 0x10000;
    }
    if ((uVar19 & 4) != 0) {
      FUN_00119be0(0x49);
    }
    if ((uVar19 & 0x10) != 0) {
      FUN_00119be0(0x34);
    }
    if ((uVar19 & 0x800) != 0) {
      FUN_00119be0(0x47);
    }
    if (bVar20) {
      if ((uVar19 & 0x20) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x400;
      }
      if ((uVar13 & 0x400) != 0) {
        FUN_00119be0(0x21);
      }
      if ((uVar13 & 0x200) != 0) {
        FUN_00119be0(0x4e);
      }
    }
    if ((uVar19 & 0x100) != 0) {
      DAT_0011e14c = DAT_0011e14c | 0x20000;
    }
    if ((uVar19 & 1) != 0) {
      FUN_00119be0(0x32);
    }
    if ((uVar19 & 0x40000) != 0) {
      FUN_00119be0(0x46);
    }
    if ((uVar19 & 0x80000) != 0) {
      FUN_00119be0(0x28);
    }
    if ((uVar19 & 0x20000000) != 0) {
      FUN_00119be0(0x4a);
    }
    if ((uVar19 & 0x800000) != 0) {
      FUN_00119be0(0x2b);
    }
    if ((uVar19 & 0x1000000) != 0) {
      FUN_00119be0(0x2c);
    }
    if ((uVar13 & 1) != 0) {
      FUN_00119be0(0x41);
    }
    if ((uVar13 & 0x10) != 0) {
      FUN_00119be0(0x40);
    }
    if ((uVar13 & 0x400000) != 0) {
      FUN_00119be0(0x44);
    }
    if ((uVar13 & 0x100) != 0) {
      FUN_00119be0(0x20);
    }
    if ((uVar13 & 0x8000000) != 0) {
      FUN_00119be0(0x3c);
    }
    if ((uVar13 & 0x10000000) != 0) {
      FUN_00119be0(0x3b);
    }
    if ((uVar13 & 0x20000000) != 0) {
      FUN_00119be0(0x30);
    }
    if ((uVar13 & 0x2000000) != 0) {
      FUN_00119be0(0x2a);
    }
    if ((uVar13 & 0x20) != 0) {
      FUN_00119be0(0x4f);
    }
    if ((uVar13 & 0x80) != 0) {
      FUN_00119be0(0x4b);
    }
    uVar17 = (uint)(uVar13 >> 0x17) & 1;
    if ((uVar18 & 0x4000) != 0) {
      FUN_00119be0(0x48);
    }
    if ((uVar18 & 0x10000) != 0) {
      FUN_00119be0(0x4d);
    }
    if ((uVar18 & 0x40000) != 0) {
      FUN_00119be0(0x3f);
    }
    if ((uVar18 & 0x100000) != 0) {
      FUN_00119be0(0x35);
    }
    if ((uVar18 & 0x20) != 0) {
      FUN_00119be0(0x58);
    }
    if (bVar21) {
      if ((uVar18 & 0x1000000) != 0) {
        FUN_00119be0(0x55);
      }
      if ((uVar18 & 0x2000000) != 0) {
        FUN_00119be0(0x56);
      }
      if ((uVar18 & 0x400000) != 0) {
        FUN_00119be0(0x57);
      }
    }
    if (bVar8) {
      if ((uVar19 & 0x10000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x8000;
      }
      if ((int)uVar19 < 0) {
        DAT_0011e14c = DAT_0011e14c | 0x100000;
      }
      if ((uVar19 & 0x40000000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x200000;
      }
      if ((uVar19 & 0x20000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x400000;
      }
      if ((uVar19 & 0x10000000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x800000;
      }
      if ((uVar19 & 0x4000000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x2000000;
      }
      if ((uVar19 & 0x8000000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x1000000;
      }
      if ((uVar19 & 0x200000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x8000000;
      }
      if ((uVar13 & 2) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x4000000;
      }
      if ((uVar13 & 0x40) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x80000000;
      }
      if ((uVar13 & 0x800) != 0) {
        FUN_00119be0(0x22);
      }
      uVar19 = (uint)uVar13;
      if ((uVar13 & 0x1000) != 0) {
        FUN_00119be0(0x23);
      }
      if ((uVar19 & 0x4000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x40000000;
      }
      if ((uVar18 & 4) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x10000000;
      }
      if ((uVar18 & 8) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x20000000;
      }
      if ((uVar18 & 0x100) != 0) {
        FUN_00119be0(0x25);
      }
    }
    puVar2 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar13 = (ulong)*puVar2;
    if ((*puVar2 & 0x400000) != 0) {
      FUN_00119be0(0x59);
    }
    bVar16 = (byte)uVar13;
    if ((bVar20) && ((uVar13 & 0x10) != 0)) {
      FUN_00119be0(0x5d);
    }
    if ((bVar8) && ((bVar16 & 0x20) != 0)) {
      FUN_00119be0(0x24);
    }
  }
  if (0xc < uVar14) {
    puVar2 = (uint *)cpuid_Processor_Extended_States_info(0xd);
    uVar13 = (ulong)*puVar2;
    if ((*puVar2 & 1) != 0) {
      FUN_00119be0(0x53);
    }
    bVar16 = (byte)uVar13;
    if ((uVar13 & 2) != 0) {
      FUN_00119be0(0x52);
    }
    if ((bVar16 & 8) != 0) {
      FUN_00119be0(0x54);
    }
  }
  if ((0x13 < uVar14) && (lVar3 = cpuid(0x14), (*(uint *)(lVar3 + 4) & 0x10) != 0)) {
    FUN_00119be0(0x43);
  }
  if (0x18 < uVar14) {
    lVar3 = cpuid(0x19);
    uVar14 = *(uint *)(lVar3 + 4);
    if ((uVar14 & 1) != 0) {
      FUN_00119be0(0x5b);
      if ((uVar14 & 4) != 0) {
        FUN_00119be0(0x5c);
      }
      if (uVar17 != 0) {
        FUN_00119be0(0x5a);
      }
    }
  }
  puVar2 = (uint *)cpuid(0x80000000);
  uVar14 = *puVar2;
  if (0x80000000 < uVar14) {
    lVar3 = cpuid(0x80000001);
    uVar17 = *(uint *)(lVar3 + 0xc);
    uVar18 = (ulong)*(uint *)(lVar3 + 8);
    uVar13 = (ulong)uVar17;
    if ((uVar17 & 0x40) != 0) {
      DAT_0011e14c = DAT_0011e14c | 0x800;
    }
    if ((uVar17 & 1) != 0) {
      FUN_00119be0(0x36);
    }
    uVar7 = uVar13 & 0x20;
    if ((uVar13 & 0x20) != 0) {
      FUN_00119be0(0x29);
    }
    if ((uVar13 & 0x8000) != 0) {
      FUN_00119be0(0x38);
    }
    if ((uVar13 & 0x200000) != 0) {
      FUN_00119be0(0x4c);
    }
    if (uVar7 != 0) {
      FUN_00119be0(0x39);
    }
    if ((uVar13 & 0x100) != 0) {
      FUN_00119be0(0x42);
    }
    if ((uVar13 & 0x20000000) != 0) {
      FUN_00119be0(0x3d);
    }
    if ((uVar18 & 0x20000000) != 0) {
      FUN_00119be0(0x37);
    }
    iVar12 = (int)uVar18;
    if ((uVar18 & 0x40000000) != 0) {
      FUN_00119be0(0x27);
    }
    if (iVar12 < 0) {
      FUN_00119be0(0x26);
    }
    if (bVar20) {
      if ((uVar13 & 0x10000) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x1000;
      }
      if ((uVar13 & 0x800) != 0) {
        DAT_0011e14c = DAT_0011e14c | 0x2000;
      }
    }
    if (0x80000007 < uVar14) {
      lVar3 = cpuid(0x80000008);
      uVar14 = *(uint *)(lVar3 + 4);
      if ((uVar14 & 1) != 0) {
        FUN_00119be0(0x2d);
      }
      if ((uVar14 & 0x200) != 0) {
        FUN_00119be0(0x50);
      }
    }
  }
  if (uVar4 != 0x756e6547) {
    if (uVar4 != 0x68747541) {
      if (uVar4 == 0x746e6543) {
        DAT_0011e140 = 4;
        return 0;
      }
      if (uVar4 != 0x69727943) {
        if (uVar4 != 0x646f6547) {
          DAT_0011e140 = 3;
          return 0;
        }
        DAT_0011e140 = 6;
        return 0;
      }
      DAT_0011e140 = 5;
      return 0;
    }
    if (uVar10 != 0xf) {
      DAT_0011e140 = 2;
      return 0;
    }
    uVar9 = uVar9 | uVar11;
    switch(uVar15 >> 0x14 & 0xff) {
    case 1:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,4);
      if (uVar9 == 4) {
        _DAT_0011e144 = 0x500000004;
      }
      else if (uVar9 == 8) {
        _DAT_0011e144 = 0x600000004;
      }
      else if (uVar9 == 2) {
        _DAT_0011e144 = 0x400000004;
      }
      break;
    case 5:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,8);
      break;
    case 6:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,5);
      if (uVar9 != 2) {
        if (uVar9 < 0x10) {
LAB_00101f92:
          _DAT_0011e144 = CONCAT44(7,_DAT_0011e144);
          DAT_0011e140 = 2;
          return 0;
        }
        if (0x2f < uVar9) {
          if (uVar9 < 0x50) {
LAB_001021c9:
            _DAT_0011e144 = CONCAT44(9,_DAT_0011e144);
            DAT_0011e140 = 2;
            return 0;
          }
          if ((uVar9 < 0x80) || (uVar13 = (ulong)DAT_0011e14c, (DAT_0011e14c & 0x400) != 0)) {
            DAT_0011e140 = 2;
            _DAT_0011e144 = 0xa00000005;
            return 0;
          }
          iVar12 = FUN_00101300(0x53);
          if (iVar12 != 0) goto LAB_001021c9;
          if ((uVar13 & 0x10000) == 0) {
            if ((uVar13 & 0x2000) == 0) {
              DAT_0011e140 = 2;
              return 0;
            }
            goto LAB_00101f92;
          }
        }
      }
      _DAT_0011e144 = CONCAT44(8,_DAT_0011e144);
      break;
    case 7:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,9);
      break;
    case 8:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,10);
      if (0x1f < uVar9) {
        if ((0x2f < uVar9) || (iVar12 = FUN_00101300(0x2c), iVar12 != 0)) {
          _DAT_0011e144 = CONCAT44(0x14,_DAT_0011e144);
          DAT_0011e140 = 2;
          return 0;
        }
        iVar12 = FUN_00101300(0x2d);
        if (iVar12 == 0) {
          DAT_0011e140 = 2;
          return 0;
        }
      }
      _DAT_0011e144 = CONCAT44(0xb,_DAT_0011e144);
      break;
    case 10:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,0xf);
      if ((uVar9 < 0x10) || (iVar12 = FUN_00101300(0x4e), iVar12 != 0)) {
        _DAT_0011e144 = CONCAT44(0x1a,_DAT_0011e144);
      }
    }
    DAT_0011e140 = 2;
    return 0;
  }
  if (uVar10 != 6) {
    DAT_0011e140 = 1;
    return 0;
  }
  uVar9 = uVar9 | uVar11;
  if (0xa7 < uVar9) {
    DAT_0011e140 = 1;
    return 0;
  }
  if (0x46 < uVar9) {
    switch(uVar9) {
    case 0x47:
    case 0x4f:
    case 0x56:
      goto LAB_0010198b;
    default:
      DAT_0011e140 = 1;
      return 0;
    case 0x4a:
    case 0x4c:
    case 0x4d:
    case 0x5a:
    case 0x5d:
    case 0x75:
switchD_00101b2d_caseD_4a:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,6);
      DAT_0011e140 = 1;
      return 0;
    case 0x4e:
    case 0x5e:
    case 0x8e:
    case 0x9e:
    case 0xa5:
    case 0xa6:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0xf00000003;
      return 0;
    case 0x55:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,3);
      iVar12 = FUN_00101300(0x24);
      if (iVar12 != 0) {
        _DAT_0011e144 = CONCAT44(0x17,_DAT_0011e144);
        DAT_0011e140 = 1;
        return 0;
      }
      iVar12 = FUN_00101300(0x22);
      if (iVar12 == 0) {
        _DAT_0011e144 = CONCAT44(0x10,_DAT_0011e144);
        DAT_0011e140 = 1;
        return 0;
      }
      _DAT_0011e144 = CONCAT44(0x15,_DAT_0011e144);
      DAT_0011e140 = 1;
      return 0;
    case 0x57:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,7);
      DAT_0011e140 = 1;
      return 0;
    case 0x5c:
    case 0x5f:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,0xc);
      DAT_0011e140 = 1;
      return 0;
    case 0x66:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0x1100000003;
      return 0;
    case 0x6a:
    case 0x6c:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0x1300000003;
      return 0;
    case 0x7a:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,0xd);
      DAT_0011e140 = 1;
      return 0;
    case 0x7d:
    case 0x7e:
    case 0x9d:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0x1200000003;
      return 0;
    case 0x85:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,0xb);
      DAT_0011e140 = 1;
      return 0;
    case 0x86:
    case 0x96:
    case 0x9c:
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,0xe);
      DAT_0011e140 = 1;
      return 0;
    case 0x8c:
    case 0x8d:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0x1600000003;
      return 0;
    case 0x8f:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0x1800000003;
      return 0;
    case 0x97:
    case 0x9a:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0x1900000003;
      return 0;
    case 0xa7:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0x1b00000003;
      return 0;
    }
  }
  if (0x37 < uVar9) {
    uVar9 = uVar9 - 0x3a;
    if (0xc < uVar9) {
      DAT_0011e140 = 1;
      return 0;
    }
    uVar13 = 1L << ((byte)uVar9 & 0x3f);
    if ((uVar13 & 0x1824) != 0) {
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0xd00000003;
      return 0;
    }
    if ((uVar13 & 0x11) != 0) {
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0xc00000003;
      return 0;
    }
    if (uVar9 != 3) {
      DAT_0011e140 = 1;
      return 0;
    }
LAB_0010198b:
    DAT_0011e140 = 1;
    _DAT_0011e144 = 0xe00000003;
    return 0;
  }
  if (uVar9 < 0x25) {
    if (0x10 < uVar9 - 0xf) {
      DAT_0011e140 = 1;
      return 0;
    }
    uVar13 = 1L << ((byte)uVar9 & 0x3f);
    if ((uVar13 & 0x20808000) != 0) {
      _DAT_0011e144 = CONCAT44(_DAT_0011e148,2);
      DAT_0011e140 = 1;
      return 0;
    }
    if ((uVar13 & 0xc4000000) != 0) {
LAB_0010198b:
      DAT_0011e140 = 1;
      _DAT_0011e144 = 0x100000003;
      return 0;
    }
    if (uVar9 != 0x1c) {
      DAT_0011e140 = 1;
      return 0;
    }
switchD_00101bd8_caseD_26:
    _DAT_0011e144 = CONCAT44(_DAT_0011e148,1);
  }
  else {
    switch(uVar9) {
    case 0x25:
    case 0x2c:
    case 0x2f:
      _DAT_0011e144 = 0x200000003;
      break;
    case 0x26:
      goto switchD_00101bd8_caseD_26;
    case 0x2a:
    case 0x2d:
      _DAT_0011e144 = 0x300000003;
      break;
    case 0x2e:
      goto LAB_0010198b;
    case 0x37:
      goto switchD_00101b2d_caseD_4a;
    }
  }
  DAT_0011e140 = 1;
  return 0;
}

