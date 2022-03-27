__int64 __fastcall sub_81008(__int64 ***a1)
{
  __int64 v1; // x9
  __int64 v2; // x26
  int v3; // w8
  int i; // w8
  __int64 v5; // x26
  __int64 v6; // x1
  __int64 v7; // x8
  int v8; // w8
  int m; // w8
  int v10; // w0
  int v11; // w10
  __int64 v12; // x8
  __int64 v13; // x9
  int v14; // w11
  int k; // w8
  int j; // w8
  int v17; // w9
  int v18; // w9
  int v19; // w9
  int l; // w8
  int v21; // w9
  int v22; // w8
  __int64 v23; // x26
  int n; // w8
  __int64 *v25; // x8
  __int64 v26; // x26
  __int64 *v27; // x8
  __int64 v28; // x26
  __int64 v29; // x1
  int v30; // w11
  __int64 v31; // x8
  __int64 v32; // x9
  int v33; // w10
  int v34; // w12
  int v35; // w0
  int v36; // w10
  __int64 v37; // x8
  __int64 v38; // x9
  int v39; // w11
  int ii; // w8
  __int64 v41; // x26
  _QWORD *v42; // x8
  __int64 v43; // x0
  __int64 v45; // [xsp-420h] [xbp-6E0h] BYREF
  _BYTE v46[16]; // [xsp-410h] [xbp-6D0h] BYREF
  _BYTE v47[1008]; // [xsp-400h] [xbp-6C0h] BYREF
  __int64 v48; // [xsp-10h] [xbp-2D0h] BYREF
  __int64 *v49; // [xsp+30h] [xbp-290h]
  __int64 v50; // [xsp+38h] [xbp-288h]
  int v51; // [xsp+40h] [xbp-280h]
  int v52; // [xsp+44h] [xbp-27Ch]
  __int64 v53; // [xsp+48h] [xbp-278h]
  int v54; // [xsp+54h] [xbp-26Ch]
  __int64 v55; // [xsp+58h] [xbp-268h]
  __int64 *v56; // [xsp+60h] [xbp-260h]
  __int64 ***v57; // [xsp+68h] [xbp-258h]
  __int64 v58; // [xsp+70h] [xbp-250h]
  int v59; // [xsp+78h] [xbp-248h]
  int v60; // [xsp+7Ch] [xbp-244h]
  __int64 v61; // [xsp+80h] [xbp-240h]
  int v62; // [xsp+8Ch] [xbp-234h]
  __int64 v63; // [xsp+90h] [xbp-230h]
  __int64 v64; // [xsp+98h] [xbp-228h]
  _BYTE *v65; // [xsp+A0h] [xbp-220h]
  __int64 *v66; // [xsp+A8h] [xbp-218h]
  _BYTE *v67; // [xsp+B0h] [xbp-210h]
  __int64 *v68; // [xsp+B8h] [xbp-208h]
  _BYTE *v69; // [xsp+C0h] [xbp-200h]
  _BYTE *v70; // [xsp+C8h] [xbp-1F8h]
  __int64 v71; // [xsp+D0h] [xbp-1F0h]
  _BYTE *v72; // [xsp+D8h] [xbp-1E8h]
  __int64 v73; // [xsp+E0h] [xbp-1E0h]
  unsigned int v74; // [xsp+ECh] [xbp-1D4h]
  _BYTE *v75; // [xsp+F0h] [xbp-1D0h]
  _BYTE *v76; // [xsp+F8h] [xbp-1C8h]
  __int64 v77; // [xsp+100h] [xbp-1C0h]
  int v78; // [xsp+10Ch] [xbp-1B4h]
  __int64 *v79; // [xsp+110h] [xbp-1B0h]
  __int64 *v80; // [xsp+118h] [xbp-1A8h]
  int *v81; // [xsp+120h] [xbp-1A0h]
  int v82; // [xsp+12Ch] [xbp-194h]
  __int64 *v83; // [xsp+130h] [xbp-190h]
  __int64 v84; // [xsp+138h] [xbp-188h]
  int v85; // [xsp+144h] [xbp-17Ch]
  _BYTE *v86; // [xsp+148h] [xbp-178h]
  _BYTE *v87; // [xsp+150h] [xbp-170h]
  __int64 v88; // [xsp+158h] [xbp-168h]
  unsigned int v89; // [xsp+164h] [xbp-15Ch]
  __int64 v90; // [xsp+168h] [xbp-158h]
  int v91; // [xsp+174h] [xbp-14Ch]
  __int64 v92; // [xsp+178h] [xbp-148h]
  int v93; // [xsp+184h] [xbp-13Ch]
  __int64 v94; // [xsp+188h] [xbp-138h]
  int v95; // [xsp+194h] [xbp-12Ch]
  __int64 v96; // [xsp+198h] [xbp-128h]
  unsigned int v97; // [xsp+1A4h] [xbp-11Ch]
  __int64 v98; // [xsp+1A8h] [xbp-118h]
  unsigned int v99; // [xsp+1B4h] [xbp-10Ch]
  __int64 v100; // [xsp+1B8h] [xbp-108h]
  int v101; // [xsp+1C4h] [xbp-FCh]
  __int64 v102; // [xsp+1C8h] [xbp-F8h] BYREF
  __int64 v103; // [xsp+1D0h] [xbp-F0h] BYREF
  __int64 v104; // [xsp+1E0h] [xbp-E0h]
  __int64 v105; // [xsp+1E8h] [xbp-D8h]
  __int64 v106; // [xsp+1F0h] [xbp-D0h]
  __int64 v107; // [xsp+1F8h] [xbp-C8h]
  __int64 v108; // [xsp+200h] [xbp-C0h]
  __int64 v109; // [xsp+208h] [xbp-B8h]
  __int64 v110; // [xsp+210h] [xbp-B0h]
  __int64 **v111; // [xsp+218h] [xbp-A8h]
  __int64 *v112; // [xsp+220h] [xbp-A0h]
  __int64 (__fastcall *v113)(__int64 ***, __int64, void *, void *); // [xsp+228h] [xbp-98h]
  int v114; // [xsp+230h] [xbp-90h] BYREF
  char v115; // [xsp+234h] [xbp-8Ch]
  __int64 v116; // [xsp+238h] [xbp-88h] BYREF
  __int16 v117; // [xsp+240h] [xbp-80h]
  __int64 v118; // [xsp+248h] [xbp-78h] BYREF
  __int16 v119; // [xsp+250h] [xbp-70h]
  char v120; // [xsp+252h] [xbp-6Eh]
  __int64 v121; // [xsp+258h] [xbp-68h] BYREF
  int v122; // [xsp+260h] [xbp-60h]
  __int64 v123; // [xsp+268h] [xbp-58h]

  v57 = a1;
  v2 = 3695461903LL;
  v123 = *(_QWORD *)qword_DFF90;
  v56 = &v103;
  v3 = -1132347774;
  v62 = v1;
  v63 = v1;
  v52 = v1;
  v53 = v1;
  v64 = v1;
  v54 = v1;
  v55 = v1;
  v59 = v1;
  v58 = v1;
  v51 = v1;
  v50 = v1;
  v60 = v1;
  v61 = v1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            while ( 1 )
                            {
                              while ( 1 )
                              {
                                while ( 1 )
                                {
                                  while ( 1 )
                                  {
                                    while ( 1 )
                                    {
                                      while ( 1 )
                                      {
                                        while ( 1 )
                                        {
                                          while ( 1 )
                                          {
                                            while ( 1 )
                                            {
                                              while ( 1 )
                                              {
                                                while ( 1 )
                                                {
                                                  while ( 1 )
                                                  {
                                                    while ( 1 )
                                                    {
                                                      while ( 1 )
                                                      {
                                                        while ( 1 )
                                                        {
                                                          while ( 1 )
                                                          {
                                                            while ( 1 )
                                                            {
                                                              while ( 1 )
                                                              {
                                                                while ( 1 )
                                                                {
                                                                  while ( 1 )
                                                                  {
                                                                    while ( v3 <= -2059155518 )
                                                                      v3 = -1372610487;
                                                                    if ( v3 <= 2141091642 )
                                                                      break;
                                                                    v75 = v67;
                                                                    ((void (__fastcall *)(_BYTE *, _QWORD, __int64))unk_DCA0)(
                                                                      v67,
                                                                      0LL,
                                                                      1024LL);
                                                                    v76 = v67;
                                                                    ((void (__fastcall *)(_BYTE *, __int64 *))unk_DE00)(
                                                                      v67,
                                                                      v79);
                                                                    for ( i = 609632072; i == 609632072; i = -599505393 )
                                                                      v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))&v102;
                                                                    ((void (__fastcall *)(_BYTE *, _QWORD))unk_D040)(
                                                                      v76,
                                                                      *(_QWORD *)v113);
                                                                    v3 = -517069262;
                                                                  }
                                                                  if ( v3 > 2106772195 )
                                                                    goto LABEL_57;
                                                                  if ( v3 <= 2046961934 )
                                                                    break;
                                                                  v5 = (__int64)v70;
                                                                  ((void (__fastcall *)(_BYTE *, void *, _QWORD))unk_D690)(
                                                                    v70,
                                                                    &unk_C68FC,
                                                                    v97);
                                                                  v6 = v5;
                                                                  v2 = 3695461903LL;
                                                                  ((void (__fastcall *)(_BYTE *, __int64))unk_D040)(
                                                                    v87,
                                                                    v6);
                                                                  v88 = ((__int64 (__fastcall *)(_BYTE *))unk_D8A0)(v87);
                                                                  if ( v88 )
                                                                    v3 = 426559856;
                                                                  else
                                                                    v3 = -392865407;
                                                                }
                                                                if ( v3 <= 1954053613 )
                                                                  break;
                                                                if ( v91 )
                                                                  v3 = -1116448031;
                                                                else
                                                                  v3 = -1598331313;
                                                              }
                                                              if ( v3 <= 1942951256 )
                                                                break;
                                                              v63 = v100;
                                                              v62 = 0;
                                                              v3 = 1372490023;
                                                            }
                                                            if ( v3 > 1887832113 )
                                                            {
                                                              v7 = v94;
                                                              goto LABEL_25;
                                                            }
                                                            if ( v3 > -2055959633 )
                                                              break;
                                                            v3 = -93038518;
                                                          }
                                                          if ( v3 > -1859494140 )
                                                            break;
                                                          if ( v93 )
                                                            v3 = 807953816;
                                                          else
                                                            v3 = -1514110727;
                                                        }
                                                        if ( v3 > -1787836965 )
                                                          break;
                                                        v78 = ((__int64 (*)(void))unk_DB70)();
                                                        v3 = -1125836280;
                                                      }
                                                      if ( v3 > -1729389990 )
                                                        break;
                                                      v100 = v61;
                                                      v101 = v60;
                                                      if ( v60 >= 11 )
                                                        v3 = 1309930996;
                                                      else
                                                        v3 = -875436929;
                                                    }
                                                    if ( v3 > -1719978072 )
                                                      break;
                                                    v59 = v74;
                                                    v58 = v92;
                                                    v3 = 962764572;
                                                  }
                                                  if ( v3 > -1598331314 )
                                                    break;
                                                  v3 = 809048023;
                                                }
                                                if ( v3 > -1561696705 )
                                                  break;
                                                v3 = 39827155;
                                              }
                                              if ( v3 > -1535948623 )
                                                break;
                                              v58 = v98;
                                              v59 = 1;
                                              v3 = 962764572;
                                            }
                                            if ( v3 > -1514110728 )
                                              break;
                                            v8 = -662792757;
                                            while ( 1 )
                                            {
                                              while ( 1 )
                                              {
                                                while ( v8 <= -1234488347 )
                                                  v8 = 2008380670;
                                                if ( v8 > -1090051312 )
                                                  break;
                                                v8 = -500755802;
                                              }
                                              if ( v8 <= -662792758 )
                                                break;
                                              if ( v8 > 2140841506 )
                                              {
                                                v107 = ((__int64 (__fastcall *)(__int64 ***, __int64, __int64))unk_C8C0)(
                                                         v57,
                                                         v106,
                                                         v105);
                                                v8 = 127125889;
                                              }
                                              else if ( v8 > 2008380669 )
                                              {
                                                for ( j = 638058265; ; j = -1901654418 )
                                                {
                                                  do
                                                  {
                                                    while ( 1 )
                                                    {
                                                      while ( 1 )
                                                      {
                                                        v17 = j;
                                                        if ( j > -797430331 )
                                                          break;
                                                        v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))*v112;
                                                        j = 1701136381;
                                                      }
                                                      j = -797430330;
                                                      if ( v17 > 638058264 )
                                                        break;
                                                      if ( v17 != -797430330 )
                                                      {
                                                        while ( 1 )
                                                          ;
                                                      }
                                                      v111 = *v57;
                                                      j = 1691643524;
                                                    }
                                                  }
                                                  while ( v17 == 638058265 );
                                                  if ( v17 != 1691643524 )
                                                    break;
                                                  v112 = (__int64 *)(v111 + 33);
                                                }
                                                v105 = v113(v57, v104, &unk_C668A, &unk_C63BD);
                                                v8 = 1721581057;
                                              }
                                              else if ( v8 > 1815089118 )
                                              {
                                                v2 = 0LL;
                                                v8 = -1090051311;
                                              }
                                              else if ( v8 > 1721581056 )
                                              {
                                                v106 = ((__int64 (__fastcall *)(__int64 ***))unk_80808)(v57);
                                                v8 = -649323538;
                                              }
                                              else if ( v8 > 1183790398 )
                                              {
                                                v110 = v104;
                                                v8 = 139129865;
                                              }
                                              else if ( v8 > -649323539 )
                                              {
                                                if ( v8 > -500755803 )
                                                {
                                                  if ( v8 == -500755802 )
                                                  {
                                                    v19 = -51447756;
                                                    while ( 1 )
                                                    {
                                                      v22 = v19;
                                                      if ( v19 <= -1462329709 )
                                                        break;
                                                      if ( v19 > -51447757 )
                                                      {
                                                        v19 = 601080494;
                                                        if ( v22 != -51447756 )
                                                        {
                                                          if ( v22 == 1102804713 )
                                                          {
                                                            v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))*v112;
                                                            v19 = -2075065817;
                                                          }
                                                          else
                                                          {
                                                            v111 = *v57;
                                                            v19 = -1462329708;
                                                          }
                                                        }
                                                      }
                                                      else
                                                      {
                                                        v112 = (__int64 *)(v111 + 169);
                                                        v19 = 1102804713;
                                                      }
                                                    }
                                                    v109 = ((__int64 (__fastcall *)(__int64 ***, __int64, _QWORD))v113)(
                                                             v57,
                                                             v108,
                                                             0LL);
                                                    v8 = 1183790399;
                                                  }
                                                  else if ( v8 == 127125889 )
                                                  {
                                                    v108 = v107;
                                                    v8 = -1234488346;
                                                  }
                                                  else
                                                  {
                                                    for ( k = 346169306; ; k = -1131325799 )
                                                    {
                                                      do
                                                      {
                                                        while ( 1 )
                                                        {
                                                          while ( 1 )
                                                          {
                                                            v18 = k;
                                                            if ( k > 271891518 )
                                                              break;
                                                            v112 = *v111;
                                                            k = 2016405363;
                                                          }
                                                          k = 271891519;
                                                          if ( v18 <= 2016405362 )
                                                            break;
                                                          v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))v112[23];
                                                          k = 1642000223;
                                                        }
                                                      }
                                                      while ( v18 == 346169306 );
                                                      if ( v18 != 271891519 )
                                                        break;
                                                      v111 = (__int64 **)v57;
                                                    }
                                                    if ( v18 != 1642000223 )
                                                    {
                                                      while ( 1 )
                                                        ;
                                                    }
                                                    ((void (__fastcall *)(__int64 ***, __int64))v113)(v57, v110);
                                                    v2 = v109;
                                                    v8 = -1090051311;
                                                  }
                                                }
                                                else if ( v106 )
                                                {
                                                  v8 = 2140841507;
                                                }
                                                else
                                                {
                                                  v8 = 1815089119;
                                                }
                                              }
                                              else
                                              {
                                                for ( l = -786268319; ; l = 898058316 )
                                                {
                                                  do
                                                  {
                                                    while ( 1 )
                                                    {
                                                      while ( 1 )
                                                      {
                                                        v21 = l;
                                                        if ( l <= 2143119114 )
                                                          break;
                                                        v111 = (__int64 **)v57;
                                                        l = -1248953816;
                                                      }
                                                      l = 2143119115;
                                                      if ( v21 > -786268320 )
                                                        break;
                                                      v112 = *v111;
                                                      l = 1020684176;
                                                    }
                                                  }
                                                  while ( v21 == -786268319 );
                                                  if ( v21 != 1020684176 )
                                                    break;
                                                  v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))(v112 + 6);
                                                }
                                                if ( v21 != 898058316 )
                                                {
                                                  while ( 1 )
                                                    ;
                                                }
                                                v104 = (*(__int64 (__fastcall **)(__int64 ***, void *))v113)(
                                                         v57,
                                                         &unk_C635E);
                                                v8 = -2069810594;
                                              }
                                            }
                                            v71 = v2;
                                            v3 = -2059155517;
LABEL_163:
                                            v2 = 3695461903LL;
                                          }
                                          if ( v3 > -1372610488 )
                                            break;
                                          v3 = -433398761;
                                        }
                                        if ( v3 <= -1242195177 )
                                        {
                                          ((void (*)(void))unk_D0A0)();
                                          for ( m = 1858969250; ; m = 1472560867 )
                                          {
                                            while ( m == 1472560867 )
                                            {
                                              v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))*v112;
                                              m = 1649940109;
                                            }
                                            if ( m == 1649940109 )
                                              break;
                                            v112 = v56;
                                          }
                                          if ( v113 )
                                            v3 = -1242195176;
                                          else
                                            v3 = 2106772196;
                                          goto LABEL_163;
                                        }
                                        if ( v3 <= -1228569526 )
                                        {
                                          v120 = 0;
                                          v119 = -18727;
                                          v79 = &v118;
                                          v80 = &v121;
                                          v122 = dword_C68AC;
                                          v121 = qword_C68A4;
                                          v118 = qword_C6670;
                                          v10 = ((__int64 (__fastcall *)(__int64 *))unk_DA20)(&v118);
                                          v12 = (__int64)v79;
                                          v13 = (__int64)v80;
                                          v14 = -113949346;
                                          while ( v14 <= 1432271021 )
                                          {
                                            if ( v14 > 97641437 )
                                            {
                                              v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))(v13 + 4LL * (_QWORD)v112);
                                              v14 = -1156669108;
                                            }
                                            else if ( v14 > -1243351977 )
                                            {
                                              if ( v14 > -113949347 )
                                              {
                                                v14 = -215969977;
                                              }
                                              else if ( v14 > -1156669109 )
                                              {
                                                if ( v14 > -1081158047 )
                                                {
                                                  if ( v14 > -477026933 )
                                                  {
                                                    if ( v14 > -215969978 )
                                                    {
                                                      v14 = -477026932;
                                                    }
                                                    else if ( v14 == -477026932 )
                                                    {
                                                      v11 = 0;
                                                      v14 = -255050466;
                                                    }
                                                    else if ( v14 == -466035684 )
                                                    {
                                                      LODWORD(v110) = (_DWORD)v111 + 1;
                                                      v14 = -1389727443;
                                                    }
                                                    else
                                                    {
                                                      LODWORD(v111) = v11;
                                                      if ( v11 >= v10 )
                                                        v14 = 1432271022;
                                                      else
                                                        v14 = -1243351976;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v112 = (__int64 *)(int)v109;
                                                    v14 = 97641438;
                                                  }
                                                }
                                                else
                                                {
                                                  *(_BYTE *)(v12 + (int)v111) ^= *(_DWORD *)v113;
                                                  v14 = -466035684;
                                                }
                                              }
                                              else
                                              {
                                                LODWORD(v109) = (int)v111 % 3;
                                                v14 = -1081158046;
                                              }
                                            }
                                            else
                                            {
                                              v11 = v110;
                                              v14 = -255050466;
                                            }
                                          }
                                          v115 = 0;
                                          v114 = -220608841;
                                          v81 = &v114;
                                          v82 = ((__int64 (__fastcall *)(int *))unk_DA20)(&v114);
                                          v3 = -352033419;
                                          goto LABEL_163;
                                        }
                                        if ( v3 > -1185598936 )
                                          break;
LABEL_57:
                                        v64 = 0LL;
                                        v3 = 361200635;
                                      }
                                      if ( v3 > -1160055421 )
                                        break;
                                      v2 = 3695461903LL;
                                      if ( v84 )
                                        v3 = 1366983905;
                                      else
                                        v3 = 877417369;
                                    }
                                    if ( v3 > -1132347775 )
                                      break;
                                    v2 = 3695461903LL;
                                    v84 = ((__int64 (__fastcall *)(__int64))unk_D8A0)(v71);
                                    v3 = -1185598935;
                                  }
                                  if ( v3 > -1125836281 )
                                    break;
                                  v2 = 3695461903LL;
                                  v65 = v47;
                                  v3 = 1597950319;
                                }
                                if ( v3 > -1116448032 )
                                  break;
                                v2 = 3695461903LL;
                                if ( v78 <= 25 )
                                  v3 = -1228569525;
                                else
                                  v3 = -1064727041;
                              }
                              if ( v3 <= -1069339484 )
                              {
                                v2 = 3695461903LL;
                                v7 = v90;
                                goto LABEL_25;
                              }
                              if ( v3 > -1064727042 )
                                break;
                              v2 = 3695461903LL;
                              v94 = v55;
                              v95 = v54;
                              v3 = -201017736;
                            }
                            if ( v3 > -875436930 )
                              break;
                            v2 = 3695461903LL;
                            v3 = -1535948622;
                          }
                          if ( v3 > -775617852 )
                            break;
                          v2 = 3695461903LL;
                          v72 = v65;
                          v3 = 1044681938;
                        }
                        if ( v3 <= -735805441 )
                        {
                          ((void (__fastcall *)(_BYTE *, _QWORD, __int64))unk_DCA0)(v72, 0LL, 1024LL);
                          v23 = (__int64)v65;
                          ((void (__fastcall *)(_BYTE *, __int64 *))unk_DE00)(v65, v79);
                          for ( n = 609632072; n == 609632072; n = -599505393 )
                            v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))&v102;
                          ((void (__fastcall *)(__int64, _QWORD))unk_D040)(v23, *(_QWORD *)v113);
                          *(_WORD *)(v23 + ((__int64 (__fastcall *)(__int64))unk_DA20)(v23)) = 45;
                          v25 = v66;
                          *((_WORD *)v66 + 4) = 0;
                          *v25 = 0LL;
                          v49 = v66;
                          ((void (*)(void))unk_D690)();
                          ((void (__fastcall *)(__int64, __int64 *))unk_D040)(v23, v49);
                          ((void (__fastcall *)(__int64, int *))unk_D040)(v23, v81);
                          v73 = ((__int64 (__fastcall *)(__int64))unk_D8A0)(v23);
                          if ( v73 )
                            v3 = 745149031;
                          else
                            v3 = 1942951257;
                          goto LABEL_163;
                        }
                        if ( v3 > -517069263 )
                          break;
                        v2 = 3695461903LL;
                        v55 = v98;
                        v54 = 0;
                        v3 = -1069339483;
                      }
                      if ( v3 > -433398762 )
                        break;
                      v26 = (__int64)v76;
                      *(_WORD *)(v26 + ((__int64 (__fastcall *)(_BYTE *))unk_DA20)(v76)) = 45;
                      v27 = v68;
                      *((_WORD *)v68 + 4) = 0;
                      *v27 = 0LL;
                      v28 = (__int64)v68;
                      ((void (__fastcall *)(__int64 *, void *, _QWORD))unk_D690)(v68, &unk_C68FC, v99);
                      v29 = v28;
                      v2 = 3695461903LL;
                      ((void (__fastcall *)(_BYTE *, __int64))unk_D040)(v76, v29);
                      ((void (__fastcall *)(_BYTE *, __int64 *))unk_D040)(v76, v83);
                      v77 = ((__int64 (__fastcall *)(_BYTE *))unk_D8A0)(v76);
                      if ( v77 )
                        v3 = 289949949;
                      else
                        v3 = -735805440;
                    }
                    if ( v3 > -423461235 )
                      break;
                    v2 = 3695461903LL;
                    v74 = v97 + 1;
                    v3 = -1729389989;
                  }
                  if ( v3 > -392865408 )
                    break;
                  v2 = 3695461903LL;
                  v3 = -775617851;
                }
                if ( v3 > -352033420 )
                  break;
                v2 = 3695461903LL;
                v53 = v96;
                v52 = 0;
                v3 = 809660063;
              }
              if ( v3 <= -201017737 )
              {
                v30 = 1954053613;
                v31 = (__int64)v80;
                v32 = (__int64)v81;
                v33 = v82;
                v34 = -113949346;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      if ( v34 > 1432271021 )
                      {
                        v117 = 194;
                        v83 = &v116;
                        v116 = qword_C6680;
                        v35 = ((__int64 (__fastcall *)(__int64 *))unk_DA20)(&v116);
                        v37 = (__int64)v80;
                        v38 = (__int64)v83;
                        v39 = -113949346;
                        while ( v39 <= 1432271021 )
                        {
                          if ( v39 > 97641437 )
                          {
                            v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))(v37
                                                                                                + 4LL * (_QWORD)v112);
                            v39 = -1156669108;
                          }
                          else if ( v39 > -1243351977 )
                          {
                            if ( v39 > -113949347 )
                            {
                              v39 = -215969977;
                            }
                            else if ( v39 > -1156669109 )
                            {
                              if ( v39 > -1081158047 )
                              {
                                if ( v39 > -477026933 )
                                {
                                  if ( v39 > -215969978 )
                                  {
                                    v39 = -477026932;
                                  }
                                  else if ( v39 == -477026932 )
                                  {
                                    v36 = 0;
                                    v39 = -255050466;
                                  }
                                  else if ( v39 == -466035684 )
                                  {
                                    LODWORD(v110) = (_DWORD)v111 + 1;
                                    v39 = -1389727443;
                                  }
                                  else
                                  {
                                    LODWORD(v111) = v36;
                                    if ( v36 >= v35 )
                                      v39 = 1432271022;
                                    else
                                      v39 = -1243351976;
                                  }
                                }
                                else
                                {
                                  v112 = (__int64 *)(int)v109;
                                  v39 = 97641438;
                                }
                              }
                              else
                              {
                                *(_BYTE *)(v38 + (int)v111) ^= *(_DWORD *)v113;
                                v39 = -466035684;
                              }
                            }
                            else
                            {
                              LODWORD(v109) = (int)v111 % 3;
                              v39 = -1081158046;
                            }
                          }
                          else
                          {
                            v36 = v110;
                            v39 = -255050466;
                          }
                        }
                        v60 = 1;
                        v3 = -1787836964;
                        goto LABEL_163;
                      }
                      if ( v34 <= 97641437 )
                        break;
                      v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))(v31 + 4LL * (_QWORD)v112);
                      v34 = -1156669108;
                    }
                    if ( v34 > -1243351977 )
                      break;
                    v30 = v110;
LABEL_200:
                    v34 = -255050466;
                  }
                  if ( v34 > -113949347 )
                  {
                    v34 = -215969977;
                  }
                  else if ( v34 > -1156669109 )
                  {
                    if ( v34 > -1081158047 )
                    {
                      if ( v34 > -477026933 )
                      {
                        if ( v34 > -215969978 )
                        {
                          v34 = -477026932;
                        }
                        else
                        {
                          if ( v34 == -477026932 )
                          {
                            v30 = 0;
                            goto LABEL_200;
                          }
                          if ( v34 == -466035684 )
                          {
                            LODWORD(v110) = (_DWORD)v111 + 1;
                            v34 = -1389727443;
                          }
                          else
                          {
                            LODWORD(v111) = v30;
                            if ( v30 >= v33 )
                              v34 = 1432271022;
                            else
                              v34 = -1243351976;
                          }
                        }
                      }
                      else
                      {
                        v112 = (__int64 *)(int)v109;
                        v34 = 97641438;
                      }
                    }
                    else
                    {
                      *(_BYTE *)(v32 + (int)v111) ^= *(_DWORD *)v113;
                      v34 = -466035684;
                    }
                  }
                  else
                  {
                    LODWORD(v109) = (int)v111 % 3;
                    v34 = -1081158046;
                  }
                }
              }
              if ( v3 > -93038519 )
                break;
              v2 = 3695461903LL;
              if ( v95 )
                v3 = 1887832114;
              else
                v3 = -1719978071;
            }
            if ( v3 > 39827154 )
              break;
            v2 = 3695461903LL;
            if ( v71 )
              v3 = -1160055420;
            else
              v3 = 1598313042;
          }
          if ( v3 > 78608897 )
            break;
          v2 = 3695461903LL;
          v85 = v101 + 1;
          v3 = 592579400;
        }
        if ( v3 > 289949948 )
          break;
        v2 = 3695461903LL;
        v51 = v89;
        v50 = v94;
        v3 = 745604701;
      }
      if ( v3 > 361200634 )
        break;
      v2 = 3695461903LL;
      v55 = v77;
      v54 = 1;
      v3 = -1069339483;
    }
    if ( v3 <= 426559855 )
      break;
    if ( v3 > 592579399 )
    {
      if ( v3 > 732061677 )
      {
        if ( v3 > 745149030 )
        {
          if ( v3 > 745604700 )
          {
            if ( v3 > 807953815 )
            {
              if ( v3 <= 809048022 )
              {
                v2 = 3695461903LL;
                v7 = v92;
                goto LABEL_25;
              }
              if ( v3 > 809660062 )
              {
                if ( v3 > 848178404 )
                {
                  if ( v3 <= 877417368 )
                  {
                    v86 = v69;
                    ((void (__fastcall *)(_BYTE *, _QWORD, __int64))unk_DCA0)(v69, 0LL, 1024LL);
                    v87 = v69;
                    ((void (__fastcall *)(_BYTE *, __int64 *))unk_DE00)(v69, v79);
                    for ( ii = 609632072; ii == 609632072; ii = -599505393 )
                      v113 = (__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))&v102;
                    ((void (__fastcall *)(_BYTE *, _QWORD))unk_D040)(v87, *(_QWORD *)v113);
                    v41 = (__int64)v87;
                    *(_WORD *)(v41 + ((__int64 (__fastcall *)(_BYTE *))unk_DA20)(v87)) = 45;
                    v42 = v70;
                    *((_WORD *)v70 + 4) = 0;
                    *v42 = 0LL;
                    v3 = 2046961935;
                    goto LABEL_163;
                  }
                  if ( v3 > 962764571 )
                  {
                    if ( v3 > 1044681937 )
                    {
                      if ( v3 > 1309930995 )
                      {
                        if ( v3 > 1366983904 )
                        {
                          if ( v3 > 1372490022 )
                          {
                            if ( v3 == 1372490023 )
                            {
                              v90 = v63;
                              v91 = v62;
                              v3 = 1954053614;
                              goto LABEL_163;
                            }
                            if ( v3 == 1597950319 )
                            {
                              v66 = &v48;
                              v67 = v46;
                              v68 = &v45;
                              v3 = 732061678;
                              goto LABEL_163;
                            }
                            v2 = 3695461903LL;
                            v3 = -1160055420;
                          }
                          else
                          {
                            v2 = 3695461903LL;
                            v7 = v84;
LABEL_25:
                            v64 = v7;
                            v3 = 361200635;
                          }
                        }
                        else
                        {
                          v2 = 3695461903LL;
                          v50 = v100;
                          v51 = 1;
                          v3 = 745604701;
                        }
                      }
                      else
                      {
                        v2 = 3695461903LL;
                        v3 = -423461234;
                      }
                    }
                    else
                    {
                      v2 = 3695461903LL;
                      v96 = v58;
                      v97 = v59;
                      if ( v59 >= 11 )
                        v3 = -1859494139;
                      else
                        v3 = 848178405;
                    }
                  }
                  else
                  {
                    v2 = 3695461903LL;
                    v3 = -1228569525;
                  }
                }
                else
                {
                  v2 = 3695461903LL;
                  v92 = v53;
                  v93 = v52;
                  v3 = -2055959632;
                }
              }
              else
              {
                v2 = 3695461903LL;
                v89 = v99 + 1;
                v3 = 78608898;
              }
            }
            else
            {
              v2 = 3695461903LL;
              v98 = v50;
              v99 = v51;
              if ( v51 >= 11 )
                v3 = -1561696704;
              else
                v3 = 2141091643;
            }
          }
          else
          {
            v2 = 3695461903LL;
            v63 = v73;
            v62 = 1;
            v3 = 1372490023;
          }
        }
        else
        {
          v2 = 3695461903LL;
          v69 = v47;
          v70 = v46;
          v3 = -2096458096;
        }
      }
      else
      {
        v2 = 3695461903LL;
        v60 = v85;
        v61 = v90;
        v3 = -1787836964;
      }
    }
    else
    {
      v2 = 3695461903LL;
      v53 = v88;
      v52 = 1;
      v3 = 809660063;
    }
  }
  v43 = ((__int64 (__fastcall *)(__int64 *))unk_D5D0)(&v102);
  if ( *(_QWORD *)qword_DFF90 == v123 )
    return v64;
  ((void (__fastcall *)(__int64))unk_D2E0)(v43);
  JUMPOUT(0x83490LL);
  return v64;
}
