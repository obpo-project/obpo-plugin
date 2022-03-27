int __cdecl sub_2EBC0(int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int result; // eax
  int v22; // [esp+2Ch] [ebp-740h]
  int v23; // [esp+30h] [ebp-73Ch]
  int v24; // [esp+40h] [ebp-72Ch]
  int v25; // [esp+48h] [ebp-724h]
  int v26; // [esp+4Ch] [ebp-720h]
  _BYTE v27[256]; // [esp+50h] [ebp-71Ch] BYREF
  _BYTE v28[256]; // [esp+150h] [ebp-61Ch] BYREF
  _BYTE v29[256]; // [esp+250h] [ebp-51Ch] BYREF
  _OWORD v30[16]; // [esp+350h] [ebp-41Ch] BYREF
  _BYTE v31[256]; // [esp+458h] [ebp-314h] BYREF
  _BYTE v32[256]; // [esp+558h] [ebp-214h] BYREF
  _BYTE v33[256]; // [esp+658h] [ebp-114h] BYREF
  int v34; // [esp+758h] [ebp-14h]

  v34 = *(_DWORD *)dword_3FD8C;
  ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v28, 0, 256);
  ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v33, 0, 256);
  v2 = 678804484;
  if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
    v2 = 1961239848;
  if ( *(int *)dword_3FD84 >= 10 && v2 == 678804484 )
    goto LABEL_51;
  while ( 1 )
  {
    ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v32, 0, 256);
    ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v31, 0, 256);
    ((void (__cdecl *)(_OWORD *, _DWORD, int))unk_1A20)(v30, 0, 256);
    ((void (__cdecl *)(_BYTE *, _DWORD))unk_1A20)(v29, 0);
    ((void (__cdecl *)(int))unk_241C0)(a2);
    v4 = ((int (__cdecl *)(_BYTE *))unk_1AC0)(v33);
    ((void (__cdecl *)(_BYTE *, _BYTE *, int))unk_1D40)(v28, v33, v4 - 16);
    v3 = 678804484;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
      v3 = -554247784;
    if ( *(int *)dword_3FD84 < 10 || v3 == -554247784 )
      break;
LABEL_51:
    ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v32, 0, 256);
    ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v31, 0, 256);
    v30[15] = 0LL;
    v30[14] = 0LL;
    v30[13] = 0LL;
    v30[12] = 0LL;
    v30[11] = 0LL;
    v30[10] = 0LL;
    v30[9] = 0LL;
    v30[8] = 0LL;
    v30[7] = 0LL;
    v30[6] = 0LL;
    v30[5] = 0LL;
    v30[4] = 0LL;
    v30[3] = 0LL;
    v30[2] = 0LL;
    v30[1] = 0LL;
    v30[0] = 0LL;
    ((void (__cdecl *)(_BYTE *, _DWORD))unk_1A20)(v29, 0);
    ((void (__cdecl *)(int))unk_241C0)(a2);
    v10 = ((int (__cdecl *)(_BYTE *))unk_1AC0)(v33);
    ((void (__cdecl *)(_BYTE *, _BYTE *, int))unk_1D40)(v28, v33, v10 - 16);
  }
  if ( *(_DWORD *)(*(_DWORD *)dword_3FD88 + 600) == 3 )
  {
    v16 = -448069933;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
      v16 = 1178437641;
    if ( *(int *)dword_3FD84 < 10 || v16 == 1178437641 )
      goto LABEL_41;
    do
    {
      ((void (__cdecl *)(_OWORD *, void *, _BYTE *, void *))unk_1A50)(v30, &unk_3BCA0, v33, &unk_3BCA6);
LABEL_41:
      ((void (__cdecl *)(_OWORD *, void *, _BYTE *, void *))unk_1A50)(v30, &unk_3BCA0, v33, &unk_3BCA6);
      v7 = -448069933;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
        v7 = -223593435;
    }
    while ( *(int *)dword_3FD84 >= 10 && v7 != -223593435 );
    do
    {
      v13 = 135161357;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
        v13 = 126109574;
    }
    while ( *(int *)dword_3FD84 >= 10 && v13 != 126109574 );
  }
  else
  {
    v19 = 880244960;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
      v19 = 912753380;
    if ( *(int *)dword_3FD84 < 10 || v19 == 912753380 )
      goto LABEL_53;
    do
    {
      ((void (__cdecl *)(_OWORD *, void *, _BYTE *, void *))unk_1A50)(v30, &unk_3BCBE, v28, &unk_3BCC8);
LABEL_53:
      ((void (__cdecl *)(_OWORD *, void *, _BYTE *, void *))unk_1A50)(v30, &unk_3BCBE, v28, &unk_3BCC8);
      v12 = 880244960;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
        v12 = 2017929301;
    }
    while ( *(int *)dword_3FD84 >= 10 && v12 == 880244960 );
  }
  ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
  dword_435D4 = ((int (__cdecl *)(void *))unk_1B60)(&unk_3BCDF);
  v23 = ((int (__cdecl *)(void *, _OWORD *, int))unk_1E60)(&unk_3BCDF, v30, 1);
  v15 = -328758942;
  if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
    v15 = -448108140;
  if ( *(int *)dword_3FD84 >= 10 && v15 == -328758942 )
    goto LABEL_69;
  while ( 1 )
  {
    ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
    v18 = -328758942;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
      v18 = 679023650;
    if ( *(int *)dword_3FD84 < 10 || v18 != -328758942 )
      break;
LABEL_69:
    ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
  }
  if ( !v23 )
  {
    v17 = -1602150202;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
      v17 = -136231703;
    if ( *(int *)dword_3FD84 >= 10 && v17 == -1602150202 )
      goto LABEL_68;
    while ( 1 )
    {
      ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v27, 0, 256);
      v20 = -1602150202;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
        v20 = 1737870880;
      if ( *(int *)dword_3FD84 < 10 || v20 == 1737870880 )
      {
        v5 = 16560090;
        goto LABEL_61;
      }
LABEL_68:
      ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v27, 0, 256);
    }
  }
  v5 = 916948855;
  v22 = v23;
  do
  {
LABEL_32:
    while ( v5 > 1178437640 )
    {
      if ( v5 <= 1746803142 )
      {
        v8 = -199426237;
        if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) != 0 )
          v8 = 834102973;
        if ( *(int *)dword_3FD84 > 9 )
          v8 = 834102973;
        if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == *(_DWORD *)dword_3FD84 > 9
          && v8 != -199426237 )
        {
LABEL_47:
          ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
          ((void (__cdecl *)(void *, _BYTE *, int))unk_1E60)(&unk_3BCF7, v33, 1);
        }
        ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
        v25 = ((int (__cdecl *)(void *, _BYTE *, int))unk_1E60)(&unk_3BCF7, v33, 1);
        v14 = 834102973;
        if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
          v14 = 693505837;
        if ( *(int *)dword_3FD84 >= 10 && v14 != 693505837 )
          goto LABEL_47;
        ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
        do
        {
          v11 = 1095226217;
          if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
            v11 = 1842101360;
        }
        while ( *(int *)dword_3FD84 >= 10 && v11 == 1095226217 );
        v5 = 916948855;
        v22 = v25;
      }
      else
      {
        if ( v5 <= 1963898934 )
          goto LABEL_49;
        v6 = 1;
LABEL_75:
        v5 = 916948855;
        if ( !v6 )
          v5 = 1246285010;
        v22 = v24;
      }
    }
    v26 = v22;
    v5 = -2044894913;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
      v5 = 1746803143;
    if ( *(int *)dword_3FD84 < 10 )
      v5 = 1746803143;
  }
  while ( v5 > 135161356 );
LABEL_61:
  while ( v5 > -839111593 )
  {
    ((void (__cdecl *)(int))unk_23F90)(a2);
    ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
    v24 = ((int (__cdecl *)(void *, _BYTE *, int))unk_1E60)(&unk_3BCEA, v27, 1);
    ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
    v5 = 2016088901;
    if ( !v24 )
      v5 = -1078210965;
    if ( v5 > 135161356 )
      goto LABEL_32;
  }
  if ( v5 > -1600269700 )
  {
    v6 = 0;
    goto LABEL_75;
  }
  do
  {
LABEL_49:
    v9 = -2044894913;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
      v9 = -1872316320;
  }
  while ( *(int *)dword_3FD84 >= 10 && v9 != -1872316320 );
  result = v26;
  if ( *(_DWORD *)dword_3FD8C != v34 )
    ((void (*)(void))unk_1AA0)();
  return result;
}
