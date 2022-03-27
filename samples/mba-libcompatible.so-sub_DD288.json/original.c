int __fastcall sub_DD288(int a1)
{
  int v1; // r8
  unsigned __int8 *v2; // r10
  int v3; // r12
  int v4; // r1
  int v5; // r9
  int v6; // r7
  int v7; // r0
  int v8; // r2
  int v9; // r2
  int v10; // r0
  int *v11; // r1
  int v12; // r1
  bool v13; // zf
  int v14; // r0
  int v15; // r2
  int v16; // r1
  bool v17; // zf
  char v18; // r0
  int v19; // r1
  int v20; // t1
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r3
  int v27; // r0
  int v28; // r3
  int v29; // r0
  int v30; // r3
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // r3
  int v35; // r0
  int v36; // r3
  int v37; // r0
  int v38; // r1
  int v39; // r0
  int v40; // r1
  int v41; // r0
  int v42; // r1
  int v43; // r0
  int v44; // r1
  int v45; // r0
  int v46; // r1
  int v47; // r0
  int v48; // r1
  int v49; // r0
  int v50; // r7
  char v51; // r2
  int v52; // r0
  int v53; // r4
  int v54; // r3
  bool v55; // zf
  int v56; // r1
  char v57; // r1
  int v58; // r1
  int v59; // r1
  int v60; // t1
  int v61; // r0
  int v62; // r2
  int v63; // r0
  int v64; // r2
  int v65; // r0
  int v66; // r2
  int v67; // r0
  int v68; // r2
  int v69; // r0
  int v70; // r2
  int v71; // r0
  int v72; // r2
  int v73; // r0
  int v74; // r2
  int v75; // r0
  int v76; // r2
  int v77; // r0
  int v78; // r2
  int v79; // r0
  int v80; // r2
  int v81; // r0
  int v82; // r1
  int v83; // r0
  int v84; // r1
  int v85; // r0
  int v86; // r1
  int v87; // r0
  int v88; // r1
  int v89; // r0
  int v90; // r0
  int v92; // [sp+4Ch] [bp-ACh]
  int v94; // [sp+54h] [bp-A4h]
  int v95; // [sp+58h] [bp-A0h]
  int v96; // [sp+5Ch] [bp-9Ch]
  int v97; // [sp+5Ch] [bp-9Ch]
  int v98; // [sp+60h] [bp-98h]
  unsigned __int8 *v99; // [sp+60h] [bp-98h]
  int v100; // [sp+64h] [bp-94h]
  int v101; // [sp+64h] [bp-94h]
  int v102; // [sp+68h] [bp-90h]
  unsigned int v103; // [sp+68h] [bp-90h]
  int v104; // [sp+6Ch] [bp-8Ch]
  unsigned int v105; // [sp+6Ch] [bp-8Ch]
  int v106; // [sp+70h] [bp-88h]
  unsigned __int8 *v107; // [sp+70h] [bp-88h]
  int v108; // [sp+74h] [bp-84h]
  int v109; // [sp+74h] [bp-84h]
  int v110; // [sp+78h] [bp-80h]
  int v111; // [sp+78h] [bp-80h]
  int v112; // [sp+7Ch] [bp-7Ch]
  int v113; // [sp+7Ch] [bp-7Ch]
  int v114; // [sp+80h] [bp-78h]
  int v115; // [sp+80h] [bp-78h]
  int v116; // [sp+84h] [bp-74h]
  int v117; // [sp+84h] [bp-74h]
  bool v118; // [sp+8Ah] [bp-6Eh]
  char v119; // [sp+8Ah] [bp-6Eh]
  int v120; // [sp+8Ch] [bp-6Ch]
  int v121; // [sp+90h] [bp-68h]
  bool v122; // [sp+97h] [bp-61h]
  int v123; // [sp+98h] [bp-60h]
  char v124; // [sp+9Fh] [bp-59h]
  unsigned int v125; // [sp+A0h] [bp-58h]
  unsigned int v126; // [sp+A4h] [bp-54h]
  int v127; // [sp+A8h] [bp-50h]
  int v128; // [sp+ACh] [bp-4Ch]
  int v129; // [sp+B0h] [bp-48h]
  unsigned int v130; // [sp+B4h] [bp-44h]
  int v131; // [sp+B8h] [bp-40h]
  int v132; // [sp+BCh] [bp-3Ch]
  int v133; // [sp+C0h] [bp-38h]
  int v134; // [sp+C4h] [bp-34h]
  unsigned __int8 *v135; // [sp+C8h] [bp-30h]
  unsigned int v136; // [sp+CCh] [bp-2Ch]
  unsigned int v137; // [sp+D0h] [bp-28h]
  int v138; // [sp+D4h] [bp-24h]
  int v139; // [sp+D8h] [bp-20h]

  v139 = *(_DWORD *)dword_1AAD04;
  v4 = 1;
  if ( !*(_BYTE *)(a1 + 256) )
    goto LABEL_174;
  v5 = 769058055;
  v92 = *(_DWORD *)(a1 + 272);
  v94 = *(_DWORD *)(a1 + 268) + *(_DWORD *)(*(_DWORD *)(a1 + 292) + 432);
  v6 = *(_DWORD *)dword_1AAD58 - 1;
  v118 = (((_BYTE)v6 * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
  v108 = dword_1AAD5C;
  v114 = dword_1AAD5C;
  v106 = dword_1AAD5C;
  v116 = dword_1AAD5C;
  v112 = dword_1AAD5C;
  v98 = dword_1AAD5C;
  v96 = dword_1AAD5C;
  v95 = dword_1AAD5C;
  v104 = dword_1AAD5C;
  v110 = dword_1AAD5C;
  v102 = dword_1AAD5C;
  v100 = dword_1AAD5C;
  v7 = 769058055;
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
            v8 = v7;
            if ( v7 > 674643065 )
              break;
            if ( v7 <= -1138577292 )
            {
              if ( v7 > -1382337721 )
              {
                if ( v7 == -1382337720 )
                {
                  v125 = v137 % 0xFFF1;
                  v9 = -543848388;
                  v126 = v136 % 0xFFF1;
                  v10 = (*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58;
                  v11 = (int *)dword_1AAD5C;
                  goto LABEL_74;
                }
                if ( v7 == -1320588127 )
                {
                  v9 = -1490691808;
                  v127 = v129 | (v128 << 16);
                  v12 = *(_DWORD *)dword_1AAD5C;
                  v13 = ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
                  v7 = -225200173;
LABEL_76:
                  if ( v13 )
                    v7 = v9;
                  if ( v12 < 10 )
                    v7 = v9;
                }
                else
                {
                  v2 = v135;
                  v112 = v134;
                  v7 = 1604950902;
                  v116 = v133;
                  v3 = v132;
                  v106 = (int)v135;
                  v114 = v134;
                  if ( v124 )
                    v7 = -1138577291;
                  v108 = v133;
                }
              }
              else if ( v7 == -2050485626 )
              {
                v110 = v120;
                v7 = 1438031219;
                if ( v122 )
                  v7 = 1320453483;
                v104 = v121;
                v102 = v92;
                v100 = v94;
              }
              else if ( v7 == -1490691808 )
              {
                v1 = v127;
LABEL_60:
                v7 = 1341577459;
              }
              else
              {
                v7 = -968020458;
              }
            }
            else if ( v7 <= -968020459 )
            {
              if ( v7 == -1138577291 )
              {
                v7 = 1604950902;
                --v3;
                v20 = *v2++;
                v19 = v20;
                if ( v3 )
                  v7 = -1138577291;
                v106 = (int)v2;
                v114 = v19 + v112;
                v108 = v19 + v112 + v116;
                v116 = v108;
                v112 += v19;
              }
              else if ( v7 == -1065407535 )
              {
                v21 = v134 + *v135;
                v22 = v133 + v21;
                v23 = v135[1] + v21;
                v24 = v22 + v23;
                v25 = v135[2] + v23;
                v26 = v24 + v25;
                v27 = v135[3] + v25;
                v28 = v26 + v27;
                v29 = v135[4] + v27;
                v30 = v28 + v29;
                v31 = v135[5] + v29;
                v32 = v30 + v31;
                v33 = v135[6] + v31;
                v34 = v32 + v33;
                v35 = v135[7] + v33;
                v36 = v34 + v35;
                v37 = v135[8] + v35;
                v38 = v36 + v37;
                v39 = v135[9] + v37;
                v40 = v38 + v39;
                v41 = v135[10] + v39;
                v42 = v40 + v41;
                v43 = v135[11] + v41;
                v44 = v42 + v43;
                v45 = v135[12] + v43;
                v46 = v44 + v45;
                v47 = v135[13] + v45;
                v48 = v46 + v47;
                v49 = v135[14] + v47;
                v6 = v135[15] + v49;
                v96 = v48 + v49 + v6;
                v95 = (int)(v135 + 16);
                v98 = v132 - 16;
                v7 = -1053361115;
              }
              else
              {
                v132 = v98;
                v133 = v96;
                v134 = v6;
                v135 = (unsigned __int8 *)v95;
                v7 = 810070737;
                if ( v98 > 15 )
                  v7 = -1065407535;
              }
            }
            else if ( v7 > -225200174 )
            {
              if ( v7 != -225200173 )
              {
                v120 = 0;
                v121 = 0;
                v122 = v94 == 0;
                v15 = *(_DWORD *)dword_1AAD5C;
                v16 = -2050485626;
                v17 = ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
                v7 = 2114496045;
                goto LABEL_84;
              }
              v7 = -1320588127;
            }
            else if ( v7 == -968020458 )
            {
              v18 = v132;
              if ( v132 )
                v18 = 1;
              v124 = v18;
              v7 = -1457564345;
              if ( ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0 )
                v7 = -1249106148;
              if ( *(int *)dword_1AAD5C < 10 )
                v7 = -1249106148;
            }
            else
            {
              v102 = v123;
              v110 = v125;
              v104 = v126;
              v100 = v138;
              v7 = 1438031219;
            }
          }
          if ( v7 > 1341577458 )
            break;
          if ( v7 > 1021067255 )
          {
            if ( v7 == 1021067256 )
            {
              v7 = -1382337720;
            }
            else
            {
              if ( v7 == 1140332327 )
              {
                v14 = (*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58;
                v15 = *(_DWORD *)dword_1AAD5C;
                v16 = 2109083448;
              }
              else
              {
                v14 = (*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58;
                v15 = *(_DWORD *)dword_1AAD5C;
                v16 = 1140332327;
              }
              v17 = (v14 & 1) == 0;
              v7 = 674643066;
LABEL_84:
              if ( v17 )
                v7 = v16;
              if ( v15 < 10 )
                v7 = v16;
            }
          }
          else
          {
            v7 = 1140332327;
            if ( v8 != 674643066 )
            {
              if ( v8 == 769058055 )
              {
                v7 = 2114496045;
                if ( *(int *)dword_1AAD5C < 10 )
                  v7 = 610470714;
                if ( v118 )
                  v7 = 610470714;
              }
              else
              {
                v7 = v8;
                if ( v8 == 810070737 )
                {
                  v9 = -968020458;
                  v12 = *(_DWORD *)dword_1AAD5C;
                  v13 = ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0;
                  v7 = -1457564345;
                  goto LABEL_76;
                }
              }
            }
          }
        }
        if ( v7 <= 1856451604 )
          break;
        if ( v7 == 1856451605 )
        {
          v50 = v130;
          if ( v130 >= 0x15B0 )
            v50 = 5552;
          v98 = v50;
          v123 = v130 - v50;
          v95 = v131;
          v6 = v129;
          v96 = v128;
          v7 = -1053361115;
        }
        else
        {
          if ( v7 == 2109083448 )
          {
            v1 = 1;
            goto LABEL_60;
          }
          v7 = 610470714;
        }
      }
      if ( v7 <= 1453794007 )
        break;
      if ( v7 != 1453794008 )
      {
        v9 = -1382337720;
        v136 = v108;
        v137 = v114;
        v138 = v106;
        v10 = (*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58;
        v11 = (int *)dword_1AAD5C;
LABEL_74:
        v12 = *v11;
        v13 = (v10 & 1) == 0;
        v7 = 1021067256;
        goto LABEL_76;
      }
      v7 = -225200173;
      if ( ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0 )
        v7 = -1320588127;
      if ( *(int *)dword_1AAD5C < 10 )
        v7 = -1320588127;
    }
    if ( v7 != 1438031219 )
      break;
    v128 = v104;
    v129 = v110;
    v130 = v102;
    v131 = v100;
    v7 = 1453794008;
    if ( v102 )
      v7 = 1856451605;
  }
  *(_DWORD *)(a1 + 280) = v1;
  if ( *(_DWORD *)(a1 + 276) != v1 )
  {
    v4 = 1;
    goto LABEL_174;
  }
  v99 = *(unsigned __int8 **)(*(_DWORD *)(a1 + 292) + 432);
  v51 = 0;
  v105 = (unsigned int)v99;
  if ( ((((unsigned __int8)**(_DWORD **)(dword_DE76C + 908560) - 1)
       * (unsigned __int8)**(_DWORD **)(dword_DE76C + 908560)) & 1) == 0 )
    v51 = 1;
  v119 = v51;
  v111 = *(_DWORD *)(*(_DWORD *)(a1 + 292) + 432);
  v103 = v111;
  v101 = v111;
  v52 = *(_DWORD *)(dword_DE790 + 908860);
  v97 = v52;
  v109 = v52;
  v107 = (unsigned __int8 *)v52;
  v115 = v52;
  v117 = v52;
  v113 = v52;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_106:
      while ( 1 )
      {
        v53 = v5;
        if ( v5 > 674643065 )
          break;
        if ( v5 <= -1138577292 )
        {
          if ( v5 <= -1382337721 )
          {
            if ( v5 == -2050485626 )
            {
              v5 = 1438031219;
              v111 = v120;
              if ( v122 )
                v5 = 1320453483;
              v105 = v121;
              v103 = *(_DWORD *)(a1 + 260);
              v101 = *(_DWORD *)(a1 + 268) + *(_DWORD *)(*(_DWORD *)(a1 + 292) + 432);
              continue;
            }
            if ( v5 != -1490691808 )
            {
              v5 = -968020458;
              continue;
            }
            v58 = v127;
LABEL_162:
            v5 = 1341577459;
            v97 = v58;
            continue;
          }
          if ( v5 == -1382337720 )
          {
            v5 = 1021067256;
            v125 = v137 % 0xFFF1;
            v126 = v136 % 0xFFF1;
            v54 = **(_DWORD **)(dword_DE788 + 908612);
            v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE784 + 908584) - 1)
                  * (unsigned __int8)**(_DWORD **)(dword_DE784 + 908584)) & 1) == 0;
            v56 = -543848388;
          }
          else
          {
            if ( v5 != -1320588127 )
            {
              v5 = 1604950902;
              v2 = v135;
              v113 = v134;
              v117 = v133;
              if ( v124 )
                v5 = -1138577291;
              v115 = v132;
              v107 = v135;
              v109 = v134;
              v3 = v133;
              continue;
            }
            v5 = -225200173;
            v127 = v129 | (v128 << 16);
            v54 = **(_DWORD **)(dword_DE778 + 908672);
            v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE774 + 908644) - 1)
                  * (unsigned __int8)**(_DWORD **)(dword_DE774 + 908644)) & 1) == 0;
            v56 = -1490691808;
          }
LABEL_97:
          if ( v55 )
            v5 = v56;
          if ( v54 < 10 )
            v5 = v56;
          continue;
        }
        if ( v5 > -968020459 )
        {
          if ( v5 > -225200174 )
          {
            if ( v5 == -225200173 )
            {
              v5 = -1320588127;
              continue;
            }
            v5 = 2114496045;
            v120 = 0;
            v121 = 0;
            v122 = *(_DWORD *)(a1 + 268) + *(_DWORD *)(*(_DWORD *)(a1 + 292) + 432) == 0;
            v54 = **(_DWORD **)(dword_DE7B8 + 908740);
            v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE7B4 + 908728) - 1)
                  * (unsigned __int8)**(_DWORD **)(dword_DE7B4 + 908728)) & 1) == 0;
            v56 = -2050485626;
          }
          else
          {
            if ( v5 != -968020458 )
            {
              v5 = 1438031219;
              v103 = v123;
              v111 = v125;
              v105 = v126;
              v101 = v138;
              continue;
            }
            v57 = v132;
            v5 = -1457564345;
            if ( v132 )
              v57 = 1;
            v124 = v57;
            v54 = **(_DWORD **)(dword_DE798 + 908716);
            v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE794 + 908700) - 1)
                  * (unsigned __int8)**(_DWORD **)(dword_DE794 + 908700)) & 1) == 0;
            v56 = -1249106148;
          }
          goto LABEL_97;
        }
        if ( v5 == -1138577291 )
        {
          v5 = 1604950902;
          v60 = *v2++;
          v59 = v60;
          v13 = v115-- == 1;
          v107 = v2;
          if ( !v13 )
            v5 = -1138577291;
          v109 = v59 + v113;
          v117 += v59 + v113;
          v113 += v59;
          v3 = v117;
        }
        else if ( v5 == -1065407535 )
        {
          v5 = -1053361115;
          v61 = v134 + *v135;
          v62 = v133 + v61;
          v63 = v135[1] + v61;
          v64 = v62 + v63;
          v65 = v135[2] + v63;
          v66 = v64 + v65;
          v67 = v135[3] + v65;
          v68 = v66 + v67;
          v69 = v135[4] + v67;
          v70 = v68 + v69;
          v71 = v135[5] + v69;
          v72 = v70 + v71;
          v73 = v135[6] + v71;
          v74 = v72 + v73;
          v75 = v135[7] + v73;
          v76 = v74 + v75;
          v77 = v135[8] + v75;
          v78 = v76 + v77;
          v79 = v135[9] + v77;
          v80 = v78 + v79;
          v81 = v135[10] + v79;
          v82 = v80 + v81;
          v83 = v135[11] + v81;
          v84 = v82 + v83;
          v85 = v135[12] + v83;
          v86 = v84 + v85;
          v87 = v135[13] + v85;
          v88 = v86 + v87;
          v89 = v135[14] + v87;
          v1 = v135[15] + v89;
          v99 = v135 + 16;
          v6 = v88 + v89 + v1;
          v52 = v132 - 16;
        }
        else
        {
          v5 = 810070737;
          v132 = v52;
          v133 = v6;
          v134 = v1;
          v135 = v99;
          if ( v52 > 15 )
            v5 = -1065407535;
        }
      }
      if ( v5 > 1341577458 )
        break;
      if ( v5 > 1021067255 )
      {
        if ( v5 == 1021067256 )
        {
          v5 = -1382337720;
          continue;
        }
        if ( v5 == 1140332327 )
        {
          v5 = 674643066;
          v54 = **(_DWORD **)(dword_DE7A8 + 908788);
          v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE7A4 + 908776) - 1)
                * (unsigned __int8)**(_DWORD **)(dword_DE7A4 + 908776)) & 1) == 0;
          v56 = 2109083448;
        }
        else
        {
          v5 = 674643066;
          v54 = **(_DWORD **)(dword_DE7B0 + 908812);
          v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE7AC + 908800) - 1)
                * (unsigned __int8)**(_DWORD **)(dword_DE7AC + 908800)) & 1) == 0;
          v56 = 1140332327;
        }
        goto LABEL_97;
      }
      v5 = 1140332327;
      if ( v53 == 674643066 )
        continue;
      if ( v53 != 769058055 )
      {
        v5 = v53;
        if ( v53 != 810070737 )
          continue;
        v5 = -1457564345;
        v54 = **(_DWORD **)(dword_DE7A0 + 908764);
        v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE79C + 908752) - 1)
              * (unsigned __int8)**(_DWORD **)(dword_DE79C + 908752)) & 1) == 0;
        v56 = -968020458;
        goto LABEL_97;
      }
      v5 = 2114496045;
      if ( **(int **)(dword_DE770 + 908580) < 10 )
        v5 = 610470714;
      if ( v119 )
        v5 = 610470714;
    }
    if ( v5 <= 1856451604 )
      break;
    if ( v5 != 1856451605 )
    {
      if ( v5 != 2109083448 )
      {
        v5 = 610470714;
        goto LABEL_106;
      }
      v58 = 1;
      goto LABEL_162;
    }
    v52 = v130;
    LOWORD(v5) = -987;
    if ( v130 >= 0x15B0 )
      v52 = 5552;
    HIWORD(v5) = -16074;
    v123 = v130 - v52;
    v99 = (unsigned __int8 *)v131;
    v1 = v129;
    v6 = v128;
  }
  if ( v5 > 1453794007 )
  {
    if ( v5 == 1453794008 )
    {
      v5 = -225200173;
      v54 = **(_DWORD **)(dword_DE780 + 908836);
      v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE77C + 908824) - 1)
            * (unsigned __int8)**(_DWORD **)(dword_DE77C + 908824)) & 1) == 0;
      v56 = -1320588127;
    }
    else
    {
      v5 = 1021067256;
      v137 = v109;
      v138 = (int)v107;
      v136 = v3;
      v54 = **(_DWORD **)(dword_DE790 + 908860);
      v55 = ((((unsigned __int8)**(_DWORD **)(dword_DE78C + 908848) - 1)
            * (unsigned __int8)**(_DWORD **)(dword_DE78C + 908848)) & 1) == 0;
      v56 = -1382337720;
    }
    goto LABEL_97;
  }
  if ( v5 == 1438031219 )
  {
    v5 = 1453794008;
    v128 = v105;
    v129 = v111;
    v130 = v103;
    v131 = v101;
    if ( v103 )
      v5 = 1856451605;
    goto LABEL_106;
  }
  v4 = 0;
  *(_DWORD *)(a1 + 288) = v97;
  if ( *(_DWORD *)(a1 + 284) == v97 )
    v4 = 1;
LABEL_174:
  v90 = **(_DWORD **)(dword_DE7BC + 911192) - v139;
  if ( !v90 )
    return v4;
  ((void (__fastcall *)(int, int))unk_1A3300)(v90, v4);
  JUMPOUT(0xDE76C);
  return v4;
}
