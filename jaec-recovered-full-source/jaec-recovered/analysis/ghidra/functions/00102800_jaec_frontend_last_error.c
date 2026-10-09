
/* 00102800 jaec_frontend_last_error */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * jaec_frontend_last_error(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)__tls_get_addr(&PTR_0011df40);
  return pcVar1;
}

