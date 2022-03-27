int __fastcall sub_DBB98(_DWORD *a1, int a2)
{
  int v3; // r7
  int v4; // r9
  unsigned int v5; // r6
  int v6; // r5
  unsigned int i; // r7
  _DWORD *v8; // r0
  int v9; // r1
  bool v10; // zf
  _BYTE *v11; // r0
  int v12; // t1
  bool v13; // zf
  int v14; // r1
  bool v15; // zf
  int v16; // r1
  bool v17; // zf
  int v18; // r7
  _DWORD *v19; // r0
  int v20; // r1
  unsigned __int8 *v21; // r2
  int v22; // r3
  bool v23; // zf
  int v24; // r3
  bool v25; // zf
  int v26; // r10
  int v27; // r12
  char v28; // r0
  int v29; // r1
  bool v30; // zf
  int v31; // r0
  int v32; // r7
  int v33; // r7
  int v34; // r6
  int v35; // r0
  char v36; // r7
  int v37; // r0
  int v38; // r0
  unsigned __int8 *v39; // r6
  int v40; // r7
  int v41; // r0
  int v42; // r6
  int v43; // r0
  int v44; // r6
  int v45; // r0
  int v46; // r6
  int v47; // r0
  int v48; // r6
  int v49; // r0
  int v50; // r6
  int v51; // r0
  int v52; // r6
  int v53; // r0
  int v54; // r6
  int v55; // r0
  int v56; // r1
  int v57; // r0
  int v58; // r1
  int v59; // r0
  int v60; // r1
  int v61; // r0
  int v62; // r1
  int v63; // r0
  int v64; // r1
  int v65; // r0
  int v66; // r1
  int v67; // r0
  int v68; // r6
  int v69; // r1
  bool v70; // zf
  int v71; // r0
  char v72; // r0
  int v73; // r0
  int v74; // r0
  unsigned __int8 *v75; // r6
  int v76; // r0
  int v77; // r2
  int v78; // r0
  int v79; // r2
  int v80; // r0
  int v81; // r2
  int v82; // r0
  int v83; // r2
  int v84; // r0
  int v85; // r2
  int v86; // r0
  int v87; // r2
  int v88; // r0
  int v89; // r2
  int v90; // r0
  int v91; // r2
  int v92; // r0
  int v93; // r2
  int v94; // r0
  int v95; // r2
  int v96; // r0
  int v97; // r1
  int v98; // r0
  int v99; // r1
  int v100; // r0
  int v101; // r1
  int v102; // r0
  int v103; // r1
  int v104; // r0
  int v105; // r0
  int v107; // [sp+50h] [bp-B0h]
  int v108; // [sp+54h] [bp-ACh]
  int v109; // [sp+58h] [bp-A8h]
  unsigned __int8 *v110; // [sp+58h] [bp-A8h]
  int v111; // [sp+5Ch] [bp-A4h]
  unsigned __int8 *v112; // [sp+5Ch] [bp-A4h]
  int v113; // [sp+60h] [bp-A0h]
  unsigned __int8 *v114; // [sp+60h] [bp-A0h]
  int v115; // [sp+64h] [bp-9Ch]
  unsigned __int8 *v116; // [sp+64h] [bp-9Ch]
  int v117; // [sp+68h] [bp-98h]
  int v118; // [sp+68h] [bp-98h]
  int v119; // [sp+6Ch] [bp-94h]
  unsigned int v120; // [sp+6Ch] [bp-94h]
  int v121; // [sp+70h] [bp-90h]
  unsigned int v122; // [sp+70h] [bp-90h]
  int v123; // [sp+74h] [bp-8Ch]
  unsigned __int8 *v124; // [sp+74h] [bp-8Ch]
  int v125; // [sp+78h] [bp-88h]
  unsigned __int8 *v126; // [sp+78h] [bp-88h]
  int v127; // [sp+7Ch] [bp-84h]
  unsigned int v128; // [sp+7Ch] [bp-84h]
  int v129; // [sp+80h] [bp-80h]
  int v130; // [sp+80h] [bp-80h]
  int v131; // [sp+84h] [bp-7Ch]
  unsigned __int8 *v132; // [sp+84h] [bp-7Ch]
  unsigned __int8 *v133; // [sp+88h] [bp-78h]
  unsigned __int8 *v134; // [sp+88h] [bp-78h]
  int v135; // [sp+8Ch] [bp-74h]
  unsigned __int8 *v136; // [sp+8Ch] [bp-74h]
  int v137; // [sp+94h] [bp-6Ch]
  int v138; // [sp+98h] [bp-68h]
  bool v139; // [sp+9Fh] [bp-61h]
  int v140; // [sp+A0h] [bp-60h]
  char v141; // [sp+A7h] [bp-59h]
  unsigned int v142; // [sp+A8h] [bp-58h]
  unsigned int v143; // [sp+ACh] [bp-54h]
  int v144; // [sp+B0h] [bp-50h]
  int v145; // [sp+B4h] [bp-4Ch]
  int v146; // [sp+B8h] [bp-48h]
  unsigned int v147; // [sp+BCh] [bp-44h]
  int v148; // [sp+C0h] [bp-40h]
  int v149; // [sp+C4h] [bp-3Ch]
  int v150; // [sp+C8h] [bp-38h]
  int v151; // [sp+CCh] [bp-34h]
  unsigned __int8 *v152; // [sp+D0h] [bp-30h]
  unsigned int v153; // [sp+D4h] [bp-2Ch]
  unsigned int v154; // [sp+D8h] [bp-28h]
  int v155; // [sp+DCh] [bp-24h]
  int v156; // [sp+E0h] [bp-20h]

  v3 = 0;
  v156 = *(_DWORD *)dword_1AAD04;
  v4 = ((int (__fastcall *)(int, _DWORD, _DWORD))unk_DEEC4)(a2, 0, 0);
  v5 = ((int (*)(void))unk_DF6F4)();
  if ( !v5 )
  {
LABEL_207:
    if ( !v4 )
      goto LABEL_209;
    goto LABEL_208;
  }
  v6 = 0;
  for ( i = 0; i < v5; ++i )
  {
    v8 = (_DWORD *)((int (__fastcall *)(int, unsigned int))unk_DF700)(v4, i);
    v9 = v8[1];
    v10 = v9 == 3;
    if ( v9 == 3 )
      v10 = v8[2] == 0;
    if ( v10 )
    {
      v6 = v8[4] + *(_DWORD *)(*(_DWORD *)v4 + 4);
      v12 = *(unsigned __int8 *)(v6 + *v8);
      v11 = (_BYTE *)(v6 + *v8);
      v13 = v12 == 46;
      if ( v12 == 46 )
        v13 = v11[1] == 115;
      if ( v13 && v11[2] == 104 && v11[3] == 115 )
      {
        v14 = (unsigned __int8)v11[4];
        v15 = v14 == 116;
        if ( v14 == 116 )
          v15 = v11[5] == 114;
        if ( v15 )
        {
          v16 = (unsigned __int8)v11[6];
          v17 = v16 == 116;
          if ( v16 == 116 )
            v17 = v11[7] == 97;
          if ( v17 && v11[8] == 98 )
            goto LABEL_25;
        }
      }
    }
  }
  if ( v6 )
  {
LABEL_25:
    v18 = 0;
    while ( 1 )
    {
      v19 = (_DWORD *)((int (__fastcall *)(int, int))unk_DF700)(v4, v18);
      v20 = *(_DWORD *)v4;
      v21 = (unsigned __int8 *)(v6 + *v19);
      if ( (unsigned int)v21 > *(_DWORD *)(*(_DWORD *)v4 + 4) + *(_DWORD *)(*(_DWORD *)v4 + 8) )
        goto LABEL_40;
      v22 = *v21;
      v23 = v22 == 46;
      if ( v22 == 46 )
        v23 = v21[1] == 116;
      if ( v23 && v21[2] == 101 )
      {
        v24 = v21[3];
        v25 = v24 == 120;
        if ( v24 == 120 )
          v25 = v21[4] == 116;
        if ( v25 )
          break;
      }
      if ( ++v18 >= v5 )
        goto LABEL_40;
    }
    a1[65] = v19[5];
    a1[66] = v19[4];
    a1[67] = v19[3];
LABEL_40:
    v26 = 769058055;
    v27 = 769058055;
    v107 = a1[66] + *(_DWORD *)(v20 + 4);
    v108 = dword_1AAD5C;
    v123 = dword_1AAD5C;
    v129 = dword_1AAD5C;
    v121 = dword_1AAD5C;
    v135 = dword_1AAD5C;
    v131 = dword_1AAD5C;
    v127 = dword_1AAD5C;
    v133 = (unsigned __int8 *)dword_1AAD5C;
    v111 = dword_1AAD5C;
    v113 = dword_1AAD5C;
    v109 = dword_1AAD5C;
    v119 = dword_1AAD5C;
    v125 = dword_1AAD5C;
    v117 = dword_1AAD5C;
    v115 = dword_1AAD5C;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v32 = v27;
            if ( v27 > 674643065 )
              break;
            if ( v27 <= -1138577292 )
            {
              if ( v27 > -1382337721 )
              {
                if ( v27 == -1382337720 )
                {
                  v27 = 1021067256;
                  v142 = v154 % 0xFFF1;
                  v143 = v153 % 0xFFF1;
                  if ( (((*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58) & 1) == 0 )
                    v27 = -543848388;
                  if ( *(int *)dword_1AAD5C < 10 )
                    v27 = -543848388;
                }
                else
                {
                  if ( v27 == -1320588127 )
                  {
                    v27 = -225200173;
                    v144 = v146 | (v145 << 16);
                    v29 = *(_DWORD *)dword_1AAD5C;
                    v30 = ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
                    v31 = -1490691808;
                    goto LABEL_41;
                  }
                  v27 = 1604950902;
                  v133 = v152;
                  v127 = v151;
                  if ( v141 )
                    v27 = -1138577291;
                  v131 = v150;
                  v135 = v149;
                  v121 = (int)v152;
                  v129 = v151;
                  v123 = v150;
                }
              }
              else if ( v27 == -2050485626 )
              {
                v27 = 1438031219;
                v125 = v137;
                if ( v139 )
                  v27 = 1320453483;
                v119 = v138;
                v117 = a1[68];
                v115 = v107;
              }
              else
              {
                if ( v27 == -1490691808 )
                {
                  v37 = v144;
                  goto LABEL_110;
                }
                v27 = -968020458;
              }
            }
            else if ( v27 <= -968020459 )
            {
              if ( v27 == -1138577291 )
              {
                v27 = 1604950902;
                v10 = v135 == 1;
                v39 = v133 + 1;
                v38 = *v133;
                --v135;
                ++v133;
                if ( !v10 )
                  v27 = -1138577291;
                v121 = (int)v39;
                v129 = v38 + v127;
                v123 = v38 + v127 + v131;
                v131 = v123;
                v127 += v38;
              }
              else
              {
                if ( v27 == -1065407535 )
                {
                  v40 = v151 + *v152;
                  v41 = v152[1] + v40;
                  v42 = v150 + v40 + v41;
                  v43 = v152[2] + v41;
                  v44 = v42 + v43;
                  v45 = v152[3] + v43;
                  v46 = v44 + v45;
                  v47 = v152[4] + v45;
                  v48 = v46 + v47;
                  v49 = v152[5] + v47;
                  v50 = v48 + v49;
                  v51 = v152[6] + v49;
                  v52 = v50 + v51;
                  v53 = v152[7] + v51;
                  v54 = v52 + v53;
                  v55 = v152[8] + v53;
                  v56 = v54 + v55;
                  v57 = v152[9] + v55;
                  v58 = v56 + v57;
                  v59 = v152[10] + v57;
                  v60 = v58 + v59;
                  v61 = v152[11] + v59;
                  v62 = v60 + v61;
                  v63 = v152[12] + v61;
                  v64 = v62 + v63;
                  v65 = v152[13] + v63;
                  v66 = v64 + v65;
                  v67 = v152[14] + v65;
                  v113 = v152[15] + v67;
                  v111 = v66 + v67 + v113;
                  v109 = (int)(v152 + 16);
                  v6 = v149 - 16;
                  goto LABEL_108;
                }
                v27 = 810070737;
                v150 = v111;
                v151 = v113;
                v149 = v6;
                v152 = (unsigned __int8 *)v109;
                if ( v6 > 15 )
                  v27 = -1065407535;
              }
            }
            else if ( v27 > -225200174 )
            {
              if ( v27 == -225200173 )
              {
                v27 = -1320588127;
              }
              else
              {
                v36 = 0;
                v137 = 0;
                v27 = 2114496045;
                v138 = 0;
                if ( !v107 )
                  v36 = 1;
                v139 = v36;
                v33 = (*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58;
                v34 = *(_DWORD *)dword_1AAD5C;
                v35 = -2050485626;
LABEL_119:
                if ( (v33 & 1) == 0 )
                  v27 = v35;
                if ( v34 < 10 )
                  v27 = v35;
              }
            }
            else if ( v27 == -968020458 )
            {
              v28 = v149;
              v27 = -1457564345;
              if ( v149 )
                v28 = 1;
              v141 = v28;
              v29 = *(_DWORD *)dword_1AAD5C;
              v30 = ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
              v31 = -1249106148;
LABEL_41:
              if ( v30 )
                v27 = v31;
              if ( v29 < 10 )
                v27 = v31;
            }
            else
            {
              v27 = 1438031219;
              v117 = v140;
              v125 = v142;
              v119 = v143;
              v115 = v155;
            }
          }
          if ( v27 > 1341577458 )
            break;
          if ( v27 > 1021067255 )
          {
            if ( v27 != 1021067256 )
            {
              if ( v27 == 1140332327 )
              {
                v27 = 674643066;
                v33 = (*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58;
                v34 = *(_DWORD *)dword_1AAD5C;
                v35 = 2109083448;
              }
              else
              {
                v27 = 674643066;
                v33 = (*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58;
                v34 = *(_DWORD *)dword_1AAD5C;
                v35 = 1140332327;
              }
              goto LABEL_119;
            }
            v27 = -1382337720;
          }
          else
          {
            v27 = 1140332327;
            if ( v32 != 674643066 )
            {
              if ( v32 == 769058055 )
              {
                v27 = 2114496045;
                if ( *(int *)dword_1AAD5C < 10 )
                  v27 = 610470714;
                if ( ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0 )
                  v27 = 610470714;
              }
              else
              {
                v27 = v32;
                if ( v32 == 810070737 )
                {
                  v27 = -1457564345;
                  v29 = *(_DWORD *)dword_1AAD5C;
                  v30 = ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
                  v31 = -968020458;
                  goto LABEL_41;
                }
              }
            }
          }
        }
        if ( v27 <= 1856451604 )
          break;
        if ( v27 == 1856451605 )
        {
          v6 = v147;
          if ( v147 >= 0x15B0 )
            v6 = 5552;
          v140 = v147 - v6;
          v109 = v148;
          v113 = v146;
          v111 = v145;
LABEL_108:
          v27 = -1053361115;
        }
        else if ( v27 == 2109083448 )
        {
          v37 = 1;
LABEL_110:
          v27 = 1341577459;
          v108 = v37;
        }
        else
        {
          v27 = 610470714;
        }
      }
      if ( v27 > 1453794007 )
      {
        if ( v27 == 1453794008 )
        {
          v27 = -225200173;
          v29 = *(_DWORD *)dword_1AAD5C;
          v30 = ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
          v31 = -1320588127;
        }
        else
        {
          v27 = 1021067256;
          v153 = v123;
          v154 = v129;
          v155 = v121;
          v29 = *(_DWORD *)dword_1AAD5C;
          v30 = ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
          v31 = -1382337720;
        }
        goto LABEL_41;
      }
      if ( v27 != 1438031219 )
        break;
      v27 = 1453794008;
      v145 = v119;
      v146 = v125;
      v147 = v117;
      v148 = v115;
      if ( v117 )
        v27 = 1856451605;
    }
    a1[69] = v108;
    v110 = *(unsigned __int8 **)(dword_DD224 + 903352);
    v126 = v110;
    v124 = v110;
    v136 = v110;
    v132 = v110;
    v130 = (int)v110;
    v134 = v110;
    v114 = v110;
    v116 = v110;
    v112 = v110;
    v122 = (unsigned int)v110;
    v128 = (unsigned int)v110;
    v120 = (unsigned int)v110;
    v118 = (int)v110;
    while ( 1 )
    {
      while ( 1 )
      {
        v68 = v26;
        if ( v26 <= 674643065 )
          break;
        if ( v26 <= 1341577458 )
        {
          if ( v26 > 1021067255 )
          {
            if ( v26 != 1021067256 )
            {
              if ( v26 == 1140332327 )
              {
                v26 = 674643066;
                v69 = **(_DWORD **)(dword_DD23C + 903280);
                v70 = ((((unsigned __int8)**(_DWORD **)(dword_DD238 + 903268) - 1)
                      * (unsigned __int8)**(_DWORD **)(dword_DD238 + 903268)) & 1) == 0;
                v71 = 2109083448;
              }
              else
              {
                v26 = 674643066;
                v69 = **(_DWORD **)(dword_DD244 + 903304);
                v70 = ((((unsigned __int8)**(_DWORD **)(dword_DD240 + 903292) - 1)
                      * (unsigned __int8)**(_DWORD **)(dword_DD240 + 903292)) & 1) == 0;
                v71 = 1140332327;
              }
              goto LABEL_128;
            }
            v26 = -1382337720;
          }
          else
          {
            v26 = 1140332327;
            if ( v68 != 674643066 )
            {
              if ( v68 == 769058055 )
              {
                v26 = 2114496045;
                if ( **(int **)(dword_DD204 + 903104) < 10 )
                  v26 = 610470714;
                if ( ((((unsigned __int8)**(_DWORD **)(dword_DD200 + 903052) - 1)
                     * (unsigned __int8)**(_DWORD **)(dword_DD200 + 903052)) & 1) == 0 )
                  v26 = 610470714;
              }
              else
              {
                v26 = v68;
                if ( v68 == 810070737 )
                {
                  v26 = -1457564345;
                  v69 = **(_DWORD **)(dword_DD234 + 903256);
                  v70 = ((((unsigned __int8)**(_DWORD **)(dword_DD230 + 903244) - 1)
                        * (unsigned __int8)**(_DWORD **)(dword_DD230 + 903244)) & 1) == 0;
                  v71 = -968020458;
                  goto LABEL_128;
                }
              }
            }
          }
        }
        else if ( v26 > 1856451604 )
        {
          if ( v26 == 1856451605 )
          {
            v6 = v147;
            if ( v147 >= 0x15B0 )
              v6 = 5552;
            v140 = v147 - v6;
            v112 = (unsigned __int8 *)v148;
            v116 = (unsigned __int8 *)v146;
            v114 = (unsigned __int8 *)v145;
LABEL_192:
            v26 = -1053361115;
          }
          else if ( v26 == 2109083448 )
          {
            v73 = 1;
LABEL_194:
            v26 = 1341577459;
            v110 = (unsigned __int8 *)v73;
          }
          else
          {
            v26 = 610470714;
          }
        }
        else
        {
          if ( v26 > 1453794007 )
          {
            if ( v26 == 1453794008 )
            {
              v26 = -225200173;
              v69 = **(_DWORD **)(dword_DD214 + 903328);
              v70 = ((((unsigned __int8)**(_DWORD **)(dword_DD210 + 903316) - 1)
                    * (unsigned __int8)**(_DWORD **)(dword_DD210 + 903316)) & 1) == 0;
              v71 = -1320588127;
            }
            else
            {
              v26 = 1021067256;
              v153 = (unsigned int)v126;
              v155 = (int)v124;
              v154 = v27;
              v69 = **(_DWORD **)(dword_DD224 + 903352);
              v70 = ((((unsigned __int8)**(_DWORD **)(dword_DD220 + 903340) - 1)
                    * (unsigned __int8)**(_DWORD **)(dword_DD220 + 903340)) & 1) == 0;
              v71 = -1382337720;
            }
            goto LABEL_128;
          }
          if ( v26 != 1438031219 )
          {
            v3 = 1;
            a1[71] = v110;
            goto LABEL_207;
          }
          v26 = 1453794008;
          v145 = v122;
          v146 = v128;
          v147 = v120;
          v148 = v118;
          if ( v120 )
            v26 = 1856451605;
        }
      }
      if ( v26 <= -1138577292 )
      {
        if ( v26 > -1382337721 )
        {
          if ( v26 == -1382337720 )
          {
            v26 = 1021067256;
            v142 = v154 % 0xFFF1;
            v143 = v153 % 0xFFF1;
            if ( (((**(_DWORD **)(dword_DD218 + 903084) - 1) * **(_DWORD **)(dword_DD218 + 903084)) & 1) == 0 )
              v26 = -543848388;
            if ( **(int **)(dword_DD21C + 903112) < 10 )
              v26 = -543848388;
          }
          else
          {
            if ( v26 == -1320588127 )
            {
              v26 = -225200173;
              v144 = v146 | (v145 << 16);
              v69 = **(_DWORD **)(dword_DD20C + 903180);
              v70 = ((((unsigned __int8)**(_DWORD **)(dword_DD208 + 903144) - 1)
                    * (unsigned __int8)**(_DWORD **)(dword_DD208 + 903144)) & 1) == 0;
              v71 = -1490691808;
              goto LABEL_128;
            }
            v26 = 1604950902;
            v134 = v152;
            v130 = v151;
            if ( v141 )
              v26 = -1138577291;
            v132 = (unsigned __int8 *)v150;
            v136 = (unsigned __int8 *)v149;
            v124 = v152;
            v27 = v151;
            v126 = (unsigned __int8 *)v150;
          }
        }
        else if ( v26 == -2050485626 )
        {
          v26 = 1438031219;
          v128 = v137;
          if ( v139 )
            v26 = 1320453483;
          v122 = v138;
          v120 = a1[65];
          v118 = a1[66] + *(_DWORD *)(*(_DWORD *)v4 + 4);
        }
        else
        {
          if ( v26 == -1490691808 )
          {
            v73 = v144;
            goto LABEL_194;
          }
          v26 = -968020458;
        }
      }
      else if ( v26 <= -968020459 )
      {
        if ( v26 == -1138577291 )
        {
          v26 = 1604950902;
          v10 = v136 == byte_1;
          v75 = v134 + 1;
          v74 = *v134;
          --v136;
          ++v134;
          if ( !v10 )
            v26 = -1138577291;
          v124 = v75;
          v27 = v74 + v130;
          v130 = v27;
          v126 = &v132[v27];
          v132 += v27;
        }
        else
        {
          if ( v26 == -1065407535 )
          {
            v76 = v151 + *v152;
            v77 = v150 + v76;
            v78 = v152[1] + v76;
            v79 = v77 + v78;
            v80 = v152[2] + v78;
            v81 = v79 + v80;
            v82 = v152[3] + v80;
            v83 = v81 + v82;
            v84 = v152[4] + v82;
            v85 = v83 + v84;
            v86 = v152[5] + v84;
            v87 = v85 + v86;
            v88 = v152[6] + v86;
            v89 = v87 + v88;
            v90 = v152[7] + v88;
            v91 = v89 + v90;
            v92 = v152[8] + v90;
            v93 = v91 + v92;
            v94 = v152[9] + v92;
            v95 = v93 + v94;
            v96 = v152[10] + v94;
            v97 = v95 + v96;
            v98 = v152[11] + v96;
            v99 = v97 + v98;
            v100 = v152[12] + v98;
            v101 = v99 + v100;
            v102 = v152[13] + v100;
            v103 = v101 + v102;
            v104 = v152[14] + v102;
            v116 = (unsigned __int8 *)(v152[15] + v104);
            v114 = &v116[v103 + v104];
            v6 = v149 - 16;
            v112 = v152 + 16;
            goto LABEL_192;
          }
          v26 = 810070737;
          v150 = (int)v114;
          v151 = (int)v116;
          v149 = v6;
          v152 = v112;
          if ( v6 > 15 )
            v26 = -1065407535;
        }
      }
      else if ( v26 > -225200174 )
      {
        if ( v26 != -225200173 )
        {
          v26 = 2114496045;
          v137 = 0;
          v138 = 0;
          v139 = a1[66] + *(_DWORD *)(*(_DWORD *)v4 + 4) == 0;
          v69 = **(_DWORD **)(dword_DD24C + 903232);
          v70 = ((((unsigned __int8)**(_DWORD **)(dword_DD248 + 903220) - 1)
                * (unsigned __int8)**(_DWORD **)(dword_DD248 + 903220)) & 1) == 0;
          v71 = -2050485626;
          goto LABEL_128;
        }
        v26 = -1320588127;
      }
      else if ( v26 == -968020458 )
      {
        v72 = v149;
        v26 = -1457564345;
        if ( v149 )
          v72 = 1;
        v141 = v72;
        v69 = **(_DWORD **)(dword_DD22C + 903208);
        v70 = ((((unsigned __int8)**(_DWORD **)(dword_DD228 + 903196) - 1)
              * (unsigned __int8)**(_DWORD **)(dword_DD228 + 903196)) & 1) == 0;
        v71 = -1249106148;
LABEL_128:
        if ( v70 )
          v26 = v71;
        if ( v69 < 10 )
          v26 = v71;
      }
      else
      {
        v26 = 1438031219;
        v120 = v140;
        v128 = v142;
        v122 = v143;
        v118 = v155;
      }
    }
  }
  v3 = 0;
  if ( v4 )
  {
LABEL_208:
    v105 = ((int (__fastcall *)(int))unk_DEE54)(v4);
    ((void (__fastcall *)(int))unk_1A32E8)(v105);
  }
LABEL_209:
  if ( **(_DWORD **)(dword_DD250 + 905708) == v156 )
    return v3;
  ((void (*)(void))unk_1A3300)();
  JUMPOUT(0xDD200);
  return v3;
}
