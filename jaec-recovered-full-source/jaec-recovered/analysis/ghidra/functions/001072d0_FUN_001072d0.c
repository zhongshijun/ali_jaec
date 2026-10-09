
/* 001072d0 FUN_001072d0 */

undefined8 * FUN_001072d0(long *param_1)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  int iVar66;
  undefined8 *puVar67;
  undefined4 *puVar68;
  undefined8 *puVar69;
  long lVar70;
  double *pdVar71;
  float *pfVar72;
  float *pfVar73;
  ulong uVar74;
  undefined8 *puVar75;
  undefined8 *puVar76;
  undefined8 *puVar77;
  float *pfVar78;
  float *pfVar79;
  float *pfVar80;
  long lVar81;
  undefined8 *puVar82;
  undefined8 *puVar83;
  undefined8 *puVar84;
  float *pfVar85;
  int iVar86;
  undefined8 *puVar87;
  long lVar88;
  undefined4 *puVar89;
  long in_FS_OFFSET;
  byte bVar90;
  double dVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar94 [16];
  undefined8 *local_278;
  double dStack_210;
  double dStack_110;
  undefined8 *local_c8;
  undefined8 *local_90;
  long local_88 [4];
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_40;
  
  bVar90 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] == 0x19ae0)) &&
     (FUN_00103410(), iVar86 = DAT_0011e100, -1 < DAT_0011e100)) {
    local_90 = (undefined8 *)0x0;
    iVar66 = posix_memalign(&local_90,0x20,(long)DAT_0011e100 * 4 + 0x185e0);
    puVar87 = local_90;
    if ((iVar66 == 0) && (local_90 != (undefined8 *)0x0)) {
      memset(local_90,0,0x185e0);
      puVar67 = puVar87 + 0x30bc;
      if (iVar86 == 0) {
        puVar67 = (undefined8 *)0x0;
      }
      *puVar87 = param_1;
      lVar18 = *param_1;
      puVar87[4] = puVar67;
      local_58 = lVar18 + 0x64c0;
      lStack_50 = lVar18 + 0x9540;
      local_68 = lVar18 + 0x6540;
      lStack_60 = lVar18 + 0x95c0;
      local_88[2] = lVar18 + 0x20;
      local_88[3] = lVar18 + 0x128c0;
      local_88[0] = lVar18 + 0x40;
      local_88[1] = lVar18 + 76000;
      if (DAT_0011e0d8 == 0) {
        puVar67 = (undefined8 *)(lVar18 + 0x129e0);
        puVar75 = (undefined8 *)(lVar18 + 0xf8c0);
        puVar69 = (undefined8 *)(lVar18 + 0xc8c0);
      }
      else {
        puVar67 = puVar87 + 8;
        puVar89 = (undefined4 *)(lVar18 + 0x129e0);
        puVar75 = puVar67;
        do {
          puVar68 = puVar89 + 6;
          *(undefined4 *)puVar75 = *puVar89;
          *(undefined4 *)(puVar75 + 0x10) = puVar89[1];
          *(undefined4 *)(puVar75 + 0x20) = puVar89[2];
          *(undefined4 *)(puVar75 + 0x30) = puVar89[3];
          *(undefined4 *)(puVar75 + 0x40) = puVar89[4];
          *(undefined4 *)(puVar75 + 0x50) = puVar89[5];
          puVar89 = puVar68;
          puVar75 = (undefined8 *)((long)puVar75 + 4);
        } while (puVar68 != (undefined4 *)(lVar18 + 0x12ce0));
        puVar75 = puVar87 + 0x68;
        iVar86 = 0;
        puVar69 = puVar75;
        puVar76 = (undefined8 *)(lVar18 + 0xf8c0);
        do {
          puVar77 = puVar76 + 0x10;
          if ((puVar76 < (undefined8 *)((long)puVar69 + 0x2e84U)) &&
             (puVar82 = puVar69, puVar69 < puVar77)) {
            do {
              uVar1 = *(undefined4 *)puVar76;
              puVar83 = puVar82 + 0x30;
              puVar76 = (undefined8 *)((long)puVar76 + 4);
              *(undefined4 *)puVar82 = uVar1;
              puVar82 = puVar83;
            } while (puVar83 != puVar69 + 0x600);
          }
          else {
            uVar1 = *(undefined4 *)((long)puVar76 + 4);
            uVar20 = *(undefined4 *)(puVar76 + 1);
            uVar21 = *(undefined4 *)((long)puVar76 + 0xc);
            *(undefined4 *)puVar69 = *(undefined4 *)puVar76;
            *(undefined4 *)(puVar69 + 0x30) = uVar1;
            *(undefined4 *)(puVar69 + 0x90) = uVar21;
            *(undefined4 *)(puVar69 + 0x60) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar76 + 0x14);
            uVar20 = *(undefined4 *)(puVar76 + 3);
            uVar21 = *(undefined4 *)((long)puVar76 + 0x1c);
            *(undefined4 *)(puVar69 + 0xc0) = *(undefined4 *)(puVar76 + 2);
            *(undefined4 *)(puVar69 + 0xf0) = uVar1;
            *(undefined4 *)(puVar69 + 0x150) = uVar21;
            *(undefined4 *)(puVar69 + 0x120) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar76 + 0x24);
            uVar20 = *(undefined4 *)(puVar76 + 5);
            uVar21 = *(undefined4 *)((long)puVar76 + 0x2c);
            *(undefined4 *)(puVar69 + 0x180) = *(undefined4 *)(puVar76 + 4);
            *(undefined4 *)(puVar69 + 0x1b0) = uVar1;
            *(undefined4 *)(puVar69 + 0x210) = uVar21;
            *(undefined4 *)(puVar69 + 0x1e0) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar76 + 0x34);
            uVar20 = *(undefined4 *)(puVar76 + 7);
            uVar21 = *(undefined4 *)((long)puVar76 + 0x3c);
            *(undefined4 *)(puVar69 + 0x240) = *(undefined4 *)(puVar76 + 6);
            *(undefined4 *)(puVar69 + 0x270) = uVar1;
            *(undefined4 *)(puVar69 + 0x2d0) = uVar21;
            *(undefined4 *)(puVar69 + 0x2a0) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar76 + 0x44);
            uVar20 = *(undefined4 *)(puVar76 + 9);
            uVar21 = *(undefined4 *)((long)puVar76 + 0x4c);
            *(undefined4 *)(puVar69 + 0x300) = *(undefined4 *)(puVar76 + 8);
            *(undefined4 *)(puVar69 + 0x330) = uVar1;
            *(undefined4 *)(puVar69 + 0x390) = uVar21;
            *(undefined4 *)(puVar69 + 0x360) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar76 + 0x54);
            uVar20 = *(undefined4 *)(puVar76 + 0xb);
            uVar21 = *(undefined4 *)((long)puVar76 + 0x5c);
            *(undefined4 *)(puVar69 + 0x3c0) = *(undefined4 *)(puVar76 + 10);
            *(undefined4 *)(puVar69 + 0x3f0) = uVar1;
            *(undefined4 *)(puVar69 + 0x450) = uVar21;
            *(undefined4 *)(puVar69 + 0x420) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar76 + 100);
            uVar20 = *(undefined4 *)(puVar76 + 0xd);
            uVar21 = *(undefined4 *)((long)puVar76 + 0x6c);
            *(undefined4 *)(puVar69 + 0x480) = *(undefined4 *)(puVar76 + 0xc);
            *(undefined4 *)(puVar69 + 0x4b0) = uVar1;
            *(undefined4 *)(puVar69 + 0x510) = uVar21;
            *(undefined4 *)(puVar69 + 0x4e0) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar76 + 0x74);
            uVar20 = *(undefined4 *)(puVar76 + 0xf);
            uVar21 = *(undefined4 *)((long)puVar76 + 0x7c);
            *(undefined4 *)(puVar69 + 0x540) = *(undefined4 *)(puVar76 + 0xe);
            *(undefined4 *)(puVar69 + 0x570) = uVar1;
            *(undefined4 *)(puVar69 + 0x5d0) = uVar21;
            *(undefined4 *)(puVar69 + 0x5a0) = uVar20;
          }
          iVar86 = iVar86 + 1;
          puVar69 = (undefined8 *)((long)puVar69 + 4);
          puVar76 = puVar77;
        } while (iVar86 != 0x60);
        puVar69 = puVar87 + 0x668;
        iVar86 = 0;
        puVar76 = puVar69;
        puVar77 = (undefined8 *)(lVar18 + 0xc8c0);
        do {
          puVar82 = puVar77 + 0x10;
          if ((puVar77 < (undefined8 *)((long)puVar76 + 0x2e84U)) &&
             (puVar83 = puVar76, puVar76 < puVar82)) {
            do {
              uVar1 = *(undefined4 *)puVar77;
              puVar84 = puVar83 + 0x30;
              puVar77 = (undefined8 *)((long)puVar77 + 4);
              *(undefined4 *)puVar83 = uVar1;
              puVar83 = puVar84;
            } while (puVar84 != puVar76 + 0x600);
          }
          else {
            uVar1 = *(undefined4 *)((long)puVar77 + 4);
            uVar20 = *(undefined4 *)(puVar77 + 1);
            uVar21 = *(undefined4 *)((long)puVar77 + 0xc);
            *(undefined4 *)puVar76 = *(undefined4 *)puVar77;
            *(undefined4 *)(puVar76 + 0x30) = uVar1;
            *(undefined4 *)(puVar76 + 0x90) = uVar21;
            *(undefined4 *)(puVar76 + 0x60) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar77 + 0x14);
            uVar20 = *(undefined4 *)(puVar77 + 3);
            uVar21 = *(undefined4 *)((long)puVar77 + 0x1c);
            *(undefined4 *)(puVar76 + 0xc0) = *(undefined4 *)(puVar77 + 2);
            *(undefined4 *)(puVar76 + 0xf0) = uVar1;
            *(undefined4 *)(puVar76 + 0x150) = uVar21;
            *(undefined4 *)(puVar76 + 0x120) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar77 + 0x24);
            uVar20 = *(undefined4 *)(puVar77 + 5);
            uVar21 = *(undefined4 *)((long)puVar77 + 0x2c);
            *(undefined4 *)(puVar76 + 0x180) = *(undefined4 *)(puVar77 + 4);
            *(undefined4 *)(puVar76 + 0x1b0) = uVar1;
            *(undefined4 *)(puVar76 + 0x210) = uVar21;
            *(undefined4 *)(puVar76 + 0x1e0) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar77 + 0x34);
            uVar20 = *(undefined4 *)(puVar77 + 7);
            uVar21 = *(undefined4 *)((long)puVar77 + 0x3c);
            *(undefined4 *)(puVar76 + 0x240) = *(undefined4 *)(puVar77 + 6);
            *(undefined4 *)(puVar76 + 0x270) = uVar1;
            *(undefined4 *)(puVar76 + 0x2d0) = uVar21;
            *(undefined4 *)(puVar76 + 0x2a0) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar77 + 0x44);
            uVar20 = *(undefined4 *)(puVar77 + 9);
            uVar21 = *(undefined4 *)((long)puVar77 + 0x4c);
            *(undefined4 *)(puVar76 + 0x300) = *(undefined4 *)(puVar77 + 8);
            *(undefined4 *)(puVar76 + 0x330) = uVar1;
            *(undefined4 *)(puVar76 + 0x390) = uVar21;
            *(undefined4 *)(puVar76 + 0x360) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar77 + 0x54);
            uVar20 = *(undefined4 *)(puVar77 + 0xb);
            uVar21 = *(undefined4 *)((long)puVar77 + 0x5c);
            *(undefined4 *)(puVar76 + 0x3c0) = *(undefined4 *)(puVar77 + 10);
            *(undefined4 *)(puVar76 + 0x3f0) = uVar1;
            *(undefined4 *)(puVar76 + 0x450) = uVar21;
            *(undefined4 *)(puVar76 + 0x420) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar77 + 100);
            uVar20 = *(undefined4 *)(puVar77 + 0xd);
            uVar21 = *(undefined4 *)((long)puVar77 + 0x6c);
            *(undefined4 *)(puVar76 + 0x480) = *(undefined4 *)(puVar77 + 0xc);
            *(undefined4 *)(puVar76 + 0x4b0) = uVar1;
            *(undefined4 *)(puVar76 + 0x510) = uVar21;
            *(undefined4 *)(puVar76 + 0x4e0) = uVar20;
            uVar1 = *(undefined4 *)((long)puVar77 + 0x74);
            uVar20 = *(undefined4 *)(puVar77 + 0xf);
            uVar21 = *(undefined4 *)((long)puVar77 + 0x7c);
            *(undefined4 *)(puVar76 + 0x540) = *(undefined4 *)(puVar77 + 0xe);
            *(undefined4 *)(puVar76 + 0x570) = uVar1;
            *(undefined4 *)(puVar76 + 0x5d0) = uVar21;
            *(undefined4 *)(puVar76 + 0x5a0) = uVar20;
          }
          iVar86 = iVar86 + 1;
          puVar76 = (undefined8 *)((long)puVar76 + 4);
          puVar77 = puVar82;
        } while (iVar86 != 0x60);
      }
      puVar87[1] = puVar67;
      lVar81 = 0;
      puVar87[2] = puVar75;
      puVar87[3] = puVar69;
      local_278 = puVar87;
      while( true ) {
        lVar88 = 0;
        fVar92 = *(float *)local_88[lVar81 + 2];
        pfVar80 = (float *)local_88[lVar81];
        puVar67 = local_278;
        while( true ) {
          lVar70 = 0;
          dVar91 = (double)fVar92;
          do {
            pfVar79 = (float *)((long)pfVar80 + lVar70);
            pfVar78 = (float *)(local_88[lVar88 + 6] + lVar70);
            lVar70 = lVar70 + 4;
            dVar91 = dVar91 + (double)*pfVar79 * (double)*pfVar78;
          } while (lVar70 != 0x80);
          iVar86 = 0;
          puVar87[lVar81 * 2 + lVar88 + 0x2eb0] = dVar91;
          pfVar79 = (float *)local_88[lVar88 + 4];
          puVar75 = puVar67;
          do {
            lVar70 = 0;
            pfVar78 = pfVar79;
            do {
              dVar91 = 0.0;
              pfVar72 = pfVar78;
              pfVar85 = pfVar80;
              do {
                pfVar73 = pfVar72 + 0x60;
                dVar91 = dVar91 + (double)*pfVar85 * (double)*pfVar72;
                pfVar72 = pfVar73;
                pfVar85 = pfVar85 + 1;
              } while (pfVar73 != pfVar78 + 0xc00);
              puVar75[lVar70 + 0x2d30] = dVar91;
              lVar70 = lVar70 + 1;
              pfVar78 = pfVar78 + 1;
            } while (lVar70 != 3);
            iVar86 = iVar86 + 1;
            puVar75 = puVar75 + 3;
            pfVar79 = pfVar79 + 3;
          } while (iVar86 != 0x20);
          puVar67 = puVar67 + 0x60;
          if (lVar88 == 1) break;
          lVar88 = 1;
        }
        local_278 = local_278 + 0xc0;
        if (lVar81 == 1) break;
        lVar81 = 1;
      }
      puVar67 = puVar87 + 0x2fb4;
      puVar89 = &DAT_0011a2c0;
      pfVar80 = (float *)(puVar87 + 0xd68);
      local_c8 = puVar87 + 0x1168;
      do {
        uVar1 = *puVar89;
        auVar94 = FUN_00107050(puVar87 + 0x2eb4,puVar87 + 0x30b4,puVar87 + 0x2d30,puVar87 + 0x2eb0,
                               lVar18 + 0x440,lVar18 + 0x3c0,lVar18 + 0x34c0,lVar18 + 0x3440,uVar1,0
                               ,puVar89[1]);
        if (puVar89[2] == 0) {
          fVar93 = 0.0;
          *puVar67 = 0;
          fVar92 = 0.0;
          puVar87[0x30b3] = 0;
          puVar75 = (undefined8 *)((ulong)(puVar87 + 0x2fb5) & 0xfffffffffffffff8);
          for (uVar74 = (ulong)(((int)puVar67 -
                                (int)(undefined8 *)((ulong)(puVar87 + 0x2fb5) & 0xfffffffffffffff8))
                                + 0x800U >> 3); uVar74 != 0; uVar74 = uVar74 - 1) {
            *puVar75 = 0;
            puVar75 = puVar75 + (ulong)bVar90 * -2 + 1;
          }
          *(undefined1 (*) [16])(puVar87 + 0x30b6) = (undefined1  [16])0x0;
        }
        else {
          FUN_00107050(auVar94._0_8_,auVar94._8_8_,0,0,puVar67,puVar87 + 0x30b6,puVar87 + 0x2d30,
                       puVar87 + 0x2eb0,lVar18 + 0x440,lVar18 + 0x3c0,lVar18 + 0x34c0,
                       lVar18 + 0x3440,uVar1,1,puVar89[2]);
          fVar92 = (float)(double)puVar87[0x30b6];
          fVar93 = (float)(double)puVar87[0x30b7];
        }
        dVar91 = (double)puVar87[0x30b5];
        *local_c8 = CONCAT44(fVar92,(float)(double)puVar87[0x30b4]);
        local_c8[1] = CONCAT44(fVar93,(float)dVar91);
        pdVar71 = (double *)(puVar87 + 0x3034);
        pfVar79 = pfVar80 + -0x200;
        do {
          dVar22 = pdVar71[-0x180];
          dVar23 = pdVar71[-0x178];
          pfVar78 = pfVar79 + 0x40;
          dVar24 = pdVar71[-0x174];
          dVar25 = pdVar71[-0x179];
          dVar91 = pdVar71[-0x17e];
          dVar26 = pdVar71[-0x17c];
          dVar2 = pdVar71[-0x176];
          dVar3 = pdVar71[-0x17b];
          dVar4 = pdVar71[-0x172];
          dVar51 = pdVar71[-0x17d];
          dVar5 = pdVar71[-0x17a];
          dVar54 = pdVar71[-0x175];
          dVar27 = pdVar71[-0x171];
          dVar45 = pdVar71[-0x177];
          dVar6 = pdVar71[-0x173];
          dVar28 = pdVar71[-0x80];
          dVar58 = pdVar71[-0x7d];
          dVar29 = pdVar71[-0x7c];
          dVar7 = pdVar71[-0x7e];
          dVar47 = pdVar71[-0x7f];
          dVar57 = pdVar71[-0x79];
          dVar49 = pdVar71[-0x7b];
          dVar8 = pdVar71[-0x7a];
          dVar30 = pdVar71[-0x78];
          dVar31 = pdVar71[-0x74];
          dVar55 = pdVar71[-0x71];
          dVar9 = pdVar71[-0x76];
          dVar48 = pdVar71[-0x73];
          dVar32 = pdVar71[-0xf8];
          dVar33 = pdVar71[-0x100];
          dVar10 = pdVar71[-0x72];
          dVar11 = pdVar71[-0xf6];
          dVar56 = pdVar71[-0x75];
          dVar12 = pdVar71[-0xfe];
          dVar46 = pdVar71[-0x77];
          dVar61 = pdVar71[-0xfd];
          dVar50 = pdVar71[-0xff];
          dVar34 = pdVar71[-0xf9];
          dVar13 = pdVar71[-0xfb];
          dVar35 = pdVar71[-0xfc];
          dVar36 = pdVar71[-0xf4];
          dVar63 = pdVar71[-0xf5];
          dVar14 = pdVar71[-0xfa];
          dVar52 = pdVar71[-0xf7];
          dVar59 = pdVar71[-0xf1];
          auVar94._8_4_ = SUB84(pdVar71[-0xf2],0);
          auVar94._0_8_ = dVar36;
          auVar94._12_4_ = (int)((ulong)pdVar71[-0xf2] >> 0x20);
          dVar53 = pdVar71[-0xf3];
          dVar37 = *pdVar71;
          dVar60 = pdVar71[0xf];
          dVar38 = pdVar71[4];
          dVar65 = pdVar71[3];
          dVar40 = pdVar71[1];
          dVar62 = pdVar71[0xb];
          dVar15 = pdVar71[2];
          dVar16 = pdVar71[6];
          dVar41 = pdVar71[9];
          dVar43 = pdVar71[0xd];
          dVar64 = pdVar71[7];
          dVar42 = pdVar71[5];
          dVar44 = pdVar71[0xc];
          dVar39 = pdVar71[8];
          dVar17 = pdVar71[0xe];
          auVar19._8_4_ = SUB84(pdVar71[10],0);
          auVar19._0_8_ = dVar39;
          auVar19._12_4_ = (int)((ulong)pdVar71[10] >> 0x20);
          dStack_210 = auVar94._8_8_;
          dStack_110 = auVar19._8_8_;
          pfVar79[4] = (float)pdVar71[-0x17f];
          pfVar79[5] = (float)dVar47;
          pfVar79[6] = (float)dVar50;
          pfVar79[7] = (float)dVar40;
          pfVar79[0xc] = (float)dVar51;
          pfVar79[0xd] = (float)dVar58;
          pfVar79[0xe] = (float)dVar61;
          pfVar79[0xf] = (float)dVar65;
          *pfVar79 = (float)dVar22;
          pfVar79[1] = (float)dVar28;
          pfVar79[2] = (float)dVar33;
          pfVar79[3] = (float)dVar37;
          pfVar79[0x10] = (float)dVar26;
          pfVar79[0x11] = (float)dVar29;
          pfVar79[0x12] = (float)dVar35;
          pfVar79[0x13] = (float)dVar38;
          pfVar79[0x1c] = (float)dVar25;
          pfVar79[0x1d] = (float)dVar57;
          pfVar79[0x1e] = (float)dVar34;
          pfVar79[0x1f] = (float)dVar64;
          pfVar79[8] = (float)dVar91;
          pfVar79[9] = (float)dVar7;
          pfVar79[10] = (float)dVar12;
          pfVar79[0xb] = (float)dVar15;
          pfVar79[0x20] = (float)dVar23;
          pfVar79[0x21] = (float)dVar30;
          pfVar79[0x22] = (float)dVar32;
          pfVar79[0x23] = (float)dVar39;
          pfVar79[0x14] = (float)dVar3;
          pfVar79[0x15] = (float)dVar49;
          pfVar79[0x16] = (float)dVar13;
          pfVar79[0x17] = (float)dVar42;
          *(ulong *)(pfVar79 + 0x28) = CONCAT44((float)dVar9,(float)dVar2);
          pfVar79[0x2a] = (float)dVar11;
          pfVar79[0x2b] = (float)dStack_110;
          pfVar79[0x18] = (float)dVar5;
          pfVar79[0x19] = (float)dVar8;
          pfVar79[0x1a] = (float)dVar14;
          pfVar79[0x1b] = (float)dVar16;
          *(ulong *)(pfVar79 + 0x30) = CONCAT44((float)dVar31,(float)dVar24);
          pfVar79[0x32] = (float)dVar36;
          pfVar79[0x33] = (float)dVar44;
          pfVar79[0x24] = (float)dVar45;
          pfVar79[0x25] = (float)dVar46;
          pfVar79[0x26] = (float)dVar52;
          pfVar79[0x27] = (float)dVar41;
          pfVar79[0x2c] = (float)dVar54;
          pfVar79[0x2d] = (float)dVar56;
          pfVar79[0x2e] = (float)dVar63;
          pfVar79[0x2f] = (float)dVar62;
          pfVar79[0x34] = (float)dVar6;
          pfVar79[0x35] = (float)dVar48;
          pfVar79[0x36] = (float)dVar53;
          pfVar79[0x37] = (float)dVar43;
          *(ulong *)(pfVar79 + 0x38) = CONCAT44((float)dVar10,(float)dVar4);
          pfVar79[0x3a] = (float)dStack_210;
          pfVar79[0x3b] = (float)dVar17;
          pfVar79[0x3c] = (float)dVar27;
          pfVar79[0x3d] = (float)dVar55;
          pfVar79[0x3e] = (float)dVar59;
          pfVar79[0x3f] = (float)dVar60;
          pdVar71 = pdVar71 + 0x10;
          pfVar79 = pfVar78;
        } while (pfVar78 != pfVar80);
        local_c8 = local_c8 + 2;
        puVar89 = puVar89 + 3;
        pfVar80 = pfVar80 + 0x200;
      } while (pfVar80 != (float *)(puVar87 + 0x1268));
      goto LAB_00107663;
    }
  }
  puVar87 = (undefined8 *)0x0;
LAB_00107663:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar87;
}

