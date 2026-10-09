
/* 00103410 FUN_00103410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00103410(void)

{
  bool bVar1;
  
  if (DAT_0011e064 != 2) {
    LOCK();
    bVar1 = DAT_0011e064 == 0;
    if (bVar1) {
      DAT_0011e064 = 1;
    }
    UNLOCK();
    if (bVar1) {
      DAT_0011e080 = FUN_00108920;
      DAT_0011e088 = FUN_00105b10;
      DAT_0011e0a0 = 0;
      DAT_0011e0d0 = FUN_00108b00;
      _DAT_0011e0b8 = 0;
      DAT_0011e0e0 = FUN_00109170;
      _DAT_0011e0d8 = 0;
      DAT_0011e0e8 = (code *)0x0;
      DAT_0011e0f0 = (code *)0x0;
      DAT_0011e0f8 = FUN_00109c20;
      DAT_0011e100 = 0x3020;
      _DAT_0011e090 = (undefined1  [16])0x0;
      DAT_0011e0a8 = FUN_00105c30;
      DAT_0011e0b0 = FUN_00106900;
      _DAT_0011e0c0 = (undefined1  [16])0x0;
      DAT_0011e108 = FUN_001093c0;
      DAT_0011e110 = FUN_00109830;
      _DAT_0011e118 = (undefined1  [16])0x0;
      _INIT_0();
      if (((DAT_0011e14c & 0x400) != 0) && ((DAT_0011e14c & 0x4000) != 0)) {
        DAT_0011e080 = FUN_00112d40;
        DAT_0011e088 = FUN_0010f910;
        DAT_0011e0a8 = FUN_001105a0;
        DAT_0011e0b0 = FUN_00111c90;
        DAT_0011e0e0 = FUN_00115760;
        DAT_0011e0e8 = FUN_001151e0;
        DAT_0011e100 = 0;
        _DAT_0011e0b8 = 0x100000001;
        DAT_0011e0f0 = FUN_00115340;
        DAT_0011e0f8 = FUN_00115ed0;
        DAT_0011e108 = FUN_001133f0;
        DAT_0011e110 = FUN_00113d20;
        _DAT_0011e0c0 = ZEXT816(0x10f2b0);
        DAT_0011e0d0 = FUN_001142b0;
        _DAT_0011e0d8 = 1;
        DAT_0011e120 = FUN_00116ee0;
        DAT_0011e118 = FUN_00116980;
      }
      DAT_0011e064 = 2;
    }
    else {
      do {
      } while (DAT_0011e064 != 2);
    }
  }
  return;
}

