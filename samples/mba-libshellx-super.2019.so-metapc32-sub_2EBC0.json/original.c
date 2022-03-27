int __usercall sub_2EBC0@<eax>(int a1@<edi>, int a2)
{
  int i; // eax
  int *v3; // ecx
  bool v4; // zf
  int v5; // edx
  int v6; // eax
  bool v7; // zf
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int result; // eax
  _BYTE *v12; // [esp+8h] [ebp-764h]
  bool v13; // [esp+12h] [ebp-75Ah]
  bool v14; // [esp+13h] [ebp-759h]
  _OWORD *v15; // [esp+14h] [ebp-758h]
  _BYTE *v16; // [esp+18h] [ebp-754h]
  int *v17; // [esp+20h] [ebp-74Ch]
  int *v18; // [esp+24h] [ebp-748h]
  _BYTE *v19; // [esp+28h] [ebp-744h]
  int v20; // [esp+2Ch] [ebp-740h]
  int v21; // [esp+30h] [ebp-73Ch]
  int v22; // [esp+40h] [ebp-72Ch]
  int v23; // [esp+48h] [ebp-724h]
  int v24; // [esp+4Ch] [ebp-720h]
  _BYTE v25[256]; // [esp+50h] [ebp-71Ch] BYREF
  _BYTE v26[256]; // [esp+150h] [ebp-61Ch] BYREF
  int v27; // [esp+250h] [ebp-51Ch] BYREF
  _OWORD v28[16]; // [esp+350h] [ebp-41Ch] BYREF
  int v29; // [esp+458h] [ebp-314h] BYREF
  _BYTE v30[256]; // [esp+558h] [ebp-214h] BYREF
  _BYTE v31[256]; // [esp+658h] [ebp-114h] BYREF
  int v32; // [esp+758h] [ebp-14h]

  v32 = *(_DWORD *)dword_3FD8C;
  for ( i = -245735567; ; i = -136231703 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_63:
        while ( i > -839111593 )
        {
          if ( i > -245735568 )
          {
            if ( i > -136231704 )
            {
              if ( i == -136231703 )
              {
                ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v19, 0, 256);
                v3 = (int *)dword_3FD84;
                v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                i = -1602150202;
                v5 = 1737870880;
                goto LABEL_2;
              }
              if ( i != 16560090 )
                goto LABEL_90;
              ((void (__cdecl *)(int))unk_23F90)(a2);
              ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
              v22 = ((int (__cdecl *)(void *, _BYTE *, int))unk_1E60)(&unk_3BCEA, v25, 1);
              ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
              i = 2016088901;
              if ( !v22 )
                i = -1078210965;
              if ( i > 135161356 )
                goto LABEL_7;
            }
            else
            {
              if ( i == -245735567 )
              {
                v17 = &v29;
                v18 = &v27;
                v16 = v26;
                ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v26, 0, 256);
                v12 = v31;
                ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v31, 0, 256);
                i = 1470339534;
                goto LABEL_7;
              }
              if ( i != -223593435 )
              {
                ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
                v23 = ((int (__cdecl *)(void *, _BYTE *, int))unk_1E60)(&unk_3BCF7, v12, 1);
                v3 = (int *)dword_3FD84;
                v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                i = 834102973;
                v5 = 693505837;
                goto LABEL_2;
              }
              i = -1600269699;
            }
          }
          else
          {
            if ( i <= -448108141 )
            {
              if ( i == -839111592 )
              {
                dword_435D4 = ((int (__cdecl *)(void *))unk_1B60)(&unk_3BCDF);
                v21 = ((int (__cdecl *)(void *, _OWORD *, int))unk_1E60)(&unk_3BCDF, v15, 1);
                i = 584367155;
                goto LABEL_7;
              }
              if ( i != -622634200 )
              {
                v7 = !v13;
                i = -884578696;
                v8 = 422002839;
                goto LABEL_100;
              }
              i = 916948855;
              v9 = v21;
              goto LABEL_113;
            }
            if ( i == -448108140 )
            {
              ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
              v14 = v21 != 0;
              v3 = (int *)dword_3FD84;
              v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
              i = -328758942;
              v5 = 679023650;
              goto LABEL_2;
            }
            if ( i == -448069933 )
            {
              ((void (__cdecl *)(_OWORD *, void *, _BYTE *, void *))unk_1A50)(v15, &unk_3BCA0, v12, &unk_3BCA6);
              i = 1178437641;
              goto LABEL_7;
            }
            ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
            i = -448108140;
          }
        }
        if ( i <= -1600269700 )
          break;
        if ( i > -1039646423 )
        {
          if ( i == -1039646422 )
          {
            i = 916948855;
            if ( !a1 )
              i = 1246285010;
            v9 = v22;
            goto LABEL_113;
          }
          v3 = (int *)dword_3FD84;
          v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
          if ( i == -884578696 )
          {
            i = 880244960;
            v5 = 912753380;
          }
          else
          {
            i = -1602150202;
            v5 = -136231703;
          }
LABEL_2:
          while ( 2 )
          {
            if ( v4 )
              i = v5;
            if ( *v3 < 10 )
              i = v5;
            if ( i > 135161356 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
LABEL_7:
                  while ( i <= 1178437640 )
                  {
                    if ( i > 834102972 )
                    {
                      if ( i > 912753379 )
                      {
                        if ( i == 912753380 )
                        {
                          ((void (__cdecl *)(_OWORD *, void *, _BYTE *, void *))unk_1A50)(
                            v15,
                            &unk_3BCBE,
                            v16,
                            &unk_3BCC8);
                          v3 = (int *)dword_3FD84;
                          v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                          i = 880244960;
                          v5 = 2017929301;
                          goto LABEL_2;
                        }
                        if ( i == 916948855 )
                        {
                          v24 = v20;
                          i = -2044894913;
                          if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0 )
                            i = 1746803143;
                          if ( *(int *)dword_3FD84 < 10 )
                            i = 1746803143;
                          if ( i <= 135161356 )
                            goto LABEL_63;
                        }
                        else
                        {
                          i = 1528499142;
                        }
                      }
                      else
                      {
                        if ( i == 834102973 )
                        {
                          ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
                          ((void (__cdecl *)(void *, _BYTE *, int))unk_1E60)(&unk_3BCF7, v12, 1);
                          i = -199426237;
                          goto LABEL_63;
                        }
                        if ( i != 880244960 )
                        {
LABEL_90:
                          i = -2007671219;
                          goto LABEL_63;
                        }
                        ((void (__cdecl *)(_OWORD *, void *, _BYTE *, void *))unk_1A50)(
                          v15,
                          &unk_3BCBE,
                          v16,
                          &unk_3BCC8);
                        i = 912753380;
                      }
                    }
                    else if ( i > 678804483 )
                    {
                      if ( i == 678804484 )
                      {
                        ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v30, 0, 256);
                        ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v17, 0, 256);
                        v28[15] = 0LL;
                        v28[14] = 0LL;
                        v28[13] = 0LL;
                        v28[12] = 0LL;
                        v28[11] = 0LL;
                        v28[10] = 0LL;
                        v28[9] = 0LL;
                        v28[8] = 0LL;
                        v28[7] = 0LL;
                        v28[6] = 0LL;
                        v28[5] = 0LL;
                        v28[4] = 0LL;
                        v28[3] = 0LL;
                        v28[2] = 0LL;
                        v28[1] = 0LL;
                        v28[0] = 0LL;
                        ((void (__cdecl *)(int *, _DWORD))unk_1A20)(v18, 0);
                        ((void (__cdecl *)(int))unk_241C0)(a2);
                        v10 = ((int (__cdecl *)(_BYTE *))unk_1AC0)(v12);
                        ((void (__cdecl *)(_BYTE *, _BYTE *, int))unk_1D40)(v16, v12, v10 - 16);
                        i = 1961239848;
                      }
                      else
                      {
                        if ( i == 679023650 )
                        {
                          v7 = !v14;
                          i = -1359393980;
                          v8 = -622634200;
                          goto LABEL_100;
                        }
                        i = 1477843959;
                      }
                    }
                    else
                    {
                      if ( i != 135161357 )
                      {
                        v3 = (int *)dword_3FD84;
                        v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                        if ( i == 422002839 )
                        {
                          i = -448069933;
                          v5 = 1178437641;
                        }
                        else
                        {
                          i = -328758942;
                          v5 = -448108140;
                        }
                        goto LABEL_2;
                      }
                      i = 1963898935;
                    }
                  }
                  if ( i <= 1746803142 )
                    break;
                  if ( i <= 1963898934 )
                  {
                    if ( i == 1746803143 )
                    {
                      v3 = (int *)dword_3FD84;
                      v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                      i = -2044894913;
                      v5 = -1872316320;
                    }
                    else
                    {
                      if ( i == 1842101360 )
                      {
                        i = 916948855;
                        v9 = v23;
LABEL_113:
                        v20 = v9;
                        continue;
                      }
                      ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v30, 0, 256);
                      ((void (__cdecl *)(int *, _DWORD, int))unk_1A20)(v17, 0, 256);
                      v15 = v28;
                      ((void (__cdecl *)(_OWORD *, _DWORD, int))unk_1A20)(v28, 0, 256);
                      ((void (__cdecl *)(int *, _DWORD))unk_1A20)(v18, 0);
                      ((void (__cdecl *)(int))unk_241C0)(a2);
                      v6 = ((int (__cdecl *)(_BYTE *))unk_1AC0)(v12);
                      ((void (__cdecl *)(_BYTE *, _BYTE *, int))unk_1D40)(v16, v12, v6 - 16);
                      v13 = *(_DWORD *)(*(_DWORD *)dword_3FD88 + 600) == 3;
                      v3 = (int *)dword_3FD84;
                      v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                      i = 678804484;
                      v5 = -554247784;
                    }
                    goto LABEL_2;
                  }
                  if ( i == 1963898935 )
                  {
                    v3 = (int *)dword_3FD84;
                    v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                    i = 135161357;
                    v5 = 126109574;
                    goto LABEL_2;
                  }
                  if ( i == 2016088901 )
                  {
                    i = -1039646422;
                    a1 = 1;
                    goto LABEL_63;
                  }
                  i = 899696719;
                }
                if ( i > 1477843958 )
                  break;
                if ( i == 1178437641 )
                {
                  ((void (__cdecl *)(_OWORD *, void *, _BYTE *, void *))unk_1A50)(v15, &unk_3BCA0, v12, &unk_3BCA6);
                  v3 = (int *)dword_3FD84;
                  v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                  i = -448069933;
                  v5 = -223593435;
                  goto LABEL_2;
                }
                if ( i != 1246285010 )
                {
                  v3 = (int *)dword_3FD84;
                  v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                  i = 678804484;
                  v5 = 1961239848;
                  goto LABEL_2;
                }
                i = -199426237;
                if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) != 0 )
                  i = 834102973;
                if ( *(int *)dword_3FD84 > 9 )
                  i = 834102973;
                v7 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == *(_DWORD *)dword_3FD84 > 9;
                v8 = -199426237;
LABEL_100:
                if ( !v7 )
                  i = v8;
                if ( i <= 135161356 )
                  goto LABEL_63;
              }
              if ( i == 1477843959 )
              {
                ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
                i = -1759944201;
              }
              else
              {
                if ( i == 1528499142 )
                {
                  v3 = (int *)dword_3FD84;
                  v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
                  i = 1095226217;
                  v5 = 1842101360;
                  continue;
                }
                i = 16560090;
              }
            }
            break;
          }
        }
        else
        {
          if ( i == -1600269699 )
          {
            i = 1963898935;
            if ( (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) != 0 )
              i = 135161357;
            if ( *(int *)dword_3FD84 > 9 )
              i = 135161357;
            v7 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == *(_DWORD *)dword_3FD84 > 9;
            v8 = 1963898935;
            goto LABEL_100;
          }
          if ( i == -1359393980 )
          {
            v19 = v25;
            i = -869556989;
          }
          else
          {
            i = -1039646422;
            a1 = 0;
          }
        }
      }
      if ( i > -1872316321 )
        break;
      if ( i == -2044894913 )
      {
        i = 1746803143;
        goto LABEL_7;
      }
      ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
      i = -839111592;
    }
    if ( i == -1872316320 )
      break;
    if ( i == -1759944201 )
    {
      v3 = (int *)dword_3FD84;
      v4 = (((unsigned __int8)*(_DWORD *)dword_3FD80 * ((unsigned __int8)*(_DWORD *)dword_3FD80 - 1)) & 1) == 0;
      i = 1095226217;
      v5 = 1528499142;
      goto LABEL_2;
    }
    ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v19, 0, 256);
  }
  result = v24;
  if ( *(_DWORD *)dword_3FD8C == v32 )
    return result;
  ((void (*)(void))unk_1AA0)();
  JUMPOUT(0x2F839);
  return result;
}
