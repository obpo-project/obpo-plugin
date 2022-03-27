int __cdecl sub_25D0(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
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
  int v32; // eax
  int result; // eax
  bool v34; // [esp+25h] [ebp-C7h]
  bool v35; // [esp+26h] [ebp-C6h]
  int v36; // [esp+34h] [ebp-B8h]
  int v37; // [esp+38h] [ebp-B4h]
  int v38; // [esp+5Ch] [ebp-90h]
  int v39; // [esp+60h] [ebp-8Ch]
  int v40; // [esp+64h] [ebp-88h]
  int v41; // [esp+68h] [ebp-84h]
  int v42; // [esp+80h] [ebp-6Ch]
  int v43; // [esp+94h] [ebp-58h]
  int v44; // [esp+98h] [ebp-54h]
  int v45; // [esp+9Ch] [ebp-50h]
  int v46; // [esp+A4h] [ebp-48h]
  _DWORD *v47; // [esp+A8h] [ebp-44h]
  int v48; // [esp+B0h] [ebp-3Ch]
  int v49; // [esp+CCh] [ebp-20h]
  int v50; // [esp+D8h] [ebp-14h]
  _DWORD v51[4]; // [esp+DCh] [ebp-10h] BYREF
  int savedregs; // [esp+ECh] [ebp+0h] BYREF

  v50 = *(_DWORD *)dword_3FD8C;
  do
  {
    v4 = 63330179;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
      v4 = 808367950;
    if ( *(int *)dword_3FD94 > 9 )
      v4 = 808367950;
  }
  while ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9
       && v4 != 63330179 );
  v18 = -1816153920;
  if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
    v18 = -488526868;
  if ( *(int *)dword_3FD94 >= 10 && v18 == -1816153920 )
    goto LABEL_92;
  while ( 1 )
  {
    *(_DWORD *)*(&dword_3FE88 - 64) = ((int (__cdecl *)(int, int))unk_1A40)(1, 724);
    v17 = -1626801376;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
      v17 = -1816153920;
    if ( *(int *)dword_3FD94 > 9 )
      v17 = -1816153920;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != *(_DWORD *)dword_3FD94 > 9
      || v17 == -1626801376 )
    {
      break;
    }
LABEL_92:
    *(_DWORD *)*(&dword_3FE88 - 64) = ((int (__cdecl *)(int, int))unk_1A40)(1, 724);
  }
  v2 = -202624505;
  if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
    v2 = -99800017;
  if ( *(int *)dword_3FD94 < 10 || v2 == -99800017 )
    goto LABEL_87;
  do
  {
    savedregs = 0;
    (*(void (__cdecl **)(int, int *, void *))(*(_DWORD *)a1 + 24))(a1, &savedregs, &unk_10004);
LABEL_87:
    savedregs = 0;
    v34 = (*(int (__cdecl **)(int, int *, void *))(*(_DWORD *)a1 + 24))(a1, &savedregs, &unk_10004) != 0;
    v14 = 37762858;
    if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
      v14 = -202624505;
    if ( *(int *)dword_3FD94 > 9 )
      v14 = -202624505;
  }
  while ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9
       && v14 != 37762858 );
  if ( v34 )
  {
    v41 = -1;
  }
  else
  {
    *(_DWORD *)*(&dword_3FE88 - 59) = a1;
    v36 = (*(int (__cdecl **)(int, int *))(*(_DWORD *)savedregs + 24))(savedregs, &dword_3FE88 + 102);
    v31 = -999330560;
    if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
      v31 = -329220272;
    if ( *(int *)dword_3FD94 >= 10 && v31 == -999330560 )
      goto LABEL_73;
    while ( 1 )
    {
      (*(void (__cdecl **)(int, int, int *, int))(*(_DWORD *)savedregs + 860))(savedregs, v36, &dword_3FE88 + 95, 1);
      v11 = (*(int (__cdecl **)(int, int *))(*(_DWORD *)savedregs + 24))(savedregs, &dword_3FE88 + 118);
      v35 = (*(int (__cdecl **)(int, int, int *, int))((char *)&dword_401E4 + *(_DWORD *)savedregs - 261768))(
              savedregs,
              v11,
              &dword_3FE88 + 98,
              1) < 0;
      v10 = -999330560;
      if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
        v10 = -218307107;
      if ( *(int *)dword_3FD94 < 10 || v10 == -218307107 )
        break;
LABEL_73:
      (*(void (__cdecl **)(int, int, int *, int))(*(_DWORD *)savedregs + 860))(savedregs, v36, &dword_3FE88 + 95, 1);
      v6 = (*(int (__cdecl **)(int, int *))(*(_DWORD *)savedregs + 24))(savedregs, &dword_3FE88 + 118);
      (*(void (__cdecl **)(int, int, int *, int))((char *)&dword_401E4 + *(_DWORD *)savedregs - 261768))(
        savedregs,
        v6,
        &dword_3FE88 + 98,
        1);
    }
    if ( v35 )
    {
      do
      {
        v5 = 43758011;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v5 = 250353286;
      }
      while ( *(int *)dword_3FD94 >= 10 && v5 != 250353286 );
      v40 = -1;
    }
    else
    {
      v1 = (*(int (__cdecl **)(int, int, char *, void *))(*(_DWORD *)savedregs + 576))(
             savedregs,
             v36,
             (char *)&dword_3FE88 + 521,
             &unk_400A0);
      v42 = (*(int (__cdecl **)(int, int, int))((char *)&dword_400CC + *(_DWORD *)savedregs - 261768))(
              savedregs,
              v36,
              v1);
      v37 = (*(int (__cdecl **)(int, int, _DWORD))(*(_DWORD *)savedregs + 676))(savedregs, v42, 0);
      do
      {
        v8 = 1609812625;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v8 = -811343210;
      }
      while ( *(int *)dword_3FD94 >= 10 && v8 != -811343210 );
      if ( !v37 )
        goto LABEL_96;
      do
      {
        v48 = ((int (__cdecl *)(int, char *))unk_1A60)(v37, (char *)&dword_3FE88 + 555);
        v16 = -1630310828;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v16 = -946652055;
      }
      while ( *(int *)dword_3FD94 >= 10 && v16 != -946652055 );
      if ( v48 )
LABEL_96:
        *(_BYTE *)(*(_DWORD *)*(&dword_3FE88 - 64) + 696) = 0;
      else
        *(_BYTE *)(*(_DWORD *)*(&dword_3FE88 - 64) + 696) = 1;
      (*(void (__cdecl **)(int, int, int))(*(_DWORD *)savedregs + 680))(savedregs, v42, v37);
      (*(void (__cdecl **)(int, int))(*(_DWORD *)savedregs + 92))(savedregs, v42);
      v47 = (_DWORD *)*(&dword_3FE88 - 64);
      ((void (__cdecl *)(int, int, _DWORD))unk_26FC0)(a1, savedregs, *v47);
      ((void (__cdecl *)(int, char *))unk_244E0)(savedregs, (char *)&dword_3FE88 + 570);
      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(&savedregs, 0, 256);
      ((void (__cdecl *)(int *, int *))unk_1A80)(&dword_3FE88 + 150, &savedregs);
      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(&savedregs, 0, 256);
      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(&savedregs, 0, 256);
      v30 = ((int (*)(void))unk_244B0)();
      ((void (__cdecl *)(int *, int, int *, int, int *, _DWORD))unk_1A30)(
        &savedregs,
        255,
        &dword_3FE88 + 158,
        v30,
        &savedregs,
        *v47);
      ((void (__cdecl *)(int, int *))unk_244E0)(savedregs, &savedregs);
      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(&savedregs, 0, 256);
      ((void (__cdecl *)(int, int *))unk_24210)(savedregs, &savedregs);
      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(&savedregs, 0, 256);
      ((void (__cdecl *)(int *, char *))unk_1A50)(&savedregs, (char *)&dword_3FE88 + 685);
      if ( ((int (__cdecl *)(int *, _DWORD))unk_1A70)(&savedregs, 0) != 0 )
        ((void (__cdecl *)(int *, int))unk_1A90)(&savedregs, 484);
      do
      {
        v3 = -1692929454;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v3 = -1661335094;
      }
      while ( *(int *)dword_3FD94 >= 10 && v3 != -1661335094 );
      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(&savedregs, 0, 256);
      ((void (__cdecl *)(int, int *))unk_241C0)(savedregs, &savedregs);
      ((void (__cdecl *)(int *))unk_1A50)(&savedregs);
      ((void (__cdecl *)(int *))unk_37000)(&savedregs);
      ((void (__cdecl *)(int, int *))unk_244E0)(savedregs, &dword_3FE88 + 178);
      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(&savedregs, 0, 256);
      ((void (__cdecl *)(int *, int, int *, _DWORD))unk_1A30)(&savedregs, 255, &dword_3FE88 + 182, 0);
      ((void (__cdecl *)(int, int *))unk_244E0)(savedregs, &savedregs);
      savedregs = 0;
      v51[0] = 0;
      v43 = *(_DWORD *)(*(_DWORD *)*(&dword_3FE88 - 64) + 608);
      v19 = -1432460444;
      while ( v19 <= -1289029898 )
      {
        v19 = -572516439;
        if ( v43 < 2 )
          v19 = 1090668617;
        if ( v19 > -461852115 )
          goto LABEL_116;
      }
      if ( v43 > 30 )
      {
LABEL_116:
        v39 = ((int (__cdecl *)(int, int *, _DWORD *))unk_112A0)(savedregs, &savedregs, v51);
        goto LABEL_55;
      }
      v44 = savedregs;
      v21 = 1527505883;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
        v21 = 2132163816;
      if ( *(int *)dword_3FD94 > 9 )
        v21 = 2132163816;
      if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9
        && v21 == 2132163816 )
      {
        goto LABEL_110;
      }
      while ( 1 )
      {
        v49 = ((int (__cdecl *)(int, int *, _DWORD *))unk_FD90)(v44, &savedregs, v51);
        v20 = 2132163816;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v20 = -688540332;
        if ( *(int *)dword_3FD94 < 10 || v20 == -688540332 )
          break;
LABEL_110:
        ((void (__cdecl *)(int, int *, _DWORD *))unk_FD90)(v44, &savedregs, v51);
      }
      v39 = v49;
LABEL_55:
      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(&savedregs, 0, 256);
      ((void (__cdecl *)(int *, int, int *, int))unk_1A30)(&savedregs, 255, &dword_3FE88 + 190, v39);
      ((void (__cdecl *)(int, int *))unk_244E0)(savedregs, &savedregs);
      if ( v39 )
      {
        v29 = -576091749;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v29 = 1462449265;
        if ( *(int *)dword_3FD94 < 10 || v29 == 1462449265 )
          goto LABEL_120;
        do
        {
          ((void (__cdecl *)(int))unk_36F00)(1);
LABEL_120:
          ((void (__cdecl *)(int))unk_36F00)(1);
          v25 = -554034934;
          if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
            v25 = -576091749;
          if ( *(int *)dword_3FD94 > 9 )
            v25 = -576091749;
        }
        while ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9
             && v25 != -554034934 );
        v45 = *(_DWORD *)*(&dword_3FE88 - 60) | 4;
        v7 = 123407484;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v7 = -1889039375;
        if ( *(int *)dword_3FD94 >= 10 && v7 == 123407484 )
          goto LABEL_56;
        while ( 1 )
        {
          *(_DWORD *)*(&dword_3FE88 - 60) = v45;
          v32 = -690462645;
          if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
            v32 = 123407484;
          if ( *(int *)dword_3FD94 > 9 )
            v32 = 123407484;
          if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != *(_DWORD *)dword_3FD94 > 9
            || v32 == -690462645 )
          {
            break;
          }
LABEL_56:
          *(_DWORD *)*(&dword_3FE88 - 60) = v45;
        }
      }
      do
      {
        v27 = 617361679;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v27 = -413877741;
      }
      while ( *(int *)dword_3FD94 >= 10 && v27 == 617361679 );
      if ( savedregs )
      {
        (*(void (__cdecl **)(int, int))(*(_DWORD *)savedregs + 52))(savedregs, savedregs);
        do
        {
          v24 = -813167686;
          if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
            v24 = -1503861856;
        }
        while ( *(int *)dword_3FD94 >= 10 && v24 != -1503861856 );
      }
      else
      {
        v38 = v51[0];
        do
        {
          v23 = -1977696804;
          if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
            v23 = -1594495222;
        }
        while ( *(int *)dword_3FD94 >= 10 && v23 == -1977696804 );
        if ( v51[0] )
        {
          do
          {
            v46 = savedregs;
            v22 = -1289029897;
            if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
              v22 = -1809504418;
          }
          while ( *(int *)dword_3FD94 >= 10 && v22 == -1289029897 );
          v13 = -1383647215;
          if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
            v13 = -687422616;
          if ( *(int *)dword_3FD94 > 9 )
            v13 = -687422616;
          if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != *(_DWORD *)dword_3FD94 > 9
            || v13 == -1383647215 )
          {
            goto LABEL_127;
          }
          do
          {
            (*(void (__cdecl **)(int, int))(*(_DWORD *)v46 + 52))(v46, v38);
LABEL_127:
            (*(void (__cdecl **)(int, int))(*(_DWORD *)v46 + 52))(v46, v38);
            v26 = -687422616;
            if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
              v26 = 1866749881;
          }
          while ( *(int *)dword_3FD94 >= 10 && v26 != 1866749881 );
          do
          {
            v28 = 1165636723;
            if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
              v28 = 552395407;
          }
          while ( *(int *)dword_3FD94 >= 10 && v28 == 1165636723 );
        }
      }
      do
      {
        v12 = 1124341557;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v12 = 2122774008;
      }
      while ( *(int *)dword_3FD94 >= 10 && v12 == 1124341557 );
      do
      {
        v15 = 39184446;
        if ( ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0 )
          v15 = 173767427;
      }
      while ( *(int *)dword_3FD94 >= 10 && v15 == 39184446 );
      v40 = (int)&unk_10004;
    }
    v41 = v40;
  }
  if ( *(_DWORD *)dword_3FD8C == v50 )
    return v41;
  ((void (*)(void))unk_1AA0)();
  return result;
}
