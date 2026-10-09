
/* 00119be0 FUN_00119be0 */

void FUN_00119be0(uint param_1)

{
  *(uint *)(&DAT_0011e130 + (~-(uint)(param_1 < 0x40) & 4)) =
       *(uint *)(&DAT_0011e130 + (~-(uint)(param_1 < 0x40) & 4)) | 1 << ((byte)param_1 & 0x1f);
  return;
}

