// positive sp value has been detected, the output may be wrong!
void __fastcall sub_AD59C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r0
  int v11; // r0
  int v12; // [sp-720h] [bp-7E0h]
  int v13; // [sp-68Ch] [bp-74Ch]

  v9 = dword_EEF60;
  __dmb(0xBu);
  if ( !v9 )
  {
    *(_BYTE *)(dword_ADF4C + 712222) = *(_BYTE *)(dword_ADF48 + 712220) ^ 0x72;
    *(_BYTE *)(dword_ADF4C + 712223) = *(_BYTE *)(dword_ADF48 + 712221) ^ 0xEC;
    *(_BYTE *)(dword_ADF4C + 712224) = *(_BYTE *)(dword_ADF48 + 712222) ^ 0x6C;
    *(_BYTE *)(dword_ADF4C + 712225) = *(_BYTE *)(dword_ADF48 + 712223) ^ 0x17;
    *(_BYTE *)(dword_ADF4C + 712226) = *(_BYTE *)(dword_ADF48 + 712224) ^ 0x92;
    *(_BYTE *)(dword_ADF4C + 712227) = *(_BYTE *)(dword_ADF48 + 712225) ^ 0x2A;
    *(_BYTE *)(dword_ADF4C + 712228) = *(_BYTE *)(dword_ADF48 + 712226) ^ 0x7E;
    *(_BYTE *)(dword_ADF4C + 712229) = *(_BYTE *)(dword_ADF48 + 712227) ^ 0x9E;
    *(_BYTE *)(dword_ADF4C + 712230) = *(_BYTE *)(dword_ADF48 + 712228) ^ 0x69;
    *(_BYTE *)(dword_ADF4C + 712231) = *(_BYTE *)(dword_ADF48 + 712229) ^ 0x24;
    *(_BYTE *)(dword_ADF4C + 712232) = *(_BYTE *)(dword_ADF48 + 712230) ^ 0xC;
    *(_BYTE *)(dword_ADF4C + 712233) = *(_BYTE *)(dword_ADF48 + 712231) ^ 0x5A;
    *(_BYTE *)(dword_ADF4C + 712234) = *(_BYTE *)(dword_ADF48 + 712232) ^ 0x4C;
    *(_BYTE *)(dword_ADF4C + 712235) = *(_BYTE *)(dword_ADF48 + 712233) ^ 0xD2;
  }
  __dmb(0xBu);
  *(_DWORD *)(dword_ADF50 + 711780) = 1;
  v11 = *(_DWORD *)(dword_ADF54 + 711786);
  __dmb(0xBu);
  if ( v11 == 0 )
  {
    *(_BYTE *)(dword_ADF5C + 711896) = *(_BYTE *)(dword_ADF58 + 711894) ^ 0x63;
    *(_BYTE *)(dword_ADF5C + 711897) = *(_BYTE *)(dword_ADF58 + 711895) ^ 0x65;
    *(_BYTE *)(dword_ADF5C + 711898) = *(_BYTE *)(dword_ADF58 + 711896) ^ 0xF7;
    *(_BYTE *)(dword_ADF5C + 711899) = *(_BYTE *)(dword_ADF58 + 711897) ^ 0xD;
    *(_BYTE *)(dword_ADF5C + 711900) = *(_BYTE *)(dword_ADF58 + 711898) ^ 0x90;
    *(_BYTE *)(dword_ADF5C + 711901) = *(_BYTE *)(dword_ADF58 + 711899) ^ 0xFD;
    *(_BYTE *)(dword_ADF5C + 711902) = *(_BYTE *)(dword_ADF58 + 711900) ^ 0x3E;
    *(_BYTE *)(dword_ADF5C + 711903) = *(_BYTE *)(dword_ADF58 + 711901) ^ 0x10;
    *(_BYTE *)(dword_ADF5C + 711904) = *(_BYTE *)(dword_ADF58 + 711902) ^ 0x9F;
    *(_BYTE *)(dword_ADF5C + 711905) = *(_BYTE *)(dword_ADF58 + 711903) ^ 0x83;
    *(_BYTE *)(dword_ADF5C + 711906) = *(_BYTE *)(dword_ADF58 + 711904) ^ 0xA4;
    *(_BYTE *)(dword_ADF5C + 711907) = *(_BYTE *)(dword_ADF58 + 711905) ^ 0xF6;
    *(_BYTE *)(dword_ADF5C + 711908) = *(_BYTE *)(dword_ADF58 + 711906) ^ 0x70;
    *(_BYTE *)(dword_ADF5C + 711909) = *(_BYTE *)(dword_ADF58 + 711907) ^ 0x13;
    *(_BYTE *)(dword_ADF5C + 711910) = *(_BYTE *)(dword_ADF58 + 711908) ^ 0x45;
    *(_BYTE *)(dword_ADF5C + 711911) = *(_BYTE *)(dword_ADF58 + 711909) ^ 0xC8;
  }
  __dmb(0xBu);
  *(_DWORD *)(dword_ADF60 + 711558) = 1;
  if ( ((int (__fastcall *)(int, int))unk_B9E4)(dword_ADF64 + 711560, dword_ADF68 + 711566) != 0 )
  {
    ((void (__fastcall *)(int, void *, int, int))unk_C794)(v13, &unk_E64C7, v12, 1324818280);
    ((void (__fastcall *)())unk_BC54)();
  }
  __asm { POP             {R4-R7,PC} }
}
