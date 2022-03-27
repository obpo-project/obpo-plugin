bool __cdecl sub_D11C0(_DWORD *a1, int a2, int a3)
{
  int v3; // ebp
  unsigned int v4; // edi
  int v5; // esi
  int *v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int i; // esi
  _DWORD *v10; // eax
  _BYTE *v11; // edx
  int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  int v15; // esi
  int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // ebx
  int v29; // edx
  int v30; // eax
  int v31; // ebx
  int v32; // edx
  int v33; // eax
  int v34; // ebx
  int v35; // edx
  int v36; // eax
  int v37; // ebx
  int v38; // edx
  int v39; // edx
  int v40; // eax
  int v41; // edx
  unsigned int v42; // ebx
  int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // eax
  unsigned int v46; // edi
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // edi
  unsigned int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // edi
  unsigned int v53; // edx
  unsigned int v54; // eax
  int v55; // edi
  int v56; // edx
  int v57; // eax
  int v58; // edi
  int v59; // edx
  int v60; // eax
  int v61; // edi
  int v62; // edx
  int v63; // eax
  int v64; // edi
  int v65; // edx
  int v66; // edx
  int v67; // eax
  int v68; // edx
  unsigned int v69; // edi
  bool result; // al
  int v71; // [esp+18h] [ebp-94h]
  _DWORD *v72; // [esp+18h] [ebp-94h]
  int *v73; // [esp+1Ch] [ebp-90h]
  int v74; // [esp+20h] [ebp-8Ch]
  unsigned __int8 *v75; // [esp+24h] [ebp-88h]
  unsigned __int8 *v76; // [esp+24h] [ebp-88h]
  int v77; // [esp+28h] [ebp-84h]
  int v78; // [esp+28h] [ebp-84h]
  unsigned int v79; // [esp+2Ch] [ebp-80h]
  unsigned int v80; // [esp+2Ch] [ebp-80h]
  unsigned __int8 *v81; // [esp+30h] [ebp-7Ch]
  int v82; // [esp+30h] [ebp-7Ch]
  unsigned int v83; // [esp+34h] [ebp-78h]
  unsigned int v84; // [esp+34h] [ebp-78h]
  unsigned int v85; // [esp+38h] [ebp-74h]
  unsigned int v86; // [esp+38h] [ebp-74h]
  int v87; // [esp+50h] [ebp-5Ch]
  int v88; // [esp+5Ch] [ebp-50h]
  unsigned int v89; // [esp+74h] [ebp-38h]
  unsigned int v90; // [esp+74h] [ebp-38h]
  unsigned int v91; // [esp+9Ch] [ebp-10h]

  v91 = __readgsdword(0x14u);
  v3 = ((int (__cdecl *)(int, _DWORD, _DWORD))unk_D3840)(a3, 0, 0);
  v4 = ((int (__cdecl *)(int))unk_D4070)(v3);
  if ( v4 )
  {
    v71 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = (int *)((int (__cdecl *)(int, int))unk_D4080)(v3, v5);
      if ( v6[1] == 3 && !v6[2] )
      {
        v8 = *v6;
        v7 = *(_DWORD *)(*(_DWORD *)v3 + 4) + v6[4];
        v71 = v7;
        if ( *(_BYTE *)(v8 + v7) == 46
          && *(_BYTE *)(v7 + v8 + 1) == 115
          && *(_BYTE *)(v7 + v8 + 2) == 104
          && *(_BYTE *)(v7 + v8 + 3) == 115
          && *(_BYTE *)(v7 + v8 + 4) == 116
          && *(_BYTE *)(v7 + v8 + 5) == 114
          && *(_BYTE *)(v7 + v8 + 6) == 116
          && *(_BYTE *)(v7 + v8 + 7) == 97
          && *(_BYTE *)(v7 + v8 + 8) == 98 )
        {
          break;
        }
      }
      if ( ++v5 >= v4 )
      {
        if ( !v71 )
          goto LABEL_41;
        break;
      }
    }
    v88 = v3;
    for ( i = 0; i < v4; ++i )
    {
      v10 = (_DWORD *)((int (__cdecl *)(int, unsigned int))unk_D4080)(v3, i);
      v11 = (_BYTE *)(v71 + *v10);
      v12 = *(_DWORD *)v3;
      if ( (unsigned int)v11 > *(_DWORD *)(*(_DWORD *)v3 + 8) + *(_DWORD *)(*(_DWORD *)v3 + 4) )
        break;
      if ( *v11 == 46 && v11[1] == 116 && v11[2] == 101 && v11[3] == 120 && v11[4] == 116 )
      {
        *(_DWORD *)(a2 + 260) = v10[5];
        *(_DWORD *)(a2 + 264) = v10[4];
        *(_DWORD *)(a2 + 268) = v10[3];
        break;
      }
      v3 = v88;
    }
    v87 = *(_DWORD *)(v12 + 4) + *(_DWORD *)(a2 + 264);
    v72 = (_DWORD *)*((_DWORD *)&unk_1F73F4 - 114);
    v73 = (int *)*((_DWORD *)&unk_1F73F4 - 113);
    do
    {
      v16 = 704417795;
      if ( (((unsigned __int8)*v72 * ((unsigned __int8)*v72 - 1)) & 1) == 0 )
        v16 = 1054675509;
    }
    while ( *v73 >= 10 && v16 != 1054675509 );
    if ( v87 )
    {
      v85 = 0;
      v13 = 0;
      v83 = *(_DWORD *)(a2 + 272);
      v81 = (unsigned __int8 *)v87;
      while ( v83 )
      {
        do
        {
          v40 = v83;
          if ( v83 >= 0x15B0 )
            v40 = 5552;
          v89 = v83 - v40;
          v41 = -92250407;
          if ( (((unsigned __int8)*v72 * ((unsigned __int8)*v72 - 1)) & 1) == 0 )
            v41 = -686714104;
        }
        while ( *v73 >= 10 && v41 != -686714104 );
        v77 = v40;
        v75 = v81;
        v79 = v85;
        v42 = v13;
        while ( 1 )
        {
          do
          {
            v39 = -1362941446;
            if ( (((unsigned __int8)*v72 * ((unsigned __int8)*v72 - 1)) & 1) == 0 )
              v39 = 1060189208;
          }
          while ( *v73 >= 10 && v39 == -1362941446 );
          if ( v77 <= 15 )
            break;
          v17 = *v75 + v79;
          v18 = v17 + v75[1];
          v19 = v18 + v17 + v42;
          v20 = v18 + v75[2];
          v21 = v20 + v75[3];
          v22 = v21 + v20 + v19;
          v23 = v21 + v75[4];
          v24 = v23 + v75[5];
          v25 = v24 + v23 + v22;
          v26 = v24 + v75[6];
          v27 = v26 + v75[7];
          v28 = v27 + v26 + v25;
          v29 = v27 + v75[8];
          v30 = v29 + v75[9];
          v31 = v30 + v29 + v28;
          v32 = v30 + v75[10];
          v33 = v32 + v75[11];
          v34 = v33 + v32 + v31;
          v35 = v33 + v75[12];
          v36 = v35 + v75[13];
          v37 = v36 + v35 + v34;
          v38 = v36 + v75[14];
          v79 = v38 + v75[15];
          v42 = v79 + v38 + v37;
          v75 += 16;
          v77 -= 16;
        }
        v85 = v79 % 0xFFF1;
        v13 = v42 % 0xFFF1;
        v83 = v89;
        v81 = v75;
      }
      *(_DWORD *)(a2 + 276) = v85 | (v13 << 16);
    }
    else
    {
      *(_DWORD *)(a2 + 276) = 1;
    }
    do
    {
      v43 = 704417795;
      if ( (((unsigned __int8)*v72 * ((unsigned __int8)*v72 - 1)) & 1) == 0 )
        v43 = 1054675509;
    }
    while ( *v73 >= 10 && v43 != 1054675509 );
    if ( *(_DWORD *)(*(_DWORD *)v88 + 4) + *(_DWORD *)(a2 + 264) )
    {
      v86 = 0;
      v14 = 0;
      v84 = *(_DWORD *)(a2 + 260);
      v82 = *(_DWORD *)(*(_DWORD *)v88 + 4) + *(_DWORD *)(a2 + 264);
      while ( v84 )
      {
        do
        {
          v67 = v84;
          if ( v84 >= 0x15B0 )
            v67 = 5552;
          v90 = v84 - v67;
          v68 = -92250407;
          if ( (((unsigned __int8)*v72 * ((unsigned __int8)*v72 - 1)) & 1) == 0 )
            v68 = -686714104;
        }
        while ( *v73 >= 10 && v68 == -92250407 );
        v78 = v67;
        v76 = (unsigned __int8 *)v82;
        v80 = v86;
        v69 = v14;
        while ( 1 )
        {
          do
          {
            v66 = -1362941446;
            if ( (((unsigned __int8)*v72 * ((unsigned __int8)*v72 - 1)) & 1) == 0 )
              v66 = 1060189208;
          }
          while ( *v73 >= 10 && v66 != 1060189208 );
          if ( v78 <= 15 )
            break;
          v44 = *v76 + v80;
          v45 = v44 + v76[1];
          v46 = v45 + v44 + v69;
          v47 = v45 + v76[2];
          v48 = v47 + v76[3];
          v49 = v48 + v47 + v46;
          v50 = v48 + v76[4];
          v51 = v50 + v76[5];
          v52 = v51 + v50 + v49;
          v53 = v51 + v76[6];
          v54 = v53 + v76[7];
          v55 = v54 + v53 + v52;
          v56 = v54 + v76[8];
          v57 = v56 + v76[9];
          v58 = v57 + v56 + v55;
          v59 = v57 + v76[10];
          v60 = v59 + v76[11];
          v61 = v60 + v59 + v58;
          v62 = v60 + v76[12];
          v63 = v62 + v76[13];
          v64 = v63 + v62 + v61;
          v65 = v63 + v76[14];
          v80 = v65 + v76[15];
          v69 = v80 + v65 + v64;
          v76 += 16;
          v78 -= 16;
        }
        v86 = v80 % 0xFFF1;
        v14 = v69 % 0xFFF1;
        v84 = v90;
        v82 = (int)v76;
      }
      v74 = v86 | (v14 << 16);
    }
    else
    {
      v74 = 1;
    }
    *(_DWORD *)(a2 + 284) = v74;
    v15 = 1;
    v3 = v88;
    if ( v88 )
      goto LABEL_68;
  }
  else
  {
LABEL_41:
    v15 = 0;
    if ( v3 )
    {
LABEL_68:
      ((void (__cdecl *)(int))unk_D37B0)(v3);
      ((void (__cdecl *)(int))unk_87A60)(v3);
      goto LABEL_69;
    }
  }
LABEL_69:
  result = v15 != 0;
  if ( __readgsdword(0x14u) != v91 )
    ((void (*)(void))unk_87A30)();
  return result;
}
