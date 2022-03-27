// positive sp value has been detected, the output may be wrong!
void __fastcall sub_A4F38(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r0
  int v10; // r0
  char v11; // r0
  int v12; // lr
  char v13; // r0
  int v14; // lr
  int v15; // [sp-2B90h] [bp-2E18h]
  int v16; // [sp-29BCh] [bp-2C44h]
  int v17; // [sp-29B4h] [bp-2C3Ch]
  int v18; // [sp-1D5Ch] [bp-1FE4h]
  char v19; // [sp-1A54h] [bp-1CDCh]
  int v20; // [sp-17D4h] [bp-1A5Ch]
  int v21; // [sp-1624h] [bp-18ACh]
  int v22; // [sp-1440h] [bp-16C8h]
  int v23; // [sp-1430h] [bp-16B8h]
  int v24; // [sp-13A0h] [bp-1628h]
  int v25; // [sp-1380h] [bp-1608h]
  int v26; // [sp-1378h] [bp-1600h]
  int v27; // [sp-10C4h] [bp-134Ch]
  int v28; // [sp-7D8h] [bp-A60h]
  int v29; // [sp-7B0h] [bp-A38h]
  int v30; // [sp-614h] [bp-89Ch]
  int v31; // [sp-5DCh] [bp-864h]
  int v32; // [sp-454h] [bp-6DCh]
  int v33; // [sp-1F8h] [bp-480h]
  int v34; // [sp-160h] [bp-3E8h]
  _DWORD *v35; // [sp+38h] [bp-250h]
  int v36; // [sp+44h] [bp-244h]
  int v37; // [sp+DCh] [bp-1ACh]
  int v38; // [sp+25Ch] [bp-2Ch]
  int v39; // [sp+27Ch] [bp-Ch]

  v9 = dword_EEEAC;
  __dmb(0xBu);
  if ( !v9 )
  {
    byte_E6000 = byte_DCD10 ^ 0x26;
    byte_E6001 = byte_DCD11 ^ 0x2E;
    byte_E6002 = byte_DCD12 ^ 0xBD;
    byte_E6003 = byte_DCD13 ^ 0xDB;
    byte_E6004 = byte_DCD14 ^ 0xAA;
    byte_E6005 = byte_DCD15 ^ 0xC5;
    byte_E6006 = byte_DCD16 ^ 0x8A;
    byte_E6007 = byte_DCD17 ^ 0xE9;
    byte_E6008 = byte_DCD18 ^ 0x1F;
    byte_E6009 = byte_DCD19 ^ 0x3F;
    byte_E600A = ~byte_DCD1A;
    byte_E600B = byte_DCD1B ^ 0xA1;
    byte_E600C = byte_DCD1C ^ 0xA2;
    byte_E600D = byte_DCD1D ^ 0x65;
    byte_E600E = byte_DCD1E ^ 0x66;
    byte_E600F = byte_DCD1F ^ 0x77;
    byte_E6010 = byte_DCD20 ^ 0x3C;
  }
  __dmb(0xBu);
  dword_EEEAC = 1;
  v10 = dword_EEEB0;
  __dmb(0xBu);
  if ( !v10 )
  {
    byte_E6011 = byte_DCD21 ^ 0x27;
    byte_E6012 = byte_DCD22 ^ 0x34;
    byte_E6013 = byte_DCD23 ^ 0xE7;
    byte_E6014 = byte_DCD24 ^ 0x28;
    byte_E6015 = byte_DCD25 ^ 0xC1;
    byte_E6016 = byte_DCD26 ^ 0x64;
    byte_E6017 = byte_DCD27 ^ 0x46;
    byte_E6018 = byte_DCD28 ^ 0x2F;
    byte_E6019 = byte_DCD29 ^ 0xAF;
    byte_E601A = byte_DCD2A ^ 2;
    byte_E601B = byte_DCD2B ^ 0x13;
    byte_E601C = byte_DCD2C ^ 0x2E;
    byte_E601D = byte_DCD2D ^ 0x4F;
    byte_E601E = byte_DCD2E ^ 0x2A;
    byte_E601F = byte_DCD2F ^ 0x4D;
    byte_E6020 = byte_DCD30 ^ 0x5E;
  }
  __dmb(0xBu);
  dword_EEEB0 = 1;
  __dmb(0xBu);
  if ( v19 )
  {
    byte_E6030 = byte_DCD40 ^ 0x90;
    byte_E6031 = byte_DCD41 ^ 0xED;
    byte_E6032 = byte_DCD42 ^ 0x6F;
    byte_E6033 = byte_DCD43 ^ 0xD3;
    byte_E6034 = byte_DCD44 ^ 0xDA;
    byte_E6035 = byte_DCD45 ^ 0x1D;
    byte_E6036 = byte_DCD46 ^ 0xB0;
    byte_E6037 = byte_DCD47 ^ 4;
    byte_E6038 = byte_DCD48 ^ 0xE3;
    byte_E6039 = byte_DCD49 ^ 0x7C;
    byte_E603A = byte_DCD4A ^ 0x6F;
    byte_E603B = byte_DCD4B ^ 0xDE;
    byte_E603C = byte_DCD4C ^ 0x6C;
    byte_E603D = byte_DCD4D ^ 0x84;
    byte_E603E = byte_DCD4E ^ 0x34;
    byte_E603F = byte_DCD4F ^ 0x4D;
    byte_E6040 = byte_DCD50 ^ 0x2C;
    byte_E6041 = byte_DCD51 ^ 0xD6;
    byte_E6042 = byte_DCD52 ^ 0xEA;
    byte_E6043 = byte_DCD53 ^ 0x48;
    byte_E6044 = byte_DCD54 ^ 0x89;
  }
  __dmb(0xBu);
  dword_EEEB4 = 1;
  v13 = 0;
  v14 = dword_EEF50;
  __dmb(0xBu);
  if ( !v14 )
    v13 = 1;
  if ( v13 )
  {
    byte_E6460 = byte_DD170 ^ 0x26;
    byte_E6461 = byte_DD171 ^ 0x97;
    byte_E6462 = byte_DD172 ^ 0x3A;
    byte_E6463 = byte_DD173 ^ 0x4D;
    byte_E6464 = byte_DD174 ^ 0x75;
    byte_E6465 = byte_DD175 ^ 0x90;
    byte_E6466 = byte_DD176 ^ 0x56;
    byte_E6467 = byte_DD177 ^ 0x4B;
    byte_E6468 = byte_DD178 ^ 0x58;
    byte_E6469 = byte_DD179 ^ 0xBD;
    byte_E646A = byte_DD17A ^ 0x48;
    byte_E646B = byte_DD17B ^ 0xBC;
    byte_E646C = byte_DD17C ^ 0x1D;
    byte_E646D = byte_DD17D ^ 0xDC;
    byte_E646E = byte_DD17E ^ 0x80;
    byte_E646F = byte_DD17F ^ 0x29;
    byte_E6470 = byte_DD180 ^ 0x15;
    byte_E6471 = byte_DD181 ^ 0x9B;
    byte_E6472 = byte_DD182 ^ 0xAB;
    byte_E6473 = byte_DD183 ^ 0x47;
    byte_E6474 = byte_DD184 ^ 0x9C;
    byte_E6475 = byte_DD185 ^ 0x21;
    byte_E6476 = byte_DD186 ^ 0xDE;
  }
  __dmb(0xBu);
  dword_EEF50 = 1;
  v12 = dword_EEF54;
  __dmb(0xBu);
  if ( !v12 )
  {
    byte_E6480 = byte_DD190 ^ 0x3E;
    byte_E6481 = byte_DD191 ^ 0xD2;
    byte_E6482 = byte_DD192 ^ 0x5A;
    byte_E6483 = ~byte_DD193;
    byte_E6484 = byte_DD194 ^ 0x5B;
    byte_E6485 = byte_DD195 ^ 0x2B;
    byte_E6486 = byte_DD196 ^ 0x5E;
    byte_E6487 = byte_DD197 ^ 0x11;
    byte_E6488 = byte_DD198 ^ 0x2D;
    byte_E6489 = byte_DD199 ^ 0x85;
    byte_E648A = byte_DD19A ^ 0xAD;
    byte_E648B = byte_DD19B ^ 0x82;
    byte_E648C = byte_DD19C ^ 0x10;
    byte_E648D = byte_DD19D ^ 0xC;
    byte_E648E = byte_DD19E ^ 0xA9;
    byte_E648F = byte_DD19F ^ 0x50;
    byte_E6490 = byte_DD1A0 ^ 0xD9;
    byte_E6491 = byte_DD1A1 ^ 0x3C;
    byte_E6492 = byte_DD1A2 ^ 0x8C;
    byte_E6493 = byte_DD1A3 ^ 0x2E;
    byte_E6494 = byte_DD1A4 ^ 0xFA;
    byte_E6495 = byte_DD1A5 ^ 0xE6;
    byte_E6496 = byte_DD1A6 ^ 0x7F;
    byte_E6497 = byte_DD1A7 ^ 0x9C;
    byte_E6498 = byte_DD1A8 ^ 0x68;
    byte_E6499 = byte_DD1A9 ^ 0xB8;
    byte_E649A = byte_DD1AA ^ 0x47;
    byte_E649B = byte_DD1AB ^ 0x3F;
  }
  __dmb(0xBu);
  dword_EEF54 = 1;
  v11 = v25;
  if ( v25 )
    v11 = 1;
  if ( v11 )
  {
    if ( ((int (__fastcall *)(int, char *))unk_8D944)(v18, &byte_E6460) )
    {
      if ( ((int (__fastcall *)(int, int, char *, char *))unk_8DA30)(v29, v31, &byte_E6480, &byte_E6000)
        && ((int (__fastcall *)(int, int, int, int))unk_E198)(v15, v16, v17, 81) )
      {
        v35 = (_DWORD *)&unk_163;
        v36 = (*(int (__fastcall **)())(*(_DWORD *)v33 + 124))();
        if ( v37 )
        {
          (*(void (__fastcall **)(int, int, char *, char *))(*(_DWORD *)v29 + 132))(v29, v28, &byte_E6011, &byte_E6030);
          if ( v36 && ((int (__fastcall *)(int, int, int, int))unk_11ACC)(v21, v22, v23, 24024) )
          {
            (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v26 + 676))(v26, v24, 0);
            ((void (__fastcall *)())dword_C4F68[0])();
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v33 + 680))(v33, 466);
            (*(void (__fastcall **)())(*(_DWORD *)v34 + 92))();
          }
          (*(void (__fastcall **)())(*(_DWORD *)v20 + 92))();
        }
        (*(void (__fastcall **)())(*(_DWORD *)v30 + 92))();
      }
      (*(void (__fastcall **)())(*(_DWORD *)v32 + 92))();
    }
    if ( ((int (__fastcall *)())unk_8DCF8)() )
      (*(void (__fastcall **)())(*(_DWORD *)v27 + 68))();
  }
  if ( *v35 == v39 )
    __asm { POPEQ           {R4-R7,PC} }
  ((void (__fastcall *)(int, int))unk_B96C)(v38, *v35 - v39);
}
