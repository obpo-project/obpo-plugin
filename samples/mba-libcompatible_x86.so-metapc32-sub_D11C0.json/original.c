bool __cdecl sub_D11C0(_DWORD *a1, int a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // edi
  unsigned int i; // esi
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int j; // esi
  unsigned int v9; // ebx
  _DWORD *v10; // eax
  _BYTE *v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // edx
  bool v17; // zf
  int v18; // esi
  unsigned int v19; // esi
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // ebx
  int v32; // edx
  int v33; // eax
  int v34; // ebx
  int v35; // edx
  int v36; // eax
  int v37; // ebx
  int v38; // edx
  int v39; // eax
  int v40; // ebx
  int v41; // edx
  bool v42; // zf
  int v43; // eax
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // edx
  bool v48; // zf
  int v49; // esi
  unsigned int v50; // esi
  unsigned int v51; // edx
  unsigned int v52; // eax
  unsigned int v53; // edi
  unsigned int v54; // edx
  unsigned int v55; // eax
  unsigned int v56; // edi
  unsigned int v57; // edx
  unsigned int v58; // eax
  unsigned int v59; // edi
  unsigned int v60; // edx
  unsigned int v61; // eax
  int v62; // edi
  int v63; // edx
  int v64; // eax
  int v65; // edi
  int v66; // edx
  int v67; // eax
  int v68; // edi
  int v69; // edx
  int v70; // eax
  int v71; // edi
  int v72; // edx
  bool v73; // zf
  int v74; // eax
  int v75; // eax
  bool result; // al
  int v77; // [esp+14h] [ebp-98h]
  int *v78; // [esp+14h] [ebp-98h]
  unsigned int *v79; // [esp+18h] [ebp-94h]
  int v80; // [esp+1Ch] [ebp-90h]
  int v81; // [esp+1Ch] [ebp-90h]
  unsigned __int8 *v82; // [esp+20h] [ebp-8Ch]
  unsigned __int8 *v83; // [esp+20h] [ebp-8Ch]
  int v84; // [esp+24h] [ebp-88h]
  int v85; // [esp+24h] [ebp-88h]
  int v86; // [esp+28h] [ebp-84h]
  int v87; // [esp+28h] [ebp-84h]
  unsigned int v88; // [esp+2Ch] [ebp-80h]
  unsigned int v89; // [esp+2Ch] [ebp-80h]
  unsigned int v90; // [esp+30h] [ebp-7Ch]
  unsigned int v91; // [esp+30h] [ebp-7Ch]
  unsigned int v92; // [esp+34h] [ebp-78h]
  unsigned int v93; // [esp+34h] [ebp-78h]
  unsigned int v94; // [esp+38h] [ebp-74h]
  int v95; // [esp+38h] [ebp-74h]
  unsigned int v96; // [esp+3Ch] [ebp-70h]
  unsigned int v97; // [esp+3Ch] [ebp-70h]
  unsigned __int8 *v98; // [esp+40h] [ebp-6Ch]
  unsigned __int8 *v99; // [esp+40h] [ebp-6Ch]
  int v100; // [esp+44h] [ebp-68h]
  int v101; // [esp+44h] [ebp-68h]
  int v102; // [esp+48h] [ebp-64h]
  int v103; // [esp+48h] [ebp-64h]
  int v104; // [esp+4Ch] [ebp-60h]
  unsigned int v105; // [esp+58h] [ebp-54h]
  bool v106; // [esp+5Eh] [ebp-4Eh]
  unsigned int v107; // [esp+60h] [ebp-4Ch]
  unsigned int v108; // [esp+64h] [ebp-48h]
  bool v109; // [esp+6Bh] [ebp-41h]
  int v110; // [esp+6Ch] [ebp-40h]
  unsigned int v111; // [esp+70h] [ebp-3Ch]
  bool v112; // [esp+77h] [ebp-35h]
  unsigned int v113; // [esp+78h] [ebp-34h]
  unsigned int v114; // [esp+7Ch] [ebp-30h]
  unsigned int v115; // [esp+80h] [ebp-2Ch]
  unsigned __int8 *v116; // [esp+84h] [ebp-28h]
  int v117; // [esp+88h] [ebp-24h]
  unsigned int v118; // [esp+8Ch] [ebp-20h]
  unsigned int v119; // [esp+90h] [ebp-1Ch]
  unsigned __int8 *v120; // [esp+94h] [ebp-18h]
  unsigned int v121; // [esp+98h] [ebp-14h]

  v121 = __readgsdword(0x14u);
  v2 = ((int (__cdecl *)(int, _DWORD, _DWORD))unk_D3840)(a2, 0, 0);
  v3 = ((int (__cdecl *)(unsigned int))unk_D4070)(v2);
  if ( !v3 )
    goto LABEL_25;
  v77 = 0;
  for ( i = 0; i < v3; ++i )
  {
    v5 = (int *)((int (__cdecl *)(unsigned int, unsigned int))unk_D4080)(v2, i);
    if ( v5[1] == 3 && !v5[2] )
    {
      v6 = *v5;
      v7 = *(_DWORD *)(*(_DWORD *)v2 + 4) + v5[4];
      v77 = v7;
      if ( *(_BYTE *)(v6 + v7) == 46
        && *(_BYTE *)(v7 + v6 + 1) == 115
        && *(_BYTE *)(v7 + v6 + 2) == 104
        && *(_BYTE *)(v7 + v6 + 3) == 115
        && *(_BYTE *)(v7 + v6 + 4) == 116
        && *(_BYTE *)(v7 + v6 + 5) == 114
        && *(_BYTE *)(v7 + v6 + 6) == 116
        && *(_BYTE *)(v7 + v6 + 7) == 97
        && *(_BYTE *)(v7 + v6 + 8) == 98 )
      {
        goto LABEL_16;
      }
    }
  }
  if ( !v77 )
  {
LABEL_25:
    v13 = 0;
    if ( v2 )
      goto LABEL_157;
    goto LABEL_158;
  }
LABEL_16:
  v105 = v2;
  for ( j = 0; j < v3; ++j )
  {
    v9 = (unsigned int)&unk_1F73F4;
    v10 = (_DWORD *)((int (__cdecl *)(unsigned int, unsigned int))unk_D4080)(v2, j);
    v11 = (_BYTE *)(v77 + *v10);
    v12 = *(_DWORD *)v2;
    v2 = *(_DWORD *)(*(_DWORD *)v2 + 8) + *(_DWORD *)(*(_DWORD *)v2 + 4);
    if ( (unsigned int)v11 > v2 )
      break;
    if ( *v11 == 46 && v11[1] == 116 && v11[2] == 101 && v11[3] == 120 && v11[4] == 116 )
    {
      a1[65] = v10[5];
      a1[66] = v10[4];
      a1[67] = v10[3];
      break;
    }
    v2 = v105;
  }
  v104 = *(_DWORD *)(v12 + 4) + a1[66];
  v78 = (int *)*((_DWORD *)&unk_1F73F4 - 114);
  v14 = *v78;
  v79 = (unsigned int *)*((_DWORD *)&unk_1F73F4 - 113);
  v15 = *v79;
  v106 = (((_BYTE)v14 * ((_BYTE)v14 - 1)) & 1) == 0;
  v16 = -1817358981;
  v80 = *v78;
  v96 = *v78;
  v102 = *v78;
  v100 = *v78;
  v94 = *v78;
  v98 = (unsigned __int8 *)*v78;
  v84 = *v78;
  v86 = *v78;
  v82 = (unsigned __int8 *)*v78;
  v92 = *v78;
  v90 = *v78;
LABEL_31:
  v88 = v14;
  if ( v16 > -23427609 )
    goto LABEL_40;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_64:
        while ( v16 <= -686714105 )
        {
          if ( v16 > -1362941447 )
          {
            if ( v16 == -1362941446 )
            {
              v16 = 1011054142;
              goto LABEL_40;
            }
            if ( v16 == -1099396991 )
            {
              v44 = v115;
              if ( v115 >= 0x15B0 )
                v44 = 5552;
              v110 = v44;
              v111 = v115 - v44;
              v17 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
              v16 = -92250407;
              v18 = -686714104;
            }
            else
            {
              v117 = v84;
              v118 = v9;
              v119 = v86;
              v120 = v82;
              v17 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
              v16 = -1362941446;
              v18 = 1011054142;
            }
            goto LABEL_33;
          }
          if ( v16 == -1817358981 )
          {
            v16 = 704417795;
            if ( (int)*v79 < 10 )
              v16 = -23427608;
            if ( v106 )
              v16 = -23427608;
            goto LABEL_40;
          }
          v113 = v15;
          v114 = v92;
          v115 = v90;
          v116 = (unsigned __int8 *)v88;
          v42 = v90 == 0;
          v16 = 812699296;
          v43 = 2027453117;
LABEL_61:
          if ( !v42 )
            v16 = v43;
          if ( v16 > -23427609 )
            goto LABEL_40;
        }
        if ( v16 > -338999545 )
          break;
        if ( v16 == -686714104 )
        {
          v84 = v110;
          v82 = v116;
          v86 = v114;
          v16 = -842207512;
          v9 = v113;
        }
        else
        {
          v16 = -338999544;
          if ( v117 )
            v16 = 60741261;
          v98 = v120;
          v94 = v119;
          v100 = v118;
          v102 = v117;
          v2 = (unsigned int)v120;
          v3 = v119;
          v96 = v118;
          if ( v16 > -23427609 )
          {
            while ( 1 )
            {
LABEL_40:
              while ( v16 > 1011054141 )
              {
                if ( v16 <= 1060189207 )
                {
                  if ( v16 != 1011054142 )
                  {
                    v16 = -1524570201;
                    if ( v109 )
                      v16 = 1781521651;
                    v92 = v107;
                    v15 = v108;
                    v90 = a1[68];
                    v14 = v104;
                    goto LABEL_31;
                  }
                  v112 = v117 > 15;
                  v17 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
                  v16 = -1362941446;
                  v18 = 1060189208;
                }
                else
                {
                  if ( v16 == 1060189208 )
                  {
                    v42 = !v112;
                    v16 = -578601990;
                    v43 = 309134588;
                    goto LABEL_61;
                  }
                  if ( v16 == 1781521651 )
                  {
                    v16 = -49964384;
                    v80 = 1;
                    goto LABEL_64;
                  }
                  v17 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
                  v16 = -92250407;
                  v18 = -1099396991;
                }
LABEL_33:
                if ( v17 )
                  v16 = v18;
                if ( (int)*v79 < 10 )
                  v16 = v18;
                if ( v16 <= -23427609 )
                  goto LABEL_64;
              }
              if ( v16 <= 309134587 )
              {
                if ( v16 == -23427608 )
                {
                  v107 = 0;
                  v108 = 0;
                  v109 = v104 == 0;
                  v17 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
                  v16 = 704417795;
                  v18 = 1054675509;
                  goto LABEL_33;
                }
                v2 = (unsigned int)(v98 + 1);
                v3 = v94 + *v98;
                v19 = v3 + v100;
                v17 = v102-- == 1;
                v16 = -338999544;
                if ( !v17 )
                  v16 = 60741261;
                v100 += v3;
                v96 = v19;
                ++v98;
                v94 = v3;
                if ( v16 <= -23427609 )
                  goto LABEL_64;
              }
              else
              {
                if ( v16 == 309134588 )
                {
                  v20 = *v120 + v119;
                  v21 = v20 + v120[1];
                  v22 = v21 + v20 + v118;
                  v23 = v21 + v120[2];
                  v24 = v23 + v120[3];
                  v25 = v24 + v23 + v22;
                  v26 = v24 + v120[4];
                  v27 = v26 + v120[5];
                  v28 = v27 + v26 + v25;
                  v29 = v27 + v120[6];
                  v30 = v29 + v120[7];
                  v31 = v30 + v29 + v28;
                  v32 = v30 + v120[8];
                  v33 = v32 + v120[9];
                  v34 = v33 + v32 + v31;
                  v35 = v33 + v120[10];
                  v36 = v35 + v120[11];
                  v37 = v36 + v35 + v34;
                  v38 = v36 + v120[12];
                  v39 = v38 + v120[13];
                  v40 = v39 + v38 + v37;
                  v41 = v39 + v120[14];
                  v86 = v41 + v120[15];
                  v9 = v86 + v41 + v40;
                  v82 = v120 + 16;
                  v84 = v117 - 16;
                  v16 = -842207512;
                  goto LABEL_64;
                }
                if ( v16 != 704417795 )
                {
                  v80 = v114 | (v113 << 16);
                  v16 = -49964384;
                  goto LABEL_64;
                }
                v16 = -23427608;
              }
            }
          }
        }
      }
      if ( v16 != -338999544 )
        break;
      v92 = v3 % 0xFFF1;
      v15 = v96 % 0xFFF1;
      v16 = -1524570201;
      v90 = v111;
      v88 = v2;
    }
    if ( v16 != -92250407 )
      break;
    v16 = -1099396991;
  }
  a1[69] = v80;
  v45 = *v78;
  v46 = *v79;
  v47 = -1817358981;
  v81 = *v78;
  v97 = *v78;
  v103 = *v78;
  v101 = *v78;
  v95 = *v78;
  v99 = (unsigned __int8 *)*v78;
  v85 = *v78;
  v87 = *v78;
  v83 = (unsigned __int8 *)*v78;
  v93 = *v78;
  v91 = *v78;
LABEL_95:
  v89 = v45;
  if ( v47 > -23427609 )
    goto LABEL_104;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_128:
        while ( v47 <= -686714105 )
        {
          if ( v47 > -1362941447 )
          {
            if ( v47 == -1362941446 )
            {
              v47 = 1011054142;
              goto LABEL_104;
            }
            if ( v47 == -1099396991 )
            {
              v75 = v115;
              if ( v115 >= 0x15B0 )
                v75 = 5552;
              v110 = v75;
              v111 = v115 - v75;
              v48 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
              v47 = -92250407;
              v49 = -686714104;
            }
            else
            {
              v117 = v85;
              v118 = v3;
              v119 = v87;
              v120 = v83;
              v48 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
              v47 = -1362941446;
              v49 = 1011054142;
            }
            goto LABEL_97;
          }
          if ( v47 == -1817358981 )
          {
            v47 = 704417795;
            if ( (int)*v79 < 10 )
              v47 = -23427608;
            if ( (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0 )
              v47 = -23427608;
            goto LABEL_104;
          }
          v113 = v9;
          v114 = v93;
          v115 = v91;
          v116 = (unsigned __int8 *)v89;
          v73 = v91 == 0;
          v47 = 812699296;
          v74 = 2027453117;
LABEL_125:
          if ( !v73 )
            v47 = v74;
          if ( v47 > -23427609 )
            goto LABEL_104;
        }
        if ( v47 > -338999545 )
          break;
        if ( v47 == -686714104 )
        {
          v85 = v110;
          v83 = v116;
          v87 = v114;
          v47 = -842207512;
          v3 = v113;
        }
        else
        {
          v47 = -338999544;
          if ( v117 )
            v47 = 60741261;
          v99 = v120;
          v95 = v119;
          v101 = v118;
          v103 = v117;
          v2 = (unsigned int)v120;
          v46 = v119;
          v97 = v118;
          if ( v47 > -23427609 )
          {
            while ( 1 )
            {
LABEL_104:
              while ( v47 > 1011054141 )
              {
                if ( v47 <= 1060189207 )
                {
                  if ( v47 != 1011054142 )
                  {
                    v47 = -1524570201;
                    if ( v109 )
                      v47 = 1781521651;
                    v93 = v107;
                    v9 = v108;
                    v91 = a1[65];
                    v45 = *(_DWORD *)(*(_DWORD *)v105 + 4) + a1[66];
                    goto LABEL_95;
                  }
                  v112 = v117 > 15;
                  v48 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
                  v47 = -1362941446;
                  v49 = 1060189208;
                }
                else
                {
                  if ( v47 == 1060189208 )
                  {
                    v73 = !v112;
                    v47 = -578601990;
                    v74 = 309134588;
                    goto LABEL_125;
                  }
                  if ( v47 == 1781521651 )
                  {
                    v47 = -49964384;
                    v81 = 1;
                    goto LABEL_128;
                  }
                  v48 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
                  v47 = -92250407;
                  v49 = -1099396991;
                }
LABEL_97:
                if ( v48 )
                  v47 = v49;
                if ( (int)*v79 < 10 )
                  v47 = v49;
                if ( v47 <= -23427609 )
                  goto LABEL_128;
              }
              if ( v47 <= 309134587 )
              {
                if ( v47 == -23427608 )
                {
                  v107 = 0;
                  v108 = 0;
                  v109 = *(_DWORD *)(*(_DWORD *)v105 + 4) + a1[66] == 0;
                  v48 = (((unsigned __int8)*v78 * ((unsigned __int8)*v78 - 1)) & 1) == 0;
                  v47 = 704417795;
                  v49 = 1054675509;
                  goto LABEL_97;
                }
                v2 = (unsigned int)(v99 + 1);
                v46 = v95 + *v99;
                v50 = v46 + v101;
                v17 = v103-- == 1;
                v47 = -338999544;
                if ( !v17 )
                  v47 = 60741261;
                v101 += v46;
                v97 = v50;
                ++v99;
                v95 = v46;
                if ( v47 <= -23427609 )
                  goto LABEL_128;
              }
              else
              {
                if ( v47 == 309134588 )
                {
                  v51 = *v120 + v119;
                  v52 = v51 + v120[1];
                  v53 = v52 + v51 + v118;
                  v54 = v52 + v120[2];
                  v55 = v54 + v120[3];
                  v56 = v55 + v54 + v53;
                  v57 = v55 + v120[4];
                  v58 = v57 + v120[5];
                  v59 = v58 + v57 + v56;
                  v60 = v58 + v120[6];
                  v61 = v60 + v120[7];
                  v62 = v61 + v60 + v59;
                  v63 = v61 + v120[8];
                  v64 = v63 + v120[9];
                  v65 = v64 + v63 + v62;
                  v66 = v64 + v120[10];
                  v67 = v66 + v120[11];
                  v68 = v67 + v66 + v65;
                  v69 = v67 + v120[12];
                  v70 = v69 + v120[13];
                  v71 = v70 + v69 + v68;
                  v72 = v70 + v120[14];
                  v87 = v72 + v120[15];
                  v3 = v87 + v72 + v71;
                  v83 = v120 + 16;
                  v85 = v117 - 16;
                  v47 = -842207512;
                  goto LABEL_128;
                }
                if ( v47 != 704417795 )
                {
                  v81 = v114 | (v113 << 16);
                  v47 = -49964384;
                  goto LABEL_128;
                }
                v47 = -23427608;
              }
            }
          }
        }
      }
      if ( v47 != -338999544 )
        break;
      v93 = v46 % 0xFFF1;
      v9 = v97 % 0xFFF1;
      v47 = -1524570201;
      v91 = v111;
      v89 = v2;
    }
    if ( v47 != -92250407 )
      break;
    v47 = -1099396991;
  }
  a1[71] = v81;
  v13 = 1;
  v2 = v105;
  if ( v105 )
  {
LABEL_157:
    ((void (__cdecl *)(unsigned int))unk_D37B0)(v2);
    ((void (__cdecl *)(unsigned int))unk_87A60)(v2);
  }
LABEL_158:
  result = v13 != 0;
  if ( __readgsdword(0x14u) == v121 )
    return result;
  ((void (*)(void))unk_87A30)();
  JUMPOUT(0xD21A6);
  return result;
}
