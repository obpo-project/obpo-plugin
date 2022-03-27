int __fastcall sub_DD288(int a1)
{
  int v1; // r1
  unsigned int v2; // r7
  unsigned __int8 *v3; // r10
  int v4; // r12
  int v5; // r0
  char v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // t1
  unsigned int v10; // r0
  unsigned int v11; // r3
  unsigned int v12; // r0
  unsigned int v13; // r3
  unsigned int v14; // r0
  unsigned int v15; // r3
  unsigned int v16; // r0
  unsigned int v17; // r3
  unsigned int v18; // r0
  unsigned int v19; // r3
  unsigned int v20; // r0
  unsigned int v21; // r3
  unsigned int v22; // r0
  unsigned int v23; // r3
  unsigned int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r1
  int v36; // r0
  int v37; // r1
  int v38; // r0
  int v39; // r7
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  unsigned int v44; // r7
  unsigned int v45; // r8
  unsigned __int8 *v46; // r10
  int v47; // r9
  char v48; // r1
  int v49; // r9
  int v50; // r1
  int v51; // t1
  bool v52; // zf
  unsigned int v53; // r12
  unsigned int v54; // r0
  unsigned int v55; // r2
  unsigned int v56; // r0
  unsigned int v57; // r2
  unsigned int v58; // r0
  unsigned int v59; // r2
  unsigned int v60; // r0
  unsigned int v61; // r2
  unsigned int v62; // r0
  unsigned int v63; // r2
  unsigned int v64; // r0
  unsigned int v65; // r2
  unsigned int v66; // r0
  unsigned int v67; // r2
  unsigned int v68; // r0
  int v69; // r2
  int v70; // r0
  int v71; // r2
  int v72; // r0
  int v73; // r2
  int v74; // r0
  int v75; // r1
  int v76; // r0
  int v77; // r1
  int v78; // r0
  int v79; // r1
  int v80; // r0
  int v81; // r1
  int v82; // r0
  int v83; // r9
  int v84; // r9
  int v85; // r9
  int v86; // r0
  int result; // r0
  unsigned int v88; // [sp+4Ch] [bp-ACh]
  int v90; // [sp+54h] [bp-A4h]
  unsigned __int8 *v91; // [sp+58h] [bp-A0h]
  int v92; // [sp+58h] [bp-A0h]
  unsigned int v93; // [sp+5Ch] [bp-9Ch]
  int v94; // [sp+5Ch] [bp-9Ch]
  int v95; // [sp+60h] [bp-98h]
  unsigned __int8 *v96; // [sp+60h] [bp-98h]
  unsigned __int8 *v97; // [sp+64h] [bp-94h]
  int v98; // [sp+64h] [bp-94h]
  unsigned int v99; // [sp+68h] [bp-90h]
  unsigned int v100; // [sp+68h] [bp-90h]
  unsigned int v101; // [sp+6Ch] [bp-8Ch]
  unsigned int v102; // [sp+6Ch] [bp-8Ch]
  unsigned __int8 *v103; // [sp+70h] [bp-88h]
  unsigned __int8 *v104; // [sp+70h] [bp-88h]
  unsigned int v105; // [sp+74h] [bp-84h]
  unsigned int v106; // [sp+74h] [bp-84h]
  unsigned int v107; // [sp+78h] [bp-80h]
  unsigned int v108; // [sp+78h] [bp-80h]
  unsigned int v109; // [sp+7Ch] [bp-7Ch]
  unsigned int v110; // [sp+7Ch] [bp-7Ch]
  unsigned int v111; // [sp+80h] [bp-78h]
  int v112; // [sp+80h] [bp-78h]
  unsigned int v113; // [sp+84h] [bp-74h]
  unsigned int v114; // [sp+84h] [bp-74h]
  unsigned int v115; // [sp+98h] [bp-60h]
  unsigned int v116; // [sp+98h] [bp-60h]
  char v117; // [sp+9Fh] [bp-59h]
  int v118; // [sp+BCh] [bp-3Ch]
  int v119; // [sp+D8h] [bp-20h]

  v119 = *(_DWORD *)dword_1AAD04;
  v1 = 1;
  if ( *(_BYTE *)(a1 + 256) )
  {
    v88 = *(_DWORD *)(a1 + 272);
    v90 = *(_DWORD *)(a1 + 268) + *(_DWORD *)(*(_DWORD *)(a1 + 292) + 432);
    do
    {
      v5 = 2114496045;
      if ( ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0 )
        v5 = -2050485626;
    }
    while ( *(int *)dword_1AAD5C >= 10 && v5 == 2114496045 );
    v107 = 0;
    if ( v90 )
    {
      v101 = 0;
      v99 = v88;
      v97 = (unsigned __int8 *)v90;
      while ( v99 )
      {
        v39 = v99;
        if ( v99 >= 0x15B0 )
          v39 = 5552;
        v95 = v39;
        v115 = v99 - v39;
        v91 = v97;
        v2 = v107;
        v93 = v101;
        while ( v95 > 15 )
        {
          v10 = v2 + *v91;
          v11 = v93 + v10;
          v12 = v91[1] + v10;
          v13 = v11 + v12;
          v14 = v91[2] + v12;
          v15 = v13 + v14;
          v16 = v91[3] + v14;
          v17 = v15 + v16;
          v18 = v91[4] + v16;
          v19 = v17 + v18;
          v20 = v91[5] + v18;
          v21 = v19 + v20;
          v22 = v91[6] + v20;
          v23 = v21 + v22;
          v24 = v91[7] + v22;
          v25 = v23 + v24;
          v26 = v91[8] + v24;
          v27 = v25 + v26;
          v28 = v91[9] + v26;
          v29 = v27 + v28;
          v30 = v91[10] + v28;
          v31 = v29 + v30;
          v32 = v91[11] + v30;
          v33 = v31 + v32;
          v34 = v91[12] + v32;
          v35 = v33 + v34;
          v36 = v91[13] + v34;
          v37 = v35 + v36;
          v38 = v91[14] + v36;
          v2 = v91[15] + v38;
          v93 = v37 + v38 + v2;
          v91 += 16;
          v95 -= 16;
        }
        do
        {
          v6 = v95;
          if ( v95 )
            v6 = 1;
          v117 = v6;
          v7 = -1457564345;
          if ( ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0 )
            v7 = -1249106148;
        }
        while ( *(int *)dword_1AAD5C >= 10 && v7 != -1249106148 );
        v3 = v91;
        v109 = v2;
        v113 = v93;
        v4 = v95;
        v103 = v91;
        v111 = v2;
        if ( v117 )
        {
          while ( 1 )
          {
            --v4;
            v9 = *v3++;
            v8 = v9;
            if ( !v4 )
              break;
            v113 += v8 + v109;
            v109 += v8;
          }
          v103 = v3;
          v111 = v8 + v109;
          v105 = v8 + v109 + v113;
        }
        else
        {
          v105 = v93;
        }
        do
        {
          v40 = 1021067256;
          if ( (((*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58) & 1) == 0 )
            v40 = -543848388;
        }
        while ( *(int *)dword_1AAD5C >= 10 && v40 != -543848388 );
        v99 = v115;
        v107 = v111 % 0xFFF1;
        v101 = v105 % 0xFFF1;
        v97 = v103;
      }
      do
      {
        v41 = -225200173;
        if ( ((((unsigned __int8)*(_DWORD *)dword_1AAD58 - 1) * (unsigned __int8)*(_DWORD *)dword_1AAD58) & 1) == 0 )
          v41 = -1490691808;
      }
      while ( *(int *)dword_1AAD5C >= 10 && v41 == -225200173 );
      *(_DWORD *)(a1 + 280) = v107 | (v101 << 16);
      v92 = *(_DWORD *)(a1 + 268) + *(_DWORD *)(*(_DWORD *)(a1 + 292) + 432);
    }
    else
    {
      do
      {
        v42 = 674643066;
        if ( (((*(_DWORD *)dword_1AAD58 - 1) * *(_DWORD *)dword_1AAD58) & 1) == 0 )
          v42 = 2109083448;
      }
      while ( *(int *)dword_1AAD5C >= 10 && v42 != 2109083448 );
      *(_DWORD *)(a1 + 280) = 1;
      v92 = *(_DWORD *)(a1 + 268) + *(_DWORD *)(*(_DWORD *)(a1 + 292) + 432);
    }
    do
    {
      v47 = 2114496045;
      if ( ((((unsigned __int8)**(_DWORD **)(dword_DE7B4 + 908728) - 1)
           * (unsigned __int8)**(_DWORD **)(dword_DE7B4 + 908728)) & 1) == 0 )
        v47 = -2050485626;
    }
    while ( **(int **)(dword_DE7B8 + 908740) >= 10 && v47 != -2050485626 );
    v108 = 0;
    if ( v92 )
    {
      v102 = 0;
      v100 = *(_DWORD *)(a1 + 260);
      v98 = *(_DWORD *)(a1 + 268) + *(_DWORD *)(*(_DWORD *)(a1 + 292) + 432);
      while ( v100 )
      {
        v43 = v100;
        if ( v100 >= 0x15B0 )
          v43 = 5552;
        v116 = v100 - v43;
        v96 = (unsigned __int8 *)v98;
        v45 = v108;
        v44 = v102;
        while ( 1 )
        {
          v118 = v43;
          if ( v43 <= 15 )
            break;
          v54 = v45 + *v96;
          v55 = v44 + v54;
          v56 = v96[1] + v54;
          v57 = v55 + v56;
          v58 = v96[2] + v56;
          v59 = v57 + v58;
          v60 = v96[3] + v58;
          v61 = v59 + v60;
          v62 = v96[4] + v60;
          v63 = v61 + v62;
          v64 = v96[5] + v62;
          v65 = v63 + v64;
          v66 = v96[6] + v64;
          v67 = v65 + v66;
          v68 = v96[7] + v66;
          v69 = v67 + v68;
          v70 = v96[8] + v68;
          v71 = v69 + v70;
          v72 = v96[9] + v70;
          v73 = v71 + v72;
          v74 = v96[10] + v72;
          v75 = v73 + v74;
          v76 = v96[11] + v74;
          v77 = v75 + v76;
          v78 = v96[12] + v76;
          v79 = v77 + v78;
          v80 = v96[13] + v78;
          v81 = v79 + v80;
          v82 = v96[14] + v80;
          v45 = v96[15] + v82;
          v96 += 16;
          v44 = v81 + v82 + v45;
          v43 = v118 - 16;
        }
        do
        {
          v48 = v43;
          v49 = -1457564345;
          if ( v43 )
            v48 = 1;
          if ( ((((unsigned __int8)**(_DWORD **)(dword_DE794 + 908700) - 1)
               * (unsigned __int8)**(_DWORD **)(dword_DE794 + 908700)) & 1) == 0 )
            v49 = -1249106148;
        }
        while ( **(int **)(dword_DE798 + 908716) >= 10 && v49 == -1457564345 );
        v46 = v96;
        v110 = v45;
        v114 = v44;
        if ( v48 )
        {
          v112 = v43;
          while ( 1 )
          {
            v51 = *v46++;
            v50 = v51;
            v52 = v112-- == 1;
            v104 = v46;
            if ( v52 )
              break;
            v114 += v50 + v110;
            v110 += v50;
          }
          v106 = v50 + v110;
          v53 = v50 + v110 + v114;
        }
        else
        {
          v104 = v96;
          v106 = v45;
          v53 = v44;
        }
        do
        {
          v83 = 1021067256;
          if ( ((((unsigned __int8)**(_DWORD **)(dword_DE784 + 908584) - 1)
               * (unsigned __int8)**(_DWORD **)(dword_DE784 + 908584)) & 1) == 0 )
            v83 = -543848388;
        }
        while ( **(int **)(dword_DE788 + 908612) >= 10 && v83 == 1021067256 );
        v100 = v116;
        v108 = v106 % 0xFFF1;
        v102 = v53 % 0xFFF1;
        v98 = (int)v104;
      }
      do
      {
        v84 = -225200173;
        if ( ((((unsigned __int8)**(_DWORD **)(dword_DE774 + 908644) - 1)
             * (unsigned __int8)**(_DWORD **)(dword_DE774 + 908644)) & 1) == 0 )
          v84 = -1490691808;
      }
      while ( **(int **)(dword_DE778 + 908672) >= 10 && v84 != -1490691808 );
      v94 = v108 | (v102 << 16);
    }
    else
    {
      do
      {
        v85 = 674643066;
        if ( ((((unsigned __int8)**(_DWORD **)(dword_DE7A4 + 908776) - 1)
             * (unsigned __int8)**(_DWORD **)(dword_DE7A4 + 908776)) & 1) == 0 )
          v85 = 2109083448;
      }
      while ( **(int **)(dword_DE7A8 + 908788) >= 10 && v85 == 674643066 );
      v94 = 1;
    }
    v1 = 0;
    *(_DWORD *)(a1 + 288) = v94;
    if ( *(_DWORD *)(a1 + 284) == v94 )
      v1 = 1;
  }
  v86 = **(_DWORD **)(dword_DE7BC + 911192) - v119;
  if ( !v86 )
    return v1;
  ((void (__fastcall *)(int, int))unk_1A3300)(v86, v1);
  return result;
}
