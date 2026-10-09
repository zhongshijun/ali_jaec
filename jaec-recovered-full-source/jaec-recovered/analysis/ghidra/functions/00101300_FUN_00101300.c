
/* 00101300 FUN_00101300 */

uint FUN_00101300(uint param_1)

{
  return 1 << ((byte)param_1 & 0x1f) & *(uint *)(&DAT_0011e130 + (~-(uint)(param_1 < 0x40) & 4));
}

