// local variable allocation has failed, the output may be wrong!
int __fastcall sub_2017C(unsigned int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11
  int v7; // lr
  int v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r6
  int *v16; // r6
  int v17; // r8
  int v18; // r8
  int v19; // r9
  int v20; // r0
  int v21; // r2
  int v22; // r4
  int v23; // r11
  char v24; // r1
  char v25; // r2
  int v26; // r11
  int v27; // r0
  char v28; // r0
  int *v29; // r4
  int v30; // r0
  int v31; // r2
  int v32; // r3
  int v33; // r1
  int v34; // r11
  int v35; // r9
  int v36; // r0
  int v37; // r1
  _DWORD *v38; // r2
  int v39; // r4
  int *v40; // r6
  int *v41; // r10
  int *v42; // r11
  int v43; // r6
  int v44; // r0
  int v45; // r4
  int v46; // r0
  int v47; // r3
  int v48; // r0
  char v49; // r1
  char v50; // r2
  int v51; // r4
  int v52; // r5
  int v53; // r8
  int v54; // r11
  int v55; // r4
  int v56; // r0
  int v57; // r3
  int v58; // r0
  bool v59; // cc
  int v60; // r12
  int v61; // r0
  int v62; // r11
  int v63; // r0
  int v64; // r0
  int v65; // r1
  int v66; // r9
  int *v67; // r10
  int v68; // r11
  char v69; // r1
  int v70; // r6
  __int64 v71; // r4
  int v72; // r0
  int v73; // r1
  unsigned int v74; // r3
  int v75; // r0
  int v76; // r5
  int v77; // r6
  char v78; // r0
  int v79; // r0
  int v80; // r2
  bool v81; // zf
  int v82; // r0
  int v83; // r0
  int v84; // r4
  int v85; // r5
  int v86; // r11
  int v87; // r4
  int v88; // r0
  int v89; // r4
  int v90; // r5
  int v91; // r6
  int v92; // r9 OVERLAPPED
  int v93; // r10 OVERLAPPED
  int *v94; // r11
  int v95; // r8
  int *v96; // r2
  int v97; // r0
  int v98; // r0
  int v99; // r3
  int v100; // r6
  int v101; // r0
  int v102; // r8
  int v103; // r10
  int v104; // r1
  int v105; // r5
  int v106; // r6
  int v107; // r0
  int v108; // r10
  int v109; // r4
  __int64 v110; // r8
  _DWORD *v111; // r10
  int i; // r5
  int v113; // r0
  int v114; // r11
  int v115; // r1
  int *v116; // r4
  int v117; // r5
  int v118; // r0
  int *v119; // r2
  int v120; // r1
  int v121; // r11
  int v122; // r4
  int v123; // r6
  int v124; // r0
  int v125; // r10
  int v126; // r0
  int v127; // r0
  int result; // r0
  int v129; // [sp+8h] [bp-228h] BYREF
  int v130; // [sp+28h] [bp-208h] BYREF
  int v131; // [sp+30h] [bp-200h] BYREF
  int v132; // [sp+38h] [bp-1F8h] BYREF
  int v133; // [sp+138h] [bp-F8h] BYREF
  int v134; // [sp+140h] [bp-F0h] BYREF
  int v135; // [sp+144h] [bp-ECh] BYREF
  int v136; // [sp+160h] [bp-D0h] BYREF
  int v137; // [sp+168h] [bp-C8h] BYREF
  int v138; // [sp+170h] [bp-C0h] BYREF
  int v139; // [sp+178h] [bp-B8h] BYREF
  int v140; // [sp+180h] [bp-B0h] BYREF
  int v141; // [sp+188h] [bp-A8h] BYREF
  int v142; // [sp+190h] [bp-A0h] BYREF
  int v143; // [sp+198h] [bp-98h] BYREF
  int v144; // [sp+1A0h] [bp-90h] BYREF
  int v145; // [sp+1ACh] [bp-84h]
  int v146; // [sp+1B0h] [bp-80h]
  int v147; // [sp+1B4h] [bp-7Ch]
  int v148; // [sp+1B8h] [bp-78h]
  int *v149; // [sp+1BCh] [bp-74h]
  int *v150; // [sp+1C0h] [bp-70h]
  int *v151; // [sp+1C4h] [bp-6Ch]
  int *v152; // [sp+1C8h] [bp-68h]
  int *v153; // [sp+1CCh] [bp-64h]
  __int64 v154; // [sp+1D0h] [bp-60h]
  unsigned int v155; // [sp+1D8h] [bp-58h]
  unsigned int v156; // [sp+1DCh] [bp-54h]
  int *v157; // [sp+1E0h] [bp-50h]
  int *v158; // [sp+1E4h] [bp-4Ch]
  int *v159; // [sp+1E8h] [bp-48h]
  int *v160; // [sp+1ECh] [bp-44h]
  int v161; // [sp+1F0h] [bp-40h]
  int v162; // [sp+1F4h] [bp-3Ch]
  int v163; // [sp+1F8h] [bp-38h]
  int *v164; // [sp+1FCh] [bp-34h]
  unsigned __int64 v165; // [sp+200h] [bp-30h]
  int *v166; // [sp+208h] [bp-28h]
  int *v167; // [sp+20Ch] [bp-24h]
  int *v168; // [sp+210h] [bp-20h]
  int *v169; // [sp+214h] [bp-1Ch]
  int *v170; // [sp+218h] [bp-18h]
  int v171; // [sp+21Ch] [bp-14h]

  v7 = 1328933750;
  v171 = *(_DWORD *)dword_4C7E0;
  v6 = dword_4E370;
  v8 = dword_4E36C * (dword_4E36C - 528259693);
  dword_4E36C = 1878142537;
  if ( (v8 ^ (unsigned int)dword_4E370) < 0x67D31385 )
  {
    v6 = -793348730;
    dword_4E370 = -793348730;
  }
  v165 = __PAIR64__(&v140, a1);
  HIDWORD(v154) = a2;
  v146 = a3;
  v152 = &v144;
  v150 = &v143;
  v158 = &v142;
  v151 = &v141;
  v160 = &v139;
  v166 = &v138;
  v159 = &v137;
  v153 = &v136;
  v169 = &v133;
  v168 = &v132;
  v167 = &v131;
  v164 = &v129;
  v144 = 0;
  dword_4E36C = 1328933750;
  if ( -816536648 * v6 > -2064721442 )
  {
    v6 = 1956237311;
    dword_4E370 = 1956237311;
  }
  v9 = -1921052023;
  LODWORD(v154) = a4;
  if ( a4 != 8 )
    v9 = -1929671264;
  v148 = v9;
  v10 = -167619730;
  if ( a4 == 8 )
    v10 = 1990069835;
  v147 = v10;
  v161 = -1;
  v11 = 898842597;
  v157 = &v134;
  if ( a5 == 1 )
    v11 = -1811839176;
  v156 = dword_4C954 & 0xFFFFFFFC;
  v145 = v11;
  v149 = &v130;
  v170 = &v135;
  v155 = dword_4C954 & 0xFFFFFFFC;
  v163 = 0;
  v162 = 0;
LABEL_102:
  dword_4E36C = 1875792669;
  if ( (((v7 + 664491013) * v7) | v6) == -603659053 )
  {
    dword_4E36C = -1641562643;
    if ( (v6 & 0xE6B4CF48) < 0x58945C7 )
    {
      v6 = 315828838;
      dword_4E370 = 315828838;
    }
  }
  else
  {
    v6 = -140370733;
    dword_4E370 = -140370733;
    dword_4E36C = -1641562643;
  }
  *(_DWORD *)(dword_21E14 + 134908) = -34502528;
  if ( (int)(v6 ^ 0xBD83EA62) >= -1706749404 )
  {
    *(_DWORD *)(dword_21E20 + 138038) = -2064330986;
    v82 = v148;
    if ( v6 - 393066112 > 1950756006 )
    {
      v6 = 492112836;
      *(_DWORD *)(dword_21E24 + 138074) = 492112836;
      v82 = v148;
    }
  }
  else
  {
    v6 = -1031742175;
    *(_DWORD *)(dword_21E18 + 134954) = -1031742175;
    *(_DWORD *)(dword_21E1C + 134964) = -2064330986;
    v82 = v148;
  }
  dword_4E36C = 1875792669;
  if ( (v6 | 0xC281D952) == -603659053 )
  {
    dword_4E36C = -1641562643;
    if ( (v6 & 0xE6B4CF48) >= 0x58945C7 )
    {
      if ( v148 == -1929671264 )
      {
LABEL_92:
        v16 = v152;
        v111 = (_DWORD *)(dword_21CF4 + 136494);
        *(_DWORD *)(dword_21CEC + 136492) = 35521346;
        v110 = v154;
        v109 = v165;
        if ( (v6 ^ 0x57FF9906) < -739229871 )
          *(_DWORD *)(dword_21CF0 + 136542) = -487149991;
        for ( i = v146;
              ;
              ((void (__fastcall *)(int, _DWORD, int, int *, _DWORD))unk_61E0)(v109, HIDWORD(v110), i, v16, v110) )
        {
          *v16 = ((int (__fastcall *)(int))unk_4E50)(i);
          v163 = ((int (__fastcall *)(int, _DWORD, int, int *, _DWORD))unk_61E0)(v109, HIDWORD(v110), i, v16, v110);
          v113 = *v111 * (*v111 - 387881995);
          v114 = *(_DWORD *)(dword_21CF8 + 136648);
          *v111 = 1468725209;
          if ( (v113 & v114) <= 1639922936 )
            break;
          v114 = 1542489467;
          *(_DWORD *)(dword_21CFC + 136682) = 1542489467;
          if ( (v113 & 1) == 0 )
            break;
          *v16 = ((int (__fastcall *)(int))unk_4E50)(i);
        }
        dword_4E36C = 1875792669;
        if ( (v114 | 0x1255812E) == -603659053 )
        {
          dword_4E36C = -1641562643;
          if ( (v114 & 0xE6B4CF48) < 0x58945C7 )
            dword_4E370 = 315828838;
        }
        else
        {
          dword_4E370 = -140370733;
          dword_4E36C = -1641562643;
        }
        goto LABEL_193;
      }
    }
    else
    {
      v6 = 315828838;
      dword_4E370 = 315828838;
      if ( v148 == -1929671264 )
        goto LABEL_92;
    }
  }
  else
  {
    v6 = -140370733;
    dword_4E370 = -140370733;
    dword_4E36C = -1641562643;
    if ( v82 != -1921052023 )
      goto LABEL_92;
  }
LABEL_193:
  *(_DWORD *)(dword_21D00 + 136712) = -50420427;
  ((void (__fastcall *)(int *, _DWORD, int))unk_4EF8)(v150, 0, -575461343);
  *v151 = 0;
  v115 = (*(_DWORD *)(dword_21D00 + 136712) - 1784137433) * *(_DWORD *)(dword_21D00 + 136712);
  v62 = *(_DWORD *)(dword_21D04 + 136776);
  *(_DWORD *)(dword_21D00 + 136712) = 1499363388;
  v162 = 27042;
  if ( (v115 & v62) != -729623077 )
  {
    v62 = 1918829931;
    v117 = (int)v150;
    v116 = v151;
    while ( 1 )
    {
      *(_DWORD *)(dword_21D08 + 136830) = 1918829931;
      if ( (v115 & 1) == 0 )
        break;
      ((void (__fastcall *)(int, _DWORD))unk_4EF8)(v117, 0);
      *v116 = 0;
      ((void (__fastcall *)(int, _DWORD))unk_4EF8)(v117, 0);
      *v116 = 0;
      v115 = (*(_DWORD *)(dword_21D0C + 136886) - 1784137433) * *(_DWORD *)(dword_21D0C + 136886);
      v118 = *(_DWORD *)(dword_21D10 + 136914);
      *(_DWORD *)(dword_21D0C + 136886) = 1499363388;
      if ( (v115 & v118) == -729623077 )
      {
        v62 = v118;
        v162 = 27042;
        goto LABEL_343;
      }
    }
    v162 = 27042;
  }
LABEL_343:
  dword_4E36C = 1875792669;
  if ( (v62 | 0xEB28573C) == -603659053 )
  {
    dword_4E36C = -1641562643;
    if ( (v62 & 0xE6B4CF48) >= 0x58945C7 )
      goto LABEL_128;
LABEL_327:
    v62 = 315828838;
    dword_4E370 = 315828838;
    goto LABEL_128;
  }
LABEL_325:
  v62 = -140370733;
  dword_4E370 = -140370733;
  dword_4E36C = -1641562643;
LABEL_128:
  while ( 1 )
  {
    dword_4E36C = -687420208;
    if ( v62 + 671770518 <= 1741034130 )
    {
      v126 = *v151;
      *(_DWORD *)(dword_21D84 + 137752) = 28038197;
      v59 = v126 < 10;
      v61 = 871314108;
      if ( v59 )
        v61 = 573800548;
      if ( (v62 | 0x56ED6BD0) < -397668925 )
      {
        v62 = -1509388089;
        *(_DWORD *)(dword_21D88 + 137808) = -1509388089;
      }
    }
    else
    {
      v62 = 1826644744;
      dword_4E370 = 1826644744;
      v63 = *v151;
      dword_4E36C = 28038197;
      v59 = v63 < 10;
      v61 = 871314108;
      if ( v59 )
        v61 = 573800548;
    }
    dword_4E36C = 1875792669;
    if ( (v62 | 0x91C95C02) != -603659053 )
      break;
    dword_4E36C = -1641562643;
    if ( (v62 & 0xE6B4CF48) >= 0x58945C7 )
    {
      if ( v61 != 573800548 )
        goto LABEL_111;
      v13 = v162;
    }
    else
    {
      v62 = 315828838;
      dword_4E370 = 315828838;
      if ( v61 != 573800548 )
        goto LABEL_111;
      v13 = v162;
    }
LABEL_184:
    *(_DWORD *)(dword_21D98 + 136402) = 1591205657;
    *(_DWORD *)(dword_21D98 + 136402) = 619201045;
    v162 = v13 + 1;
    if ( v62 - 953976422 < -324175816 )
    {
      v62 = -1880630042;
      *(_DWORD *)(dword_21D9C + 136466) = -1880630042;
    }
    dword_4E36C = 1875792669;
    if ( (v62 | 0xE30E0422) == -603659053 )
    {
      dword_4E36C = -1641562643;
      if ( (v62 & 0xE6B4CF48) < 0x58945C7 )
      {
        v62 = 315828838;
        dword_4E370 = 315828838;
      }
    }
    else
    {
      v62 = -140370733;
      dword_4E370 = -140370733;
      dword_4E36C = -1641562643;
    }
    dword_4E36C = 1891865809;
    if ( 877033118 * v62 <= -101129598 )
    {
      ++*v151;
      *(_DWORD *)(dword_21D18 + 137846) = 937078617;
      if ( (v62 & 0x4E48D73Cu) <= 0x1928A923 )
        goto LABEL_328;
    }
    else
    {
      dword_4E370 = 1488301631;
      ++*v151;
      dword_4E36C = 937078617;
    }
    v62 = 1777103882;
    *(_DWORD *)(dword_21D14 + 137882) = 1777103882;
LABEL_328:
    dword_4E36C = 1875792669;
    if ( (v62 | 0xEC606DAE) != -603659053 )
      goto LABEL_325;
    dword_4E36C = -1641562643;
    if ( (v62 & 0xE6B4CF48) < 0x58945C7 )
      goto LABEL_327;
  }
  v62 = -140370733;
  dword_4E370 = -140370733;
  dword_4E36C = -1641562643;
  if ( v61 == 573800548 )
  {
    v13 = v162;
    goto LABEL_184;
  }
LABEL_111:
  dword_4E36C = 759976047;
  if ( v62 != 851941534 )
    dword_4E370 = 509778333;
  *(_DWORD *)(dword_21E00 + 137562) = 1194106587;
  *(_DWORD *)(dword_21E10 + 138160) = 886845745;
  v162 -= 10;
  *(_DWORD *)(dword_21E0C + 138216) = -1066379817;
  dword_4E370 = -140370733;
  dword_4E36C = -1641562643;
  if ( v147 != 1990069835 )
  {
    v14 = -160805588;
    dword_4E36C = -1171718036;
    dword_4E36C = 166977305;
    if ( v163 )
      v14 = 1990069835;
    v34 = -140370733;
    dword_4E370 = -140370733;
    dword_4E36C = -1641562643;
    if ( v14 == -160805588 )
      goto LABEL_355;
  }
  dword_4E36C = -829601891;
  v37 = HIDWORD(v154);
  v39 = v154;
  v38 = (_DWORD *)HIDWORD(v165);
  v36 = v165;
  v40 = v158;
  v41 = v159;
  v42 = v160;
  while ( 1 )
  {
    *v38 = 0;
    v52 = v36;
    v53 = v37;
    *v42 = ((int (*)(void))dword_24F38[0])();
    v54 = v39;
    v55 = ((int (__fastcall *)(int))dword_25028[0])(v39);
    *v166 = v55;
    *v41 = 0;
    v41[1] = 0;
    v56 = ((int (__fastcall *)(unsigned int))unk_19D60)(v156);
    ((void (__fastcall *)(int *, int, int, int))unk_4EA4)(v41, 8, v56, v55);
    ((void (__fastcall *)(int *, _DWORD))unk_4EF8)(v40, 0);
    v49 = dword_4E36C;
    v51 = dword_4E370;
    v50 = dword_4E36C - 1;
    v48 = *v40;
    v57 = dword_4E370 - (dword_4E36C + 283368959) * dword_4E36C;
    dword_4E36C = -1352289452;
    if ( v57 <= -1837385838 )
      break;
    v51 = -2142450653;
    dword_4E370 = -2142450653;
    if ( ((v49 * v50) & 1) == 0 )
      break;
    v43 = v54;
    *(_DWORD *)HIDWORD(v165) = 0;
    v44 = ((int (__fastcall *)(int, int, int, _DWORD))dword_24F38[0])(v52, v53, v54, 0);
    v42 = v160;
    *v160 = v44;
    v45 = ((int (__fastcall *)(int))dword_25028[0])(v43);
    v41 = v159;
    *v166 = v45;
    *v41 = 0;
    v41[1] = 0;
    v46 = ((int (__fastcall *)(unsigned int))unk_19D60)(v155);
    v47 = v45;
    v39 = v43;
    ((void (__fastcall *)(int *, int, int, int))unk_4EA4)(v41, 8, v46, v47);
    v40 = v158;
    ((void (__fastcall *)(int *, _DWORD))unk_4EF8)(v158, 0);
    v38 = (_DWORD *)HIDWORD(v165);
    v36 = v165;
    v37 = v53;
  }
  v26 = v51;
  v59 = v48 - *v150 <= 4;
  v58 = -831112583;
  if ( !v59 )
    v58 = -15788703;
  v60 = (int)v170;
  dword_4E36C = 1875792669;
  if ( (v51 | 0x196A434) == -603659053 )
  {
    dword_4E36C = -1641562643;
    if ( (v51 & 0xE6B4CF48) >= 0x58945C7 )
    {
      if ( v58 != -831112583 )
        goto LABEL_213;
    }
    else
    {
      v26 = 315828838;
      dword_4E370 = 315828838;
      if ( v58 != -831112583 )
        goto LABEL_213;
    }
LABEL_57:
    v15 = -1593091235;
  }
  else
  {
    v26 = -140370733;
    dword_4E370 = -140370733;
    dword_4E36C = -1641562643;
    if ( v58 != -15788703 )
      goto LABEL_57;
LABEL_213:
    *(_DWORD *)(dword_21D68 + 137644) = 865462117;
    *v166 = v162;
    *v152 -= 17;
    *(_DWORD *)(dword_21D68 + 137644) = 1554169782;
    v162 = 23946;
    if ( v26 == 91889740 )
    {
      v26 = 1700474179;
      *(_DWORD *)(dword_21D6C + 137716) = 1700474179;
      v162 = 23946;
    }
    dword_4E36C = 1875792669;
    if ( (v26 | 0x5308BF2) == -603659053 )
    {
      dword_4E36C = -1641562643;
      if ( (v26 & 0xE6B4CF48) >= 0x58945C7 )
        goto LABEL_57;
      v26 = 315828838;
      dword_4E370 = 315828838;
      v15 = -1593091235;
    }
    else
    {
      v26 = -140370733;
      dword_4E370 = -140370733;
      dword_4E36C = -1641562643;
      v15 = -1593091235;
    }
  }
  *(_DWORD *)(dword_21D38 + 134770) = 1187257021;
  if ( (int)(v26 & 0xE329A97C) < -372787784 )
  {
    *(_DWORD *)(dword_21D3C + 134816) = -2118913450;
    v81 = *v160 == 0;
    *(_DWORD *)(dword_21D40 + 134830) = 497966879;
    if ( !v81 )
      v15 = 815005161;
    goto LABEL_227;
  }
  v81 = *v160 == 0;
  *(_DWORD *)(dword_21D48 + 137960) = 497966879;
  if ( !v81 )
    v15 = 815005161;
  v127 = v15;
  if ( v26 + 447150856 < -1529356886 )
  {
LABEL_227:
    v26 = -50741465;
    *(_DWORD *)(dword_21D44 + 138016) = -50741465;
    v127 = v15;
  }
  dword_4E36C = 1875792669;
  if ( (v26 | 0x93DF0D5C) != -603659053 )
  {
    v26 = -140370733;
    dword_4E370 = -140370733;
    dword_4E36C = -1641562643;
    if ( v127 == 815005161 )
      goto LABEL_163;
    goto LABEL_114;
  }
  dword_4E36C = -1641562643;
  if ( (v26 & 0xE6B4CF48) >= 0x58945C7 )
  {
    if ( v127 != 815005161 )
      goto LABEL_114;
LABEL_163:
    v92 = 1;
    v93 = 6;
    *(_DWORD *)(dword_21DA0 + 135266) = -770985868;
    v90 = (int)v159;
    v94 = v153;
    v89 = *v160;
    v91 = (int)v157;
    while ( 1 )
    {
      *v94 = 0;
      ((void (__fastcall *)(int, int))unk_5174)(v60, 28);
      *(_QWORD *)(v91 + 8) = *(_QWORD *)&v92;
      *(_DWORD *)v91 = 1;
      v100 = ((int (__fastcall *)(int, int, int, int *))unk_5180)(v89, v90, v91, v94);
      *v169 = v100;
      ((void (__fastcall *)(int *, int))unk_4EBC)(v168, 255);
      *v167 = 2;
      v98 = *(_DWORD *)(dword_21DA4 + 135716) * (*(_DWORD *)(dword_21DA4 + 135716) + 181677165);
      v99 = *(_DWORD *)(dword_21DA8 + 135730);
      *(_DWORD *)(dword_21DA4 + 135716) = 409130823;
      if ( (unsigned int)(v98 * v99) >= 0x87D5629 )
        break;
      v99 = -1846612664;
      *(_DWORD *)(dword_21DAC + 135770) = -1846612664;
      if ( (v98 & 1) == 0 )
        break;
      v95 = (int)v170;
      *v94 = 0;
      ((void (__fastcall *)(int, int))unk_5174)(v95, 28);
      v91 = (int)v157;
      v92 = 1;
      v93 = 6;
      v96 = v157;
      v157[2] = 1;
      v96[3] = 6;
      *v96 = 1;
      v97 = ((int (__fastcall *)(int, int, int *, int *))unk_5180)(v89, v90, v96, v94);
      *v169 = v97;
      ((void (__fastcall *)(int *, int))unk_4EBC)(v168, 255);
      v60 = v95;
      *v167 = 2;
    }
    v101 = -992228721;
    v86 = v99;
    if ( v100 )
      v101 = 805621615;
    dword_4E36C = 1875792669;
    if ( (v99 | 0xE8F2D614) == -603659053 )
    {
      dword_4E36C = -1641562643;
      if ( (v99 & 0xE6B4CF48) >= 0x58945C7 )
      {
        if ( v101 != -992228721 )
        {
LABEL_19:
          v17 = 64144756;
          goto LABEL_132;
        }
      }
      else
      {
        v86 = 315828838;
        dword_4E370 = 315828838;
        if ( v101 != -992228721 )
          goto LABEL_19;
      }
    }
    else
    {
      v86 = -140370733;
      dword_4E370 = -140370733;
      dword_4E36C = -1641562643;
      if ( v101 == 805621615 )
      {
        v17 = 64144756;
LABEL_132:
        dword_4E36C = 1307341939;
        if ( (v86 ^ 0x55E93F2) > -1909859297 )
          dword_4E370 = -96377119;
        v66 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, int))dword_24F38[0])(v165, HIDWORD(v154), v154, 1);
        v64 = ((int (*)(void))unk_515C)();
        v67 = v149;
        v68 = dword_4E370;
        v65 = dword_4E36C;
        *v149 = v64;
        dword_4E36C = 500319267;
        if ( (unsigned int)(v68 - (v65 + 1695602089) * v65) > 0x3BEF58BA )
        {
          v69 = v65 * (v65 - 87);
          while ( 1 )
          {
            dword_4E370 = -564927124;
            if ( (v69 & 1) == 0 )
              break;
            v70 = v165;
            v71 = v154;
            v72 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, int))dword_24F38[0])(v165, HIDWORD(v154), v154, 1);
            *v67 = ((int (__fastcall *)(int))unk_515C)(v72);
            v66 = ((int (__fastcall *)(int, _DWORD, _DWORD, int))dword_24F38[0])(v70, HIDWORD(v71), v71, 1);
            v64 = ((int (*)(void))unk_515C)();
            *v67 = v64;
            v68 = dword_4E370;
            v73 = dword_4E36C;
            dword_4E36C = 500319267;
            v74 = dword_4E370 - (v73 + 1695602089) * v73;
            v69 = v73 * (v73 - 87);
            if ( v74 <= 0x3BEF58BA )
              goto LABEL_236;
          }
          v68 = -564927124;
        }
LABEL_236:
        if ( v64 )
          v17 = 1166857865;
        *(_DWORD *)HIDWORD(v165) = 1;
        *v160 = v66;
        dword_4E36C = 1875792669;
        if ( (v68 | 0xF3366D78) == -603659053 )
        {
          dword_4E36C = -1641562643;
          if ( (v68 & 0xE6B4CF48) >= 0x58945C7 )
          {
            if ( v17 != 1166857865 )
              goto LABEL_179;
          }
          else
          {
            v68 = 315828838;
            dword_4E370 = 315828838;
            if ( v17 != 1166857865 )
              goto LABEL_179;
          }
        }
        else
        {
          v68 = -140370733;
          dword_4E370 = -140370733;
          dword_4E36C = -1641562643;
          if ( v17 != 1166857865 )
            goto LABEL_179;
        }
        dword_4E36C = 2009363042;
        if ( (unsigned int)(v68 - 1781497546) > 0xFC894D65 )
          dword_4E370 = 555745363;
        v76 = (int)v168;
        v77 = *v149;
        ((void (__fastcall *)(_DWORD, _DWORD, int *, int))unk_5168)(
          *(_DWORD *)(*v149 + 8),
          **(_DWORD **)(*v149 + 16),
          v168,
          255);
        v68 = dword_4E370;
        v75 = dword_4E36C;
        dword_4E36C = 580831414;
        if ( dword_4E370 - (v75 - 751962073) * v75 != 817420613 )
        {
          v78 = v75 * (v75 + 39);
          while ( 1 )
          {
            dword_4E370 = 1915236382;
            if ( (v78 & 1) == 0 )
              break;
            ((void (__fastcall *)(_DWORD, _DWORD, int, int))unk_5168)(
              *(_DWORD *)(v77 + 8),
              **(_DWORD **)(v77 + 16),
              v76,
              255);
            ((void (__fastcall *)(_DWORD, _DWORD, int, int))unk_5168)(
              *(_DWORD *)(v77 + 8),
              **(_DWORD **)(v77 + 16),
              v76,
              255);
            v68 = dword_4E370;
            v79 = dword_4E36C;
            dword_4E36C = 580831414;
            v80 = dword_4E370 - (v79 - 751962073) * v79;
            v78 = v79 * (v79 + 39);
            if ( v80 == 817420613 )
              goto LABEL_240;
          }
          v68 = 1915236382;
        }
LABEL_240:
        *v167 = 2;
        *v169 = 0;
        dword_4E36C = 1875792669;
        if ( (v68 | 0xBD2C84F2) == -603659053 )
        {
          dword_4E36C = -1641562643;
          if ( (v68 & 0xE6B4CF48) < 0x58945C7 )
          {
            v68 = 315828838;
            dword_4E370 = 315828838;
          }
        }
        else
        {
          v68 = -140370733;
          dword_4E370 = -140370733;
          dword_4E36C = -1641562643;
        }
LABEL_179:
        *(_DWORD *)(dword_21D70 + 136244) = -611108991;
        if ( (unsigned int)(v68 - 519164732) >= 0x84FFFC9F )
        {
          *(_DWORD *)(dword_21D80 + 138112) = 2134364837;
          if ( (unsigned int)(v68 - 1629768504) >= 0xE1881A18 )
            goto LABEL_293;
        }
        else
        {
          *(_DWORD *)(dword_21D74 + 136288) = -1817076950;
          *(_DWORD *)(dword_21D78 + 136296) = 2134364837;
        }
        v68 = 1311870957;
        *(_DWORD *)(dword_21D7C + 138146) = 1311870957;
LABEL_293:
        dword_4E36C = 1875792669;
        if ( (v68 | 0x60555F92) == -603659053 )
        {
          dword_4E36C = -1641562643;
          if ( (v68 & 0xE6B4CF48) < 0x58945C7 )
            goto LABEL_252;
          goto LABEL_32;
        }
        goto LABEL_250;
      }
    }
    v18 = 269528317;
    *(_DWORD *)(dword_21D2C + 137464) = -2044025843;
    if ( (unsigned int)(v86 + 318848056) < 0xB2BC8E11 )
    {
      v86 = 2069788726;
      *(_DWORD *)(dword_21D30 + 137506) = 2069788726;
    }
    if ( !*v169 )
      v18 = -725832130;
    *(_DWORD *)(dword_21D34 + 137534) = -1437508205;
    dword_4E36C = 1875792669;
    if ( (v86 | 0xA8863248) == -603659053 )
    {
      dword_4E36C = -1641562643;
      if ( (v86 & 0xE6B4CF48) >= 0x58945C7 )
      {
        if ( v18 != -725832130 )
          goto LABEL_181;
      }
      else
      {
        v86 = 315828838;
        dword_4E370 = 315828838;
        if ( v18 != -725832130 )
          goto LABEL_181;
      }
    }
    else
    {
      v86 = -140370733;
      dword_4E370 = -140370733;
      dword_4E36C = -1641562643;
      if ( v18 != -725832130 )
        goto LABEL_181;
    }
    *(_DWORD *)(dword_21D4C + 135026) = 1561742993;
    v85 = (int)v168;
    v84 = *(_DWORD *)(*v153 + 4);
    ((void (__fastcall *)(int, int, int *, int))unk_5168)(v84, *(_DWORD *)(*v153 + 24) + 4, v168, 255);
    v83 = *(_DWORD *)(dword_21D4C + 135026) * (*(_DWORD *)(dword_21D4C + 135026) + 2114283701);
    v86 = *(_DWORD *)(dword_21D50 + 135098);
    *(_DWORD *)(dword_21D4C + 135026) = 1551985527;
    if ( v83 * v86 > 377945119 )
    {
      while ( 1 )
      {
        *(_DWORD *)(dword_21D54 + 135134) = -1562678284;
        if ( (v83 & 1) == 0 )
          break;
        v87 = (int)v153;
        ((void (__fastcall *)(_DWORD, int, int, int))unk_5168)(
          *(_DWORD *)(*v153 + 4),
          *(_DWORD *)(*v153 + 24) + 4,
          v85,
          255);
        v88 = *(_DWORD *)v87;
        v84 = *(_DWORD *)(*(_DWORD *)v87 + 4);
        ((void (__fastcall *)(int, int, int, int))unk_5168)(v84, *(_DWORD *)(v88 + 24) + 4, v85, 255);
        v83 = *(_DWORD *)(dword_21D58 + 135204) * (*(_DWORD *)(dword_21D58 + 135204) + 2114283701);
        v86 = *(_DWORD *)(dword_21D5C + 135220);
        *(_DWORD *)(dword_21D58 + 135204) = 1551985527;
        if ( v83 * v86 <= 377945119 )
          goto LABEL_242;
      }
      v86 = -1562678284;
    }
LABEL_242:
    *v167 = v84;
    dword_4E36C = 1875792669;
    if ( (v86 | 0x7AE1D6A4) == -603659053 )
    {
      dword_4E36C = -1641562643;
      if ( (v86 & 0xE6B4CF48) < 0x58945C7 )
      {
        v86 = 315828838;
        dword_4E370 = 315828838;
      }
    }
    else
    {
      v86 = -140370733;
      dword_4E370 = -140370733;
      dword_4E36C = -1641562643;
    }
LABEL_181:
    *(_DWORD *)(dword_21D8C + 136320) = -1724403750;
    if ( (v86 & 0x645399EEu) > 0xECA4DBC )
    {
      v86 = 1992915921;
      *(_DWORD *)(dword_21D90 + 136364) = 1992915921;
    }
    *(_DWORD *)(dword_21D94 + 136374) = 483813196;
    dword_4E36C = 1875792669;
    if ( (v86 | 0x85D7330C) == -603659053 )
    {
      dword_4E36C = -1641562643;
      if ( (v86 & 0xE6B4CF48) < 0x58945C7 )
      {
LABEL_252:
        dword_4E370 = 315828838;
        v12 = -575461343;
LABEL_198:
        *(_DWORD *)(dword_21DD4 + 137068) = -1781966475;
        *(_DWORD *)(dword_21DD8 + 137090) = -1339910734;
        if ( !*v169 )
          v12 = 1534326028;
        *(_DWORD *)(dword_21DD4 + 137068) = -2022707374;
        dword_4E370 = -140370733;
        dword_4E36C = -1641562643;
        if ( v12 != 1534326028 )
          goto LABEL_106;
        *(_DWORD *)(dword_21DCC + 136962) = 631303937;
        *(_DWORD *)(dword_21DD0 + 136984) = 1959729629;
        v119 = v164;
        *v164 = v163;
        v119[1] = *v152;
        v119[2] = (int)v168;
        v119[3] = *v166;
        v119[4] = v154;
        v119[5] = *v167;
        v119[6] = *(_DWORD *)HIDWORD(v165);
        *(_DWORD *)(dword_21DCC + 136962) = -558554137;
        dword_4E370 = -140370733;
        dword_4E36C = -1641562643;
        if ( v145 == 898842597 )
        {
          *(_DWORD *)(dword_21DB0 + 137188) = -1274323775;
          *(_DWORD *)(dword_21DC8 + 137216) = 1198230681;
          v161 = ((int (__fastcall *)(_DWORD, _DWORD, int *, int))unk_1F340)(v165, HIDWORD(v154), v164, a6);
          v120 = (*(_DWORD *)(dword_21DB4 + 137254) + 1759213047) * *(_DWORD *)(dword_21DB4 + 137254);
          v121 = *(_DWORD *)(dword_21DB8 + 137272);
          *(_DWORD *)(dword_21DB4 + 137254) = 1553194258;
          if ( (v120 & (unsigned int)v121) > 0xA97E6777 )
          {
            v121 = -71007257;
            v122 = HIDWORD(v154);
            v123 = v165;
            while ( 1 )
            {
              *(_DWORD *)(dword_21DBC + 137342) = -71007257;
              if ( (v120 & 1) == 0 )
                break;
              v125 = (int)v164;
              ((void (__fastcall *)(int, int, int *, int))unk_1F340)(v123, v122, v164, a6);
              v161 = ((int (__fastcall *)(int, int, int, int))unk_1F340)(v123, v122, v125, a6);
              v120 = (*(_DWORD *)(dword_21DC0 + 137402) + 1759213047) * *(_DWORD *)(dword_21DC0 + 137402);
              v124 = *(_DWORD *)(dword_21DC4 + 137418);
              *(_DWORD *)(dword_21DC0 + 137402) = 1553194258;
              if ( (v120 & (unsigned int)v124) <= 0xA97E6777 )
              {
                v121 = v124;
                break;
              }
            }
          }
          dword_4E36C = 1875792669;
          if ( (v121 | 0x7CE74E9E) == -603659053 )
          {
            dword_4E36C = -1641562643;
            if ( (v121 & 0xE6B4CF48) >= 0x58945C7 )
              goto LABEL_201;
            goto LABEL_247;
          }
          goto LABEL_245;
        }
        v19 = 1839819794;
        *(_DWORD *)(dword_21D1C + 135818) = 673678213;
        *(_DWORD *)(dword_21D20 + 135858) = -1238308817;
        v103 = v165;
        v102 = HIDWORD(v154);
        v20 = ((int (__fastcall *)(_DWORD, _DWORD, int *, int))unk_1FB2C)(v165, HIDWORD(v154), v164, a6);
        v21 = *(_DWORD *)(dword_21D24 + 135896) * (*(_DWORD *)(dword_21D24 + 135896) + 278982127);
        v23 = *(_DWORD *)(dword_21D28 + 135918);
        *(_DWORD *)(dword_21D24 + 135896) = 174650404;
        if ( (v21 ^ (unsigned int)v23) < 0x93811651 )
        {
          while ( 1 )
          {
            dword_4E370 = 85739734;
            if ( (v21 & 1) == 0 )
              break;
            v22 = (int)v164;
            ((void (__fastcall *)(int, int, int *, int))unk_1FB2C)(v103, v102, v164, a6);
            v20 = ((int (__fastcall *)(int, int, int, int))unk_1FB2C)(v103, v102, v22, a6);
            v21 = dword_4E36C * (dword_4E36C + 278982127);
            v23 = dword_4E370;
            dword_4E36C = 174650404;
            if ( (v21 ^ (unsigned int)dword_4E370) >= 0x93811651 )
              goto LABEL_99;
          }
          v23 = 85739734;
        }
LABEL_99:
        v161 = v20;
        if ( v20 )
          v19 = 1963523906;
        dword_4E36C = 1875792669;
        if ( (v23 | 0x80939C4) == -603659053 )
        {
          dword_4E36C = -1641562643;
          if ( (v23 & 0xE6B4CF48) >= 0x58945C7 )
          {
            if ( v19 != 1963523906 )
              goto LABEL_141;
          }
          else
          {
            v23 = 315828838;
            dword_4E370 = 315828838;
            if ( v19 != 1963523906 )
              goto LABEL_141;
          }
        }
        else
        {
          v23 = -140370733;
          dword_4E370 = -140370733;
          dword_4E36C = -1641562643;
          if ( v19 != 1963523906 )
            goto LABEL_141;
        }
        *(_DWORD *)(dword_21DE4 + 135966) = -1255447665;
        if ( v23 + 770099416 < -416026871 )
          *(_DWORD *)(dword_21DE8 + 136004) = 9035669;
        v161 = ((int (__fastcall *)(_DWORD, _DWORD, int *, int))unk_1F340)(v165, HIDWORD(v154), v164, a6);
        v7 = 337409611;
        v104 = (*(_DWORD *)(dword_21DEC + 136042) + 353288433) * *(_DWORD *)(dword_21DEC + 136042);
        v23 = *(_DWORD *)(dword_21DF0 + 136060);
        *(_DWORD *)(dword_21DEC + 136042) = 337409611;
        if ( v104 * v23 < 183875165 )
        {
          v105 = HIDWORD(v154);
          v6 = -1743082805;
          v106 = v165;
          while ( 1 )
          {
            *(_DWORD *)(dword_21DF4 + 136122) = -1743082805;
            if ( (v104 & 1) == 0 )
              goto LABEL_102;
            v108 = (int)v164;
            ((void (__fastcall *)(int, int, int *, int))unk_1F340)(v106, v105, v164, a6);
            v161 = ((int (__fastcall *)(int, int, int, int))unk_1F340)(v106, v105, v108, a6);
            v104 = (*(_DWORD *)(dword_21DF8 + 136184) + 353288433) * *(_DWORD *)(dword_21DF8 + 136184);
            v107 = *(_DWORD *)(dword_21DFC + 136198);
            *(_DWORD *)(dword_21DF8 + 136184) = 337409611;
            if ( v104 * v107 >= 183875165 )
            {
              v6 = v107;
              goto LABEL_102;
            }
          }
        }
        dword_4E36C = 1875792669;
        if ( (v23 | 0x96D92570) == -603659053 )
        {
          dword_4E36C = -1641562643;
          if ( (v23 & 0xE6B4CF48) < 0x58945C7 )
          {
            v23 = 315828838;
            dword_4E370 = 315828838;
          }
        }
        else
        {
          v23 = -140370733;
          dword_4E370 = -140370733;
          dword_4E36C = -1641562643;
        }
LABEL_141:
        dword_4E36C = 859047921;
        if ( 260987790 * v23 <= -1770303348 )
        {
          *(_DWORD *)(dword_21DDC + 137908) = -1590272804;
          if ( -1063775608 * v23 > 139342876 )
          {
            v23 = 375429014;
            *(_DWORD *)(dword_21DE0 + 137940) = 375429014;
          }
        }
        else
        {
          v23 = 266050522;
          dword_4E370 = 266050522;
          dword_4E36C = -1590272804;
        }
        dword_4E36C = 1875792669;
        if ( (v23 | 0xC03ADD5C) == -603659053 )
        {
          dword_4E36C = -1641562643;
          if ( (v23 & 0xE6B4CF48) >= 0x58945C7 )
            goto LABEL_201;
LABEL_247:
          dword_4E370 = 315828838;
          goto LABEL_201;
        }
LABEL_245:
        dword_4E370 = -140370733;
        dword_4E36C = -1641562643;
LABEL_201:
        *(_DWORD *)(dword_21D60 + 137140) = -2066223326;
        *(_DWORD *)(dword_21D64 + 137160) = -2091068965;
        *(_DWORD *)(dword_21D60 + 137140) = 390134190;
        dword_4E370 = -140370733;
        dword_4E36C = -1641562643;
LABEL_106:
        dword_4E36C = 542264248;
        dword_4E370 = 1739233470;
        ((void (__fastcall *)(int))unk_53E4)(*v153);
        v24 = dword_4E36C;
        v26 = dword_4E370;
        v25 = dword_4E36C - 95;
        v7 = 75543312;
        v27 = dword_4E370 - (dword_4E36C - 304368735) * dword_4E36C;
        dword_4E36C = 75543312;
        if ( v27 > 421626306 )
        {
          v28 = v25 * v24;
          v29 = v153;
          v6 = -1569670714;
          while ( 1 )
          {
            dword_4E370 = -1569670714;
            if ( (v28 & 1) == 0 )
              goto LABEL_102;
            ((void (__fastcall *)(int))unk_53E4)(*v29);
            ((void (__fastcall *)(int))unk_53E4)(*v29);
            v30 = dword_4E36C;
            v31 = dword_4E36C - 304368735;
            dword_4E36C = 75543312;
            v32 = dword_4E370 - v31 * v30;
            v28 = v30 * v31;
            if ( v32 <= 421626306 )
            {
              v6 = dword_4E370;
              goto LABEL_102;
            }
          }
        }
        dword_4E36C = 1875792669;
        if ( (dword_4E370 | 0x39342050) == -603659053 )
        {
          dword_4E36C = -1641562643;
          if ( (dword_4E370 & 0xE6B4CF48) < 0x58945C7 )
          {
            v26 = 315828838;
            dword_4E370 = 315828838;
          }
        }
        else
        {
          v26 = -140370733;
          dword_4E370 = -140370733;
          dword_4E36C = -1641562643;
        }
        goto LABEL_114;
      }
LABEL_32:
      v12 = -575461343;
      goto LABEL_198;
    }
LABEL_250:
    dword_4E370 = -140370733;
    dword_4E36C = -1641562643;
    v12 = -575461343;
    goto LABEL_198;
  }
  v26 = 315828838;
  dword_4E370 = 315828838;
  if ( v127 == 815005161 )
    goto LABEL_163;
LABEL_114:
  dword_4E36C = -980434569;
  if ( (v26 ^ 0xBAF5845A) > 0xC9938200 )
    dword_4E370 = -1117169881;
  ((void (__fastcall *)(int))unk_53EE)(v163);
  v7 = -1645924266;
  v33 = (dword_4E36C + 1268731159) * dword_4E36C;
  v34 = dword_4E370;
  dword_4E36C = -1645924266;
  if ( (v33 | dword_4E370) != 252947944 )
  {
    v6 = -1271234817;
    while ( 1 )
    {
      dword_4E370 = -1271234817;
      if ( (v33 & 1) == 0 )
        goto LABEL_102;
      v35 = v163;
      ((void (__fastcall *)(int))unk_53EE)(v163);
      ((void (__fastcall *)(int))unk_53EE)(v35);
      v33 = (dword_4E36C + 1268731159) * dword_4E36C;
      dword_4E36C = -1645924266;
      if ( (v33 | dword_4E370) == 252947944 )
      {
        v6 = dword_4E370;
        goto LABEL_102;
      }
    }
  }
  dword_4E36C = 1875792669;
  if ( (dword_4E370 | 0xA6648692) == -603659053 )
  {
    dword_4E36C = -1641562643;
    if ( (dword_4E370 & 0xE6B4CF48) < 0x58945C7 )
    {
      v34 = 315828838;
      dword_4E370 = 315828838;
    }
  }
  else
  {
    v34 = -140370733;
    dword_4E370 = -140370733;
    dword_4E36C = -1641562643;
  }
LABEL_355:
  *(_DWORD *)(dword_21CD8 + 138332) = -1905598314;
  if ( v34 - 186502950 < -971531453 )
  {
    v34 = -1608064687;
    *(_DWORD *)(dword_21CDC + 138368) = -1608064687;
  }
  *(_DWORD *)(dword_21CE0 + 138384) = 1940835155;
  if ( (int)(v34 ^ 0x83C76CD2) > -865982838 )
    *(_DWORD *)(dword_21CE4 + 138422) = 54919903;
  result = v161;
  if ( **(_DWORD **)(dword_21CE8 + 138432) != v171 )
    ((void (__fastcall *)(int))unk_4EB0)(v161);
  return result;
}
