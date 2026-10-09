
/* 001012f0 posix_memalign */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = posix_memalign(__memptr,__alignment,__size);
  return iVar1;
}

