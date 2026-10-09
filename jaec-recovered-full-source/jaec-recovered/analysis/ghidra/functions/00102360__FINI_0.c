
/* 00102360 _FINI_0 */

void _FINI_0(void)

{
  if (DAT_0011e060 != '\0') {
    return;
  }
  __cxa_finalize(PTR_LOOP_0011e000);
  FUN_001022f0();
  DAT_0011e060 = 1;
  return;
}

