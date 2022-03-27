// positive sp value has been detected, the output may be wrong!
void __fastcall sub_72630(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r6
  _DWORD *v5; // r7
  int v6; // r0
  _DWORD *v7; // r1
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r4
  _DWORD *v17; // r2
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r2
  int v24; // r3
  int v25; // r2
  int v26; // r3
  int v27; // r8
  int v28; // r10
  int v29; // r0
  int v30; // r1
  unsigned int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r1
  _DWORD *v37; // r2
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r1
  int v47; // r0
  int v48; // r1
  int v49; // r0
  int v50; // r2
  int v51; // r3
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r1
  _DWORD v57[71]; // [sp-25E8h] [bp-2870h] BYREF
  int v58; // [sp-24CCh] [bp-2754h]
  int v59; // [sp-24C8h] [bp-2750h]
  int v60; // [sp-24C4h] [bp-274Ch]
  int v61; // [sp-24C0h] [bp-2748h]
  int v62; // [sp-24BCh] [bp-2744h]
  int v63; // [sp-24B8h] [bp-2740h]
  int v64; // [sp-24B4h] [bp-273Ch]
  int v65; // [sp-24B0h] [bp-2738h]
  int v66; // [sp-24ACh] [bp-2734h]
  int v67; // [sp-24A8h] [bp-2730h]
  int v68; // [sp-24A4h] [bp-272Ch]
  int v69; // [sp-24A0h] [bp-2728h]
  int v70; // [sp-249Ch] [bp-2724h]
  int v71; // [sp-2498h] [bp-2720h]
  int v72; // [sp-2494h] [bp-271Ch]
  int v73; // [sp-2490h] [bp-2718h]
  int v74; // [sp-248Ch] [bp-2714h]
  int v75; // [sp-2488h] [bp-2710h]
  int v76; // [sp-2484h] [bp-270Ch]
  int v77; // [sp-2480h] [bp-2708h]
  int v78; // [sp-247Ch] [bp-2704h]
  int v79; // [sp-2478h] [bp-2700h]
  int v80; // [sp-2474h] [bp-26FCh]
  int v81; // [sp-2470h] [bp-26F8h]
  int v82; // [sp-246Ch] [bp-26F4h]
  int v83; // [sp-2468h] [bp-26F0h]
  int v84; // [sp-2464h] [bp-26ECh]
  int v85; // [sp-2460h] [bp-26E8h]
  int v86; // [sp-245Ch] [bp-26E4h]
  int v87; // [sp-2458h] [bp-26E0h]
  int v88; // [sp-2454h] [bp-26DCh]
  int v89; // [sp-2450h] [bp-26D8h]
  int v90; // [sp-244Ch] [bp-26D4h]
  int v91; // [sp-2448h] [bp-26D0h]
  int v92; // [sp-2444h] [bp-26CCh]
  int v93; // [sp-2440h] [bp-26C8h]
  int v94; // [sp-243Ch] [bp-26C4h]
  int v95; // [sp-2438h] [bp-26C0h]
  int v96; // [sp-2434h] [bp-26BCh]
  int v97; // [sp-2430h] [bp-26B8h]
  int v98; // [sp-242Ch] [bp-26B4h]
  int v99; // [sp-2428h] [bp-26B0h]
  char v100; // [sp-23ECh] [bp-2674h]
  char v101; // [sp-23EBh] [bp-2673h]
  _DWORD *v112; // [sp-23E0h] [bp-2668h]
  _DWORD *v113; // [sp-23DCh] [bp-2664h]
  _DWORD *v114; // [sp-23D8h] [bp-2660h]
  _DWORD *v115; // [sp-23D4h] [bp-265Ch]
  _DWORD v116[999]; // [sp-2360h] [bp-25E8h] BYREF
  __int64 v117; // [sp-13C4h] [bp-164Ch]
  int v118; // [sp-13BCh] [bp-1644h]
  int v119; // [sp-13B8h] [bp-1640h]
  _DWORD *v120; // [sp-13B4h] [bp-163Ch]
  _DWORD v121[20]; // [sp-984h] [bp-C0Ch] BYREF
  int v122; // [sp-934h] [bp-BBCh]
  _DWORD *v123; // [sp-930h] [bp-BB8h]
  _DWORD v124[143]; // [sp-92Ch] [bp-BB4h] BYREF
  __int64 v125; // [sp-6F0h] [bp-978h]
  int v126; // [sp-6E8h] [bp-970h]
  int v127; // [sp-6E4h] [bp-96Ch]

  v5 = v116;
  v4 = v57;
  v57[4] = a1;
  v57[5] = dword_E1758;
  v57[6] = *(_DWORD *)dword_E1758;
  v57[8] = 378;
  v57[7] = 287;
  v101 = 0;
  v100 = 1;
  v29 = dword_EEE2C;
  __dmb(0xBu);
  v57[10] = 415;
  v57[9] = 251;
  if ( v29 == 0 )
  {
    v57[12] = 77;
    v57[11] = 168;
    byte_E5510 = byte_DCAD0 ^ 0xB5;
    byte_E5511 = byte_DCAD1 ^ 0x35;
    byte_E5512 = byte_DCAD2 ^ 0x70;
    byte_E5513 = byte_DCAD3 ^ 0x60;
    byte_E5514 = byte_DCAD4 ^ 0xC6;
    byte_E5515 = byte_DCAD5 ^ 0xC4;
    byte_E5516 = byte_DCAD6 ^ 0x4A;
    byte_E5517 = byte_DCAD7 ^ 0x92;
    byte_E5518 = byte_DCAD8 ^ 0xB;
    byte_E5519 = byte_DCAD9 ^ 0x4F;
    byte_E551A = byte_DCADA ^ 0xF3;
    byte_E551B = byte_DCADB ^ 0xAB;
    byte_E551C = byte_DCADC ^ 0xB0;
    byte_E551D = byte_DCADD ^ 0x92;
    byte_E551E = byte_DCADE ^ 0x70;
    byte_E551F = byte_DCADF ^ 0xA;
    byte_E5520 = byte_DCAE0 ^ 0x7B;
    v57[14] = 30;
    v57[13] = 17;
  }
  v57[16] = 148;
  v57[15] = 351;
  __dmb(0xBu);
  *(_DWORD *)(dword_7580C + 480804) = 1;
  v55 = *(_DWORD *)(dword_75810 + 480806);
  __dmb(0xBu);
  v57[18] = 313;
  v57[17] = 341;
  if ( v55 == 0 )
  {
    v57[20] = 385;
    v57[19] = 183;
    byte_E5521 = byte_DCAE1 ^ 0x9F;
    byte_E5522 = byte_DCAE2 ^ 0x9C;
    byte_E5523 = byte_DCAE3 ^ 0x4A;
    byte_E5524 = byte_DCAE4 ^ 0xE2;
    v57[22] = 13;
    v57[21] = 126;
  }
  v57[24] = 94;
  v57[23] = 14;
  __dmb(0xBu);
  dword_EEE30 = 1;
  v45 = dword_EEE34;
  __dmb(0xBu);
  v57[26] = 180;
  v57[25] = 313;
  if ( v45 == 0 )
  {
    v57[28] = 430;
    v57[27] = 72;
    byte_E5525 = byte_DCAE5 ^ 0xED;
    byte_E5526 = byte_DCAE6 ^ 0x5E;
    byte_E5527 = byte_DCAE7 ^ 0x17;
    byte_E5528 = byte_DCAE8 ^ 0xB;
    byte_E5529 = byte_DCAE9 ^ 0x79;
    byte_E552A = byte_DCAEA ^ 0x15;
    v57[30] = 370;
    v57[29] = 198;
  }
  __dmb(0xBu);
  dword_EEE34 = 1;
  if ( dword_EEE38 )
  {
    __dmb(0xBu);
  }
  else
  {
    __dmb(0xBu);
    v57[32] = 25;
    v57[31] = 13;
    byte_E552B = byte_DCAEB ^ 0x26;
    byte_E552C = byte_DCAEC ^ 0x30;
    byte_E552D = byte_DCAED ^ 0x7D;
    byte_E552E = byte_DCAEE ^ 0x9C;
    v57[34] = 16;
    v57[33] = 38;
  }
  v57[36] = 431;
  v57[35] = 425;
  __dmb(0xBu);
  dword_EEE38 = 1;
  v53 = dword_EEE3C;
  __dmb(0xBu);
  v57[38] = 385;
  v57[37] = 272;
  if ( v53 == 0 )
  {
    v57[40] = 109;
    v57[39] = 2;
    byte_E5530 = byte_DCAF0 ^ 0x16;
    byte_E5531 = byte_DCAF1 ^ 0x98;
    byte_E5532 = byte_DCAF2 ^ 0x98;
    byte_E5533 = byte_DCAF3 ^ 0x22;
    byte_E5534 = byte_DCAF4 ^ 0x1C;
    byte_E5535 = byte_DCAF5 ^ 0xE7;
    byte_E5536 = byte_DCAF6 ^ 0x8F;
    byte_E5537 = byte_DCAF7 ^ 0xEF;
    byte_E5538 = byte_DCAF8 ^ 0x81;
    byte_E5539 = byte_DCAF9 ^ 0xAC;
    byte_E553A = byte_DCAFA ^ 0xE5;
    byte_E553B = byte_DCAFB ^ 0x5D;
    byte_E553C = byte_DCAFC ^ 0x37;
    byte_E553D = byte_DCAFD ^ 0x91;
    byte_E553E = byte_DCAFE ^ 1;
    byte_E553F = byte_DCAFF ^ 0x97;
    byte_E5540 = byte_DCB00 ^ 0x71;
    byte_E5541 = byte_DCB01 ^ 0x84;
    byte_E5542 = byte_DCB02 ^ 0xE7;
    byte_E5543 = byte_DCB03 ^ 0x16;
    byte_E5544 = byte_DCB04 ^ 0x4B;
    byte_E5545 = byte_DCB05 ^ 0xAB;
    byte_E5546 = byte_DCB06 ^ 0xDE;
    v57[42] = 126;
    v57[41] = 455;
  }
  v57[44] = 369;
  v57[43] = 36;
  __dmb(0xBu);
  dword_EEE3C = 1;
  v32 = dword_EEE40;
  __dmb(0xBu);
  v57[46] = 210;
  v57[45] = 69;
  if ( v32 == 0 )
  {
    byte_E5547 = byte_DCB07 ^ 0xAC;
    byte_E5548 = byte_DCB08 ^ 0x1B;
    byte_E5549 = byte_DCB09 ^ 0x96;
  }
  __dmb(0xBu);
  *(_DWORD *)(dword_75804 + 481144) = 1;
  v56 = 1758425489;
  if ( !*(_DWORD *)(dword_75808 + 481146) )
    v56 = -2070799387;
  __dmb(0xBu);
  if ( v56 == -2070799387 )
  {
    v57[48] = 249;
    v57[47] = 453;
    byte_E5550 = byte_DCB10 ^ 0x93;
    byte_E5551 = byte_DCB11 ^ 0x16;
    byte_E5552 = byte_DCB12 ^ 0x8A;
    byte_E5553 = byte_DCB13 ^ 8;
    byte_E5554 = byte_DCB14 ^ 0x8E;
    byte_E5555 = byte_DCB15 ^ 0x5A;
    byte_E5556 = byte_DCB16 ^ 0x16;
    byte_E5557 = byte_DCB17 ^ 0xC1;
    byte_E5558 = byte_DCB18 ^ 0xDB;
    byte_E5559 = byte_DCB19 ^ 0x73;
    byte_E555A = byte_DCB1A ^ 0x9C;
    byte_E555B = byte_DCB1B ^ 0xB;
    byte_E555C = byte_DCB1C ^ 0xCA;
    byte_E555D = byte_DCB1D ^ 0xEC;
    byte_E555E = byte_DCB1E ^ 0xCD;
    byte_E555F = byte_DCB1F ^ 0x11;
    byte_E5560 = byte_DCB20 ^ 0x5E;
    byte_E5561 = byte_DCB21 ^ 0xC3;
    byte_E5562 = byte_DCB22 ^ 0x3B;
    byte_E5563 = byte_DCB23 ^ 0xE6;
    byte_E5564 = byte_DCB24 ^ 0x8F;
    byte_E5565 = byte_DCB25 ^ 0x7B;
    byte_E5566 = byte_DCB26 ^ 0x5F;
    byte_E5567 = byte_DCB27 ^ 0x5B;
    byte_E5568 = byte_DCB28 ^ 0xBF;
    byte_E5569 = byte_DCB29 ^ 0x69;
    byte_E556A = byte_DCB2A ^ 0x22;
    byte_E556B = byte_DCB2B ^ 0xF2;
    byte_E556C = byte_DCB2C ^ 0xB;
    byte_E556D = byte_DCB2D ^ 0xE5;
    byte_E556E = byte_DCB2E ^ 0xF1;
    byte_E556F = byte_DCB2F ^ 0xFA;
    byte_E5570 = byte_DCB30 ^ 0x1E;
    byte_E5571 = byte_DCB31 ^ 0xF3;
    byte_E5572 = byte_DCB32 ^ 0x43;
    byte_E5573 = byte_DCB33 ^ 0x32;
    byte_E5574 = byte_DCB34 ^ 0x81;
    byte_E5575 = byte_DCB35 ^ 0xCD;
    byte_E5576 = byte_DCB36 ^ 0x67;
    byte_E5577 = byte_DCB37 ^ 0xA2;
    byte_E5578 = byte_DCB38 ^ 0x82;
    byte_E5579 = byte_DCB39 ^ 0x2E;
    byte_E557A = byte_DCB3A ^ 6;
    byte_E557B = byte_DCB3B ^ 0xB8;
    byte_E557C = byte_DCB3C ^ 0x1F;
    byte_E557D = byte_DCB3D ^ 0xC4;
    byte_E557E = byte_DCB3E ^ 0x36;
    byte_E557F = byte_DCB3F ^ 0xFB;
    byte_E5580 = byte_DCB40 ^ 0x87;
    byte_E5581 = byte_DCB41 ^ 0x6D;
    byte_E5582 = byte_DCB42 ^ 0x5A;
    byte_E5583 = byte_DCB43 ^ 0x2C;
    byte_E5584 = byte_DCB44 ^ 0xE9;
    byte_E5585 = byte_DCB45 ^ 0x9B;
    byte_E5586 = byte_DCB46 ^ 0x17;
    byte_E5587 = byte_DCB47 ^ 0xC1;
    byte_E5588 = byte_DCB48 ^ 0x5A;
    byte_E5589 = byte_DCB49 ^ 0xEA;
    byte_E558A = byte_DCB4A ^ 0xCD;
    byte_E558B = byte_DCB4B ^ 0x5A;
    byte_E558C = byte_DCB4C ^ 0x61;
    byte_E558D = byte_DCB4D ^ 0xB1;
    byte_E558E = byte_DCB4E ^ 0x18;
    byte_E558F = byte_DCB4F ^ 0x77;
    byte_E5590 = byte_DCB50 ^ 0xEF;
    byte_E5591 = byte_DCB51 ^ 0x65;
    v57[50] = 338;
    v57[49] = 440;
  }
  v57[52] = 157;
  v57[51] = 422;
  __dmb(0xBu);
  dword_EEE44 = 1;
  v21 = dword_EEE48;
  __dmb(0xBu);
  v57[54] = 117;
  v57[53] = 216;
  if ( v21 == 0 )
  {
    v57[56] = 19;
    v57[55] = 9;
    byte_E5592 = byte_DCB52 ^ 0x1C;
    byte_E5593 = byte_DCB53 ^ 0x73;
    byte_E5594 = byte_DCB54 ^ 0x35;
    byte_E5595 = byte_DCB55 ^ 0xDF;
    byte_E5596 = byte_DCB56 ^ 0x49;
    byte_E5597 = byte_DCB57 ^ 8;
    byte_E5598 = byte_DCB58 ^ 0x6D;
    v57[58] = 455;
    v57[57] = 133;
  }
  v57[60] = 262;
  v57[59] = 490;
  __dmb(0xBu);
  *(_DWORD *)(dword_75814 + 480390) = 1;
  v54 = *(_DWORD *)(dword_75818 + 480392);
  __dmb(0xBu);
  v57[62] = 503;
  v57[61] = 307;
  if ( v54 == 0 )
  {
    v57[64] = 18;
    v57[63] = 19;
    byte_E5599 = byte_DCB59 ^ 0xD9;
    byte_E559A = byte_DCB5A ^ 0x65;
    byte_E559B = byte_DCB5B ^ 0x85;
    v57[66] = 153;
    v57[65] = 194;
  }
  v57[68] = 414;
  v57[67] = 423;
  __dmb(0xBu);
  dword_EEE4C = 1;
  v22 = dword_EEE50;
  __dmb(0xBu);
  v57[70] = 92;
  v57[69] = 93;
  if ( v22 == 0 )
  {
    v59 = 46;
    v58 = 236;
    *(_BYTE *)(dword_75820 + 480586) = *(_BYTE *)(dword_7581C + 480584) ^ 0xDE;
    *(_BYTE *)(dword_75820 + 480587) = *(_BYTE *)(dword_7581C + 480585) ^ 0xF3;
    *(_BYTE *)(dword_75820 + 480588) = *(_BYTE *)(dword_7581C + 480586) ^ 0x3E;
    *(_BYTE *)(dword_75820 + 480589) = *(_BYTE *)(dword_7581C + 480587) ^ 0x99;
    *(_BYTE *)(dword_75820 + 480590) = *(_BYTE *)(dword_7581C + 480588) ^ 0xAB;
    v61 = 32;
    v60 = 94;
  }
  v63 = 295;
  v62 = 210;
  __dmb(0xBu);
  dword_EEE50 = 1;
  v33 = dword_EEE54;
  __dmb(0xBu);
  v65 = 103;
  v64 = 384;
  if ( v33 == 0 )
  {
    v67 = 18;
    v66 = 31;
    byte_E55A1 = byte_DCB61 ^ 0x63;
    byte_E55A2 = byte_DCB62 ^ 0xC7;
    byte_E55A3 = byte_DCB63 ^ 0x5C;
    byte_E55A4 = byte_DCB64 ^ 0xCD;
    byte_E55A5 = byte_DCB65 ^ 0x6F;
    byte_E55A6 = byte_DCB66 ^ 0xFB;
    byte_E55A7 = byte_DCB67 ^ 0x37;
    byte_E55A8 = byte_DCB68 ^ 2;
    byte_E55A9 = byte_DCB69 ^ 0xFB;
    byte_E55AA = byte_DCB6A ^ 0x64;
    v69 = 9;
    v68 = 11;
  }
  v71 = 47;
  v70 = 348;
  __dmb(0xBu);
  dword_EEE54 = 1;
  v52 = dword_EEE58;
  __dmb(0xBu);
  v73 = 123;
  v72 = 265;
  if ( v52 == 0 )
  {
    v75 = 320;
    v74 = 100;
    byte_E55AB = byte_DCB6B ^ 0xCE;
    byte_E55AC = byte_DCB6C ^ 0xB5;
    byte_E55AD = byte_DCB6D ^ 0x19;
    byte_E55AE = byte_DCB6E ^ 0x43;
    byte_E55AF = byte_DCB6F ^ 0x4C;
    byte_E55B0 = byte_DCB70 ^ 0x71;
    byte_E55B1 = byte_DCB71 ^ 0xFA;
    byte_E55B2 = byte_DCB72 ^ 0x1C;
    v77 = 24;
    v76 = 26;
  }
  __dmb(0xBu);
  dword_EEE58 = 1;
  v112 = v124;
  v113 = v121;
  v121[18] = v124;
  v121[19] = v124;
  v123 = v124;
  v121[17] = 479398;
  v114 = v124;
  v115 = v124;
  v122 = (unsigned __int8)v124;
  if ( !((v122 * v122 + 1) % 7u) )
  {
    v79 = 245;
    v78 = 77;
    v4 = (_DWORD *)MEMORY[0xBEDBC9B4];
    v5 = (_DWORD *)MEMORY[0xBEDBC9B8];
    v81 = 444;
    v80 = 400;
  }
  *(_DWORD *)(dword_E1760 + 20) = dword_E17C0 + 4656;
  *v4 = 0;
  ((void (__fastcall *)(int, _DWORD, int, int))unk_BDBC)(dword_E1AD8, 0, 4656, dword_E1760);
  ((void (__fastcall *)(int, _DWORD))unk_BDBC)(dword_E1ADC, 0);
  ((void (__fastcall *)(int, _DWORD))unk_BDBC)(dword_E1AE0, 0);
  ((void (__fastcall *)(int, _DWORD))unk_BDBC)(dword_E1AE4, 0);
  ((void (__fastcall *)(_DWORD, _DWORD, int, int))unk_BDBC)(unk_E1AE8, 0, v23, v24);
  ((void (__fastcall *)(int, _DWORD))unk_BDBC)(dword_E1AEC, 0);
  ((void (__fastcall *)(int, _DWORD))unk_BDBC)(dword_E1AF0, 0);
  v117 = ((__int64 (__fastcall *)(void *, _DWORD))unk_BDBC)(&unk_EEE28, 0);
  v118 = v25;
  v119 = v26;
  v120 = v5;
  v116[998] = 476648;
  *(v5 - 28) = v4[4];
  if ( *(v5 - 28) )
  {
    v83 = 5;
    v82 = 28;
    v46 = *(v5 - 28);
    *(v5 - 27) = *(_DWORD *)(v46 + 4);
    v47 = *(_DWORD *)(v46 + 8);
    v48 = *(v5 - 28);
    *(v5 - 26) = v47;
    *(v5 - 25) = *(_DWORD *)(v48 + 12);
    ((void (__fastcall *)(_DWORD))unk_B9A8)(v4[4]);
    v85 = 335;
    v84 = 509;
    *v4 = *(v5 - 27);
    v28 = *(v5 - 26);
    v27 = *(v5 - 25);
  }
  else
  {
    v28 = 0;
    v27 = 0;
  }
  v87 = 22;
  v86 = 7;
  *(v5 - 14) = v28;
  *(v5 - 15) = *v4;
  *(v5 - 13) = v27;
  v6 = *(v5 - 13);
  *(v5 - 23) = *(v5 - 32);
  v7 = (_DWORD *)*(v5 - 32);
  *(v5 - 24) = v6 - 2252;
  *v7 = 0;
  v8 = ((int (__fastcall *)(_DWORD, _DWORD, void *))dword_75824[0])(*(v5 - 24), *(v5 - 32), &unk_10006);
  v89 = 281;
  v88 = 131;
  v9 = 90240;
  *((_BYTE *)v5 - 85) = v8 == 0;
  if ( *((_BYTE *)v5 - 85) )
  {
    v4[2] = -1;
    v91 = 29;
    v90 = 27;
    v17 = (_DWORD *)*(v5 - 32);
    dword_EEE20 = *(v5 - 24);
    v18 = (*(int (__fastcall **)(_DWORD, char *))(*(_DWORD *)*v17 + 24))(*v17, &byte_E5510);
    *(v5 - 21) = v18;
    v116[657] = v18;
    v116[658] = 449;
    v116[659] = v19;
    v116[660] = v9;
    v116[656] = 474108;
    v20 = *(v5 - 21);
    v93 = 449;
    v92 = 153;
    *((_BYTE *)v5 - 77) = v20 != 0;
    if ( *((_BYTE *)v5 - 77) )
    {
      v4[3] = -1;
      v14 = *(_DWORD *)*(v5 - 32);
      v15 = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 912))(v14);
      v4[3] = -1;
      if ( v15 )
      {
        v16 = ((int (__fastcall *)(int, int, int))dword_7CC40[0])(v14, 1631489775, 1202922957);
        ((void (__fastcall *)(int))dword_7CD50[0])(v14);
        ((void (__fastcall *)(int, int))dword_77C84[0])(v14, v16);
        v4[3] = -1;
      }
      else
      {
        v95 = 29;
        v94 = 9;
        v34 = *(_DWORD *)*(v5 - 32);
        *(v5 - 19) = *(v5 - 21);
        v35 = ((int (__fastcall *)(int, _DWORD))dword_75918[0])(v34, *(v5 - 19));
        *(v5 - 18) = *(v5 - 31);
        v36 = *(v5 - 18);
        dword_EEE24 = v35;
        ((void (__fastcall *)(int, int))unk_BC78)(v36, 84);
        v37 = (_DWORD *)*(v5 - 31);
        *v37 = &byte_E5521;
        v37[1] = &byte_E5525;
        v37[2] = dword_E1AF4;
        v38 = (_DWORD *)*(v5 - 31);
        v38[3] = &byte_E552B;
        v38[4] = &byte_E5530;
        v38[5] = dword_E1AF8;
        v39 = (_DWORD *)*(v5 - 31);
        v39[6] = &byte_E5547;
        v39[7] = &byte_E5550;
        v39[8] = dword_E1AFC;
        v40 = (_DWORD *)*(v5 - 31);
        v40[9] = &unk_D7FB2;
        v40[10] = &byte_E5592;
        v40[11] = dword_E1B00;
        v41 = (_DWORD *)*(v5 - 31);
        v41[12] = &unk_D7FB4;
        v41[13] = &byte_E5592;
        v41[14] = dword_E1B04;
        v42 = (_DWORD *)*(v5 - 31);
        v42[15] = &byte_E5599;
        v42[16] = &unk_E559C;
        v42[17] = dword_E1B08;
        v43 = (_DWORD *)*(v5 - 31);
        v43[18] = &byte_E55A1;
        v43[19] = &byte_E55AB;
        v43[20] = byte_75A5D;
        v44 = ((int (__fastcall *)(_DWORD, _DWORD))dword_764D8[0])(*(_DWORD *)*(v5 - 32), *(v5 - 21));
        v97 = 326;
        v96 = 309;
        *((_BYTE *)v5 - 65) = v44 == 0;
        if ( *((_BYTE *)v5 - 65) )
        {
          v4[1] = -1;
          v99 = 486;
          v98 = 296;
          while ( 1 )
          {
            v125 = ((__int64 (__fastcall *)(_DWORD))dword_765A4[0])(*(_DWORD *)*(v5 - 32));
            v126 = v50;
            v127 = v51;
            v124[142] = 479616;
            v49 = ((int (__fastcall *)(_DWORD, _DWORD, int, int))unk_2E470)(
                    *(_DWORD *)*(v5 - 32),
                    HIDWORD(v125),
                    v50,
                    v51);
            *(v5 - 48) = 85;
            *(v5 - 49) = 205;
            if ( *(v5 - 48) * *(v5 - 48) + 1 != 7 * *(v5 - 49) * *(v5 - 49) )
              break;
            *(v5 - 16) = v49;
          }
          *(v5 - 16) = v49;
          v4[1] = *(v5 - 16);
        }
        else
        {
          v4[1] = -1;
        }
        *(v5 - 46) = 454;
        *(v5 - 47) = 215;
        *(v5 - 12) = v4[1];
        do
        {
          ((void (__fastcall *)(_DWORD, _DWORD))dword_77C84[0])(*(_DWORD *)*(v5 - 32), *(v5 - 19));
          *(v5 - 44) = 117;
          *(v5 - 45) = 296;
          v31 = *(v5 - 44) + *(v5 - 44) * *(v5 - 44) + 7;
          v30 = 719621082;
          if ( v31 == 81 * (v31 / 0x51) )
            v30 = -1603528414;
        }
        while ( (int)*(v5 - 45) > 302 && v30 != 719621082LL );
        v4[3] = *(v5 - 12);
      }
    }
    else
    {
      v4[3] = -1;
    }
    *(v5 - 42) = 218;
    *(v5 - 43) = 454;
    *(v5 - 11) = v4[3];
    do
    {
      *(v5 - 40) = 93;
      *(v5 - 41) = 257;
      v13 = *(v5 - 40) + *(v5 - 40) * *(v5 - 40) + 7;
      v12 = -567837442;
      if ( v13 == 81 * (v13 / 0x51) )
        v12 = -64647748;
    }
    while ( (int)*(v5 - 41) > 185 && v12 != -567837442LL );
    v4[2] = *(v5 - 11);
  }
  else
  {
    v4[2] = -1;
  }
  *(v5 - 38) = 13;
  *(v5 - 39) = 6;
  *(v5 - 10) = v4[2];
  do
  {
    v59 = -287559172;
    v60 = -287559172;
    v61 = 1202922957;
    v62 = v9;
    v58 = 470598;
    v10 = (_DWORD *)((int (__fastcall *)(int, int, int, int))word_77D92)(-287559172, -287559172, 1202922957, v9);
    v9 = 19;
    v11 = *(v5 - 14) - 9008;
    *v10 = *(v5 - 15) - 8496;
    v10[1] = v11;
    *(v5 - 36) = 31;
    *(v5 - 37) = 19;
  }
  while ( 457 * (*(v5 - 36) | 0xA) * (*(v5 - 36) | 0xA) == 769 * (*(v5 - 37) | 5) * (*(v5 - 37) | 5) );
  if ( *(_DWORD *)v4[5] != v4[6] )
    ((void (__fastcall *)(_DWORD))unk_B96C)(*(v5 - 10));
}
