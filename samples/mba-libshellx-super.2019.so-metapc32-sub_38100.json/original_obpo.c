int __usercall sub_38100@<eax>(unsigned __int16 *a1@<edx>, unsigned int a2@<ecx>, int *a4, unsigned int a5)
{
  int v5; // edx
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __m128i v12; // xmm3
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v18; // esi
  __m128i v19; // xmm4
  __m128i v20; // xmm1
  __m128i v21; // xmm3
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm2
  __m128i v25; // xmm5
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm2
  __m128i v31; // xmm5
  __m128i v32; // xmm0
  int v33; // edx
  int v34; // edi
  int v35; // edx
  int v36; // eax
  __m128i v37; // xmm0
  int result; // eax
  int v39; // [esp+24h] [ebp-268h]
  int v40; // [esp+24h] [ebp-268h]
  int v41; // [esp+2Ch] [ebp-260h]
  int v42; // [esp+30h] [ebp-25Ch]
  int v43; // [esp+34h] [ebp-258h]
  int v44; // [esp+38h] [ebp-254h]
  int v45; // [esp+3Ch] [ebp-250h]
  unsigned int v46; // [esp+40h] [ebp-24Ch]
  unsigned int v47; // [esp+44h] [ebp-248h]
  unsigned int v48; // [esp+48h] [ebp-244h]
  unsigned int v49; // [esp+4Ch] [ebp-240h]
  int v50; // [esp+50h] [ebp-23Ch]
  int v51; // [esp+54h] [ebp-238h]
  int v52; // [esp+58h] [ebp-234h]
  int v53; // [esp+5Ch] [ebp-230h]
  int v54; // [esp+60h] [ebp-22Ch]
  int v55; // [esp+64h] [ebp-228h]
  int v56; // [esp+68h] [ebp-224h]
  int v57; // [esp+6Ch] [ebp-220h]
  int v58; // [esp+70h] [ebp-21Ch]
  int v59; // [esp+70h] [ebp-21Ch]
  int v60; // [esp+74h] [ebp-218h]
  int v61; // [esp+84h] [ebp-208h]
  int v62; // [esp+88h] [ebp-204h]
  int v63; // [esp+8Ch] [ebp-200h]
  int v64; // [esp+90h] [ebp-1FCh]
  int v65; // [esp+94h] [ebp-1F8h]
  int v66; // [esp+98h] [ebp-1F4h]
  int v67; // [esp+A0h] [ebp-1ECh]
  int v68; // [esp+A4h] [ebp-1E8h]
  int v69; // [esp+A8h] [ebp-1E4h]
  int v70; // [esp+ACh] [ebp-1E0h]
  int v71; // [esp+B0h] [ebp-1DCh]
  int v72; // [esp+B4h] [ebp-1D8h]
  int v73; // [esp+B8h] [ebp-1D4h]
  int v74; // [esp+BCh] [ebp-1D0h]
  int v75; // [esp+C4h] [ebp-1C8h]
  int v76; // [esp+DCh] [ebp-1B0h]
  int v77; // [esp+E0h] [ebp-1ACh]
  int v78; // [esp+E4h] [ebp-1A8h]
  int v79; // [esp+E8h] [ebp-1A4h]
  int v80; // [esp+ECh] [ebp-1A0h]
  int v81; // [esp+F0h] [ebp-19Ch]
  int v82; // [esp+F4h] [ebp-198h]
  int v83; // [esp+F8h] [ebp-194h]
  int v84; // [esp+FCh] [ebp-190h]
  int v85; // [esp+100h] [ebp-18Ch]
  int v86; // [esp+104h] [ebp-188h]
  int v87; // [esp+108h] [ebp-184h]
  unsigned int v88; // [esp+10Ch] [ebp-180h]
  int *v89; // [esp+110h] [ebp-17Ch]
  unsigned __int16 *v90; // [esp+114h] [ebp-178h]
  int *v91; // [esp+118h] [ebp-174h]
  int v92; // [esp+11Ch] [ebp-170h]
  int *v93; // [esp+120h] [ebp-16Ch]
  int v94; // [esp+124h] [ebp-168h]
  int v95; // [esp+128h] [ebp-164h]
  unsigned __int16 *v96; // [esp+12Ch] [ebp-160h]
  int *v97; // [esp+130h] [ebp-15Ch]
  unsigned int i; // [esp+134h] [ebp-158h]
  unsigned int j; // [esp+138h] [ebp-154h]
  int v100; // [esp+140h] [ebp-14Ch]
  int v101; // [esp+144h] [ebp-148h]
  int v102; // [esp+148h] [ebp-144h]
  int v103; // [esp+14Ch] [ebp-140h]
  unsigned int v104; // [esp+150h] [ebp-13Ch]
  unsigned int v105; // [esp+154h] [ebp-138h]
  unsigned int v106; // [esp+158h] [ebp-134h]
  unsigned int v107; // [esp+15Ch] [ebp-130h]
  int v108; // [esp+160h] [ebp-12Ch]
  int v109; // [esp+164h] [ebp-128h]
  int v110; // [esp+168h] [ebp-124h]
  int v111; // [esp+16Ch] [ebp-120h]
  int v112; // [esp+178h] [ebp-114h]
  int v113; // [esp+17Ch] [ebp-110h]
  unsigned int v114; // [esp+184h] [ebp-108h]
  unsigned int v115; // [esp+188h] [ebp-104h]
  unsigned int v116; // [esp+18Ch] [ebp-100h]
  unsigned int v117; // [esp+190h] [ebp-FCh]
  int v118; // [esp+194h] [ebp-F8h]
  int v119; // [esp+198h] [ebp-F4h]
  unsigned int v120; // [esp+19Ch] [ebp-F0h]
  int v121; // [esp+1B0h] [ebp-DCh]
  unsigned __int16 *v122; // [esp+1ECh] [ebp-A0h]
  int *v123; // [esp+1F0h] [ebp-9Ch]
  _BYTE *v124; // [esp+1F4h] [ebp-98h]
  int v126; // [esp+20Ch] [ebp-80h]
  unsigned int v127; // [esp+210h] [ebp-7Ch]
  _BYTE v128[64]; // [esp+238h] [ebp-54h] BYREF
  int v129; // [esp+278h] [ebp-14h]

  v129 = *(_DWORD *)dword_3FD8C;
  v5 = 1817041339;
  if ( !a5 )
    v5 = 1332488870;
  v124 = (_BYTE *)(a2 + 128);
  v123 = (int *)(a2 + 64);
  if ( v5 == 1817041339 )
  {
    v100 = *(_DWORD *)a2;
    v101 = *(_DWORD *)(a2 + 4);
    v102 = *(_DWORD *)(a2 + 8);
    v103 = *(_DWORD *)(a2 + 12);
    v104 = *(_DWORD *)(a2 + 16);
    v105 = *(_DWORD *)(a2 + 20);
    v106 = *(_DWORD *)(a2 + 24);
    v107 = *(_DWORD *)(a2 + 28);
    v108 = *(_DWORD *)(a2 + 32);
    v109 = *(_DWORD *)(a2 + 36);
    v110 = *(_DWORD *)(a2 + 40);
    v111 = *(_DWORD *)(a2 + 44);
    v94 = *(_DWORD *)(a2 + 48);
    v92 = *(_DWORD *)(a2 + 52);
    v112 = *(_DWORD *)(a2 + 56);
    v113 = *(_DWORD *)(a2 + 60);
    v91 = 0;
    v90 = a1;
    v89 = a4;
    v88 = a5;
    while ( 1 )
    {
      if ( v88 >= 0x40 )
      {
        v97 = v89;
        v96 = v90;
        v93 = v91;
      }
      else
      {
        for ( i = 0; i < v88; ++i )
          v128[i] = *((_BYTE *)v90 + i);
        v97 = (int *)v128;
        v96 = (unsigned __int16 *)v128;
        v93 = v89;
      }
      v41 = v100;
      v87 = v101;
      v86 = v102;
      v85 = v103;
      v37 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v104), _mm_cvtsi32_si128(v105)),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v106), _mm_cvtsi32_si128(v107)));
      v59 = v108;
      v40 = v109;
      v60 = v110;
      v84 = v111;
      v83 = v112;
      v82 = v113;
      v81 = v94;
      v80 = v92;
      v36 = 20;
      while ( 1 )
      {
        v121 = v36;
        v76 = _mm_cvtsi128_si32(v37);
        v77 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v37, 229));
        v78 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v37, 78));
        v79 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v37, 231));
        if ( !v36 )
          break;
        v33 = __ROL4__((v76 + v41) ^ v81, 16);
        v34 = __ROL4__((v33 + v59) ^ v76, 12);
        v114 = v34 + v76 + v41;
        v115 = __ROL4__(v114 ^ v33, 8);
        v116 = v115 + v33 + v59;
        v117 = __ROL4__(v116 ^ v34, 7);
        v35 = __ROL4__((v77 + v87) ^ v80, 16);
        v118 = v35 + v40;
        v119 = __ROL4__(v77 ^ (v35 + v40), 12);
        v120 = v119 + v77 + v87;
        v126 = (v120 ^ v35) << 8;
        v127 = (v120 ^ v35) >> 24;
        v122 = a1;
        v7 = __ROL4__((v78 + v86) ^ v83, 16);
        v8 = v7 + v60;
        v9 = __ROL4__((v7 + v60) ^ v78, 12);
        v10 = v9 + v78 + v86;
        v11 = __ROL4__(v10 ^ v7, 8);
        v58 = v11 + v8;
        v12 = _mm_cvtsi32_si128(__ROL4__((v11 + v8) ^ v9, 7));
        v13 = __ROL4__((v79 + v85) ^ v82, 16);
        v14 = v13 + v84;
        v15 = __ROL4__((v13 + v84) ^ v79, 12);
        v16 = v15 + v79 + v85;
        v17 = __ROL4__(v16 ^ v13, 8);
        v18 = v17 + v14;
        v39 = (v127 | v126) + v118;
        v19 = _mm_cvtsi32_si128(__ROL4__(v39 ^ v119, 7));
        v20 = _mm_cvtsi32_si128(v10);
        a1 = v122;
        v21 = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(__ROL4__(v18 ^ v15, 7)));
        v22 = _mm_add_epi32(
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v117), _mm_cvtsi32_si128(v114)),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v120), v20)),
                _mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), v19), v21));
        v23 = _mm_xor_si128(
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v17)),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v115), _mm_cvtsi32_si128(v127 | v126))),
                v22);
        v24 = _mm_or_si128(_mm_slli_epi32(v23, 0x10u), _mm_srli_epi32(v23, 0x10u));
        v25 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(v39 + _mm_cvtsi128_si32(v24)),
                  _mm_cvtsi32_si128(v58 + _mm_cvtsi128_si32(_mm_shuffle_epi32(v24, 229)))),
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(v18 + _mm_cvtsi128_si32(_mm_shuffle_epi32(v24, 78))),
                  _mm_cvtsi32_si128(v116 + _mm_cvtsi128_si32(_mm_shuffle_epi32(v24, 231)))));
        v26 = _mm_xor_si128(_mm_unpacklo_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v117), v19), v21), v25);
        v27 = _mm_or_si128(_mm_slli_epi32(v26, 0xCu), _mm_srli_epi32(v26, 0x14u));
        v28 = _mm_add_epi32(v22, v27);
        v29 = _mm_xor_si128(v24, v28);
        v30 = _mm_or_si128(_mm_slli_epi32(v29, 8u), _mm_srli_epi32(v29, 0x18u));
        v31 = _mm_add_epi32(v25, v30);
        v32 = _mm_xor_si128(v27, v31);
        v37 = _mm_or_si128(_mm_slli_epi32(v32, 7u), _mm_srli_epi32(v32, 0x19u));
        v36 = v121 - 2;
        v40 = _mm_cvtsi128_si32(v31);
        v60 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v31, 229));
        v84 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v31, 78));
        v59 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v31, 231));
        v83 = _mm_cvtsi128_si32(v30);
        v82 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v30, 229));
        v81 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v30, 78));
        v80 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v30, 231));
        v85 = _mm_cvtsi128_si32(v28);
        v41 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v28, 229));
        v87 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v28, 78));
        v86 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v28, 231));
      }
      v42 = v41 + v100;
      v43 = v87 + v101;
      v44 = v86 + v102;
      v45 = v85 + v103;
      v46 = v76 + v104;
      v47 = v77 + v105;
      v48 = v78 + v106;
      v49 = v79 + v107;
      v50 = v59 + v108;
      v51 = v40 + v109;
      v52 = v60 + v110;
      v53 = v84 + v111;
      v54 = v81 + v94;
      v55 = v80 + v92;
      v56 = v83 + v112;
      v57 = v82 + v113;
      if ( v88 < 0x40 )
      {
        *v123 = v42;
        v123[1] = v43;
        v123[2] = v44;
        v123[3] = v45;
        v123[4] = v46;
        v123[5] = v47;
        v123[6] = v48;
        v123[7] = v49;
        v123[8] = v50;
        v123[9] = v51;
        v123[10] = v52;
        v123[11] = v53;
        v123[12] = v54;
        v123[13] = v55;
        v123[14] = v56;
        v123[15] = v57;
      }
      v61 = v43 ^ *((_DWORD *)v96 + 1);
      v62 = v44 ^ *((_DWORD *)v96 + 2);
      v63 = v45 ^ *((_DWORD *)v96 + 3);
      v64 = v46 ^ *((_DWORD *)v96 + 4);
      v65 = v47 ^ *((_DWORD *)v96 + 5);
      v66 = v48 ^ *((_DWORD *)v96 + 6);
      v67 = v49 ^ ((*((unsigned __int8 *)v96 + 31) << 24) & v96[14] | (v96[14] | (*((unsigned __int8 *)v96 + 30) << 16)) ^ (*((unsigned __int8 *)v96 + 31) << 24));
      v68 = v50 ^ *((_DWORD *)v96 + 8);
      v69 = v51 ^ *((_DWORD *)v96 + 9);
      v70 = v52 ^ *((_DWORD *)v96 + 10);
      v71 = v53 ^ *((_DWORD *)v96 + 11);
      v72 = v54 ^ *((_DWORD *)v96 + 12);
      v73 = v55 ^ *((_DWORD *)v96 + 13);
      v74 = v56 ^ *((_DWORD *)v96 + 14);
      v75 = v57 ^ ((*((unsigned __int8 *)v96 + 63) << 24) & v96[30] | (v96[30] | (*((unsigned __int8 *)v96 + 62) << 16)) ^ (*((unsigned __int8 *)v96 + 63) << 24));
      v95 = v94 == -1 ? v92 + 1 : v92;
      *v97 = v42 ^ (*v96 | (*((unsigned __int8 *)v96 + 2) << 16) | (*((unsigned __int8 *)v96 + 3) << 24));
      v97[1] = v61;
      v97[2] = v62;
      v97[3] = v63;
      v97[4] = v64;
      v97[5] = v65;
      v97[6] = v66;
      v97[7] = v67;
      v97[8] = v68;
      v97[9] = v69;
      v97[10] = v70;
      v97[11] = v71;
      v97[12] = v72;
      v97[13] = v73;
      v97[14] = v74;
      v97[15] = v75;
      if ( v88 < 0x41 )
        break;
      v90 = v96 + 32;
      ++v94;
      v88 -= 64;
      v89 = v97 + 16;
      v92 = v95;
      v91 = v93;
    }
    if ( v88 < 0x40 )
    {
      for ( j = 0; j < v88; ++j )
        *((_BYTE *)v93 + j) = *((_BYTE *)v97 + j);
    }
    *(_DWORD *)(a2 + 48) = v94 + 1;
    *(_DWORD *)(a2 + 52) = v95;
    *v124 = 64 - v88;
  }
  result = *(_DWORD *)dword_3FD8C;
  if ( *(_DWORD *)dword_3FD8C != v129 )
    ((void (__fastcall *)(_BYTE *))unk_1AA0)(v128);
  return result;
}
