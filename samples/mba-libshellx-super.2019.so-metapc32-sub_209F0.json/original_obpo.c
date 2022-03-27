int __cdecl sub_209F0(_DWORD *a1, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v11; // edx
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // esi
  bool v17; // cc
  bool v18; // dl
  bool v19; // dl
  bool v20; // dl
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // [esp+20h] [ebp-5Ch]
  _DWORD *v33; // [esp+24h] [ebp-58h]
  int v34; // [esp+30h] [ebp-4Ch]
  int i; // [esp+34h] [ebp-48h]
  int v36; // [esp+38h] [ebp-44h]
  void (__cdecl *v37)(_DWORD *, int); // [esp+44h] [ebp-38h]
  int v38; // [esp+48h] [ebp-34h]
  int v39; // [esp+54h] [ebp-28h]

  do
  {
    v7 = -1719786351;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FE1C * ((unsigned __int8)*(_DWORD *)dword_3FE1C - 1)) & 1) != 0 )
      v7 = 119951307;
  }
  while ( *(int *)dword_3FE20 >= 10 && v7 != -1719786351 );
  if ( *(_BYTE *)(*(_DWORD *)dword_3FD88 + 683) )
  {
    v6 = -688677834;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FE1C * ((unsigned __int8)*(_DWORD *)dword_3FE1C - 1)) & 1) != 0 )
      v6 = 1942965207;
    if ( *(int *)dword_3FE20 < 10 || v6 == -688677834 )
      goto LABEL_118;
    do
    {
      ((void (__cdecl *)(_DWORD))unk_2D1C0)(*a1);
LABEL_118:
      v32 = ((int (__cdecl *)(_DWORD))unk_2D1C0)(*a1);
      v31 = -14056047;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FE1C * ((unsigned __int8)*(_DWORD *)dword_3FE1C - 1)) & 1) != 0 )
        v31 = 1942965207;
    }
    while ( *(int *)dword_3FE20 >= 10 && v31 != -14056047 );
    v3 = a1;
    v2 = (_DWORD *)dword_3FE1C;
    do
    {
      v29 = 258271593;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FE1C * ((unsigned __int8)*(_DWORD *)dword_3FE1C - 1)) & 1) != 0 )
        v29 = 2104019399;
    }
    while ( *(int *)dword_3FE20 >= 10 && v29 != 258271593 );
    if ( v32 )
    {
      v39 = a1[2];
      v4 = 327942218;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FE1C * ((unsigned __int8)*(_DWORD *)dword_3FE1C - 1)) & 1) != 0 )
        v4 = -1782606877;
      if ( *(int *)dword_3FE20 >= 10 && v4 == -1782606877 )
        goto LABEL_84;
      while ( 1 )
      {
        v38 = ((int (__cdecl *)(int))unk_240D0)(v32);
        v22 = 1812697445;
        if ( (((unsigned __int8)*(_DWORD *)dword_3FE1C * ((unsigned __int8)*(_DWORD *)dword_3FE1C - 1)) & 1) != 0 )
          v22 = -1782606877;
        if ( *(int *)dword_3FE20 < 10 || v22 != -1782606877 )
          break;
LABEL_84:
        ((void (__cdecl *)(int))unk_240D0)(v32);
      }
      for ( i = 0; ; ++i )
      {
        do
        {
          v33 = *(_DWORD **)dword_3FD88;
          v5 = -1821338182;
          if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
            v5 = -1277600287;
        }
        while ( *(int *)dword_3FE20 >= 10 && v5 != -1821338182 );
        if ( i >= *(_DWORD *)(*(_DWORD *)dword_3FD88 + 608) )
          break;
        if ( v39 != *(_DWORD *)(v33[140] + 4 * i) )
          goto LABEL_69;
        do
        {
          v27 = -2114198925;
          if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
            v27 = 586830992;
        }
        while ( *(int *)dword_3FE20 >= 10 && v27 != -2114198925 );
        v34 = ((int (__cdecl *)(_DWORD, _DWORD, int))unk_2C870)(
                *(_DWORD *)(v33[156] + 4 * i),
                *(_DWORD *)(v33[153] + 4 * i),
                v38);
        if ( v34 >= 0 )
        {
          v30 = 720605799;
          if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
            v30 = -78699735;
          if ( *(int *)dword_3FE20 < 10 || v30 == 720605799 )
            goto LABEL_97;
          while ( 1 )
          {
            ((void (__cdecl *)(int, int))unk_14C30)(v34, i);
LABEL_97:
            ((void (__cdecl *)(int, int))unk_14C30)(v34, i);
            v25 = -881620954;
            if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
              v25 = -78699735;
            if ( *(int *)dword_3FE20 < 10 || v25 != -78699735 )
            {
              do
              {
                v23 = 718911891;
                if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
                  v23 = -806069723;
              }
              while ( *(int *)dword_3FE20 >= 10 && v23 != 718911891 );
              v36 = 0;
              goto LABEL_64;
            }
          }
        }
        do
        {
          v21 = 1537322194;
          if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
            v21 = -1117796840;
        }
        while ( *(int *)dword_3FE20 >= 10 && v21 != 1537322194 );
        v36 = 2;
        while ( 1 )
        {
LABEL_64:
          v8 = *(_DWORD *)dword_3FE20;
          v9 = 1936981382;
          if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) == 0 )
            v9 = 1651879691;
          v17 = v8 <= 9;
          v19 = v8 > 9;
          if ( !v17 )
            v9 = 1936981382;
          if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != v19 )
            break;
          if ( v9 != 1936981382 )
          {
            v3 = a1;
            v2 = (_DWORD *)dword_3FE1C;
            goto LABEL_67;
          }
          v2 = (_DWORD *)dword_3FE1C;
        }
        v3 = a1;
        v2 = (_DWORD *)dword_3FE1C;
LABEL_67:
        if ( v36 )
          break;
        while ( 1 )
        {
LABEL_69:
          v11 = *(_DWORD *)dword_3FE20;
          v12 = -158297040;
          if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) == 0 )
            v12 = 2051063080;
          v17 = v11 <= 9;
          v20 = v11 > 9;
          if ( !v17 )
            v12 = -158297040;
          if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != v20 )
            break;
          if ( v12 == 2051063080 )
          {
            v3 = a1;
            v2 = (_DWORD *)dword_3FE1C;
            goto LABEL_105;
          }
          v2 = (_DWORD *)dword_3FE1C;
        }
        v3 = a1;
        v2 = (_DWORD *)dword_3FE1C;
LABEL_105:
        ;
      }
      ((void (__cdecl *)(int))unk_1A10)(v38);
      v28 = 1029425370;
      if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
        v28 = -1663611713;
      if ( *(int *)dword_3FE20 < 10 || v28 == 1029425370 )
        goto LABEL_99;
      do
      {
        ((void (__cdecl *)(int))unk_1A10)(v32);
        (*(void (__cdecl **)(_DWORD *, int))(*(_DWORD *)dword_3FD88 + 652))(v3, a2);
LABEL_99:
        ((void (__cdecl *)(int))unk_1A10)(v32);
        (*(void (__cdecl **)(_DWORD *, int))(*(_DWORD *)dword_3FD88 + 652))(v3, a2);
        v26 = -1138242817;
        if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
          v26 = -1663611713;
      }
      while ( *(int *)dword_3FE20 >= 10 && v26 == -1663611713 );
    }
    else
    {
      v37 = *(void (__cdecl **)(_DWORD *, int))(*(_DWORD *)dword_3FD88 + 652);
      v13 = -605127712;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FE1C * ((unsigned __int8)*(_DWORD *)dword_3FE1C - 1)) & 1) != 0 )
        v13 = -406007319;
      if ( *(int *)dword_3FE20 >= 10 && v13 == -406007319 )
        goto LABEL_103;
      while ( 1 )
      {
        v37(a1, a2);
        v14 = -1918582589;
        if ( (((unsigned __int8)*(_DWORD *)dword_3FE1C * ((unsigned __int8)*(_DWORD *)dword_3FE1C - 1)) & 1) != 0 )
          v14 = -406007319;
        if ( *(int *)dword_3FE20 < 10 || v14 == -1918582589 )
          break;
LABEL_103:
        v37(a1, a2);
      }
      while ( 1 )
      {
        v15 = *(_DWORD *)dword_3FE20;
        v16 = 358623736;
        if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) == 0 )
          v16 = 1544234931;
        v17 = v15 <= 9;
        v18 = v15 > 9;
        if ( !v17 )
          v16 = 358623736;
        if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != v18 )
          break;
        if ( v16 != 358623736 )
        {
          v2 = (_DWORD *)dword_3FE1C;
          goto LABEL_90;
        }
        v2 = (_DWORD *)dword_3FE1C;
      }
      v2 = (_DWORD *)dword_3FE1C;
    }
    do
    {
LABEL_90:
      v24 = 323860910;
      if ( (((unsigned __int8)*v2 * ((unsigned __int8)*v2 - 1)) & 1) != 0 )
        v24 = -1268434274;
    }
    while ( *(int *)dword_3FE20 >= 10 && v24 != 323860910 );
  }
  else
  {
    (*(void (__cdecl **)(_DWORD *, int))(*(_DWORD *)dword_3FD88 + 652))(a1, a2);
  }
  return -2001762805;
}
