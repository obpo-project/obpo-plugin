// local variable allocation has failed, the output may be wrong!
int __fastcall sub_2017C(unsigned int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // lr
  int v7; // r11
  int v8; // r5
  int v9; // r1
  _BYTE *v10; // r12
  int v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r2
  int v18; // r9
  int v19; // r2
  int v20; // r5
  int v21; // r6
  int v22; // r8
  char v23; // r1
  char v24; // r2
  int v25; // r0
  bool v26; // cc
  char v27; // r0
  int *v28; // r4
  int v29; // r0
  int v30; // r2
  int v31; // r3
  int v32; // r3
  int v33; // r8
  int v34; // r1
  int v35; // r9
  int v36; // r1
  int v37; // r4
  int v38; // r0
  _DWORD *v39; // r2
  int *v40; // r6
  int *v41; // r10
  int *v42; // r11
  int v43; // r6
  int v44; // r0
  int v45; // r4
  int v46; // r0
  int v47; // r3
  int v48; // r5
  int v49; // r8
  int v50; // r11
  int v51; // r4
  int v52; // r0
  char v53; // r1
  int v54; // r4
  char v55; // r2
  int v56; // r0
  int v57; // r3
  int v58; // r0
  int v59; // r9
  int v60; // r0
  int *v61; // r10
  int v62; // r1
  char v63; // r1
  int v64; // r6
  __int64 v65; // r4
  int v66; // r0
  int v67; // r1
  unsigned int v68; // r3
  int *v69; // r6
  int v70; // r5
  int v71; // r6
  int v72; // r0
  char v73; // r0
  int v74; // r0
  int v75; // r2
  bool v76; // zf
  int v77; // r5
  int v78; // r4
  int v79; // r0
  int v80; // r4
  int v81; // r0
  int v82; // r9 OVERLAPPED
  int v83; // r10 OVERLAPPED
  int v84; // r5
  int *v85; // r11
  int v86; // r4
  int v87; // r6
  int v88; // r8
  int *v89; // r2
  int v90; // r0
  int v91; // r6
  int v92; // r0
  int v93; // r3
  int v94; // r10
  int v95; // r8
  int v96; // r1
  int v97; // r5
  int v98; // r6
  int v99; // r10
  int v100; // r0
  _DWORD *v101; // r10
  __int64 v102; // r8
  int v103; // r4
  int i; // r5
  int v105; // r0
  int v106; // r1
  int v107; // r5
  int *v108; // r4
  int v109; // r0
  int *v110; // r2
  int v111; // r1
  int v112; // r4
  int v113; // r6
  int v114; // r10
  int v115; // r0
  int v116; // r0
  int result; // r0
  int v118; // [sp+8h] [bp-228h] BYREF
  int v119; // [sp+28h] [bp-208h] BYREF
  int v120; // [sp+30h] [bp-200h] BYREF
  int v121; // [sp+38h] [bp-1F8h] BYREF
  int v122; // [sp+138h] [bp-F8h] BYREF
  int v123; // [sp+140h] [bp-F0h] BYREF
  _BYTE v124[28]; // [sp+144h] [bp-ECh] BYREF
  int v125; // [sp+160h] [bp-D0h] BYREF
  int v126; // [sp+168h] [bp-C8h] BYREF
  int v127; // [sp+170h] [bp-C0h] BYREF
  int v128; // [sp+178h] [bp-B8h] BYREF
  int v129; // [sp+180h] [bp-B0h] BYREF
  int v130; // [sp+188h] [bp-A8h] BYREF
  int v131; // [sp+190h] [bp-A0h] BYREF
  int v132; // [sp+198h] [bp-98h] BYREF
  int v133; // [sp+1A0h] [bp-90h] BYREF
  int v134; // [sp+1ACh] [bp-84h]
  int v135; // [sp+1B0h] [bp-80h]
  int v136; // [sp+1B4h] [bp-7Ch]
  int v137; // [sp+1B8h] [bp-78h]
  int *v138; // [sp+1BCh] [bp-74h]
  int *v139; // [sp+1C0h] [bp-70h]
  int *v140; // [sp+1C4h] [bp-6Ch]
  int *v141; // [sp+1C8h] [bp-68h]
  int *v142; // [sp+1CCh] [bp-64h]
  __int64 v143; // [sp+1D0h] [bp-60h]
  unsigned int v144; // [sp+1D8h] [bp-58h]
  unsigned int v145; // [sp+1DCh] [bp-54h]
  int *v146; // [sp+1E0h] [bp-50h]
  int *v147; // [sp+1E4h] [bp-4Ch]
  int *v148; // [sp+1E8h] [bp-48h]
  int *v149; // [sp+1ECh] [bp-44h]
  int v150; // [sp+1F0h] [bp-40h]
  int v151; // [sp+1F4h] [bp-3Ch]
  int v152; // [sp+1F8h] [bp-38h]
  int *v153; // [sp+1FCh] [bp-34h]
  unsigned __int64 v154; // [sp+200h] [bp-30h]
  int *v155; // [sp+208h] [bp-28h]
  int *v156; // [sp+20Ch] [bp-24h]
  int *v157; // [sp+210h] [bp-20h]
  int *v158; // [sp+214h] [bp-1Ch]
  _BYTE *v159; // [sp+218h] [bp-18h]
  int v160; // [sp+21Ch] [bp-14h]

  v6 = 1328933750;
  v160 = *(_DWORD *)dword_4C7E0;
  v7 = dword_4E370;
  v8 = dword_4E36C * (dword_4E36C - 528259693);
  dword_4E36C = 1878142537;
  if ( (v8 ^ (unsigned int)dword_4E370) < 0x67D31385 )
  {
    v7 = -793348730;
    dword_4E370 = -793348730;
  }
  v154 = __PAIR64__(&v129, a1);
  HIDWORD(v143) = a2;
  v135 = a3;
  v141 = &v133;
  v139 = &v132;
  v147 = &v131;
  v140 = &v130;
  v149 = &v128;
  v155 = &v127;
  v148 = &v126;
  v142 = &v125;
  v158 = &v122;
  v157 = &v121;
  v156 = &v120;
  v153 = &v118;
  v133 = 0;
  dword_4E36C = 1328933750;
  if ( -816536648 * v7 > -2064721442 )
  {
    v7 = 1956237311;
    dword_4E370 = 1956237311;
  }
  v9 = -1921052023;
  LODWORD(v143) = a4;
  if ( a4 != 8 )
    v9 = -1929671264;
  v10 = v124;
  v137 = v9;
  v11 = -167619730;
  if ( a4 == 8 )
    v11 = 1990069835;
  LOWORD(v12) = -27949;
  v136 = v11;
  v150 = -1;
  v13 = 898842597;
  v146 = &v123;
  if ( a5 == 1 )
    v13 = -1811839176;
  HIWORD(v12) = 31938;
  v145 = dword_4C954 & 0xFFFFFFFC;
  v134 = v13;
  v138 = &v119;
  v159 = v124;
  v144 = dword_4C954 & 0xFFFFFFFC;
  v152 = 0;
  v151 = 0;
  v14 = v12;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_20:
            while ( 1 )
            {
              dword_4E36C = 1875792669;
              if ( (((v6 + 664491013) * v6) | v7) == -603659053 )
              {
                dword_4E36C = -1641562643;
                if ( (v7 & 0xE6B4CF48) < 0x58945C7 )
                {
                  v7 = 315828838;
                  dword_4E370 = 315828838;
                }
              }
              else
              {
                v7 = -140370733;
                dword_4E370 = -140370733;
                dword_4E36C = -1641562643;
              }
              v19 = -575461343;
              v18 = 1839819794;
              if ( v14 <= 269528316 )
                break;
              if ( v14 > 1534326027 )
              {
                if ( v14 <= 1963523905 )
                {
                  if ( v14 == 1534326028 )
                  {
                    v7 = 1959729629;
                    v6 = -558554137;
                    *(_DWORD *)(dword_21DCC + 136962) = 631303937;
                    *(_DWORD *)(dword_21DD0 + 136984) = 1959729629;
                    v110 = v153;
                    *v153 = v152;
                    v110[1] = *v141;
                    v110[2] = (int)v157;
                    v110[3] = *v155;
                    v110[4] = v143;
                    v110[5] = *v156;
                    v110[6] = *(_DWORD *)HIDWORD(v154);
                    *(_DWORD *)(dword_21DCC + 136962) = -558554137;
                    v14 = v134;
                  }
                  else if ( v14 == 1725742057 )
                  {
                    v7 = -1339910734;
                    v6 = -2022707374;
                    *(_DWORD *)(dword_21DD4 + 137068) = -1781966475;
                    *(_DWORD *)(dword_21DD8 + 137090) = -1339910734;
                    if ( !*v158 )
                      v19 = 1534326028;
                    *(_DWORD *)(dword_21DD4 + 137068) = -2022707374;
                    v14 = v19;
                  }
                  else
                  {
                    v6 = -1641562643;
                    if ( v14 == 1839819794 )
                    {
                      v6 = -1590272804;
                      dword_4E36C = 859047921;
                      if ( 260987790 * v7 <= -1770303348 )
                      {
                        *(_DWORD *)(dword_21DDC + 137908) = -1590272804;
                        v14 = -195790747;
                        if ( -1063775608 * v7 > 139342876 )
                        {
                          v7 = 375429014;
                          *(_DWORD *)(dword_21DE0 + 137940) = 375429014;
                          v14 = -195790747;
                        }
                      }
                      else
                      {
                        v7 = 266050522;
                        dword_4E370 = 266050522;
                        dword_4E36C = -1590272804;
                        v14 = -195790747;
                      }
                    }
                  }
                }
                else if ( v14 > 2001841455 )
                {
                  if ( v14 == 2001841456 )
                  {
                    v6 = 886845745;
                    *(_DWORD *)(dword_21E00 + 137562) = 1194106587;
                    if ( (v7 | 0x28A35BC4u) < 0x6FD5CC7D )
                    {
                      *(_DWORD *)(dword_21E04 + 137608) = -60533641;
                      *(_DWORD *)(dword_21E08 + 137616) = 886845745;
                      v151 -= 10;
                      goto LABEL_208;
                    }
                    *(_DWORD *)(dword_21E10 + 138160) = 886845745;
                    v151 -= 10;
                    v14 = v136;
                    if ( (v7 | 0xA5F53B20) > 0xBDCF1A4F )
                    {
LABEL_208:
                      v7 = -1066379817;
                      *(_DWORD *)(dword_21E0C + 138216) = -1066379817;
                      v14 = v136;
                    }
                  }
                  else
                  {
                    v6 = -1641562643;
                    if ( v14 == 2093126355 )
                    {
                      v6 = -2064330986;
                      *(_DWORD *)(dword_21E14 + 134908) = -34502528;
                      if ( (int)(v7 ^ 0xBD83EA62) >= -1706749404 )
                      {
                        *(_DWORD *)(dword_21E20 + 138038) = -2064330986;
                        v14 = v137;
                        if ( v7 - 393066112 > 1950756006 )
                        {
                          v7 = 492112836;
                          *(_DWORD *)(dword_21E24 + 138074) = 492112836;
                          v14 = v137;
                        }
                      }
                      else
                      {
                        v7 = -1031742175;
                        *(_DWORD *)(dword_21E18 + 134954) = -1031742175;
                        *(_DWORD *)(dword_21E1C + 134964) = -2064330986;
                        v14 = v137;
                      }
                    }
                  }
                }
                else if ( v14 == 1963523906 )
                {
                  *(_DWORD *)(dword_21DE4 + 135966) = -1255447665;
                  if ( v7 + 770099416 < -416026871 )
                    *(_DWORD *)(dword_21DE8 + 136004) = 9035669;
                  v150 = ((int (__fastcall *)(_DWORD, _DWORD, int *, int))unk_1F340)(v154, HIDWORD(v143), v153, a6);
                  v6 = 337409611;
                  v96 = (*(_DWORD *)(dword_21DEC + 136042) + 353288433) * *(_DWORD *)(dword_21DEC + 136042);
                  v7 = *(_DWORD *)(dword_21DF0 + 136060);
                  *(_DWORD *)(dword_21DEC + 136042) = 337409611;
                  v10 = v159;
                  v14 = 1839819794;
                  if ( v96 * v7 < 183875165 )
                  {
                    v97 = HIDWORD(v143);
                    v7 = -1743082805;
                    v98 = v154;
                    while ( 1 )
                    {
                      *(_DWORD *)(dword_21DF4 + 136122) = -1743082805;
                      if ( (v96 & 1) == 0 )
                        break;
                      v99 = (int)v153;
                      ((void (__fastcall *)(int, int, int *, int))unk_1F340)(v98, v97, v153, a6);
                      v150 = ((int (__fastcall *)(int, int, int, int))unk_1F340)(v98, v97, v99, a6);
                      v10 = v159;
                      v96 = (*(_DWORD *)(dword_21DF8 + 136184) + 353288433) * *(_DWORD *)(dword_21DF8 + 136184);
                      v100 = *(_DWORD *)(dword_21DFC + 136198);
                      *(_DWORD *)(dword_21DF8 + 136184) = 337409611;
                      if ( v96 * v100 >= 183875165 )
                      {
                        v7 = v100;
                        break;
                      }
                    }
LABEL_12:
                    v14 = v18;
                  }
                }
                else
                {
                  v6 = -1641562643;
                  if ( v14 == 1990069835 )
                  {
                    dword_4E36C = -829601891;
                    if ( (v7 ^ 0x4B423CD4) < -1347003167 )
                      dword_4E370 = -1985352648;
                    v36 = HIDWORD(v143);
                    v37 = v143;
                    v39 = (_DWORD *)HIDWORD(v154);
                    v38 = v154;
                    v40 = v147;
                    v41 = v148;
                    v42 = v149;
                    while ( 1 )
                    {
                      *v39 = 0;
                      v48 = v38;
                      v49 = v36;
                      *v42 = ((int (*)(void))dword_24F38[0])();
                      v50 = v37;
                      v51 = ((int (__fastcall *)(int))dword_25028[0])(v37);
                      *v155 = v51;
                      *v41 = 0;
                      v41[1] = 0;
                      v52 = ((int (__fastcall *)(unsigned int))unk_19D60)(v145);
                      ((void (__fastcall *)(int *, int, int, int))unk_4EA4)(v41, 8, v52, v51);
                      ((void (__fastcall *)(int *, _DWORD))unk_4EF8)(v40, 0);
                      v6 = -1352289452;
                      v53 = dword_4E36C;
                      v54 = dword_4E370;
                      v55 = dword_4E36C - 1;
                      v56 = *v40;
                      v57 = dword_4E370 - (dword_4E36C + 283368959) * dword_4E36C;
                      dword_4E36C = -1352289452;
                      if ( v57 <= -1837385838 )
                        break;
                      v54 = -2142450653;
                      dword_4E370 = -2142450653;
                      if ( ((v53 * v55) & 1) == 0 )
                        break;
                      v43 = v50;
                      *(_DWORD *)HIDWORD(v154) = 0;
                      v44 = ((int (__fastcall *)(int, int, int, _DWORD))dword_24F38[0])(v48, v49, v50, 0);
                      v42 = v149;
                      *v149 = v44;
                      v45 = ((int (__fastcall *)(int))dword_25028[0])(v43);
                      v41 = v148;
                      *v155 = v45;
                      *v41 = 0;
                      v41[1] = 0;
                      v46 = ((int (__fastcall *)(unsigned int))unk_19D60)(v144);
                      v47 = v45;
                      v37 = v43;
                      ((void (__fastcall *)(int *, int, int, int))unk_4EA4)(v41, 8, v46, v47);
                      v40 = v147;
                      ((void (__fastcall *)(int *, _DWORD))unk_4EF8)(v147, 0);
                      v39 = (_DWORD *)HIDWORD(v154);
                      v38 = v154;
                      v36 = v49;
                    }
                    v7 = v54;
                    v26 = v56 - *v139 <= 4;
                    v14 = -831112583;
                    if ( !v26 )
                      v14 = -15788703;
                    v10 = v159;
                  }
                }
              }
              else
              {
                v32 = v151;
                v33 = 64144756;
                if ( v14 <= 815005160 )
                {
                  if ( v14 == 269528317 )
                  {
                    v6 = 483813196;
                    *(_DWORD *)(dword_21D8C + 136320) = -1724403750;
                    if ( (v7 & 0x645399EEu) > 0xECA4DBC )
                    {
                      v7 = 1992915921;
                      *(_DWORD *)(dword_21D90 + 136364) = 1992915921;
                    }
                    *(_DWORD *)(dword_21D94 + 136374) = 483813196;
                    v14 = 1725742057;
                  }
                  else if ( v14 == 573800548 )
                  {
                    v6 = 619201045;
                    *(_DWORD *)(dword_21D98 + 136402) = 1591205657;
                    *(_DWORD *)(dword_21D98 + 136402) = 619201045;
                    v14 = -1901480674;
                    v151 = v32 + 1;
                    if ( v7 - 953976422 < -324175816 )
                    {
                      v7 = -1880630042;
                      *(_DWORD *)(dword_21D9C + 136466) = -1880630042;
                    }
                  }
                  else
                  {
                    v6 = -1641562643;
                    if ( v14 == 805621615 )
                    {
                      dword_4E36C = 1307341939;
                      if ( (v7 ^ 0x55E93F2) > -1909859297 )
                        dword_4E370 = -96377119;
                      v59 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, int))dword_24F38[0])(
                              v154,
                              HIDWORD(v143),
                              v143,
                              1);
                      v60 = ((int (*)(void))unk_515C)();
                      v6 = 500319267;
                      v61 = v138;
                      v7 = dword_4E370;
                      v62 = dword_4E36C;
                      *v138 = v60;
                      dword_4E36C = 500319267;
                      if ( (unsigned int)(v7 - (v62 + 1695602089) * v62) <= 0x3BEF58BA )
                      {
                        v10 = v159;
                      }
                      else
                      {
                        v63 = v62 * (v62 - 87);
                        v10 = v159;
                        while ( 1 )
                        {
                          dword_4E370 = -564927124;
                          if ( (v63 & 1) == 0 )
                            break;
                          v64 = v154;
                          v65 = v143;
                          v66 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, int))dword_24F38[0])(
                                  v154,
                                  HIDWORD(v143),
                                  v143,
                                  1);
                          *v61 = ((int (__fastcall *)(int))unk_515C)(v66);
                          v59 = ((int (__fastcall *)(int, _DWORD, _DWORD, int))dword_24F38[0])(
                                  v64,
                                  HIDWORD(v65),
                                  v65,
                                  1);
                          v60 = ((int (*)(void))unk_515C)();
                          *v61 = v60;
                          v7 = dword_4E370;
                          v67 = dword_4E36C;
                          dword_4E36C = 500319267;
                          v10 = v159;
                          v68 = dword_4E370 - (v67 + 1695602089) * v67;
                          v63 = v67 * (v67 - 87);
                          if ( v68 <= 0x3BEF58BA )
                            goto LABEL_210;
                        }
                        v7 = -564927124;
                      }
LABEL_210:
                      if ( v60 )
                        v33 = 1166857865;
                      *(_DWORD *)HIDWORD(v154) = 1;
                      *v149 = v59;
                      v14 = v33;
                    }
                  }
                }
                else if ( v14 > 898842596 )
                {
                  if ( v14 == 898842597 )
                  {
                    *(_DWORD *)(dword_21DB0 + 137188) = -1274323775;
                    if ( v7 != -1433173544 )
                      *(_DWORD *)(dword_21DC8 + 137216) = 1198230681;
                    v150 = ((int (__fastcall *)(_DWORD, _DWORD, int *, int))unk_1F340)(v154, HIDWORD(v143), v153, a6);
                    v6 = 1553194258;
                    v111 = (*(_DWORD *)(dword_21DB4 + 137254) + 1759213047) * *(_DWORD *)(dword_21DB4 + 137254);
                    v7 = *(_DWORD *)(dword_21DB8 + 137272);
                    *(_DWORD *)(dword_21DB4 + 137254) = 1553194258;
                    v10 = v159;
                    v14 = -195790747;
                    if ( (v111 & (unsigned int)v7) > 0xA97E6777 )
                    {
                      v7 = -71007257;
                      v112 = HIDWORD(v143);
                      v113 = v154;
                      while ( 1 )
                      {
                        *(_DWORD *)(dword_21DBC + 137342) = -71007257;
                        if ( (v111 & 1) == 0 )
                          break;
                        v114 = (int)v153;
                        ((void (__fastcall *)(int, int, int *, int))unk_1F340)(v113, v112, v153, a6);
                        v150 = ((int (__fastcall *)(int, int, int, int))unk_1F340)(v113, v112, v114, a6);
                        v10 = v159;
                        v111 = (*(_DWORD *)(dword_21DC0 + 137402) + 1759213047) * *(_DWORD *)(dword_21DC0 + 137402);
                        v115 = *(_DWORD *)(dword_21DC4 + 137418);
                        *(_DWORD *)(dword_21DC0 + 137402) = 1553194258;
                        if ( (v111 & (unsigned int)v115) <= 0xA97E6777 )
                        {
                          v7 = v115;
                          break;
                        }
                      }
                      v14 = -195790747;
                    }
                  }
                  else
                  {
                    v6 = -1641562643;
                    if ( v14 == 1166857865 )
                    {
                      dword_4E36C = 2009363042;
                      if ( (unsigned int)(v7 - 1781497546) > 0xFC894D65 )
                        dword_4E370 = 555745363;
                      v70 = (int)v157;
                      v71 = *v138;
                      ((void (__fastcall *)(_DWORD, _DWORD, int *, int))unk_5168)(
                        *(_DWORD *)(*v138 + 8),
                        **(_DWORD **)(*v138 + 16),
                        v157,
                        255);
                      v6 = 580831414;
                      v7 = dword_4E370;
                      v72 = dword_4E36C;
                      dword_4E36C = 580831414;
                      v10 = v159;
                      if ( dword_4E370 - (v72 - 751962073) * v72 != 817420613 )
                      {
                        v73 = v72 * (v72 + 39);
                        while ( 1 )
                        {
                          dword_4E370 = 1915236382;
                          if ( (v73 & 1) == 0 )
                            break;
                          ((void (__fastcall *)(_DWORD, _DWORD, int, int))unk_5168)(
                            *(_DWORD *)(v71 + 8),
                            **(_DWORD **)(v71 + 16),
                            v70,
                            255);
                          ((void (__fastcall *)(_DWORD, _DWORD, int, int))unk_5168)(
                            *(_DWORD *)(v71 + 8),
                            **(_DWORD **)(v71 + 16),
                            v70,
                            255);
                          v10 = v159;
                          v7 = dword_4E370;
                          v74 = dword_4E36C;
                          dword_4E36C = 580831414;
                          v75 = dword_4E370 - (v74 - 751962073) * v74;
                          v73 = v74 * (v74 + 39);
                          if ( v75 == 817420613 )
                            goto LABEL_214;
                        }
                        v7 = 1915236382;
                      }
LABEL_214:
                      *v156 = 2;
                      *v158 = 0;
                      v14 = 64144756;
                    }
                  }
                }
                else if ( v14 == 815005161 )
                {
                  v82 = 1;
                  v83 = 6;
                  *(_DWORD *)(dword_21DA0 + 135266) = -770985868;
                  v84 = (int)v148;
                  v85 = v142;
                  v86 = *v149;
                  v87 = (int)v146;
                  while ( 1 )
                  {
                    *v85 = 0;
                    ((void (__fastcall *)(_BYTE *, int))unk_5174)(v10, 28);
                    *(_QWORD *)(v87 + 8) = *(_QWORD *)&v82;
                    *(_DWORD *)v87 = 1;
                    v91 = ((int (__fastcall *)(int, int, int, int *))unk_5180)(v86, v84, v87, v85);
                    *v158 = v91;
                    ((void (__fastcall *)(int *, int))unk_4EBC)(v157, 255);
                    v6 = 409130823;
                    *v156 = 2;
                    v92 = *(_DWORD *)(dword_21DA4 + 135716) * (*(_DWORD *)(dword_21DA4 + 135716) + 181677165);
                    v93 = *(_DWORD *)(dword_21DA8 + 135730);
                    *(_DWORD *)(dword_21DA4 + 135716) = 409130823;
                    if ( (unsigned int)(v92 * v93) >= 0x87D5629 )
                      break;
                    v93 = -1846612664;
                    *(_DWORD *)(dword_21DAC + 135770) = -1846612664;
                    if ( (v92 & 1) == 0 )
                      break;
                    v88 = (int)v159;
                    *v85 = 0;
                    ((void (__fastcall *)(int, int))unk_5174)(v88, 28);
                    v87 = (int)v146;
                    v82 = 1;
                    v83 = 6;
                    v89 = v146;
                    v146[2] = 1;
                    v89[3] = 6;
                    *v89 = 1;
                    v90 = ((int (__fastcall *)(int, int, int *, int *))unk_5180)(v86, v84, v89, v85);
                    *v158 = v90;
                    ((void (__fastcall *)(int *, int))unk_4EBC)(v157, 255);
                    v10 = (_BYTE *)v88;
                    *v156 = 2;
                  }
                  v14 = -992228721;
                  v7 = v93;
                  if ( v91 )
                    v14 = 805621615;
                  v10 = v159;
                }
                else
                {
                  v6 = -1641562643;
                  if ( v14 == 871314108 )
                  {
                    dword_4E36C = 759976047;
                    if ( v7 != 851941534 )
                      dword_4E370 = 509778333;
                    v6 = 1393773945;
                    v7 = 1156979868;
                    dword_4E36C = 1393773945;
                    dword_4E370 = 1156979868;
                    v14 = 2001841456;
                  }
                }
              }
            }
            v20 = -160805588;
            v21 = -1593091235;
            v22 = 269528317;
            if ( v14 > -725832131 )
              break;
            if ( v14 <= -1811839177 )
            {
              v69 = v141;
              if ( v14 == -1929671264 )
              {
                v101 = (_DWORD *)(dword_21CF4 + 136494);
                *(_DWORD *)(dword_21CEC + 136492) = 35521346;
                v102 = v143;
                v103 = v154;
                if ( (v7 ^ 0x57FF9906) < -739229871 )
                  *(_DWORD *)(dword_21CF0 + 136542) = -487149991;
                for ( i = v135;
                      ;
                      ((void (__fastcall *)(int, _DWORD, int, int *, _DWORD))unk_61E0)(
                        v103,
                        HIDWORD(v102),
                        i,
                        v69,
                        v102) )
                {
                  *v69 = ((int (__fastcall *)(int))unk_4E50)(i);
                  v152 = ((int (__fastcall *)(int, _DWORD, int, int *, _DWORD))unk_61E0)(
                           v103,
                           HIDWORD(v102),
                           i,
                           v69,
                           v102);
                  v6 = 1468725209;
                  v105 = *v101 * (*v101 - 387881995);
                  v7 = *(_DWORD *)(dword_21CF8 + 136648);
                  *v101 = 1468725209;
                  if ( (v105 & v7) <= 1639922936 )
                    break;
                  v7 = 1542489467;
                  *(_DWORD *)(dword_21CFC + 136682) = 1542489467;
                  if ( (v105 & 1) == 0 )
                    break;
                  *v69 = ((int (__fastcall *)(int))unk_4E50)(i);
                }
                v14 = -1921052023;
                v10 = v159;
              }
              else if ( v14 == -1921052023 )
              {
                *(_DWORD *)(dword_21D00 + 136712) = -50420427;
                ((void (__fastcall *)(int *, _DWORD, int))unk_4EF8)(v139, 0, -575461343);
                v6 = 1499363388;
                v10 = v159;
                *v140 = 0;
                v106 = (*(_DWORD *)(dword_21D00 + 136712) - 1784137433) * *(_DWORD *)(dword_21D00 + 136712);
                v7 = *(_DWORD *)(dword_21D04 + 136776);
                *(_DWORD *)(dword_21D00 + 136712) = 1499363388;
                v151 = 27042;
                v14 = 115843475;
                if ( (v106 & v7) != -729623077 )
                {
                  v7 = 1918829931;
                  v107 = (int)v139;
                  v108 = v140;
                  while ( 1 )
                  {
                    *(_DWORD *)(dword_21D08 + 136830) = 1918829931;
                    if ( (v106 & 1) == 0 )
                      break;
                    ((void (__fastcall *)(int, _DWORD))unk_4EF8)(v107, 0);
                    *v108 = 0;
                    ((void (__fastcall *)(int, _DWORD))unk_4EF8)(v107, 0);
                    v10 = v159;
                    *v108 = 0;
                    v106 = (*(_DWORD *)(dword_21D0C + 136886) - 1784137433) * *(_DWORD *)(dword_21D0C + 136886);
                    v109 = *(_DWORD *)(dword_21D10 + 136914);
                    *(_DWORD *)(dword_21D0C + 136886) = 1499363388;
                    if ( (v106 & v109) == -729623077 )
                    {
                      v7 = v109;
                      v151 = 27042;
                      v14 = 115843475;
                      goto LABEL_20;
                    }
                  }
                  v151 = 27042;
                  v14 = 115843475;
                }
              }
              else
              {
                v6 = -1641562643;
                if ( v14 == -1901480674 )
                {
                  v6 = 937078617;
                  dword_4E36C = 1891865809;
                  if ( 877033118 * v7 > -101129598 )
                  {
                    dword_4E370 = 1488301631;
                    ++*v140;
                    dword_4E36C = 937078617;
                    goto LABEL_193;
                  }
                  ++*v140;
                  *(_DWORD *)(dword_21D18 + 137846) = 937078617;
                  v14 = 115843475;
                  if ( (v7 & 0x4E48D73Cu) > 0x1928A923 )
                  {
LABEL_193:
                    v7 = 1777103882;
                    *(_DWORD *)(dword_21D14 + 137882) = 1777103882;
                    v14 = 115843475;
                  }
                }
              }
            }
            else if ( v14 > -992228722 )
            {
              if ( v14 == -992228721 )
              {
                v6 = -1437508205;
                *(_DWORD *)(dword_21D2C + 137464) = -2044025843;
                if ( (unsigned int)(v7 + 318848056) < 0xB2BC8E11 )
                {
                  v7 = 2069788726;
                  *(_DWORD *)(dword_21D30 + 137506) = 2069788726;
                }
                if ( !*v158 )
                  v22 = -725832130;
                *(_DWORD *)(dword_21D34 + 137534) = -1437508205;
                v14 = v22;
              }
              else
              {
                v6 = -1641562643;
                if ( v14 == -831112583 )
                {
                  v6 = 497966879;
                  *(_DWORD *)(dword_21D38 + 134770) = 1187257021;
                  if ( (int)(v7 & 0xE329A97C) < -372787784 )
                  {
                    *(_DWORD *)(dword_21D3C + 134816) = -2118913450;
                    v76 = *v149 == 0;
                    *(_DWORD *)(dword_21D40 + 134830) = 497966879;
                    if ( !v76 )
                      v21 = 815005161;
LABEL_199:
                    v7 = -50741465;
                    *(_DWORD *)(dword_21D44 + 138016) = -50741465;
                    goto LABEL_200;
                  }
                  v76 = *v149 == 0;
                  *(_DWORD *)(dword_21D48 + 137960) = 497966879;
                  if ( !v76 )
                    v21 = 815005161;
                  v14 = v21;
                  if ( v7 + 447150856 < -1529356886 )
                    goto LABEL_199;
                }
              }
            }
            else
            {
              if ( v14 == -1811839176 )
              {
                *(_DWORD *)(dword_21D1C + 135818) = 673678213;
                if ( (int)(v7 & 0xE558B6AE) < 133998166 )
                  *(_DWORD *)(dword_21D20 + 135858) = -1238308817;
                v94 = v154;
                v95 = HIDWORD(v143);
                v16 = ((int (__fastcall *)(_DWORD, _DWORD, int *, int))unk_1FB2C)(v154, HIDWORD(v143), v153, a6);
                v6 = 174650404;
                v17 = *(_DWORD *)(dword_21D24 + 135896) * (*(_DWORD *)(dword_21D24 + 135896) + 278982127);
                v7 = *(_DWORD *)(dword_21D28 + 135918);
                *(_DWORD *)(dword_21D24 + 135896) = 174650404;
                if ( (v17 ^ (unsigned int)v7) >= 0x93811651 )
                {
                  v10 = v159;
                }
                else
                {
                  v10 = v159;
                  while ( 1 )
                  {
                    dword_4E370 = 85739734;
                    if ( (v17 & 1) == 0 )
                      break;
                    v15 = (int)v153;
                    ((void (__fastcall *)(int, int, int *, int))unk_1FB2C)(v94, v95, v153, a6);
                    v16 = ((int (__fastcall *)(int, int, int, int))unk_1FB2C)(v94, v95, v15, a6);
                    v10 = v159;
                    v17 = dword_4E36C * (dword_4E36C + 278982127);
                    v7 = dword_4E370;
                    dword_4E36C = 174650404;
                    if ( (v17 ^ (unsigned int)dword_4E370) >= 0x93811651 )
                      goto LABEL_17;
                  }
                  v7 = 85739734;
                }
LABEL_17:
                v150 = v16;
                if ( v16 )
                  v18 = 1963523906;
                goto LABEL_12;
              }
              v6 = -1641562643;
              if ( v14 == -1593091235 )
              {
                dword_4E36C = -980434569;
                if ( (v7 ^ 0xBAF5845A) > 0xC9938200 )
                  dword_4E370 = -1117169881;
                ((void (__fastcall *)(int))unk_53EE)(v152);
                v6 = -1645924266;
                v34 = (dword_4E36C + 1268731159) * dword_4E36C;
                v7 = dword_4E370;
                dword_4E36C = -1645924266;
                v10 = v159;
                v14 = -160805588;
                if ( (v34 | dword_4E370) != 252947944 )
                {
                  v7 = -1271234817;
                  while ( 1 )
                  {
                    dword_4E370 = -1271234817;
                    if ( (v34 & 1) == 0 )
                      break;
                    v35 = v152;
                    ((void (__fastcall *)(int))unk_53EE)(v152);
                    ((void (__fastcall *)(int))unk_53EE)(v35);
                    v10 = v159;
                    v34 = (dword_4E36C + 1268731159) * dword_4E36C;
                    dword_4E36C = -1645924266;
                    if ( (v34 | dword_4E370) == 252947944 )
                    {
                      v7 = dword_4E370;
                      break;
                    }
                  }
LABEL_100:
                  v14 = v20;
                }
              }
            }
          }
          if ( v14 > -160805589 )
            break;
          if ( v14 > -195790748 )
          {
            if ( v14 == -195790747 )
            {
              v7 = -2091068965;
              v6 = 390134190;
              *(_DWORD *)(dword_21D60 + 137140) = -2066223326;
              *(_DWORD *)(dword_21D64 + 137160) = -2091068965;
              *(_DWORD *)(dword_21D60 + 137140) = 390134190;
              v14 = -575461343;
            }
            else
            {
              v6 = -1641562643;
              if ( v14 == -167619730 )
              {
                v6 = 166977305;
                dword_4E36C = -1171718036;
                if ( v7 == -2146529687 )
                {
                  v7 = 152027440;
                  dword_4E370 = 152027440;
                }
                dword_4E36C = 166977305;
                if ( v152 )
                  v20 = 1990069835;
                goto LABEL_100;
              }
            }
          }
          else if ( v14 == -725832130 )
          {
            *(_DWORD *)(dword_21D4C + 135026) = 1561742993;
            v77 = (int)v157;
            v78 = *(_DWORD *)(*v142 + 4);
            ((void (__fastcall *)(int, int, int *, int))unk_5168)(v78, *(_DWORD *)(*v142 + 24) + 4, v157, 255);
            v6 = 1551985527;
            v79 = *(_DWORD *)(dword_21D4C + 135026) * (*(_DWORD *)(dword_21D4C + 135026) + 2114283701);
            v7 = *(_DWORD *)(dword_21D50 + 135098);
            *(_DWORD *)(dword_21D4C + 135026) = 1551985527;
            if ( v79 * v7 <= 377945119 )
            {
              v10 = v159;
            }
            else
            {
              v10 = v159;
              while ( 1 )
              {
                *(_DWORD *)(dword_21D54 + 135134) = -1562678284;
                if ( (v79 & 1) == 0 )
                  break;
                v80 = (int)v142;
                ((void (__fastcall *)(_DWORD, int, int, int))unk_5168)(
                  *(_DWORD *)(*v142 + 4),
                  *(_DWORD *)(*v142 + 24) + 4,
                  v77,
                  255);
                v81 = *(_DWORD *)v80;
                v78 = *(_DWORD *)(*(_DWORD *)v80 + 4);
                ((void (__fastcall *)(int, int, int, int))unk_5168)(v78, *(_DWORD *)(v81 + 24) + 4, v77, 255);
                v10 = v159;
                v79 = *(_DWORD *)(dword_21D58 + 135204) * (*(_DWORD *)(dword_21D58 + 135204) + 2114283701);
                v7 = *(_DWORD *)(dword_21D5C + 135220);
                *(_DWORD *)(dword_21D58 + 135204) = 1551985527;
                if ( v79 * v7 <= 377945119 )
                  goto LABEL_216;
              }
              v7 = -1562678284;
            }
LABEL_216:
            *v156 = v78;
            v14 = 269528317;
          }
          else
          {
            v6 = -1641562643;
            if ( v14 == -575461343 )
            {
              dword_4E36C = 542264248;
              dword_4E370 = 1739233470;
              ((void (__fastcall *)(int))unk_53E4)(*v142);
              v23 = dword_4E36C;
              v7 = dword_4E370;
              v24 = dword_4E36C - 95;
              v10 = v159;
              v6 = 75543312;
              v25 = dword_4E370 - (dword_4E36C - 304368735) * dword_4E36C;
              dword_4E36C = 75543312;
              v26 = v25 <= 421626306;
              v14 = -1593091235;
              if ( !v26 )
              {
                v27 = v24 * v23;
                v28 = v142;
                v7 = -1569670714;
                while ( 1 )
                {
                  dword_4E370 = -1569670714;
                  if ( (v27 & 1) == 0 )
                    break;
                  ((void (__fastcall *)(int))unk_53E4)(*v28);
                  ((void (__fastcall *)(int))unk_53E4)(*v28);
                  v29 = dword_4E36C;
                  v30 = dword_4E36C - 304368735;
                  dword_4E36C = 75543312;
                  v10 = v159;
                  v31 = dword_4E370 - v30 * v29;
                  v27 = v29 * v30;
                  if ( v31 <= 421626306 )
                  {
                    v7 = dword_4E370;
                    break;
                  }
                }
LABEL_200:
                v14 = v21;
              }
            }
          }
        }
        if ( v14 <= 64144755 )
          break;
        if ( v14 == 64144756 )
        {
          v6 = 2134364837;
          *(_DWORD *)(dword_21D70 + 136244) = -611108991;
          if ( (unsigned int)(v7 - 519164732) < 0x84FFFC9F )
          {
            *(_DWORD *)(dword_21D74 + 136288) = -1817076950;
            *(_DWORD *)(dword_21D78 + 136296) = 2134364837;
            goto LABEL_206;
          }
          *(_DWORD *)(dword_21D80 + 138112) = 2134364837;
          v14 = 1725742057;
          if ( (unsigned int)(v7 - 1629768504) < 0xE1881A18 )
          {
LABEL_206:
            v7 = 1311870957;
            *(_DWORD *)(dword_21D7C + 138146) = 1311870957;
            v14 = 1725742057;
          }
        }
        else
        {
          v6 = -1641562643;
          if ( v14 == 115843475 )
          {
            v6 = 28038197;
            dword_4E36C = -687420208;
            if ( v7 + 671770518 <= 1741034130 )
            {
              v116 = *v140;
              *(_DWORD *)(dword_21D84 + 137752) = 28038197;
              v26 = v116 < 10;
              v14 = 871314108;
              if ( v26 )
                v14 = 573800548;
              if ( (v7 | 0x56ED6BD0) < -397668925 )
              {
                v7 = -1509388089;
                *(_DWORD *)(dword_21D88 + 137808) = -1509388089;
              }
            }
            else
            {
              v7 = 1826644744;
              dword_4E370 = 1826644744;
              v58 = *v140;
              dword_4E36C = 28038197;
              v26 = v58 < 10;
              v14 = 871314108;
              if ( v26 )
                v14 = 573800548;
            }
          }
        }
      }
      if ( v14 != -15788703 )
        break;
      v6 = 1554169782;
      *(_DWORD *)(dword_21D68 + 137644) = 865462117;
      *v155 = v151;
      *v141 -= 17;
      *(_DWORD *)(dword_21D68 + 137644) = 1554169782;
      v151 = 23946;
      v14 = -831112583;
      if ( v7 == 91889740 )
      {
        v7 = 1700474179;
        *(_DWORD *)(dword_21D6C + 137716) = 1700474179;
        v151 = 23946;
        v14 = -831112583;
      }
    }
    v6 = -1641562643;
  }
  while ( v14 != -160805588 );
  *(_DWORD *)(dword_21CD8 + 138332) = -1905598314;
  if ( v7 - 186502950 < -971531453 )
  {
    v7 = -1608064687;
    *(_DWORD *)(dword_21CDC + 138368) = -1608064687;
  }
  *(_DWORD *)(dword_21CE0 + 138384) = 1940835155;
  if ( (int)(v7 ^ 0x83C76CD2) > -865982838 )
    *(_DWORD *)(dword_21CE4 + 138422) = 54919903;
  result = v150;
  if ( **(_DWORD **)(dword_21CE8 + 138432) == v160 )
    return result;
  ((void (__fastcall *)(int))unk_4EB0)(v150);
  JUMPOUT(0x21CD8);
  return result;
}
