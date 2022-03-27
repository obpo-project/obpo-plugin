__int64 __fastcall sub_171484(__int64 a1)
{
  __int64 v1; // x23
  int v2; // w8
  _BOOL4 v3; // w8
  bool v4; // zf
  int v5; // w9
  _BOOL4 v6; // w8
  bool v7; // zf
  int v8; // w9
  _BOOL4 v9; // w8
  _BOOL4 v10; // w8
  __int64 v12; // [xsp+10h] [xbp-10B0h]
  __int64 v13; // [xsp+18h] [xbp-10A8h]
  __int64 v14; // [xsp+20h] [xbp-10A0h]
  __int64 v15[2]; // [xsp+40h] [xbp-1080h] BYREF
  __int64 v16; // [xsp+50h] [xbp-1070h] BYREF
  __int64 v17; // [xsp+58h] [xbp-1068h]
  unsigned int v18; // [xsp+60h] [xbp-1060h] BYREF
  _BYTE v19[4100]; // [xsp+64h] [xbp-105Ch] BYREF
  __int64 v20; // [xsp+1068h] [xbp-58h]

  v20 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v16 = 0LL;
  v17 = 0LL;
  v15[0] = 0LL;
  v15[1] = 0LL;
  v14 = qword_1E8D00 + 144;
  v13 = qword_1E9020 + 144;
  v12 = qword_1E8770 + 120;
LABEL_3:
  v2 = 1959998380;
  do
  {
    while ( 1 )
    {
LABEL_23:
      if ( v2 <= 1757829503 )
      {
        if ( v2 == 1251597970 )
        {
          v9 = ((((*(_DWORD *)qword_1E8FB0 - 1) * *(_DWORD *)qword_1E8FB0) ^ 0xFFFFFFFE) & ((*(_DWORD *)qword_1E8FB0 - 1)
                                                                                          * *(_DWORD *)qword_1E8FB0)) == 0;
          v7 = ((*(_DWORD *)qword_1E8750 < 10 && v9) | (*(_DWORD *)qword_1E8750 < 10) ^ v9) == 0;
          v2 = 1022088542;
          v8 = 2069398939;
        }
        else
        {
          if ( v2 != 1616597462 )
          {
            v2 = -796183626;
            goto LABEL_5;
          }
          a1 = ((__int64 (__fastcall *)(__int64))unk_1EA1C)(qword_1E8770 + 120);
          v8 = -796183626;
          v7 = *(_BYTE *)qword_1E8FC8 == 0;
          v2 = 1757829504;
        }
        goto LABEL_41;
      }
      if ( v2 > 1959998379 )
        break;
      if ( v2 == 1757829504 )
      {
        ((void (__fastcall *)(__int64 *, _QWORD))unk_1EA8C)(v15, 0LL);
        v16 = v15[0] + 3;
        v17 = 0LL;
        v1 = qword_1E8770 + 120;
        ((void (__fastcall *)(__int64))unk_1EA54)(qword_1E8770 + 120);
        ((void (__fastcall *)(__int64, __int64, __int64 *))unk_1EAA8)(v14, v1, &v16);
        a1 = ((__int64 (__fastcall *)(__int64))unk_1EA1C)(v1);
        goto LABEL_3;
      }
      a1 = ((__int64 (__fastcall *)(__int64))unk_1EA54)(qword_1E8770 + 120);
      if ( *(_DWORD *)(qword_1E89E0 + 12) )
        v2 = 1616597462;
      else
        v2 = 1251597970;
    }
    if ( v2 != 2069398939 )
    {
      v5 = 1864160918;
      v4 = *(_BYTE *)(qword_1E8828 + 3) == 0;
      v2 = -1980514158;
      goto LABEL_34;
    }
    a1 = ((__int64 (__fastcall *)(__int64, __int64))unk_1EA70)(qword_1E9020 + 144, qword_1E8770 + 120);
    v10 = ((((*(_DWORD *)qword_1E8FB0 - 1) * *(_DWORD *)qword_1E8FB0) ^ 0xFFFFFFFE) & ((*(_DWORD *)qword_1E8FB0 - 1)
                                                                                     * *(_DWORD *)qword_1E8FB0)) == 0;
    v7 = ((*(_DWORD *)qword_1E8750 < 10 && v10) | (*(_DWORD *)qword_1E8750 < 10) ^ v10) == 0;
    v2 = 1022088542;
    v8 = -790278909;
LABEL_41:
    if ( !v7 )
      v2 = v8;
  }
  while ( v2 > 1251597969 );
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_5:
      while ( v2 > -678064977 )
      {
        if ( v2 > 39506366 )
        {
          if ( v2 != 39506367 )
          {
            a1 = ((__int64 (__fastcall *)(__int64, __int64))unk_1EA70)(v13, v12);
            v2 = 2069398939;
            goto LABEL_23;
          }
          v6 = (~((*(_DWORD *)qword_1E8FB0 - 1) * *(_DWORD *)qword_1E8FB0) | 0xFFFFFFFE) == -1;
          v7 = ((*(_DWORD *)qword_1E8750 < 10 && v6) | (*(_DWORD *)qword_1E8750 < 10) ^ v6) == 0;
          v2 = -1588797397;
          v8 = -678064976;
          goto LABEL_41;
        }
        if ( v2 != -678064976 )
        {
          *(_BYTE *)(qword_1E8828 + 3) = 1;
          v2 = 1757829504;
          goto LABEL_23;
        }
        ((void (__fastcall *)(unsigned int *, __int64, __int64))unk_173450)(&v18, qword_1F0C18, 4100LL);
        a1 = ((__int64 (__fastcall *)(_QWORD, _BYTE *))unk_16EB14)(v18, v19);
        v3 = (~((*(_DWORD *)qword_1E8FB0 - 1) * *(_DWORD *)qword_1E8FB0) | 0xFFFFFFFE) == -1;
        if ( (*(_DWORD *)qword_1E8750 < 10 && v3) | (*(_DWORD *)qword_1E8750 < 10) ^ v3 )
          v2 = 1725781043;
        else
          v2 = -1588797397;
        if ( v2 > 1251597969 )
          goto LABEL_23;
      }
      if ( v2 <= -796183627 )
        break;
      if ( v2 != -796183626 )
      {
        v2 = 1616597462;
        goto LABEL_23;
      }
      v4 = qword_1F0C38 == qword_1F0C18;
      v2 = 39506367;
      v5 = -123354671;
LABEL_34:
      if ( v4 )
        v2 = v5;
      if ( v2 > 1251597969 )
        goto LABEL_23;
    }
    if ( v2 != -1588797397 )
      break;
    ((void (__fastcall *)(unsigned int *, __int64, __int64))unk_173450)(&v18, qword_1F0C18, 4100LL);
    a1 = ((__int64 (__fastcall *)(_QWORD, _BYTE *))unk_16EB14)(v18, v19);
    v2 = -678064976;
  }
  if ( *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40) == v20 )
    return 0LL;
  ((void (__fastcall *)(__int64))unk_1740C0)(a1);
  JUMPOUT(0x171A48LL);
  return 0LL;
}
