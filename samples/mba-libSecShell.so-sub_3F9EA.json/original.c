unsigned int __fastcall sub_3F9EA(unsigned int a1, unsigned __int16 *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r7
  int v7; // r8
  unsigned int v8; // r9
  int v9; // r10
  unsigned int v10; // r12
  unsigned int v11; // lr
  unsigned int result; // r0
  int v13; // r3
  bool v14; // cf
  int v15; // r3
  unsigned int v16; // r0
  unsigned int v17; // r6
  int v18; // r0
  int v19; // r0
  unsigned int v20; // t1
  int v21; // r5
  unsigned int v22; // r6
  int v23; // r3
  int v24; // r0
  unsigned int v25; // r6
  int v26; // r3
  unsigned int v27; // r0
  unsigned int v28; // r6
  int v29; // r3
  unsigned int v30; // r3
  int v31; // r7
  int v32; // r8
  int v33; // r3
  int v34; // r3
  int v35; // r11
  unsigned int v36; // r6
  int v37; // r3
  int v38; // r3
  unsigned int v39; // r6
  int v40; // r3
  unsigned int v41; // r6
  int v42; // r3
  int v43; // r3
  unsigned int v44; // r0
  int v45; // r3
  unsigned int v46; // t1
  int v47; // r0
  unsigned int v48; // r0
  int v49; // r0
  unsigned int v50; // t1
  unsigned int v51; // r0
  int v52; // r3
  unsigned int v53; // r6
  int v54; // r3
  unsigned int v55; // t1
  unsigned int v56; // t1
  int v57; // r3
  int v58; // r0
  int v59; // r0
  int v60; // r3
  int v61; // r3
  int v62; // r0
  unsigned int v63; // t1
  int v64; // r3
  unsigned int v65; // t1
  int v66; // r3
  int v67; // r3
  int v68; // r5
  unsigned int v69; // r6
  int v70; // r3
  int v71; // r3
  int v72; // r3
  unsigned int v73; // t1
  int v74; // r3
  int v75; // r3
  int v76; // r3
  unsigned int v77; // t1
  unsigned int v78; // r3
  unsigned int v79; // t1
  int v80; // r0
  unsigned int v81; // r3
  int v82; // r3
  int v83; // r5
  unsigned int v84; // r0
  unsigned int v85; // t1
  unsigned int v86; // r6
  int v87; // r0
  int v88; // r3
  _BOOL4 v89; // r0
  int v90; // r5
  unsigned int v91; // r3
  unsigned int v92; // t1
  int v93; // r3
  unsigned int v94; // r0
  unsigned int v95; // t1
  unsigned int v96; // r3
  int v97; // r0
  int v98; // r0
  int v99; // r3
  int v100; // r3
  int v101; // r3
  int v102; // r3
  int v103; // r0
  int v104; // r3
  unsigned int v105; // t1
  int v106; // r3
  int v107; // r3
  int v108; // r3
  int v109; // r3
  unsigned int v110; // t1
  unsigned int v111; // t1
  unsigned int v112; // r3
  int v113; // r3
  unsigned int v114; // r3
  int v115; // r3
  unsigned int v116; // t1
  unsigned int v117; // r3
  int v118; // r3
  unsigned int v119; // t1
  int v120; // r3
  int v121; // r3
  int v122; // r3
  unsigned int v123; // r3
  int v124; // r7
  int v125; // r8
  int v126; // r3
  unsigned int v127; // [sp+0h] [bp-80h]
  unsigned int v128; // [sp+4h] [bp-7Ch]
  unsigned int v129; // [sp+8h] [bp-78h]
  int v130; // [sp+Ch] [bp-74h]
  int v131; // [sp+10h] [bp-70h]
  int v132; // [sp+14h] [bp-6Ch]
  unsigned int v133; // [sp+18h] [bp-68h]
  int v134; // [sp+1Ch] [bp-64h]
  unsigned int v135; // [sp+20h] [bp-60h]
  unsigned int v137; // [sp+28h] [bp-58h]
  int v138; // [sp+2Ch] [bp-54h]
  unsigned int v139; // [sp+30h] [bp-50h]
  unsigned int v140; // [sp+34h] [bp-4Ch]
  unsigned __int16 v141; // [sp+38h] [bp-48h]
  unsigned int v142; // [sp+3Ch] [bp-44h]
  int v143; // [sp+40h] [bp-40h]
  int v144; // [sp+44h] [bp-3Ch]
  int v145; // [sp+48h] [bp-38h]
  unsigned int v146; // [sp+4Ch] [bp-34h]

  v141 = a4;
  result = 10;
  v142 = HIWORD(a4);
  v13 = 9716;
LABEL_2:
  v131 = v13;
LABEL_3:
  while ( result != 148 )
  {
    while ( 2 )
    {
      switch ( result )
      {
        case 0u:
          v105 = *(_DWORD *)a2;
          a2 += 2;
          result = 84;
          v8 = HIWORD(v105);
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          continue;
        case 1u:
          if ( v6 )
            result = 46;
          else
            result = 138;
          break;
        case 2u:
          if ( a1 <= 0xF )
            result = 46;
          else
            result = 146;
          break;
        case 3u:
          result = 141;
          v90 = (unsigned __int64)v11 >> 16;
          v11 <<= 16;
          HIDWORD(v4) = v90 + v129 * v8 + HIWORD(v10);
          continue;
        case 4u:
          result = 138;
          continue;
        case 5u:
          result = 2;
          a1 -= 16;
          continue;
        case 6u:
          v11 <<= 16;
          HIDWORD(v4) += HIWORD(v10);
          LODWORD(v4) = v4 + v11;
          v10 <<= 16;
          result = 80;
          continue;
        case 7u:
          v116 = *(_DWORD *)a2;
          a2 += 2;
          result = 44;
          v9 = (unsigned __int16)v116;
          v8 = HIWORD(v116);
          v11 = v129 * (unsigned __int16)v116;
          continue;
        case 8u:
          v51 = *a3;
          *a3 = v4;
          if ( (unsigned int)v4 < v51 )
            ++HIDWORD(v4);
          v9 = *a2;
          v6 = HIDWORD(v4);
          ++a3;
          result = 225 - (v131 - 163 * ((unsigned int)(51464 * v131) >> 23));
          break;
        case 9u:
          v11 <<= 16;
          v10 <<= 16;
          v14 = __CFADD__((_DWORD)v4, v11);
          LODWORD(v4) = v4 + v11;
          result = 12;
          v57 = v14;
          HIDWORD(v4) += v57;
          continue;
        case 0xAu:
          v6 = 0;
          result = 2;
          continue;
        case 0xBu:
          v11 <<= 16;
          HIDWORD(v4) += HIWORD(v10);
          LODWORD(v4) = v4 + v11;
          v10 <<= 16;
          result = 66;
          continue;
        case 0xCu:
          v14 = __CFADD__((_DWORD)v4, v10);
          LODWORD(v4) = v4 + v10;
          result = 135;
          v104 = v14;
          v4 += __PAIR64__(v104, v6);
          continue;
        case 0xDu:
          v11 <<= 16;
          HIDWORD(v4) += HIWORD(v10);
          LODWORD(v4) = v4 + v11;
          v10 <<= 16;
          result = 38;
          continue;
        case 0xEu:
          if ( (unsigned int)v4 < v10 )
            ++HIDWORD(v4);
          v14 = __CFADD__(v6, (_DWORD)v4);
          LODWORD(v4) = v6 + v4;
          v96 = v131 - 163 * ((unsigned int)(51464 * v131) >> 23);
          v97 = v14;
          HIDWORD(v4) += v97;
          LODWORD(v4) = v4 + *a3;
          result = 94 - v96;
          v13 = 16961 - v96;
          goto LABEL_2;
        case 0xFu:
          a2 += 2;
          v140 = v146 * v143;
          v137 = v145 * v143;
          result = 33;
          v139 = v144 * v145;
          continue;
        case 0x10u:
          v14 = __CFADD__(v5, *a3);
          v5 += *a3;
          *a3++ = v5;
          v103 = v14;
          v7 += v103;
          result = 107;
          v6 = v7;
          continue;
        case 0x11u:
          a2 += 2;
          result = 109;
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          continue;
        case 0x12u:
          result = 123;
          if ( v5 < v128 )
            ++v7;
          v14 = __CFADD__(v5, v127);
          v5 += v127 + v6;
          v67 = v14;
          v7 += v67;
          continue;
        case 0x13u:
          result = 117;
          v68 = (unsigned __int64)v11 >> 16;
          v11 <<= 16;
          HIDWORD(v4) = v68 + v129 * v8 + HIWORD(v10);
          continue;
        case 0x14u:
          result = 41 - (v131 - 13 * ((unsigned int)(40330 * v131) >> 19));
          break;
        case 0x15u:
          result = 74;
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          HIDWORD(v4) = v129 * v8;
          continue;
        case 0x16u:
          v14 = __CFADD__((_DWORD)v4, v11);
          LODWORD(v4) = v4 + v11;
          result = 25;
          v74 = v14;
          v4 += __PAIR64__(v74, v10);
          continue;
        case 0x17u:
          v48 = *a3;
          *a3 = v5;
          if ( v5 < v48 )
            ++v7;
          result = 26;
          v6 = v7;
          v132 = *a2;
          ++a3;
          continue;
        case 0x18u:
          if ( (unsigned int)v4 < v11 )
            ++HIDWORD(v4);
          v14 = __CFADD__((_DWORD)v4, v10);
          LODWORD(v4) = v4 + v10 + v6;
          result = 145;
          v60 = v14;
          HIDWORD(v4) += v60;
          continue;
        case 0x19u:
          v14 = __CFADD__(v6, (_DWORD)v4);
          LODWORD(v4) = v6 + v4;
          v49 = v14;
          v4 += __PAIR64__(v49, *a3);
          result = 51;
          continue;
        case 0x1Au:
          v46 = *(_DWORD *)a2;
          a2 += 2;
          v133 = HIWORD(v46);
          v128 = v135 * v132;
          v5 = v134 * v132;
          result = 40;
          continue;
        case 0x1Bu:
          *a3++ = v5;
          v111 = *(_DWORD *)a2;
          a2 += 2;
          v132 = (unsigned __int16)v111;
          result = 101;
          v133 = HIWORD(v111);
          continue;
        case 0x1Cu:
          v14 = __CFADD__((_DWORD)v4, *a3);
          LODWORD(v4) = v4 + *a3;
          *a3++ = v4;
          v80 = v14;
          HIDWORD(v4) += v80;
          result = 35;
          v6 = HIDWORD(v4);
          continue;
        case 0x1Du:
          result = 103;
          v10 = v8 * v130;
          HIDWORD(v4) = HIWORD(v11) + v129 * v8 + ((v8 * v130) >> 16);
          continue;
        case 0x1Eu:
          result = 52;
          v7 += HIWORD(v127);
          v128 <<= 16;
          v127 <<= 16;
          v5 += v128;
          continue;
        case 0x1Fu:
          *a3 = v4;
          v6 = HIDWORD(v4);
          ++a3;
          result = 17;
          v9 = (unsigned __int16)*(_DWORD *)a2;
          v8 = HIWORD(*(_DWORD *)a2);
          continue;
        case 0x20u:
          result = 72;
          v91 = *a3 + v6;
          *a3++ = v91;
          v6 = v91 < v6;
          continue;
        case 0x21u:
          v138 = HIWORD(v140) + v146 * v144 + HIWORD(v139);
          result = 97;
          v140 <<= 16;
          continue;
        case 0x22u:
          v14 = __CFADD__(v5, *a3);
          v5 += *a3;
          *a3++ = v5;
          v59 = v14;
          v7 += v59;
          result = 121;
          v6 = v7;
          continue;
        case 0x23u:
          v73 = *(_DWORD *)a2;
          a2 += 2;
          result = 60;
          v9 = (unsigned __int16)v73;
          v8 = HIWORD(v73);
          v11 = v129 * (unsigned __int16)v73;
          continue;
        case 0x24u:
          a2 += 2;
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          result = 89 - (v131 - 163 * ((unsigned int)(51464 * v131) >> 23));
          break;
        case 0x25u:
          *a3 = v4;
          v6 = HIDWORD(v4);
          ++a3;
          result = 50;
          v9 = (unsigned __int16)*(_DWORD *)a2;
          v8 = HIWORD(*(_DWORD *)a2);
          continue;
        case 0x26u:
          if ( (unsigned int)v4 < v11 )
            ++HIDWORD(v4);
          v14 = __CFADD__((_DWORD)v4, v10);
          LODWORD(v4) = v4 + v10 + v6;
          result = 128;
          v64 = v14;
          HIDWORD(v4) += v64;
          continue;
        case 0x27u:
          result = 78;
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          HIDWORD(v4) = v129 * v8;
          continue;
        case 0x28u:
          v127 = v134 * v133;
          result = 67;
          v7 = HIWORD(v128) + v135 * v133 + ((v134 * v133) >> 16);
          continue;
        case 0x29u:
          v77 = *(_DWORD *)a2;
          a2 += 2;
          result = 119;
          v9 = (unsigned __int16)v77;
          v8 = HIWORD(v77);
          v11 = v129 * (unsigned __int16)v77;
          continue;
        case 0x2Au:
          v128 = v135 * v132;
          v5 = v134 * v132;
          v127 = v134 * v133;
          v7 = v135 * v133;
          result = 47;
          continue;
        case 0x2Bu:
          result = 79;
          v100 = HIWORD(v10) + HIWORD(v11);
          v10 <<= 16;
          HIDWORD(v4) += v100;
          v11 <<= 16;
          continue;
        case 0x2Cu:
          result = 6;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          HIDWORD(v4) = HIWORD(v11) + v129 * v8;
          continue;
        case 0x2Du:
          result = 23;
          if ( v5 < v127 )
            ++v7;
          v14 = __CFADD__(v6, v5);
          v69 = v6 + v5;
          v70 = v14;
          v7 += v70;
          v5 = v69 + *a3;
          continue;
        case 0x2Eu:
          result = 96;
          v131 = 19061;
          continue;
        case 0x2Fu:
          v7 += HIWORD(v127) + HIWORD(v128);
          v128 <<= 16;
          result = 57;
          v127 <<= 16;
          continue;
        case 0x30u:
          v14 = __CFADD__((_DWORD)v4, v11);
          v10 <<= 16;
          LODWORD(v4) = v4 + v11 + v10;
          result = 14;
          v61 = v14;
          HIDWORD(v4) += v61;
          v131 = 16060;
          continue;
        case 0x31u:
          v14 = __CFADD__((_DWORD)v4, v11);
          LODWORD(v4) = v4 + v11;
          result = 81;
          v15 = v14;
          v4 += __PAIR64__(v15, v10);
          continue;
        case 0x32u:
          a2 += 2;
          result = 126;
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          continue;
        case 0x33u:
          *a3 = v4;
          v6 = HIDWORD(v4);
          ++a3;
          result = 5;
          continue;
        case 0x34u:
          result = 91;
          if ( v5 < v128 )
            ++v7;
          v14 = __CFADD__(v5, v127);
          v5 += v127 + v6;
          v71 = v14;
          v7 += v71;
          continue;
        case 0x35u:
          v14 = __CFADD__((_DWORD)v4, *a3);
          LODWORD(v4) = v4 + *a3;
          *a3++ = v4;
          v24 = v14;
          HIDWORD(v4) += v24;
          result = 7;
          v6 = HIDWORD(v4);
          continue;
        case 0x36u:
          a2 += 2;
          v128 = v135 * v132;
          v5 = v134 * v132;
          result = 104;
          v127 = v134 * v133;
          continue;
        case 0x37u:
          if ( v5 < v127 )
            ++v7;
          v14 = __CFADD__(v6, v5);
          v53 = v6 + v5;
          v54 = v14;
          v7 += v54;
          v5 = v53 + *a3;
          result = 156 - (v131 - 89 * ((unsigned int)(47128 * v131) >> 22));
          break;
        case 0x38u:
          v56 = *(_DWORD *)a2;
          a2 += 2;
          result = 122;
          v8 = HIWORD(v56);
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          continue;
        case 0x39u:
          v14 = __CFADD__(v5, v128);
          v28 = v5 + v128;
          v29 = v14;
          result = 129;
          v7 = (__PAIR64__(v7, v28) + __PAIR64__(v29, v127)) >> 32;
          v5 = v28 + v127;
          continue;
        case 0x3Au:
          *a3 = v4;
          result = 108;
          v95 = *(_DWORD *)a2;
          a2 += 2;
          ++a3;
          v9 = (unsigned __int16)v95;
          v8 = HIWORD(v95);
          continue;
        case 0x3Bu:
          v5 = v134 * v132;
          v127 = v134 * v133;
          v7 = HIWORD(v128) + v135 * v133;
          result = 30;
          continue;
        case 0x3Cu:
          result = 13;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          HIDWORD(v4) = HIWORD(v11) + v129 * v8;
          continue;
        case 0x3Du:
          v14 = __CFADD__((_DWORD)v4, v10);
          LODWORD(v4) = v4 + v10;
          result = 53;
          v72 = v14;
          v4 += __PAIR64__(v72, v6);
          continue;
        case 0x3Eu:
          v16 = *a3;
          *a3 = v4;
          if ( (unsigned int)v4 < v16 )
            ++HIDWORD(v4);
          v9 = *a2;
          ++a3;
          result = 56;
          v6 = HIDWORD(v4);
          continue;
        case 0x3Fu:
          *a3 = v4;
          result = 39;
          v55 = *(_DWORD *)a2;
          a2 += 2;
          ++a3;
          v9 = (unsigned __int16)v55;
          v8 = HIWORD(v55);
          continue;
        case 0x40u:
          v11 <<= 16;
          v10 <<= 16;
          v14 = __CFADD__((_DWORD)v4, v11);
          LODWORD(v4) = v4 + v11;
          result = 61;
          v122 = v14;
          HIDWORD(v4) += v122;
          continue;
        case 0x41u:
          result = 49;
          v101 = HIWORD(v10) + HIWORD(v11);
          v10 <<= 16;
          HIDWORD(v4) += v101;
          v11 <<= 16;
          continue;
        case 0x42u:
          if ( (unsigned int)v4 < v11 )
            ++HIDWORD(v4);
          v14 = __CFADD__((_DWORD)v4, v10);
          LODWORD(v4) = v4 + v10 + v6;
          result = 132;
          v126 = v14;
          HIDWORD(v4) += v126;
          continue;
        case 0x43u:
          result = 136;
          v128 <<= 16;
          v127 <<= 16;
          v14 = __CFADD__(v5, v128);
          v5 += v128;
          v75 = v14;
          v7 += v75;
          continue;
        case 0x44u:
          v5 = v134 * v132;
          v127 = v134 * v133;
          v7 = HIWORD(v128) + v135 * v133;
          result = 70;
          continue;
        case 0x45u:
          v79 = *(_DWORD *)a2;
          a2 += 2;
          result = 110;
          v8 = HIWORD(v79);
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          continue;
        case 0x46u:
          result = 18;
          v7 += HIWORD(v127);
          v128 <<= 16;
          v127 <<= 16;
          v5 += v128;
          continue;
        case 0x47u:
          *a3 = v4;
          v6 = HIDWORD(v4);
          ++a3;
          result = 82;
          v9 = (unsigned __int16)*(_DWORD *)a2;
          v8 = HIWORD(*(_DWORD *)a2);
          continue;
        case 0x48u:
          if ( v6 )
            result = 32;
          else
            result = 148;
          break;
        case 0x49u:
          v145 = v141;
          v144 = HIWORD(*(_DWORD *)a2);
          v143 = (unsigned __int16)*(_DWORD *)a2;
          result = 15;
          v146 = v142;
          continue;
        case 0x4Au:
          result = 22;
          v66 = HIWORD(v10) + HIWORD(v11);
          v10 <<= 16;
          HIDWORD(v4) += v66;
          v11 <<= 16;
          continue;
        case 0x4Bu:
          v84 = *a3;
          *a3 = v4;
          if ( (unsigned int)v4 < v84 )
            ++HIDWORD(v4);
          v9 = *a2;
          ++a3;
          result = 69;
          v6 = HIDWORD(v4);
          continue;
        case 0x4Cu:
          result = 43;
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          HIDWORD(v4) = v129 * v8;
          continue;
        case 0x4Du:
          v14 = __CFADD__((_DWORD)v4, v11);
          v10 <<= 16;
          LODWORD(v4) = v4 + v11 + v10;
          result = 137;
          v109 = v14;
          HIDWORD(v4) += v109;
          continue;
        case 0x4Eu:
          result = 86;
          v107 = HIWORD(v10) + HIWORD(v11);
          v10 <<= 16;
          HIDWORD(v4) += v107;
          v11 <<= 16;
          continue;
        case 0x4Fu:
          v14 = __CFADD__((_DWORD)v4, v11);
          LODWORD(v4) = v4 + v11;
          result = 94;
          v34 = v14;
          v4 += __PAIR64__(v34, v10);
          continue;
        case 0x50u:
          if ( (unsigned int)v4 < v11 )
            ++HIDWORD(v4);
          v14 = __CFADD__((_DWORD)v4, v10);
          LODWORD(v4) = v4 + v10 + v6;
          result = 88;
          v99 = v14;
          HIDWORD(v4) += v99;
          continue;
        case 0x51u:
          v14 = __CFADD__(v6, (_DWORD)v4);
          LODWORD(v4) = v6 + v4;
          v47 = v14;
          v4 += __PAIR64__(v47, *a3);
          result = 37;
          continue;
        case 0x52u:
          a2 += 2;
          result = 19;
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          continue;
        case 0x53u:
          v14 = __CFADD__((_DWORD)v4, *a3);
          LODWORD(v4) = v4 + *a3;
          *a3++ = v4;
          v98 = v14;
          HIDWORD(v4) += v98;
          result = 41;
          v6 = HIDWORD(v4);
          continue;
        case 0x54u:
          result = 9;
          v10 = v8 * v130;
          HIDWORD(v4) = HIWORD(v11) + v129 * v8 + ((v8 * v130) >> 16);
          continue;
        case 0x55u:
          v88 = v138;
          if ( v137 < v139 )
            v88 = v138 + 1;
          v89 = __CFADD__(v6, v137);
          v138 = v88 + v89;
          result = 120;
          v137 += v6 + *a3;
          v131 = 24860;
          continue;
        case 0x56u:
          v14 = __CFADD__((_DWORD)v4, v11);
          LODWORD(v4) = v4 + v11;
          result = 100;
          v33 = v14;
          v4 += __PAIR64__(v33, v10);
          continue;
        case 0x57u:
          result = 55;
          v127 <<= 16;
          v14 = __CFADD__(v5, v128);
          v25 = v5 + v128;
          v26 = v14;
          v7 += v26;
          v5 = v25 + v127;
          v131 = 5280;
          continue;
        case 0x58u:
          v114 = *a3;
          if ( (unsigned int)v4 < v6 )
            ++HIDWORD(v4);
          result = 118;
          v14 = __CFADD__((_DWORD)v4, v114);
          LODWORD(v4) = v4 + v114;
          v115 = v14;
          HIDWORD(v4) += v115;
          v6 = HIDWORD(v4);
          continue;
        case 0x59u:
          result = 138;
          --a1;
          continue;
        case 0x5Au:
          a2 += 2;
          v128 = v135 * v132;
          v5 = v134 * v132;
          v127 = v134 * v133;
          result = 134 - (v131 - 89 * ((unsigned int)(47128 * v131) >> 22));
          break;
        case 0x5Bu:
          v123 = *a3;
          if ( v5 < v6 )
            v124 = v7 + 1;
          else
            v124 = v7;
          result = 27;
          v14 = __CFADD__(v5, v123);
          v5 += v123;
          v125 = v14;
          v7 = v125 + v124;
          v6 = v7;
          continue;
        case 0x5Cu:
          v7 += HIWORD(v127) + HIWORD(v128);
          v128 <<= 16;
          result = 144;
          v127 <<= 16;
          continue;
        case 0x5Du:
          v127 = v134 * v133;
          result = 99;
          v7 = HIWORD(v128) + v135 * v133 + ((v134 * v133) >> 16);
          continue;
        case 0x5Eu:
          v14 = __CFADD__(v6, (_DWORD)v4);
          LODWORD(v4) = v6 + v4;
          v62 = v14;
          v4 += __PAIR64__(v62, *a3);
          result = 71;
          continue;
        case 0x5Fu:
          result = 89;
          v78 = *a3 + v6;
          *a3++ = v78;
          v6 = v78 < v6;
          continue;
        case 0x60u:
          v27 = v131 - 29 * ((unsigned int)(36158 * v131) >> 20);
          if ( a1 <= 7 )
            result = 12 - v27;
          else
            result = 120 - v27;
          break;
        case 0x61u:
          v139 <<= 16;
          v35 = __CFADD__(v140, v137);
          v138 += v35;
          result = 85;
          v137 += v140 + v139;
          continue;
        case 0x62u:
          *a3++ = v5;
          v85 = *(_DWORD *)a2;
          a2 += 2;
          v132 = (unsigned __int16)v85;
          result = 42;
          v133 = HIWORD(v85);
          continue;
        case 0x63u:
          result = 140;
          v128 <<= 16;
          v127 <<= 16;
          v14 = __CFADD__(v5, v128);
          v5 += v128;
          v76 = v14;
          v7 += v76;
          continue;
        case 0x64u:
          v14 = __CFADD__(v6, (_DWORD)v4);
          LODWORD(v4) = v6 + v4;
          v58 = v14;
          v4 += __PAIR64__(v58, *a3);
          result = 31;
          continue;
        case 0x65u:
          v128 = v135 * v132;
          v5 = v134 * v132;
          v127 = v134 * v133;
          v7 = v135 * v133;
          result = 92;
          continue;
        case 0x66u:
          v110 = *(_DWORD *)a2;
          a2 += 2;
          result = 134;
          v9 = (unsigned __int16)v110;
          v8 = HIWORD(v110);
          v11 = v129 * (unsigned __int16)v110;
          continue;
        case 0x67u:
          v11 <<= 16;
          v10 <<= 16;
          v14 = __CFADD__((_DWORD)v4, v11);
          LODWORD(v4) = v4 + v11;
          result = 106;
          v38 = v14;
          HIDWORD(v4) += v38;
          continue;
        case 0x68u:
          result = 143;
          v7 = HIWORD(v128) + v135 * v133 + HIWORD(v127);
          v128 <<= 16;
          continue;
        case 0x69u:
          result = 87;
          v7 = HIWORD(v128) + v135 * v133 + HIWORD(v127);
          v128 <<= 16;
          continue;
        case 0x6Au:
          v14 = __CFADD__((_DWORD)v4, v10);
          LODWORD(v4) = v4 + v10;
          result = 83;
          v43 = v14;
          v4 += __PAIR64__(v43, v6);
          continue;
        case 0x6Bu:
          v65 = *(_DWORD *)a2;
          a2 += 2;
          v133 = HIWORD(v65);
          v132 = (unsigned __int16)v65;
          result = 68;
          v128 = v135 * (unsigned __int16)v65;
          continue;
        case 0x6Cu:
          result = 65;
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          HIDWORD(v4) = v129 * v8;
          continue;
        case 0x6Du:
          result = 77;
          v21 = (unsigned __int64)v11 >> 16;
          v11 <<= 16;
          HIDWORD(v4) = v21 + v129 * v8 + HIWORD(v10);
          continue;
        case 0x6Eu:
          result = 64;
          v10 = v8 * v130;
          HIDWORD(v4) = HIWORD(v11) + v129 * v8 + ((v8 * v130) >> 16);
          continue;
        case 0x6Fu:
          if ( (unsigned int)v4 < v10 )
            ++HIDWORD(v4);
          v14 = __CFADD__(v6, (_DWORD)v4);
          LODWORD(v4) = v6 + v4;
          result = 62;
          v102 = v14;
          HIDWORD(v4) += v102;
          LODWORD(v4) = v4 + *a3;
          continue;
        case 0x70u:
          v134 = v141;
          v133 = HIWORD(*(_DWORD *)a2);
          v132 = (unsigned __int16)*(_DWORD *)a2;
          result = 90;
          v135 = v142;
          v131 = 26017;
          continue;
        case 0x71u:
          v44 = *a3;
          *a3 = v4;
          if ( (unsigned int)v4 < v44 )
            ++HIDWORD(v4);
          v9 = *a2;
          ++a3;
          result = 0;
          v6 = HIDWORD(v4);
          continue;
        case 0x72u:
          v14 = __CFADD__(v6, v5);
          v86 = v6 + v5;
          v87 = v14;
          v7 = (__PAIR64__(v7, *a3) + __PAIR64__(v87, v86)) >> 32;
          v5 = *a3 + v86;
          result = 124;
          continue;
        case 0x73u:
          result = 96;
          a1 -= 8;
          v131 = 6156;
          continue;
        case 0x74u:
          v119 = *(_DWORD *)a2;
          a2 += 2;
          v133 = HIWORD(v119);
          v128 = v135 * v132;
          v5 = v134 * v132;
          result = 93;
          continue;
        case 0x75u:
          v14 = __CFADD__((_DWORD)v4, v11);
          v10 <<= 16;
          LODWORD(v4) = v4 + v11 + v10;
          result = 130;
          v93 = v14;
          HIDWORD(v4) += v93;
          continue;
        case 0x76u:
          *a3 = v4;
          result = 21;
          v63 = *(_DWORD *)a2;
          a2 += 2;
          ++a3;
          v9 = (unsigned __int16)v63;
          v8 = HIWORD(v63);
          continue;
        case 0x77u:
          result = 131;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          HIDWORD(v4) = HIWORD(v11) + v129 * v8;
          continue;
        case 0x78u:
          v121 = v138;
          if ( v137 < *a3 )
            v121 = v138 + 1;
          *a3 = v137;
          v138 = v121;
          v6 = v121;
          ++a3;
          result = 173 - (v131 - 163 * ((unsigned int)(51464 * v131) >> 23));
          break;
        case 0x79u:
          v50 = *(_DWORD *)a2;
          a2 += 2;
          v133 = HIWORD(v50);
          v132 = (unsigned __int16)v50;
          result = 59;
          v128 = v135 * (unsigned __int16)v50;
          continue;
        case 0x7Au:
          result = 142;
          v10 = v8 * v130;
          HIDWORD(v4) = HIWORD(v11) + v129 * v8 + ((v8 * v130) >> 16);
          continue;
        case 0x7Bu:
          v30 = *a3;
          if ( v5 < v6 )
            v31 = v7 + 1;
          else
            v31 = v7;
          result = 98;
          v14 = __CFADD__(v5, v30);
          v5 += v30;
          v32 = v14;
          v7 = v32 + v31;
          v6 = v7;
          continue;
        case 0x7Cu:
          *a3 = v5;
          v6 = v7;
          ++a3;
          result = 115;
          continue;
        case 0x7Du:
          v14 = __CFADD__((_DWORD)v4, v10);
          LODWORD(v4) = v4 + v10;
          result = 28;
          v106 = v14;
          v4 += __PAIR64__(v106, v6);
          continue;
        case 0x7Eu:
          result = 48;
          v83 = (unsigned __int64)v11 >> 16;
          v11 <<= 16;
          HIDWORD(v4) = v83 + v129 * v8 + HIWORD(v10);
          continue;
        case 0x7Fu:
          v94 = *a3;
          *a3 = v5;
          if ( v5 < v94 )
            ++v7;
          result = 116;
          v6 = v7;
          v132 = *a2;
          ++a3;
          continue;
        case 0x80u:
          v81 = *a3;
          if ( (unsigned int)v4 < v6 )
            ++HIDWORD(v4);
          result = 58;
          v14 = __CFADD__((_DWORD)v4, v81);
          LODWORD(v4) = v4 + v81;
          v82 = v14;
          HIDWORD(v4) += v82;
          v6 = HIDWORD(v4);
          continue;
        case 0x81u:
          v14 = __CFADD__(v6, v5);
          v17 = v6 + v5;
          v18 = v14;
          v7 = (__PAIR64__(v7, *a3) + __PAIR64__(v18, v17)) >> 32;
          v5 = *a3 + v17;
          result = 147;
          continue;
        case 0x82u:
          if ( (unsigned int)v4 < v10 )
            ++HIDWORD(v4);
          v14 = __CFADD__(v6, (_DWORD)v4);
          LODWORD(v4) = v6 + v4;
          result = 113;
          v45 = v14;
          HIDWORD(v4) += v45;
          LODWORD(v4) = v4 + *a3;
          continue;
        case 0x83u:
          v11 <<= 16;
          HIDWORD(v4) += HIWORD(v10);
          LODWORD(v4) = v4 + v11;
          v10 <<= 16;
          result = 24;
          continue;
        case 0x84u:
          v117 = *a3;
          if ( (unsigned int)v4 < v6 )
            ++HIDWORD(v4);
          result = 63;
          v14 = __CFADD__((_DWORD)v4, v117);
          LODWORD(v4) = v4 + v117;
          v118 = v14;
          HIDWORD(v4) += v118;
          v6 = HIDWORD(v4);
          continue;
        case 0x85u:
          *a3 = v4;
          result = 76;
          v20 = *(_DWORD *)a2;
          a2 += 2;
          ++a3;
          v9 = (unsigned __int16)v20;
          v8 = HIWORD(v20);
          continue;
        case 0x86u:
          result = 11;
          LODWORD(v4) = v9 * v130;
          v10 = v8 * v130;
          HIDWORD(v4) = HIWORD(v11) + v129 * v8;
          continue;
        case 0x87u:
          v14 = __CFADD__((_DWORD)v4, *a3);
          LODWORD(v4) = v4 + *a3;
          *a3++ = v4;
          v19 = v14;
          HIDWORD(v4) += v19;
          result = 102;
          v6 = HIDWORD(v4);
          continue;
        case 0x88u:
          result = 34;
          v14 = __CFADD__(v5, v127);
          v36 = v5 + v127;
          v37 = v14;
          v7 = (__PAIR64__(v7, v36) + __PAIR64__(v37, v6)) >> 32;
          v5 = v36 + v6;
          continue;
        case 0x89u:
          if ( (unsigned int)v4 < v10 )
            ++HIDWORD(v4);
          v14 = __CFADD__(v6, (_DWORD)v4);
          LODWORD(v4) = v6 + v4;
          result = 75;
          v108 = v14;
          HIDWORD(v4) += v108;
          LODWORD(v4) = v4 + *a3;
          continue;
        case 0x8Au:
          v13 = 26490;
          if ( a1 )
            result = 73;
          else
            result = 20;
          goto LABEL_2;
        case 0x8Bu:
          v92 = *(_DWORD *)a2;
          a2 += 2;
          result = 29;
          v8 = HIWORD(v92);
          v11 = v129 * v9;
          LODWORD(v4) = v9 * v130;
          continue;
        case 0x8Cu:
          result = 16;
          v14 = __CFADD__(v5, v127);
          v41 = v5 + v127;
          v42 = v14;
          v7 = (__PAIR64__(v7, v41) + __PAIR64__(v42, v6)) >> 32;
          v5 = v41 + v6;
          continue;
        case 0x8Du:
          v14 = __CFADD__((_DWORD)v4, v11);
          v10 <<= 16;
          LODWORD(v4) = v4 + v11 + v10;
          result = 111;
          v52 = v14;
          HIDWORD(v4) += v52;
          continue;
        case 0x8Eu:
          v11 <<= 16;
          v10 <<= 16;
          v14 = __CFADD__((_DWORD)v4, v11);
          LODWORD(v4) = v4 + v11;
          result = 125;
          v120 = v14;
          HIDWORD(v4) += v120;
          continue;
        case 0x8Fu:
          result = 45;
          v127 <<= 16;
          v14 = __CFADD__(v5, v128);
          v22 = v5 + v128;
          v23 = v14;
          v7 += v23;
          v5 = v22 + v127;
          continue;
        case 0x90u:
          v14 = __CFADD__(v5, v128);
          v39 = v5 + v128;
          v40 = v14;
          result = 114;
          v7 = (__PAIR64__(v7, v39) + __PAIR64__(v40, v127)) >> 32;
          v5 = v39 + v127;
          continue;
        case 0x91u:
          v112 = *a3;
          if ( (unsigned int)v4 < v6 )
            ++HIDWORD(v4);
          result = 133;
          v14 = __CFADD__((_DWORD)v4, v112);
          LODWORD(v4) = v4 + v112;
          v113 = v14;
          HIDWORD(v4) += v113;
          v6 = HIDWORD(v4);
          continue;
        case 0x92u:
          result = 36;
          v130 = v141;
          v9 = (unsigned __int16)*(_DWORD *)a2;
          v8 = HIWORD(*(_DWORD *)a2);
          v129 = v142;
          v131 = 5791;
          continue;
        case 0x93u:
          *a3 = v5;
          v6 = v7;
          ++a3;
          v132 = (unsigned __int16)*(_DWORD *)a2;
          result = 54;
          v133 = HIWORD(*(_DWORD *)a2);
          continue;
        default:
          goto LABEL_3;
      }
      break;
    }
  }
  return result;
}
