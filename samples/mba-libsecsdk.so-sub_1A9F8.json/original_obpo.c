int __fastcall sub_1A9F8(int a1, int a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  char v6; // r0
  bool v7; // zf
  unsigned int v8; // r0
  char v9; // r0
  char v10; // r0
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r0
  unsigned int v17; // r0
  int v18; // r0
  char v19; // r0
  int v20; // r10
  unsigned int v22; // [sp+Ch] [bp-230h]
  unsigned int v23; // [sp+10h] [bp-22Ch]
  unsigned int v24; // [sp+14h] [bp-228h]
  unsigned __int8 *v25; // [sp+18h] [bp-224h]
  unsigned int v26; // [sp+1Ch] [bp-220h]
  char *v27; // [sp+20h] [bp-21Ch]
  unsigned int v28; // [sp+24h] [bp-218h]
  unsigned int v29; // [sp+28h] [bp-214h]
  unsigned int v30; // [sp+2Ch] [bp-210h]
  unsigned int v31; // [sp+30h] [bp-20Ch]
  unsigned int v32; // [sp+34h] [bp-208h]
  unsigned int v33; // [sp+38h] [bp-204h]
  unsigned __int8 *v34; // [sp+3Ch] [bp-200h]
  unsigned __int8 *v35; // [sp+40h] [bp-1FCh]
  unsigned int v36; // [sp+44h] [bp-1F8h]
  unsigned int v37; // [sp+48h] [bp-1F4h]
  unsigned int v38; // [sp+4Ch] [bp-1F0h]
  int v39; // [sp+50h] [bp-1ECh]
  unsigned int v40; // [sp+54h] [bp-1E8h]
  unsigned __int8 *v41; // [sp+58h] [bp-1E4h]
  unsigned int v42; // [sp+5Ch] [bp-1E0h]
  unsigned int v43; // [sp+60h] [bp-1DCh]
  unsigned __int8 *v44; // [sp+64h] [bp-1D8h]
  unsigned int v45; // [sp+68h] [bp-1D4h]
  unsigned __int8 *v46; // [sp+6Ch] [bp-1D0h]
  unsigned int v47; // [sp+70h] [bp-1CCh]
  int v48; // [sp+74h] [bp-1C8h]
  char *i; // [sp+78h] [bp-1C4h]
  char *v50; // [sp+7Ch] [bp-1C0h]
  int v51; // [sp+80h] [bp-1BCh]
  _BYTE *v52; // [sp+84h] [bp-1B8h]
  unsigned int v53; // [sp+88h] [bp-1B4h]
  char *v54; // [sp+8Ch] [bp-1B0h]
  _BYTE *j; // [sp+90h] [bp-1ACh]
  char *v56; // [sp+94h] [bp-1A8h]
  _BYTE *v57; // [sp+98h] [bp-1A4h]
  unsigned int v58; // [sp+9Ch] [bp-1A0h]
  unsigned int v59; // [sp+A0h] [bp-19Ch]
  char *v60; // [sp+A4h] [bp-198h]
  char *v61; // [sp+A8h] [bp-194h]
  int v62; // [sp+ACh] [bp-190h]
  char *v63; // [sp+B0h] [bp-18Ch]
  unsigned int v64; // [sp+B4h] [bp-188h]
  unsigned __int8 *v65; // [sp+B8h] [bp-184h]
  unsigned int v66; // [sp+BCh] [bp-180h]
  unsigned int v67; // [sp+C0h] [bp-17Ch]
  unsigned int v68; // [sp+C4h] [bp-178h]
  _DWORD *v69; // [sp+D0h] [bp-16Ch]
  unsigned int *v70; // [sp+D8h] [bp-164h]
  _DWORD *v71; // [sp+E0h] [bp-15Ch]
  char **v72; // [sp+E8h] [bp-154h]
  unsigned int v73; // [sp+ECh] [bp-150h]
  unsigned int v74; // [sp+F0h] [bp-14Ch]
  int v75; // [sp+F4h] [bp-148h]
  int v76; // [sp+F8h] [bp-144h]
  unsigned int v77; // [sp+114h] [bp-128h]
  unsigned int v78; // [sp+114h] [bp-128h]
  unsigned int v79; // [sp+118h] [bp-124h]
  unsigned int v80; // [sp+11Ch] [bp-120h]
  unsigned int v81; // [sp+120h] [bp-11Ch]
  unsigned int v82; // [sp+124h] [bp-118h]
  unsigned int v83; // [sp+128h] [bp-114h]
  int v84; // [sp+12Ch] [bp-110h]
  char *v85; // [sp+13Ch] [bp-100h]
  char **v86; // [sp+140h] [bp-FCh]
  int v87; // [sp+144h] [bp-F8h]
  char *v88; // [sp+148h] [bp-F4h]
  unsigned __int8 *v89; // [sp+180h] [bp-BCh]
  unsigned __int8 *v90; // [sp+1C8h] [bp-74h]
  unsigned __int8 *v91; // [sp+1E0h] [bp-5Ch]
  int v92; // [sp+1F0h] [bp-4Ch]
  unsigned __int8 *v93; // [sp+1F8h] [bp-44h]

  v69 = a6 + 1;
  v70 = a5 + 8;
  v71 = a5 + 7;
  v72 = (char **)(a5 + 13);
  v73 = a5[13];
  v74 = a5[12];
  if ( v73 >= v74 )
    v33 = a5[11] - v73;
  else
    v33 = v74 - 1 - v73;
  v34 = (unsigned __int8 *)*a6;
  v28 = a6[1];
  v30 = a5[8];
  v29 = a5[7];
  v76 = dword_759E0[a2];
  v27 = (char *)a5[13];
  v75 = dword_759E0[a1];
  v22 = v33;
  while ( 1 )
  {
    v26 = v28;
    v25 = v34;
    v23 = v29;
    v24 = v30;
    while ( 1 )
    {
      v90 = v25;
      if ( v23 >= 0x14 )
        break;
      --v26;
      ++v25;
      v24 |= *v90 << v23;
      v23 += 8;
    }
    if ( *(_BYTE *)(a3 + 8 * (v24 & v75)) )
      break;
    v14 = *(unsigned __int8 *)(a3 + 8 * (v24 & v75) + 1);
    *v27 = *(_DWORD *)(a3 + 8 * (v24 & v75) + 4);
    v68 = v24 >> v14;
    v67 = v23 - v14;
    v63 = v27 + 1;
    v65 = v25;
    v64 = v26;
    v66 = v22 - 1;
LABEL_71:
    v30 = v68;
    v29 = v67;
    v34 = v65;
    v20 = 511658707;
    if ( v64 > 9 )
      v20 = 262302968;
    v28 = v64;
    v27 = v63;
    if ( v66 >> 1 > 0x80 )
    {
      v22 = v66;
      if ( v20 != 511658707 )
        continue;
    }
    v17 = *v69 - v64;
    if ( v17 > v67 >> 3 )
      v17 = v67 >> 3;
    *v70 = v68;
    *v71 = v67 - 8 * v17;
    *v69 = v17 + v64;
    a6[2] += &v65[-v17 - *a6];
    *a6 = &v65[-v17];
    *v72 = v63;
    return 0;
  }
  v41 = (unsigned __int8 *)(a3 + 8 * (v24 & v75));
  v39 = *v41;
  v38 = v24;
  v37 = v23;
  while ( 1 )
  {
    v18 = v41[1];
    v79 = v37 - v18;
    if ( (v39 & 0x10) != 0 )
      break;
    v77 = v38 >> v18;
    if ( (v39 & 0x40) != 0 )
    {
      if ( (v39 & 0x20) != 0 )
      {
        v15 = *v69 - v26;
        if ( v15 > v79 >> 3 )
          v15 = v79 >> 3;
        *v70 = v77;
        *v71 = v79 - 8 * v15;
        *v69 = v15 + v26;
        a6[2] += &v25[-v15 - *a6];
        *a6 = &v25[-v15];
        *v72 = v27;
        v62 = 1;
      }
      else
      {
        a6[6] = dword_1BD9C + 111672;
        v12 = *v69 - v26;
        if ( v12 > v79 >> 3 )
          v12 = v79 >> 3;
        *v70 = v77;
        *v71 = v79 - 8 * v12;
        *v69 = v12 + v26;
        a6[2] += &v25[-v12 - *a6];
        *a6 = &v25[-v12];
        *v72 = v27;
        v62 = -3;
      }
      return v62;
    }
    v89 = &v41[8 * *((_DWORD *)v41 + 1) + 8 * (v77 & *(_DWORD *)(dword_1BDB0 + 112336 + 4 * v39))];
    if ( !*v89 )
    {
      v16 = v89[1];
      *v27 = *((_DWORD *)v89 + 1);
      v68 = v77 >> v16;
      v67 = v79 - v16;
      v63 = v27 + 1;
      v65 = v25;
      v64 = v26;
      v66 = v22 - 1;
      goto LABEL_71;
    }
    v38 >>= v18;
    v37 -= v18;
    v41 += 8 * *((_DWORD *)v41 + 1) + 8 * (v77 & *(_DWORD *)(dword_1BDB0 + 112336 + 4 * v39));
    v39 = *v89;
  }
  v78 = v38 >> v18;
  v11 = v39 & 0xF;
  v80 = (v78 & *(_DWORD *)(dword_1BDA4 + 111068 + 4 * v11)) + *((_DWORD *)v41 + 1);
  v35 = v25;
  v32 = v79 - v11;
  v36 = v26;
  v31 = v78 >> v11;
  while ( 1 )
  {
    v91 = v35;
    if ( v32 >= 0xF )
      break;
    --v36;
    ++v35;
    v31 |= *v91 << v32;
    v32 += 8;
  }
  v46 = (unsigned __int8 *)(a4 + 8 * (v31 & v76));
  v48 = *v46;
  v42 = v31;
  v40 = v32;
  while ( 1 )
  {
    v92 = v48;
    v13 = v46[1];
    v82 = v40 - v13;
    if ( (v48 & 0x10) != 0 )
    {
      v47 = v42 >> v13;
      v43 = v40 - v13;
      v44 = v35;
      v45 = v36;
      v83 = v48 & 0xF;
      while ( 1 )
      {
        v93 = v44;
        if ( v43 >= v83 )
          break;
        --v45;
        ++v44;
        v47 |= *v93 << v43;
        v43 += 8;
      }
      v84 = (v47 & *(_DWORD *)(dword_1BDA0 + 111312 + 4 * v83)) + *((_DWORD *)v46 + 1);
      v86 = (char **)(a5 + 10);
      v85 = &v27[-v84];
      if ( (unsigned int)&v27[-v84] >= a5[10] )
      {
        *v27 = *v85;
        v27[1] = v85[1];
        v61 = v85 + 2;
        v57 = v27 + 2;
        v58 = v80 - 2;
        while ( 1 )
        {
          v19 = *v61++;
          *v57 = v19;
          v68 = v47 >> v83;
          v67 = v43 - v83;
          v7 = v58-- == 1;
          v66 = v22 - v80;
          if ( v7 )
            break;
          ++v57;
        }
        v65 = v44;
        v64 = v45;
        v63 = v57 + 1;
      }
      else
      {
        v50 = &v27[-v84];
        do
        {
          v87 = a5[11];
          v88 = &v50[v87 - (_DWORD)*v86];
          v50 = v88;
        }
        while ( v88 < *v86 );
        if ( v80 <= v87 - (int)v88 )
        {
          *v27 = *v88;
          v27[1] = v88[1];
          v56 = v88 + 2;
          v52 = v27 + 2;
          v53 = v80 - 2;
          while ( 1 )
          {
            v9 = *v56++;
            *v52 = v9;
            v68 = v47 >> v83;
            v67 = v43 - v83;
            v7 = v53-- == 1;
            v66 = v22 - v80;
            if ( v7 )
              break;
            ++v52;
          }
          v65 = v44;
          v64 = v45;
          v63 = v52 + 1;
        }
        else
        {
          v54 = v88;
          v51 = v87 - (_DWORD)v88;
          for ( i = v27; ; ++i )
          {
            v10 = *v54++;
            v7 = v51-- == 1;
            *i = v10;
            if ( v7 )
              break;
          }
          v60 = *v86;
          v59 = v80 - (v87 - (_DWORD)v88);
          for ( j = i + 1; ; ++j )
          {
            v6 = *v60++;
            *j = v6;
            v68 = v47 >> v83;
            v67 = v43 - v83;
            v7 = v59-- == 1;
            v66 = v22 - v80;
            if ( v7 )
              break;
          }
          v65 = v44;
          v64 = v45;
          v63 = j + 1;
        }
      }
      goto LABEL_71;
    }
    v81 = v42 >> v13;
    if ( (v48 & 0x40) != 0 )
      break;
    v48 = v46[8 * *((_DWORD *)v46 + 1) + 8 * (v81 & *(_DWORD *)(dword_1BDAC + 112020 + 4 * v48))];
    v42 >>= v13;
    v40 -= v13;
    v46 += 8 * *((_DWORD *)v46 + 1) + 8 * (v81 & *(_DWORD *)(dword_1BDAC + 112020 + 4 * v92));
  }
  a6[6] = dword_1BDA8 + 110064;
  v8 = *v69 - v36;
  if ( v8 > v82 >> 3 )
    v8 = v82 >> 3;
  *v70 = v81;
  *v71 = v82 - 8 * v8;
  *v69 = v8 + v36;
  a6[2] += &v35[-v8 - *a6];
  *a6 = &v35[-v8];
  *v72 = v27;
  return -3;
}
