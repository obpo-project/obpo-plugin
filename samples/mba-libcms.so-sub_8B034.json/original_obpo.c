// positive sp value has been detected, the output may be wrong!
void __fastcall sub_8B034(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // [sp-2B2Ch] [bp-2DACh]
  int v16; // [sp-2B10h] [bp-2D90h]
  int v17; // [sp-2B08h] [bp-2D88h]
  int v18; // [sp-290Ch] [bp-2B8Ch]
  int v19; // [sp-1CFCh] [bp-1F7Ch]
  char v20; // [sp-1C14h] [bp-1E94h]
  int v21; // [sp-1BA4h] [bp-1E24h]
  int v22; // [sp-1B9Ch] [bp-1E1Ch]
  int v23; // [sp-1B28h] [bp-1DA8h]
  int v24; // [sp-1B20h] [bp-1DA0h]
  int v25; // [sp-1A00h] [bp-1C80h]
  int v26; // [sp-19C8h] [bp-1C48h]
  int v27; // [sp-16B0h] [bp-1930h]
  int v28; // [sp-14D0h] [bp-1750h]
  int v29; // [sp-14C0h] [bp-1740h]
  int v30; // [sp-13E4h] [bp-1664h]
  int v31; // [sp-CFCh] [bp-F7Ch]
  int v32; // [sp-4ACh] [bp-72Ch]
  int v33; // [sp-320h] [bp-5A0h]
  int v34; // [sp-2FCh] [bp-57Ch]
  int v35; // [sp-160h] [bp-3E0h]
  _DWORD *v36; // [sp+38h] [bp-248h]
  int v37; // [sp+218h] [bp-68h]
  int v38; // [sp+254h] [bp-2Ch]
  int v39; // [sp+270h] [bp-10h]
  int v40; // [sp+274h] [bp-Ch]

  v9 = dword_EEEB8;
  __dmb(0xBu);
  if ( !v9 )
  {
    byte_E6050 = byte_DCD60 ^ 0x33;
    byte_E6051 = byte_DCD61 ^ 0x2E;
    byte_E6052 = byte_DCD62 ^ 0xB7;
    byte_E6053 = byte_DCD63 ^ 0xE3;
    byte_E6054 = byte_DCD64 ^ 0x6F;
    byte_E6055 = byte_DCD65 ^ 0xBE;
    byte_E6056 = byte_DCD66 ^ 0x40;
    byte_E6057 = byte_DCD67 ^ 0x2B;
    byte_E6058 = byte_DCD68 ^ 0xAD;
    byte_E6059 = byte_DCD69 ^ 0xA;
    byte_E605A = byte_DCD6A ^ 0x3B;
    byte_E605B = byte_DCD6B ^ 0xB3;
    byte_E605C = byte_DCD6C ^ 0x2B;
    byte_E605D = byte_DCD6D ^ 0x9D;
    byte_E605E = byte_DCD6E ^ 0x99;
    byte_E605F = byte_DCD6F ^ 0xE;
    byte_E6060 = byte_DCD70 ^ 0x49;
    byte_E6061 = byte_DCD71 ^ 0xE6;
    byte_E6062 = byte_DCD72 ^ 0x8B;
    byte_E6063 = byte_DCD73 ^ 0x17;
    byte_E6064 = byte_DCD74 ^ 7;
    byte_E6065 = byte_DCD75;
    byte_E6066 = byte_DCD76 ^ 0xF8;
    byte_E6067 = byte_DCD77 ^ 0x77;
    byte_E6068 = byte_DCD78 ^ 0xC1;
    byte_E6069 = byte_DCD79 ^ 0x63;
  }
  __dmb(0xBu);
  dword_EEEB8 = 1;
  v10 = dword_EEEBC;
  __dmb(0xBu);
  if ( !v10 )
  {
    byte_E606A = byte_DCD7A ^ 0xFC;
    byte_E606B = byte_DCD7B ^ 0x90;
    byte_E606C = byte_DCD7C ^ 0x36;
    byte_E606D = byte_DCD7D ^ 0x8E;
    byte_E606E = byte_DCD7E ^ 0xF5;
    byte_E606F = byte_DCD7F ^ 0xBE;
    byte_E6070 = byte_DCD80 ^ 0xCC;
    byte_E6071 = byte_DCD81 ^ 0x2D;
    byte_E6072 = byte_DCD82 ^ 0x3F;
    byte_E6073 = byte_DCD83 ^ 0xD2;
  }
  __dmb(0xBu);
  dword_EEEBC = 1;
  v13 = dword_EEEC0;
  __dmb(0xBu);
  if ( !v13 )
  {
    byte_E6080 = byte_DCD90 ^ 0xE0;
    byte_E6081 = byte_DCD91 ^ 0x21;
    byte_E6082 = byte_DCD92 ^ 0xBC;
    byte_E6083 = byte_DCD93 ^ 0x36;
    byte_E6084 = byte_DCD94 ^ 0x24;
    byte_E6085 = byte_DCD95 ^ 0x57;
    byte_E6086 = byte_DCD96 ^ 0xCF;
    byte_E6087 = byte_DCD97 ^ 0x6F;
    byte_E6088 = byte_DCD98 ^ 0xF9;
    byte_E6089 = byte_DCD99 ^ 0xC;
    byte_E608A = byte_DCD9A ^ 0x5E;
    byte_E608B = byte_DCD9B ^ 5;
    byte_E608C = byte_DCD9C ^ 0x24;
    byte_E608D = byte_DCD9D ^ 0x90;
    byte_E608E = byte_DCD9E ^ 0x8A;
    byte_E608F = byte_DCD9F ^ 0x32;
    byte_E6090 = byte_DCDA0 ^ 0xBC;
    byte_E6091 = byte_DCDA1 ^ 0xF2;
    byte_E6092 = byte_DCDA2 ^ 0xC6;
    byte_E6093 = byte_DCDA3 ^ 0xE3;
    byte_E6094 = byte_DCDA4 ^ 0x6D;
    byte_E6095 = byte_DCDA5 ^ 0x68;
    byte_E6096 = byte_DCDA6 ^ 0x69;
    byte_E6097 = byte_DCDA7 ^ 0xAD;
    byte_E6098 = byte_DCDA8 ^ 0x6B;
    byte_E6099 = byte_DCDA9 ^ 0x2B;
    byte_E609A = byte_DCDAA ^ 0x10;
    byte_E609B = byte_DCDAB ^ 0xE2;
    byte_E609C = byte_DCDAC ^ 0x5A;
    byte_E609D = byte_DCDAD ^ 0xFB;
    byte_E609E = byte_DCDAE ^ 0x81;
    byte_E609F = byte_DCDAF ^ 0xF8;
    byte_E60A0 = byte_DCDB0 ^ 0x11;
    byte_E60A1 = byte_DCDB1 ^ 8;
    byte_E60A2 = byte_DCDB2 ^ 0x6D;
    byte_E60A3 = byte_DCDB3 ^ 0xF1;
    byte_E60A4 = byte_DCDB4 ^ 0x5E;
    byte_E60A5 = byte_DCDB5 ^ 0x98;
    byte_E60A6 = byte_DCDB6 ^ 0xA9;
    byte_E60A7 = byte_DCDB7 ^ 0xC9;
    byte_E60A8 = byte_DCDB8 ^ 0xA2;
    byte_E60A9 = byte_DCDB9 ^ 0x5F;
    byte_E60AA = byte_DCDBA ^ 0xC2;
    byte_E60AB = byte_DCDBB ^ 0x91;
    byte_E60AC = byte_DCDBC ^ 0x70;
    byte_E60AD = byte_DCDBD ^ 0xEB;
    byte_E60AE = byte_DCDBE ^ 0xD6;
    byte_E60AF = byte_DCDBF ^ 0x75;
  }
  __dmb(0xBu);
  dword_EEEC0 = 1;
  __dmb(0xBu);
  if ( v20 )
  {
    byte_E60B0 = byte_DCDC0 ^ 0xCC;
    byte_E60B1 = byte_DCDC1 ^ 0x8C;
    byte_E60B2 = byte_DCDC2 ^ 0xA;
    byte_E60B3 = byte_DCDC3 ^ 0x24;
    byte_E60B4 = byte_DCDC4 ^ 0xEA;
    byte_E60B5 = byte_DCDC5 ^ 0x18;
    byte_E60B6 = byte_DCDC6 ^ 0x12;
    byte_E60B7 = byte_DCDC7 ^ 0xF2;
    byte_E60B8 = byte_DCDC8 ^ 0xB3;
    byte_E60B9 = byte_DCDC9 ^ 0xB5;
    byte_E60BA = byte_DCDCA ^ 0xFC;
    byte_E60BB = byte_DCDCB ^ 0xC5;
    byte_E60BC = byte_DCDCC ^ 0xBE;
    byte_E60BD = byte_DCDCD ^ 0xA2;
    byte_E60BE = byte_DCDCE ^ 0x7A;
    byte_E60BF = byte_DCDCF ^ 0x7C;
    byte_E60C0 = byte_DCDD0 ^ 0xCA;
    byte_E60C1 = byte_DCDD1 ^ 0x36;
    byte_E60C2 = byte_DCDD2 ^ 0xB9;
    v24 = 2;
  }
  __dmb(0xBu);
  dword_EEEC4 = 1;
  v12 = dword_EEEC8;
  __dmb(0xBu);
  if ( !v12 )
  {
    byte_E60C3 = byte_DCDD3 ^ 0x8D;
    byte_E60C4 = byte_DCDD4 ^ 0xF1;
    byte_E60C5 = byte_DCDD5 ^ 0x2A;
    byte_E60C6 = byte_DCDD6 ^ 0xC6;
    byte_E60C7 = byte_DCDD7 ^ 0x99;
  }
  __dmb(0xBu);
  dword_EEEC8 = 1;
  v14 = dword_EEECC;
  __dmb(0xBu);
  if ( !v14 )
  {
    byte_E60C8 = byte_DCDD8 ^ 0x29;
    byte_E60C9 = byte_DCDD9 ^ 0xC7;
    byte_E60CA = byte_DCDDA ^ 0x5D;
    byte_E60CB = byte_DCDDB ^ 0x3F;
    byte_E60CC = byte_DCDDC ^ 0xD7;
    byte_E60CD = byte_DCDDD ^ 0x94;
  }
  __dmb(0xBu);
  dword_EEECC = 1;
  if ( v21 )
  {
    if ( ((int (__fastcall *)(int, char *, int, int))dword_8D944[0])(v32, &byte_E6050, 2632, 1811724506) )
    {
      ((void (__fastcall *)(int, int, char *, char *))dword_8DA30[0])(v22, v26, &byte_E606A, &byte_E6080);
      (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v34 + 132))(
        v34,
        v33,
        dword_8D93C + 579032,
        dword_8D940 + 579036);
      if ( v37 != 0
        && v39 != 0
        && ((int (__fastcall *)(int, char *, int, int))dword_8DB0C[0])(v31, &byte_E60C8, 19, 1811724506) )
      {
        if ( ((int (__fastcall *)(int, int, int, int))unk_E198)(v19, v23, v24, 196) )
        {
          if ( ((int (__fastcall *)(int, int, int, int))unk_11ACC)(v27, v29, v28, 1811724506) )
          {
            v15 = ((int (__fastcall *)(int, int, int))dword_8DC00[0])(v17, v18, 1481200);
            v11 = ((int (__fastcall *)())dword_C26D0[0])();
            ((void (__fastcall *)(int, int, int))unk_89BF4)(v16, v11, v15);
            (*(void (__fastcall **)())(*(_DWORD *)v30 + 92))();
          }
          (*(void (__fastcall **)())(*(_DWORD *)v25 + 92))();
        }
        (*(void (__fastcall **)())(*(_DWORD *)v35 + 92))();
      }
      (*(void (__fastcall **)())(*(_DWORD *)v34 + 92))();
    }
    if ( ((int (__fastcall *)(int, int, int, int))dword_8DCF8[0])(v30, -2129634458, 1811724506, 1811724506) )
      (*(void (__fastcall **)())(*(_DWORD *)v31 + 68))();
  }
  if ( *v36 == v40 )
    __asm { POPEQ           {R4-R7,PC} }
  ((void (__fastcall *)(int, int))unk_B96C)(v38, *v36 - v40);
}
