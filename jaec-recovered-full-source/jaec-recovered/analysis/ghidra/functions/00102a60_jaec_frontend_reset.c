
/* 00102a60 jaec_frontend_reset */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void jaec_frontend_reset(void *state)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (state != (void *)0x0) {
    FUN_001032b0((long)state + 8);
    iVar3 = (int)state;
    puVar5 = (undefined8 *)((long)state + 0x329a8U & 0xfffffffffffffff8);
    *(undefined8 *)((long)state + 0x32994) = 0;
    puVar4 = (undefined8 *)((long)state + 0x339a8U & 0xfffffffffffffff8);
    *(undefined8 *)((long)state + 0x329a0) = 0;
    *(undefined8 *)((long)state + 0x33998) = 0;
    puVar2 = (undefined8 *)((long)state + 0x349a8U & 0xfffffffffffffff8);
    uVar1 = (ulong)((iVar3 - (int)puVar5) + 0x339a0U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
    }
    *(undefined8 *)((long)state + 0x339a0) = 0;
    *(undefined8 *)((long)state + 0x34998) = 0;
    uVar1 = (ulong)((iVar3 - (int)puVar4) + 0x349a0U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
    }
    *(undefined8 *)((long)state + 0x349a0) = 0;
    *(undefined8 *)((long)state + 0x35198) = 0;
    uVar1 = (ulong)((iVar3 - (int)puVar2) + 0x351a0U >> 3);
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar6 * -2 + 1;
    }
    *(undefined1 *)((long)state + 0x32990) = 0;
    *(undefined8 *)((long)state + 0x38c68) = 0;
    return;
  }
  return;
}

