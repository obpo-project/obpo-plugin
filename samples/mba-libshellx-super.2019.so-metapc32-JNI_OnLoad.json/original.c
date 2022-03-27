int __cdecl sub_25D0(int a1)
{
  int i; // eax
  bool v2; // zf
  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // edx
  bool v7; // zf
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int *v14; // [esp+18h] [ebp-D4h]
  int *v15; // [esp+1Ch] [ebp-D0h]
  bool v16; // [esp+23h] [ebp-C9h]
  bool v17; // [esp+24h] [ebp-C8h]
  bool v18; // [esp+25h] [ebp-C7h]
  bool v19; // [esp+26h] [ebp-C6h]
  bool v20; // [esp+27h] [ebp-C5h]
  bool v21; // [esp+28h] [ebp-C4h]
  bool v22; // [esp+29h] [ebp-C3h]
  bool v23; // [esp+2Ah] [ebp-C2h]
  bool v24; // [esp+2Bh] [ebp-C1h]
  int *v25; // [esp+2Ch] [ebp-C0h]
  int *v26; // [esp+30h] [ebp-BCh]
  int v27; // [esp+34h] [ebp-B8h]
  int v28; // [esp+38h] [ebp-B4h]
  int *v29; // [esp+40h] [ebp-ACh]
  int *v30; // [esp+54h] [ebp-98h]
  int *v31; // [esp+58h] [ebp-94h]
  int v32; // [esp+5Ch] [ebp-90h]
  int v33; // [esp+60h] [ebp-8Ch]
  int v34; // [esp+64h] [ebp-88h]
  int v35; // [esp+68h] [ebp-84h]
  int *v36; // [esp+6Ch] [ebp-80h]
  int *v37; // [esp+70h] [ebp-7Ch]
  int *v38; // [esp+74h] [ebp-78h]
  int *v39; // [esp+78h] [ebp-74h]
  int v40; // [esp+80h] [ebp-6Ch]
  int v41; // [esp+84h] [ebp-68h]
  int v42; // [esp+94h] [ebp-58h]
  int v43; // [esp+98h] [ebp-54h]
  int v44; // [esp+9Ch] [ebp-50h]
  int v45; // [esp+A0h] [ebp-4Ch]
  int v46; // [esp+A4h] [ebp-48h]
  _DWORD *v47; // [esp+A8h] [ebp-44h]
  int v48; // [esp+B0h] [ebp-3Ch]
  _BYTE *v49; // [esp+B4h] [ebp-38h]
  int v50; // [esp+B8h] [ebp-34h]
  int v51; // [esp+BCh] [ebp-30h]
  int v52; // [esp+C0h] [ebp-2Ch]
  int v53; // [esp+C4h] [ebp-28h]
  int v54; // [esp+C8h] [ebp-24h]
  int v55; // [esp+CCh] [ebp-20h]
  int v56; // [esp+D0h] [ebp-1Ch]
  int v57; // [esp+D4h] [ebp-18h]
  int v58; // [esp+D8h] [ebp-14h]
  int v59; // [esp+DCh] [ebp-10h] BYREF
  int savedregs; // [esp+ECh] [ebp+0h] BYREF

  v58 = *(_DWORD *)dword_3FD8C;
  v16 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
  v17 = *(_DWORD *)dword_3FD94 < 10;
  for ( i = 1566105189; ; i = 349429486 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_7:
          while ( i > 808367949 )
          {
            if ( i > 1531909052 )
            {
              if ( i > 1859746963 )
              {
                if ( i > 2039043682 )
                {
                  if ( i > 2122774007 )
                  {
                    if ( i == 2122774008 )
                    {
                      i = -570256196;
                      goto LABEL_19;
                    }
                    ((void (__cdecl *)(int, int *, int *))unk_FD90)(v43, v25, v26);
                    i = 1527505883;
                  }
                  else
                  {
                    if ( i == 2039043683 )
                    {
                      v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                      i = 617361679;
                      v6 = -413877741;
                      goto LABEL_2;
                    }
                    v23 = v45 != 0;
                    i = 317814688;
                  }
                }
                else if ( i > 1932400412 )
                {
                  if ( i == 1932400413 )
                  {
                    v47 = (_DWORD *)*(&dword_3FE88 - 64);
                    ((void (__cdecl *)(int, int, _DWORD))unk_26FC0)(a1, v51, *v47);
                    ((void (__cdecl *)(int, char *))unk_244E0)(*v14, (char *)&dword_3FE88 + 570);
                    ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v36, 0, 256);
                    ((void (__cdecl *)(int *, int *))unk_1A80)(&dword_3FE88 + 150, v36);
                    ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v37, 0, 256);
                    v15 = v37;
                    ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v37, 0, 256);
                    v12 = ((int (*)(void))unk_244B0)();
                    ((void (__cdecl *)(int *, int, int *, int, int *, _DWORD))unk_1A30)(
                      v37,
                      255,
                      &dword_3FE88 + 158,
                      v12,
                      v36,
                      *v47);
                    ((void (__cdecl *)(int, int *))unk_244E0)(*v14, v37);
                    ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v38, 0, 256);
                    ((void (__cdecl *)(int, int *))unk_24210)(*v14, v38);
                    ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v39, 0, 256);
                    v30 = v39;
                    i = -1965184242;
                    goto LABEL_19;
                  }
                  ((void (__cdecl *)(int, int *))unk_244E0)(v52, v15);
                  i = 927996886;
                }
                else
                {
                  if ( i == 1859746964 )
                  {
                    i = -1708239478;
                    if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
                      i = 1609812625;
                    if ( *(int *)dword_3FD94 > 9 )
                      i = 1609812625;
                    v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
                    v8 = -1708239478;
                    goto LABEL_278;
                  }
                  i = 1156879979;
                }
              }
              else if ( i > 1635003120 )
              {
                if ( i <= 1687566277 )
                {
                  if ( i == 1635003121 )
                  {
                    *v25 = 0;
                    *v26 = 0;
                    v42 = *(_DWORD *)(*(_DWORD *)*(&dword_3FE88 - 64) + 608);
                    i = -1432460444;
                    goto LABEL_19;
                  }
LABEL_123:
                  i = -758840600;
                  goto LABEL_19;
                }
                if ( i != 1687566278 )
                {
                  v50 = *(_DWORD *)*(&dword_3FE88 - 64);
                  i = -908227288;
                  goto LABEL_19;
                }
                v57 = *v14;
                i = 591031711;
              }
              else if ( i > 1609812624 )
              {
                if ( i == 1609812625 )
                {
                  i = -1708239478;
                  goto LABEL_19;
                }
                i = 817148877;
                v10 = v55;
LABEL_149:
                v33 = v10;
              }
              else
              {
                if ( i == 1531909053 )
                {
                  v46 = *v14;
                  v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                  i = -1289029897;
                  v6 = -1809504418;
                  goto LABEL_2;
                }
                i = 808367950;
                if ( v17 )
                  i = 1185736951;
                if ( v16 )
                  i = 1185736951;
              }
            }
            else
            {
              if ( i > 1165636722 )
              {
                if ( i <= 1462449264 )
                {
                  if ( i > 1202176333 )
                  {
                    v7 = !v22;
                    i = -1623430823;
                    v8 = 1090668617;
                  }
                  else
                  {
                    if ( i == 1165636723 )
                    {
                      i = -2034929383;
                      goto LABEL_19;
                    }
                    v14 = &savedregs;
                    v36 = &savedregs;
                    v37 = &savedregs;
                    v38 = &savedregs;
                    v39 = &savedregs;
                    v29 = &savedregs;
                    v25 = &savedregs;
                    i = 63330179;
                    if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
                      i = 808367950;
                    if ( *(int *)dword_3FD94 > 9 )
                      i = 808367950;
                    v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
                    v26 = &v59;
                    v8 = 63330179;
                  }
                  goto LABEL_278;
                }
                if ( i <= 1486554407 )
                {
                  if ( i != 1462449265 )
                  {
                    v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                    i = -999330560;
                    v6 = -329220272;
                    goto LABEL_2;
                  }
                  ((void (__cdecl *)(int))unk_36F00)(1);
                  i = -554034934;
                  if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
                    i = -576091749;
                  if ( *(int *)dword_3FD94 > 9 )
                    i = -576091749;
                  v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
                  v56 = *(_DWORD *)*(&dword_3FE88 - 60);
                  v8 = -554034934;
                  goto LABEL_278;
                }
                if ( i == 1486554408 )
                {
                  v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                  i = -202624505;
                  v6 = -99800017;
                }
                else
                {
                  v55 = ((int (__cdecl *)(int, int *, int *))unk_FD90)(v43, v25, v26);
                  v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                  i = 2132163816;
                  v6 = -688540332;
                }
                goto LABEL_2;
              }
              if ( i > 1090668616 )
              {
                if ( i <= 1156879978 )
                {
                  if ( i == 1090668617 )
                  {
                    v53 = *v14;
                    i = -1856585520;
                  }
                  else
                  {
                    i = -1969488528;
                  }
                  goto LABEL_19;
                }
                if ( i != 1156879979 )
                {
                  v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                  i = 39184446;
                  v6 = 173767427;
                  goto LABEL_2;
                }
                i = -2034929383;
                if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
                  i = 1165636723;
                if ( *(int *)dword_3FD94 > 9 )
                  i = 1165636723;
                v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
                v8 = -2034929383;
                goto LABEL_278;
              }
              if ( i > 927996885 )
              {
                if ( i != 927996886 )
                {
                  i = -1383647215;
                  if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
                    i = -687422616;
                  if ( *(int *)dword_3FD94 > 9 )
                    i = -687422616;
                  v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
                  v8 = -1383647215;
                  goto LABEL_278;
                }
                i = 1635003121;
              }
              else
              {
                if ( i != 808367950 )
                {
                  ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v15, 0, 256);
                  ((void (__cdecl *)(int *, int, int *, int))unk_1A30)(v15, 255, &dword_3FE88 + 190, v33);
                  ((void (__cdecl *)(int, int *))unk_244E0)(*v14, v15);
                  v2 = v33 == 0;
                  i = -133582935;
                  v3 = 646052978;
                  goto LABEL_223;
                }
                i = 1185736951;
              }
            }
          }
          if ( i > 87541333 )
            break;
          if ( i <= -215869612 )
          {
            if ( i <= -314613695 )
            {
              if ( i == -461852114 )
              {
                i = -1327575295;
                goto LABEL_19;
              }
              if ( i == -413877741 )
              {
                v7 = !v23;
                i = -1835789098;
                v8 = 1687566278;
                goto LABEL_278;
              }
              (*(void (__cdecl **)(int, int, int *, int))(*(_DWORD *)*v14 + 860))(*v14, v27, &dword_3FE88 + 95, 1);
              v11 = (*(int (__cdecl **)(int, int *))(*(_DWORD *)*v14 + 24))(*v14, &dword_3FE88 + 118);
              v19 = (*(int (__cdecl **)(int, int, int *, int))((char *)&dword_401E4 + *(_DWORD *)*v14 - 261768))(
                      *v14,
                      v11,
                      &dword_3FE88 + 98,
                      1) < 0;
              v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
              i = -999330560;
              v6 = -218307107;
              goto LABEL_2;
            }
            if ( i > -266171944 )
            {
              if ( i == -266171943 )
              {
                *(_DWORD *)*(&dword_3FE88 - 59) = a1;
                v27 = (*(int (__cdecl **)(int, int *))(*(_DWORD *)*v14 + 24))(*v14, &dword_3FE88 + 102);
                i = -723276155;
                goto LABEL_19;
              }
              v7 = !v19;
              i = -1203678676;
              v8 = -1618827477;
              goto LABEL_278;
            }
            if ( i != -314613694 )
            {
              v7 = !v21;
              i = 1839710725;
              v8 = -1483872649;
              goto LABEL_278;
            }
            v21 = v48 == 0;
            i = -280947809;
          }
          else if ( i > 37762857 )
          {
            if ( i > 43758010 )
            {
              if ( i != 43758011 )
              {
                i = -1818048400;
                goto LABEL_19;
              }
              i = 521819369;
            }
            else
            {
              if ( i == 37762858 )
              {
                v7 = !v18;
                i = -266171943;
                v8 = -936528323;
                goto LABEL_278;
              }
              i = 1163395895;
            }
          }
          else
          {
            if ( i > -133582936 )
            {
              if ( i != -133582935 )
              {
                *v14 = 0;
                v18 = (*(int (__cdecl **)(int, int *, void *))(*(_DWORD *)a1 + 24))(a1, v14, &unk_10004) != 0;
                i = 37762858;
                if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
                  i = -202624505;
                if ( *(int *)dword_3FD94 > 9 )
                  i = -202624505;
                v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
                v8 = 37762858;
                goto LABEL_278;
              }
              v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
              i = -576091749;
              v6 = 1462449265;
              goto LABEL_2;
            }
            if ( i == -215869611 )
            {
              v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
              i = -813167686;
              v6 = -1503861856;
              goto LABEL_2;
            }
            *v14 = 0;
            (*(void (__cdecl **)(int, int *, void *))(*(_DWORD *)a1 + 24))(a1, v14, &unk_10004);
            i = -99800017;
          }
        }
        if ( i > 486968652 )
          break;
        if ( i <= 250353285 )
        {
          if ( i <= 173767426 )
          {
            *(_DWORD *)*(&dword_3FE88 - 60) = v44;
            i = -1889039375;
            goto LABEL_19;
          }
          if ( i == 173767427 )
          {
            i = -1026941318;
            v34 = (int)&unk_10004;
            goto LABEL_19;
          }
          v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
          i = -1977696804;
          v6 = -637754644;
          goto LABEL_2;
        }
        if ( i <= 349429485 )
        {
          if ( i == 250353286 )
          {
            i = -1026941318;
            v34 = -1;
            goto LABEL_19;
          }
          v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
          i = 617361679;
          v6 = 2039043683;
          goto LABEL_2;
        }
        if ( i == 349429486 )
        {
          v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
          i = -813167686;
          v6 = -215869611;
          goto LABEL_2;
        }
        ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v31, 0, 256);
        ((void (__cdecl *)(int, int *))unk_241C0)(*v14, v29);
        ((void (__cdecl *)(int *))unk_1A50)(v29);
        ((void (__cdecl *)(int *))unk_37000)(v29);
        ((void (__cdecl *)(int, int *))unk_244E0)(*v14, &dword_3FE88 + 178);
        ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v15, 0, 256);
        ((void (__cdecl *)(int *, int, int *, _DWORD))unk_1A30)(v15, 255, &dword_3FE88 + 182, 0);
        v52 = *v14;
        i = 1946784538;
      }
      if ( i <= 617361678 )
        break;
      if ( i > 646052977 )
      {
        if ( i != 646052978 )
        {
          i = 1527505883;
          if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
            i = 2132163816;
          if ( *(int *)dword_3FD94 > 9 )
            i = 2132163816;
          v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
          v8 = 1527505883;
          goto LABEL_278;
        }
        v45 = *v25;
        i = 2083597132;
      }
      else
      {
        if ( i != 617361679 )
        {
          i = 817148877;
          v10 = v54;
          goto LABEL_149;
        }
        i = 2039043683;
      }
    }
    if ( i <= 552395406 )
    {
      v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
      if ( i == 486968653 )
      {
        i = 123407484;
        v6 = -1889039375;
      }
      else
      {
        i = 43758011;
        v6 = 250353286;
      }
      goto LABEL_2;
    }
    if ( i == 552395407 )
      break;
    (*(void (__cdecl **)(int, int))(*(_DWORD *)v57 + 52))(v57, v45);
  }
LABEL_207:
  for ( i = -529736452; ; i = -1383647215 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_19:
        while ( i <= -1289029898 )
        {
          if ( i <= -1630310829 )
          {
            if ( i <= -1847732356 )
            {
              if ( i <= -1965184243 )
              {
                if ( i == -2034929383 )
                {
                  v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                  i = 1165636723;
                  v6 = 552395407;
                  goto LABEL_2;
                }
                if ( i != -1977696804 )
                {
                  v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                  i = 1124341557;
                  v6 = 2122774008;
                  goto LABEL_2;
                }
                i = -637754644;
              }
              else
              {
                if ( i > -1889039376 )
                {
                  if ( i != -1889039375 )
                  {
                    v54 = ((int (__cdecl *)(int, int *, int *))unk_112A0)(v53, v25, v26);
                    i = 633384647;
                    goto LABEL_7;
                  }
                  *(_DWORD *)*(&dword_3FE88 - 60) = v44;
                  i = -690462645;
                  if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
                    i = 123407484;
                  if ( *(int *)dword_3FD94 > 9 )
                    i = 123407484;
                  v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
                  v8 = -690462645;
                  goto LABEL_278;
                }
                ((void (__cdecl *)(int *, char *))unk_1A50)(v30, (char *)&dword_3FE88 + 685);
                v2 = ((int (__cdecl *)(int *, _DWORD))unk_1A70)(v30, 0) == 0;
                i = -1565701180;
                v3 = -1327575295;
LABEL_223:
                if ( v2 )
                  i = v3;
                if ( i > -461852115 )
                  goto LABEL_7;
              }
            }
            else
            {
              if ( i <= -1809504419 )
              {
                if ( i <= -1818048401 )
                {
                  v32 = *v26;
                  i = -926323651;
                  goto LABEL_19;
                }
                if ( i != -1818048400 )
                {
                  *(_DWORD *)*(&dword_3FE88 - 64) = ((int (__cdecl *)(int, int))unk_1A40)(1, 724);
                  i = -488526868;
                  goto LABEL_19;
                }
                v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                i = -1816153920;
                v6 = -488526868;
                goto LABEL_2;
              }
              if ( i <= -1692929455 )
              {
                if ( i == -1809504418 )
                {
                  i = 1073724746;
                  goto LABEL_7;
                }
                v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                i = 1609812625;
                v6 = -811343210;
                goto LABEL_2;
              }
              if ( i != -1692929454 )
              {
                i = 439282762;
                goto LABEL_7;
              }
              i = -603631356;
            }
          }
          else if ( i > -1503861857 )
          {
            if ( i > -1383647216 )
            {
              if ( i > -1327575296 )
              {
                v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                if ( i == -1327575295 )
                {
                  i = -1692929454;
                  v6 = -603631356;
                }
                else
                {
                  i = 1124341557;
                  v6 = -1969488528;
                }
              }
              else
              {
                if ( i != -1383647215 )
                  goto LABEL_123;
                (*(void (__cdecl **)(int, int))(*(_DWORD *)v46 + 52))(v46, v32);
                v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                i = -687422616;
                v6 = 1866749881;
              }
              goto LABEL_2;
            }
            if ( i > -1432460445 )
            {
              if ( i != -1432460444 )
              {
                v44 = v56 | 4;
                i = 486968653;
                goto LABEL_7;
              }
              i = -572516439;
              if ( v42 < 2 )
                i = 1090668617;
              if ( i > -461852115 )
                goto LABEL_7;
            }
            else
            {
              if ( i == -1503861856 )
                goto LABEL_207;
              v49 = (_BYTE *)(*(_DWORD *)*(&dword_3FE88 - 64) + 696);
              i = -860405988;
            }
          }
          else if ( i > -1618827478 )
          {
            if ( i <= -1565701181 )
            {
              if ( i == -1618827477 )
              {
                v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
                i = 43758011;
                v6 = 521819369;
                goto LABEL_2;
              }
              v7 = !v24;
              i = -529736452;
              v8 = -1062863038;
              goto LABEL_278;
            }
            if ( i == -1565701180 )
            {
              ((void (__cdecl *)(int *, int))unk_1A90)(v30, 484);
              i = -461852114;
              goto LABEL_7;
            }
            v48 = ((int (__cdecl *)(int, char *))unk_1A60)(v28, (char *)&dword_3FE88 + 555);
            v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
            i = -1630310828;
            v6 = -946652055;
LABEL_2:
            if ( v5 )
              i = v6;
            if ( *(int *)dword_3FD94 < 10 )
              i = v6;
            if ( i > -461852115 )
              goto LABEL_7;
          }
          else
          {
            if ( i > -1623430824 )
            {
              v43 = *v14;
              i = 710020017;
              goto LABEL_7;
            }
            if ( i != -1630310828 )
            {
              i = 1486554408;
              goto LABEL_7;
            }
            i = -1540328369;
          }
        }
        if ( i > -715182614 )
          break;
        if ( i > -926323652 )
        {
          if ( i > -811343211 )
          {
            if ( i > -740458473 )
            {
              if ( i == -740458472 )
              {
                v41 = v40;
                v28 = (*(int (__cdecl **)(int, int, _DWORD))(*(_DWORD *)*v14 + 676))(*v14, v40, 0);
                v20 = v28 != 0;
                i = 1859746964;
              }
              else
              {
                i = 1473992782;
              }
              goto LABEL_7;
            }
            if ( i != -811343210 )
            {
              (*(void (__cdecl **)(int, int, int))(*(_DWORD *)*v14 + 680))(*v14, v41, v28);
              (*(void (__cdecl **)(int, int))(*(_DWORD *)*v14 + 92))(*v14, v40);
              v51 = *v14;
              i = 1932400413;
              goto LABEL_7;
            }
            v7 = !v20;
            i = 1839710725;
            v8 = -1201896012;
            goto LABEL_278;
          }
          if ( i <= -860405989 )
          {
            if ( i == -926323651 )
            {
              v24 = v32 != 0;
              i = 241625129;
            }
            else
            {
              *(_BYTE *)(v50 + 696) = 0;
              i = 1645877364;
            }
            goto LABEL_7;
          }
          if ( i != -860405988 )
          {
            i = -215869611;
            goto LABEL_7;
          }
          *v49 = 1;
          i = -1328597618;
        }
        else if ( i > -1026941319 )
        {
          if ( i > -946652056 )
          {
            if ( i == -946652055 )
            {
              i = -314613694;
              goto LABEL_7;
            }
            i = -694870762;
            v35 = -1;
          }
          else
          {
            if ( i != -1026941318 )
            {
              (*(void (__cdecl **)(int, int, int *, int))(*(_DWORD *)*v14 + 860))(*v14, v27, &dword_3FE88 + 95, 1);
              v9 = (*(int (__cdecl **)(int, int *))(*(_DWORD *)*v14 + 24))(*v14, &dword_3FE88 + 118);
              (*(void (__cdecl **)(int, int, int *, int))((char *)&dword_401E4 + *(_DWORD *)*v14 - 261768))(
                *v14,
                v9,
                &dword_3FE88 + 98,
                1);
              i = -329220272;
              goto LABEL_7;
            }
            i = -694870762;
            v35 = v34;
          }
        }
        else if ( i > -1201896013 )
        {
          if ( i != -1201896012 )
          {
            v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
            i = -1289029897;
            v6 = 1531909053;
            goto LABEL_2;
          }
          i = -1540328369;
          if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
            i = -1630310828;
          if ( *(int *)dword_3FD94 > 9 )
            i = -1630310828;
          v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
          v8 = -1540328369;
LABEL_278:
          if ( !v7 )
            i = v8;
          if ( i > -461852115 )
            goto LABEL_7;
        }
        else
        {
          if ( i == -1289029897 )
          {
            i = 1531909053;
            goto LABEL_7;
          }
          v4 = (*(int (__cdecl **)(int, int, char *, void *))(*(_DWORD *)*v14 + 576))(
                 *v14,
                 v27,
                 (char *)&dword_3FE88 + 521,
                 &unk_400A0);
          v40 = (*(int (__cdecl **)(int, int, int))((char *)&dword_400CC + *(_DWORD *)*v14 - 261768))(*v14, v27, v4);
          i = -740458472;
        }
      }
      if ( i <= -637754645 )
        break;
      if ( i <= -570256197 )
      {
        if ( i > -576091750 )
        {
          if ( i == -576091749 )
          {
            ((void (__cdecl *)(int))unk_36F00)(1);
            i = 1462449265;
          }
          else
          {
            v22 = v42 > 30;
            i = 1202176334;
          }
          goto LABEL_7;
        }
        if ( i == -637754644 )
        {
          v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
          i = -1977696804;
          v6 = -1594495222;
        }
        else
        {
          v31 = v29;
          v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
          i = -1692929454;
          v6 = -1661335094;
        }
        goto LABEL_2;
      }
      if ( i <= -529736453 )
      {
        if ( i != -570256196 )
        {
          i = -1396782333;
          goto LABEL_19;
        }
        v5 = ((*(_BYTE *)dword_3FD90 * (*(_BYTE *)dword_3FD90 - 1)) & 1) == 0;
        i = 39184446;
        v6 = 1163395895;
        goto LABEL_2;
      }
      if ( i != -529736452 )
      {
        *(_DWORD *)*(&dword_3FE88 - 64) = ((int (__cdecl *)(int, int))unk_1A40)(1, 724);
        i = -1626801376;
        if ( (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) != 0 )
          i = -1816153920;
        if ( *(int *)dword_3FD94 > 9 )
          i = -1816153920;
        v7 = (((unsigned __int8)*(_DWORD *)dword_3FD90 * ((unsigned __int8)*(_DWORD *)dword_3FD90 - 1)) & 1) == *(_DWORD *)dword_3FD94 > 9;
        v8 = -1626801376;
        goto LABEL_278;
      }
      i = -1314684853;
    }
    if ( i <= -690462646 )
      break;
    if ( i == -690462645 )
    {
      i = 646052978;
      goto LABEL_7;
    }
    if ( i == -688540332 )
    {
      i = 1619213376;
      goto LABEL_7;
    }
    (*(void (__cdecl **)(int, int))(*(_DWORD *)v46 + 52))(v46, v32);
  }
  if ( *(_DWORD *)dword_3FD8C == v58 )
    return v35;
  ((void (*)(void))unk_1AA0)();
  JUMPOUT(0x4255);
  return v35;
}
