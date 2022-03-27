__int64 __fastcall sub_171484(__int64 a1)
{
  __int64 v1; // x23
  int v2; // w8
  _BOOL4 v3; // w8
  _BOOL4 v4; // w8
  _BOOL4 v5; // w8
  _BOOL4 v6; // w8
  __int64 result; // x0
  __int64 v8; // [xsp+10h] [xbp-10B0h]
  __int64 v9; // [xsp+18h] [xbp-10A8h]
  __int64 v10; // [xsp+20h] [xbp-10A0h]
  __int64 v11[2]; // [xsp+40h] [xbp-1080h] BYREF
  __int64 v12; // [xsp+50h] [xbp-1070h] BYREF
  __int64 v13; // [xsp+58h] [xbp-1068h]
  unsigned int v14; // [xsp+60h] [xbp-1060h] BYREF
  _BYTE v15[4100]; // [xsp+64h] [xbp-105Ch] BYREF
  __int64 v16; // [xsp+1068h] [xbp-58h]

  v16 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v12 = 0LL;
  v13 = 0LL;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v10 = qword_1E8D00 + 144;
  v9 = qword_1E9020 + 144;
  v8 = qword_1E8770 + 120;
  while ( !*(_BYTE *)(qword_1E8828 + 3) )
  {
    ((void (__fastcall *)(__int64))unk_1EA54)(qword_1E8770 + 120);
    if ( *(_DWORD *)(qword_1E89E0 + 12) )
      goto LABEL_15;
    v5 = ((((*(_DWORD *)qword_1E8FB0 - 1) * *(_DWORD *)qword_1E8FB0) ^ 0xFFFFFFFE) & ((*(_DWORD *)qword_1E8FB0 - 1)
                                                                                    * *(_DWORD *)qword_1E8FB0)) == 0;
    if ( !((*(_DWORD *)qword_1E8750 < 10 && v5) | (*(_DWORD *)qword_1E8750 < 10) ^ v5) )
LABEL_6:
      ((void (__fastcall *)(__int64, __int64))unk_1EA70)(v9, v8);
    ((void (__fastcall *)(__int64, __int64))unk_1EA70)(qword_1E9020 + 144, qword_1E8770 + 120);
    v6 = ((((*(_DWORD *)qword_1E8FB0 - 1) * *(_DWORD *)qword_1E8FB0) ^ 0xFFFFFFFE) & ((*(_DWORD *)qword_1E8FB0 - 1)
                                                                                    * *(_DWORD *)qword_1E8FB0)) == 0;
    if ( !((*(_DWORD *)qword_1E8750 < 10 && v6) | (*(_DWORD *)qword_1E8750 < 10) ^ v6) )
      goto LABEL_6;
LABEL_15:
    ((void (__fastcall *)(__int64))unk_1EA1C)(qword_1E8770 + 120);
    if ( *(_BYTE *)qword_1E8FC8 )
    {
LABEL_26:
      if ( qword_1F0C38 != qword_1F0C18 )
      {
        v4 = (~((*(_DWORD *)qword_1E8FB0 - 1) * *(_DWORD *)qword_1E8FB0) | 0xFFFFFFFE) == -1;
        if ( (*(_DWORD *)qword_1E8750 < 10 && v4) | (*(_DWORD *)qword_1E8750 < 10) ^ v4 )
        {
          v2 = -678064976;
          goto LABEL_4;
        }
        while ( 1 )
        {
          ((void (__fastcall *)(unsigned int *, __int64, __int64))unk_173450)(&v14, qword_1F0C18, 4100LL);
          ((void (__fastcall *)(_QWORD, _BYTE *))unk_16EB14)(v14, v15);
          v2 = -678064976;
LABEL_4:
          while ( v2 > -678064977 )
          {
            ((void (__fastcall *)(unsigned int *, __int64, __int64))unk_173450)(&v14, qword_1F0C18, 4100LL);
            ((void (__fastcall *)(_QWORD, _BYTE *))unk_16EB14)(v14, v15);
            v3 = (~((*(_DWORD *)qword_1E8FB0 - 1) * *(_DWORD *)qword_1E8FB0) | 0xFFFFFFFE) == -1;
            if ( (*(_DWORD *)qword_1E8750 < 10 && v3) | (*(_DWORD *)qword_1E8750 < 10) ^ v3 )
              v2 = 1725781043;
            else
              v2 = -1588797397;
            if ( v2 > 1251597969 )
              goto LABEL_26;
          }
        }
      }
      *(_BYTE *)(qword_1E8828 + 3) = 1;
    }
    ((void (__fastcall *)(__int64 *, _QWORD))unk_1EA8C)(v11, 0LL);
    v12 = v11[0] + 3;
    v13 = 0LL;
    v1 = qword_1E8770 + 120;
    ((void (__fastcall *)(__int64))unk_1EA54)(qword_1E8770 + 120);
    ((void (__fastcall *)(__int64, __int64, __int64 *))unk_1EAA8)(v10, v1, &v12);
    a1 = ((__int64 (__fastcall *)(__int64))unk_1EA1C)(v1);
  }
  if ( *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40) == v16 )
    return 0LL;
  ((void (__fastcall *)(__int64))unk_1740C0)(a1);
  return result;
}
