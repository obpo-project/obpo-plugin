int __fastcall sub_DBB98(_DWORD *a1, int a2)
{
  unsigned int v2; // r6
  int v3; // r7
  int v5; // r9
  int v6; // r5
  unsigned int i; // r7
  bool v8; // zf
  _DWORD *v9; // r0
  int v10; // r1
  bool v11; // zf
  _BYTE *v12; // r0
  int v13; // t1
  bool v14; // zf
  int v15; // r1
  bool v16; // zf
  int v17; // r1
  int v18; // r7
  _DWORD *v19; // r0
  int v20; // r1
  unsigned __int8 *v21; // r2
  bool v22; // zf
  int v23; // r3
  bool v24; // zf
  int v25; // r3
  char v26; // r0
  int v27; // r12
  int v28; // r5
  char v29; // r7
  int v30; // r12
  int v31; // r0
  unsigned __int8 *v32; // r6
  unsigned int v33; // r7
  unsigned int v34; // r0
  unsigned int v35; // r6
  unsigned int v36; // r0
  unsigned int v37; // r6
  unsigned int v38; // r0
  unsigned int v39; // r6
  unsigned int v40; // r0
  unsigned int v41; // r6
  unsigned int v42; // r0
  unsigned int v43; // r6
  unsigned int v44; // r0
  unsigned int v45; // r6
  unsigned int v46; // r0
  int v47; // r6
  int v48; // r0
  int v49; // r1
  int v50; // r0
  int v51; // r1
  int v52; // r0
  int v53; // r1
  int v54; // r0
  int v55; // r1
  int v56; // r0
  int v57; // r1
  int v58; // r0
  int v59; // r1
  int v60; // r0
  int v61; // r12
  int v62; // r12
  int v63; // r12
  int v64; // r5
  int v65; // r10
  char v66; // r0
  int v67; // r10
  int v68; // r0
  unsigned __int8 *v69; // r6
  unsigned int v70; // r12
  unsigned int v71; // r0
  unsigned int v72; // r2
  unsigned int v73; // r0
  unsigned int v74; // r2
  unsigned int v75; // r0
  unsigned int v76; // r2
  unsigned int v77; // r0
  unsigned int v78; // r2
  unsigned int v79; // r0
  unsigned int v80; // r2
  unsigned int v81; // r0
  unsigned int v82; // r2
  unsigned int v83; // r0
  unsigned int v84; // r2
  unsigned int v85; // r0
  int v86; // r2
  int v87; // r0
  int v88; // r2
  int v89; // r0
  int v90; // r2
  int v91; // r0
  int v92; // r1
  int v93; // r0
  int v94; // r1
  int v95; // r0
  int v96; // r1
  int v97; // r0
  int v98; // r1
  int v99; // r0
  int v100; // r10
  int v101; // r10
  int v102; // r10
  int v103; // r0
  int result; // r0
  unsigned __int8 *v105; // [sp+58h] [bp-A8h]
  int v106; // [sp+58h] [bp-A8h]
  unsigned int v107; // [sp+5Ch] [bp-A4h]
  unsigned __int8 *v108; // [sp+5Ch] [bp-A4h]
  unsigned int v109; // [sp+60h] [bp-A0h]
  unsigned int v110; // [sp+60h] [bp-A0h]
  int v111; // [sp+64h] [bp-9Ch]
  unsigned int v112; // [sp+64h] [bp-9Ch]
  unsigned int v113; // [sp+68h] [bp-98h]
  int v114; // [sp+68h] [bp-98h]
  unsigned int v115; // [sp+6Ch] [bp-94h]
  unsigned int v116; // [sp+6Ch] [bp-94h]
  unsigned __int8 *v117; // [sp+70h] [bp-90h]
  unsigned int v118; // [sp+70h] [bp-90h]
  unsigned int v119; // [sp+74h] [bp-8Ch]
  unsigned __int8 *v120; // [sp+74h] [bp-8Ch]
  unsigned int v121; // [sp+78h] [bp-88h]
  unsigned int v122; // [sp+78h] [bp-88h]
  unsigned int v123; // [sp+7Ch] [bp-84h]
  unsigned int v124; // [sp+7Ch] [bp-84h]
  unsigned int v125; // [sp+80h] [bp-80h]
  unsigned int v126; // [sp+80h] [bp-80h]
  unsigned int v127; // [sp+84h] [bp-7Ch]
  unsigned int v128; // [sp+84h] [bp-7Ch]
  unsigned __int8 *v129; // [sp+88h] [bp-78h]
  unsigned __int8 *v130; // [sp+88h] [bp-78h]
  int v131; // [sp+8Ch] [bp-74h]
  int v132; // [sp+8Ch] [bp-74h]
  unsigned int v133; // [sp+A0h] [bp-60h]
  unsigned int v134; // [sp+A0h] [bp-60h]
  int v135; // [sp+E0h] [bp-20h]

  v3 = 0;
  v135 = *(_DWORD *)dword_1AAD04;
  v5 = ((int (__fastcall *)(int, _DWORD, _DWORD))unk_DEEC4)(a2, 0, 0);
  v2 = ((int (*)(void))unk_DF6F4)();
  if ( v2 )
  {
    v6 = 0;
    for ( i = 0; i < v2; ++i )
    {
      v9 = (_DWORD *)((int (__fastcall *)(int, unsigned int))unk_DF700)(v5, i);
      v10 = v9[1];
      v8 = v10 == 3;
      if ( v10 == 3 )
        v8 = v9[2] == 0;
      if ( v8 )
      {
        v6 = v9[4] + *(_DWORD *)(*(_DWORD *)v5 + 4);
        v13 = *(unsigned __int8 *)(v6 + *v9);
        v12 = (_BYTE *)(v6 + *v9);
        v11 = v13 == 46;
        if ( v13 == 46 )
          v11 = v12[1] == 115;
        if ( v11 && v12[2] == 104 && v12[3] == 115 )
        {
          v15 = (unsigned __int8)v12[4];
          v14 = v15 == 116;
          if ( v15 == 116 )
            v14 = v12[5] == 114;
          if ( v14 )
          {
            v17 = (unsigned __int8)v12[6];
            v16 = v17 == 116;
            if ( v17 == 116 )
              v16 = v12[7] == 97;
            if ( v16 && v12[8] == 98 )
              goto LABEL_65;
          }
        }
      }
    }
    if ( v6 )
    {
LABEL_65:
      v18 = 0;
      while ( 1 )
      {
        v19 = (_DWORD *)((int (__fastcall *)(int, int))unk_DF700)(v5, v18);
        v20 = *(_DWORD *)v5;
        v21 = (unsigned __int8 *)(v6 + *v19);
        if ( (unsigned int)v21 > *(_DWORD *)(*(_DWORD *)v5 + 4) + *(_DWORD *)(*(_DWORD *)v5 + 8) )
          break;
        v23 = *v21;
        v22 = v23 == 46;
        if ( v23 == 46 )
          v22 = v21[1] == 116;
        if ( v22 && v21[2] == 101 )
        {
          v25 = v21[3];
          v24 = v25 == 120;
          if ( v25 == 120 )
            v24 = v21[4] == 116;
          if ( v24 )
          {
            a1[65] = v19[5];
            a1[66] = v19[4];
            a1[67] = v19[3];
            goto LABEL_90;
          }
        }
        if ( ++v18 >= v2 )
          goto LABEL_90;
      }
      do
      {
LABEL_90:
        v29 = 0;
        v30 = 2114496045;
        if ( !(a1[66] + *(_DWORD *)(v20 + 4)) )
          v29 = 1;
        if ( (((*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58) & 1) == 0 )
          v30 = -2050485626;
      }
      while ( *(int *)dword_1AAD5C >= 10 && v30 != -2050485626 );
      v121 = 0;
      if ( v29 )
      {
        do
        {
          v63 = 674643066;
          if ( (((*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58) & 1) == 0 )
            v63 = 2109083448;
        }
        while ( *(int *)dword_1AAD5C >= 10 && v63 == 674643066 );
        a1[69] = 1;
      }
      else
      {
        v115 = 0;
        v113 = a1[68];
        v111 = a1[66] + *(_DWORD *)(v20 + 4);
        while ( v113 )
        {
          v28 = v113;
          if ( v113 >= 0x15B0 )
            v28 = 5552;
          v133 = v113 - v28;
          v105 = (unsigned __int8 *)v111;
          v109 = v121;
          v107 = v115;
          while ( v28 > 15 )
          {
            v33 = v109 + *v105;
            v34 = v105[1] + v33;
            v35 = v107 + v33 + v34;
            v36 = v105[2] + v34;
            v37 = v35 + v36;
            v38 = v105[3] + v36;
            v39 = v37 + v38;
            v40 = v105[4] + v38;
            v41 = v39 + v40;
            v42 = v105[5] + v40;
            v43 = v41 + v42;
            v44 = v105[6] + v42;
            v45 = v43 + v44;
            v46 = v105[7] + v44;
            v47 = v45 + v46;
            v48 = v105[8] + v46;
            v49 = v47 + v48;
            v50 = v105[9] + v48;
            v51 = v49 + v50;
            v52 = v105[10] + v50;
            v53 = v51 + v52;
            v54 = v105[11] + v52;
            v55 = v53 + v54;
            v56 = v105[12] + v54;
            v57 = v55 + v56;
            v58 = v105[13] + v56;
            v59 = v57 + v58;
            v60 = v105[14] + v58;
            v109 = v105[15] + v60;
            v107 = v59 + v60 + v109;
            v105 += 16;
            v28 -= 16;
          }
          do
          {
            v26 = v28;
            v27 = -1457564345;
            if ( v28 )
              v26 = 1;
            if ( ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0 )
              v27 = -1249106148;
          }
          while ( *(int *)dword_1AAD5C >= 10 && v27 == -1457564345 );
          v129 = v105;
          v123 = v109;
          if ( v26 )
          {
            v127 = v107;
            v131 = v28;
            while ( 1 )
            {
              v8 = v131 == 1;
              v32 = v129 + 1;
              v31 = *v129;
              --v131;
              ++v129;
              if ( v8 )
                break;
              v127 += v31 + v123;
              v123 += v31;
            }
            v117 = v32;
            v125 = v31 + v123;
            v119 = v31 + v123 + v127;
          }
          else
          {
            v117 = v105;
            v125 = v109;
            v119 = v107;
          }
          do
          {
            v61 = 1021067256;
            if ( (((*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58) & 1) == 0 )
              v61 = -543848388;
          }
          while ( *(int *)dword_1AAD5C >= 10 && v61 != -543848388 );
          v113 = v133;
          v121 = v125 % 0xFFF1;
          v115 = v119 % 0xFFF1;
          v111 = (int)v117;
        }
        do
        {
          v62 = -225200173;
          if ( ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0 )
            v62 = -1490691808;
        }
        while ( *(int *)dword_1AAD5C >= 10 && v62 == -225200173 );
        a1[69] = v121 | (v115 << 16);
      }
      do
      {
        v65 = 2114496045;
        if ( ((((unsigned __int8)**(_DWORD **)(dword_DD248 + 903220) - 1)
             * (unsigned __int8)**(_DWORD **)(dword_DD248 + 903220)) & 1) == 0 )
          v65 = -2050485626;
      }
      while ( **(int **)(dword_DD24C + 903232) >= 10 && v65 != -2050485626 );
      v124 = 0;
      if ( a1[66] + *(_DWORD *)(*(_DWORD *)v5 + 4) )
      {
        v118 = 0;
        v116 = a1[65];
        v114 = a1[66] + *(_DWORD *)(*(_DWORD *)v5 + 4);
        while ( v116 )
        {
          v64 = v116;
          if ( v116 >= 0x15B0 )
            v64 = 5552;
          v134 = v116 - v64;
          v108 = (unsigned __int8 *)v114;
          v112 = v124;
          v110 = v118;
          while ( v64 > 15 )
          {
            v71 = v112 + *v108;
            v72 = v110 + v71;
            v73 = v108[1] + v71;
            v74 = v72 + v73;
            v75 = v108[2] + v73;
            v76 = v74 + v75;
            v77 = v108[3] + v75;
            v78 = v76 + v77;
            v79 = v108[4] + v77;
            v80 = v78 + v79;
            v81 = v108[5] + v79;
            v82 = v80 + v81;
            v83 = v108[6] + v81;
            v84 = v82 + v83;
            v85 = v108[7] + v83;
            v86 = v84 + v85;
            v87 = v108[8] + v85;
            v88 = v86 + v87;
            v89 = v108[9] + v87;
            v90 = v88 + v89;
            v91 = v108[10] + v89;
            v92 = v90 + v91;
            v93 = v108[11] + v91;
            v94 = v92 + v93;
            v95 = v108[12] + v93;
            v96 = v94 + v95;
            v97 = v108[13] + v95;
            v98 = v96 + v97;
            v99 = v108[14] + v97;
            v112 = v108[15] + v99;
            v110 = v98 + v99 + v112;
            v64 -= 16;
            v108 += 16;
          }
          do
          {
            v66 = v64;
            v67 = -1457564345;
            if ( v64 )
              v66 = 1;
            if ( ((((unsigned __int8)**(_DWORD **)(dword_DD228 + 903196) - 1)
                 * (unsigned __int8)**(_DWORD **)(dword_DD228 + 903196)) & 1) == 0 )
              v67 = -1249106148;
          }
          while ( **(int **)(dword_DD22C + 903208) >= 10 && v67 != -1249106148 );
          v130 = v108;
          v126 = v112;
          if ( v66 )
          {
            v128 = v110;
            v132 = v64;
            while ( 1 )
            {
              v8 = v132 == 1;
              v69 = v130 + 1;
              v68 = *v130;
              --v132;
              ++v130;
              if ( v8 )
                break;
              v126 += v68;
              v128 += v126;
            }
            v120 = v69;
            v70 = v68 + v126;
            v122 = v68 + v126 + v128;
          }
          else
          {
            v120 = v108;
            v70 = v112;
            v122 = v110;
          }
          do
          {
            v100 = 1021067256;
            if ( (((**(_DWORD **)(dword_DD218 + 903084) - 1) * **(_DWORD **)(dword_DD218 + 903084)) & 1) == 0 )
              v100 = -543848388;
          }
          while ( **(int **)(dword_DD21C + 903112) >= 10 && v100 != -543848388 );
          v116 = v134;
          v124 = v70 % 0xFFF1;
          v118 = v122 % 0xFFF1;
          v114 = (int)v120;
        }
        do
        {
          v101 = -225200173;
          if ( ((((unsigned __int8)**(_DWORD **)(dword_DD208 + 903144) - 1)
               * (unsigned __int8)**(_DWORD **)(dword_DD208 + 903144)) & 1) == 0 )
            v101 = -1490691808;
        }
        while ( **(int **)(dword_DD20C + 903180) >= 10 && v101 != -1490691808 );
        v106 = v124 | (v118 << 16);
      }
      else
      {
        do
        {
          v102 = 674643066;
          if ( ((((unsigned __int8)**(_DWORD **)(dword_DD238 + 903268) - 1)
               * (unsigned __int8)**(_DWORD **)(dword_DD238 + 903268)) & 1) == 0 )
            v102 = 2109083448;
        }
        while ( **(int **)(dword_DD23C + 903280) >= 10 && v102 != 2109083448 );
        v106 = 1;
      }
      v3 = 1;
      a1[71] = v106;
      goto LABEL_142;
    }
    v3 = 0;
    if ( v5 )
      goto LABEL_143;
  }
  else
  {
LABEL_142:
    if ( v5 )
    {
LABEL_143:
      v103 = ((int (__fastcall *)(int))unk_DEE54)(v5);
      ((void (__fastcall *)(int))unk_1A32E8)(v103);
    }
  }
  if ( **(_DWORD **)(dword_DD250 + 905708) == v135 )
    return v3;
  ((void (*)(void))unk_1A3300)();
  return result;
}
