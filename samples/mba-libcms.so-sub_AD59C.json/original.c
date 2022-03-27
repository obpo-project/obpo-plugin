// positive sp value has been detected, the output may be wrong!
void __fastcall sub_AD59C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r0
  int v10; // r1
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  int v14; // r0
  int v15; // [sp-720h] [bp-7E0h]
  int v16; // [sp-68Ch] [bp-74Ch]
  bool v17; // [sp+96h] [bp-2Ah]
  bool v18; // [sp+97h] [bp-29h]
  bool v19; // [sp+9Fh] [bp-21h]
  int v20; // [sp+A0h] [bp-20h]
  int v21; // [sp+A4h] [bp-1Ch]

  v9 = -939675400;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = v9;
        if ( v9 <= 118121100 )
          break;
        if ( v9 > 1108778415 )
        {
          if ( v9 > 1534867269 )
          {
            if ( v9 > 1660473188 )
            {
              v9 = 1324818280;
              if ( v10 != 1660473189 )
              {
                v9 = v10;
                if ( v10 == 2019083301 )
                {
                  v9 = 1324818280;
                  if ( v17 )
                    v9 = 1560574492;
                }
              }
            }
            else if ( v9 == 1534867270 )
            {
              v9 = -1334392765;
            }
            else
            {
              v9 = -1355439580;
            }
          }
          else if ( v9 > 1324818279 )
          {
            v9 = -1823958207;
          }
          else if ( v9 == 1108778416 )
          {
            v9 = 720155800;
          }
          else
          {
            v9 = -1154071472;
          }
        }
        else if ( v9 > 585792812 )
        {
          if ( v9 > 987186831 )
          {
            v9 = 457476665;
          }
          else if ( v9 == 585792813 )
          {
            __dmb(0xBu);
            *(_DWORD *)(dword_ADF60 + 711558) = 1;
            v13 = ((int (__fastcall *)(int, int))unk_B9E4)(dword_ADF64 + 711560, dword_ADF68 + 711566);
            v9 = -161063672;
            v19 = v13 == 0;
          }
          else
          {
            ((void (__fastcall *)(int, void *, int, int))unk_C794)(v16, &unk_E64C7, v15, 1324818280);
            ((void (__fastcall *)())unk_BC54)();
            v9 = -708818802;
          }
        }
        else if ( v9 > 457476664 )
        {
          if ( v9 != 457476665 )
            __asm { POP             {R4-R7,PC} }
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
          v9 = -1392255830;
        }
        else if ( v9 == 118121101 )
        {
          v9 = -1593401003;
        }
        else
        {
          v9 = 585792813;
        }
      }
      if ( v9 <= -1299410882 )
        break;
      if ( v9 > -351766972 )
      {
        if ( v9 > -161063673 )
        {
          v9 = 1108778416;
          if ( v19 )
            v9 = -351766971;
        }
        else
        {
          v9 = 118121101;
        }
      }
      else if ( v9 > -939675401 )
      {
        if ( v9 != -939675400 )
          goto LABEL_34;
        v12 = v20 == v21;
        v9 = -1334392765;
LABEL_55:
        if ( v12 )
          v9 = 1534867270;
      }
      else if ( v9 == -1299410881 )
      {
        v9 = 273822450;
        if ( v18 )
          v9 = 987186832;
      }
      else
      {
        v9 = 463949348;
      }
    }
    if ( v9 > -1523152260 )
    {
      if ( v9 > -1355439581 )
      {
        if ( v9 != -1355439580 )
        {
          v11 = dword_EEF60;
          __dmb(0xBu);
          v17 = v11 == 0;
          v12 = 0;
          v9 = 2019083301;
          goto LABEL_55;
        }
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
        v9 = 1660473189;
      }
      else
      {
        v9 = 273822450;
      }
    }
    else if ( v9 == -1823958207 )
    {
      __dmb(0xBu);
      *(_DWORD *)(dword_ADF50 + 711780) = 1;
      v14 = *(_DWORD *)(dword_ADF54 + 711786);
      __dmb(0xBu);
      v18 = v14 == 0;
      v9 = -1299410881;
    }
    else
    {
LABEL_34:
      v9 = 1155510276;
    }
  }
}
