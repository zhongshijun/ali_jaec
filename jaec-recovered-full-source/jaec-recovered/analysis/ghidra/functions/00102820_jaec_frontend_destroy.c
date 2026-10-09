
/* 00102820 jaec_frontend_destroy */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void jaec_frontend_destroy(void *state)

{
  if (state != (void *)0x0) {
    FUN_00103260((long)state + 8);
    FUN_00104210(*(undefined8 *)((long)state + 0x32988));
    FUN_00105170(*(undefined8 *)state);
    free(state);
    return;
  }
  return;
}

