int __fastcall sub_1047C(int a1, int a2, int a3)
{
  int *v4; // r0
  unsigned int v5; // r9
  int v6; // r1
  __int64 *v7; // r10
  int v8; // r5
  int v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r6
  char *v16; // r0
  int v17; // r7
  unsigned int v18; // r2
  unsigned int v19; // r2
  char *v20; // r0
  int v21; // r7
  unsigned int v22; // r1
  int v23; // r11
  unsigned int v24; // r0
  unsigned int v25; // r0
  __int64 v26; // kr00_8
  unsigned int v27; // r1
  int v28; // r3
  int v29; // r4
  int v30; // r0
  __int16 v31; // r6
  int v32; // r7
  int v33; // r8
  int v34; // r5
  int v35; // r0
  __int16 v36; // r6
  int v37; // r7
  int v38; // r4
  int v39; // r2
  int v40; // r0
  int v41; // r6
  int v42; // r0
  int v43; // r7
  __int16 v44; // r5
  unsigned int v45; // r4
  int v46; // r0
  unsigned int v47; // r2
  _BYTE *v48; // r6
  _BYTE *v49; // r2
  int v50; // r4
  __int64 v51; // kr08_8
  int v52; // r0
  _QWORD *v53; // r4
  char *v54; // r1
  int v55; // r6
  unsigned int v56; // r3
  int v57; // r6
  char *v58; // r0
  int v59; // r0
  char *v60; // r3
  char *v61; // r1
  int v62; // r6
  unsigned int v63; // r3
  char *v64; // r0
  char v65; // r3
  char *v66; // r0
  unsigned int v67; // r7
  void *v68; // r3
  void *v69; // r2
  int result; // r0
  int v71; // [sp+3Ch] [bp-1ACh]
  int v72; // [sp+40h] [bp-1A8h]
  int v73; // [sp+44h] [bp-1A4h]
  int v74; // [sp+48h] [bp-1A0h]
  unsigned int v75; // [sp+4Ch] [bp-19Ch]
  _QWORD *v76; // [sp+50h] [bp-198h]
  int *v77; // [sp+54h] [bp-194h]
  int v78; // [sp+58h] [bp-190h]
  int v79; // [sp+5Ch] [bp-18Ch]
  _BYTE *v80; // [sp+60h] [bp-188h]
  int v81; // [sp+64h] [bp-184h]
  _DWORD v82[64]; // [sp+68h] [bp-180h]
  unsigned int v83; // [sp+168h] [bp-80h] BYREF
  __int16 v84; // [sp+16Ch] [bp-7Ch]
  int v85; // [sp+170h] [bp-78h]
  int v86; // [sp+174h] [bp-74h]
  int v87; // [sp+178h] [bp-70h]
  int v88; // [sp+17Ch] [bp-6Ch]
  int v89; // [sp+180h] [bp-68h]
  bool v90; // [sp+184h] [bp-64h]
  int v91; // [sp+188h] [bp-60h]
  int v92; // [sp+18Ch] [bp-5Ch] BYREF
  int v93; // [sp+190h] [bp-58h]
  char v94[28]; // [sp+194h] [bp-54h] BYREF
  char v95; // [sp+1B0h] [bp-38h]
  int v96; // [sp+1C0h] [bp-28h]

  v74 = a2;
  v4 = *(int **)(dword_11034 + dword_11030 + 66706);
  v76 = (_QWORD *)a3;
  v72 = a1;
  v96 = *v4;
  v91 = 0;
  ((void (__fastcall *)(char *, int, int))unk_7FBC)(v94, dword_11038 + dword_11030 + 66706, 43);
  v5 = -190560642;
  v79 = 4727;
  v6 = 1;
  v7 = (_QWORD *)&dword_C908;
  v8 = dword_11040;
  v71 = *(_DWORD *)(dword_11040 + dword_11030 + 66706);
  v77 = (int *)dword_11040;
  v78 = dword_11040;
  v73 = dword_11040;
  while ( 1 )
  {
LABEL_8:
    v15 = v8;
    if ( !v6 )
    {
      v14 = 13;
LABEL_7:
      while ( 2 )
      {
        v6 = 2;
        switch ( v14 )
        {
          case 0:
            v5 = 1358954496;
            v95 ^= 0x2Bu;
            v79 = 11013;
            v14 = 3;
            continue;
          case 1:
            v16 = &v94[v5];
            v17 = v79;
            v18 = 51464 * v79;
            v16[22] = v94[v5 + 22] ^ v5 ^ 0x3A;
            v16[35] = v94[v5 + 35] ^ v5 ^ 0x2E;
            v19 = v17 - 163 * (v18 >> 23);
            v16[39] = v94[v5 + 39] ^ (v5 + 125);
            v94[(2 * v5) ^ 0x29] ^= 2 * v5 + 32;
            v5 = (4 * v5) & 0x3FEDD808;
            v79 = 8660 - v19;
            v14 = 107 - v19;
            continue;
          case 2:
            v90 = v77[6] != 0;
            v14 = 14;
            v89 = a1;
            goto LABEL_6;
          case 3:
            v20 = &v94[v5];
            v21 = v79;
            *(v20 - 1358954473) = v94[v5 - 1358954473] ^ (v5 + 32);
            *(v20 - 1358954462) = v94[v5 - 1358954462] ^ (v5 + 107);
            v94[v5 ^ 0x51000019] ^= (_BYTE)v5 + 74;
            v94[v5 ^ 0x5100000A] ^= (unsigned __int8)v5 ^ 0x2B;
            *(v20 - 1358954458) = v94[v5 - 1358954458] ^ v5 ^ 0x3E;
            v22 = v21 - 163 * ((unsigned int)(51464 * v21) >> 23);
            *(v20 - 1358954454) = v94[v5 - 1358954454] ^ v5 ^ 0x4E;
            *(v20 - 1358954465) = v94[v5 - 1358954465] ^ v5 ^ 0x28;
            v79 = 10616 - v22;
            v14 = 101 - v22;
            continue;
          case 4:
            v14 = 6;
            if ( v78 < v73 )
              v14 = 11;
            continue;
          case 5:
            v94[v5 ^ 0x51000013] ^= (unsigned __int8)v5 ^ 0x5A;
            v5 *= 64 * v5;
            v94[v5 | 0x12] ^= (unsigned __int8)v5 | 0x22;
            v94[v5 | 0x20] ^= (unsigned __int8)v5 | 0x31;
            v14 = 12;
            continue;
          case 6:
            v14 = 8;
            continue;
          case 7:
            v90 = v77[6] != 0;
            v14 = 4;
            v89 = a1;
LABEL_6:
            v78 = 0;
            continue;
          case 8:
            v23 = 18035;
            v93 = 0;
            v75 = 4 * v5;
            v24 = 10;
            v81 = 2;
            v80 = (_BYTE *)&unk_2;
            while ( 2 )
            {
              switch ( v24 )
              {
                case 0u:
LABEL_45:
                  v6 = -1516369699;
                  v93 = -1516369697;
                  v24 = 2;
                  continue;
                case 1u:
                  v5 = v82[v81];
                  v6 = 20855;
                  ++v81;
                  v25 = -5 * ((unsigned int)(52429 * v23) >> 18) + v23;
                  v23 = 20855 - v25;
                  v24 = 18 - v25;
                  continue;
                case 2u:
                  v26 = ((__int64 (__fastcall *)(int, unsigned int, _DWORD))unk_8208)(
                          v89,
                          v5,
                          *(_DWORD *)(*(_DWORD *)(v8 + dword_11044 + 67546) + 452));
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  *v7++ = v26;
                  v23 = 22915;
                  v24 = 17;
                  continue;
                case 3u:
LABEL_50:
                  v24 = 11;
                  continue;
                case 4u:
                  v24 = 27;
                  v23 = 18958;
                  if ( !v90 )
                    v24 = 23;
                  v7 = (__int64 *)(*(_DWORD *)(a1 + 4) + 4 * ((unsigned __int16)v83 - HIWORD(v83)));
                  goto LABEL_20;
                case 5u:
LABEL_44:
                  v24 = 19;
                  continue;
                case 6u:
                  v24 = 10;
                  v27 = v83;
                  v28 = *(_DWORD *)(a1 + 4);
                  if ( !v90 )
                    v24 = 19;
                  goto LABEL_69;
                case 7u:
                  v29 = v85;
                  v92 = 0;
                  v30 = ((int (__fastcall *)(int, int))unk_8004)(36, v6);
                  v31 = v83;
                  v32 = v30;
                  *(_DWORD *)(v30 + 4) = ((int (__fastcall *)(int))unk_8004)(4 * (unsigned __int16)v83);
                  a1 = v32;
                  ((void (*)(void))unk_7FB0)();
                  v80 = (_BYTE *)(v29 + 1);
                  *(_WORD *)(v32 + 32) = v31;
                  v24 = 6;
                  continue;
                case 8u:
                  goto LABEL_72;
                case 9u:
                  v23 = 1824;
                  v24 = 17;
                  v5 = 0;
                  continue;
                case 0xAu:
                  v33 = v8;
                  v92 = 0;
                  v34 = v85;
                  v35 = ((int (__fastcall *)(int, int))unk_8004)(36, v6);
                  v36 = v83;
                  v37 = v35;
                  *(_DWORD *)(v35 + 4) = ((int (__fastcall *)(int))unk_8004)(4 * (unsigned __int16)v83);
                  ((void (*)(void))unk_7FB0)();
                  v80 = (_BYTE *)(v34 + 1);
                  v8 = v33;
                  *(_WORD *)(v37 + 32) = v36;
                  a1 = v37;
                  v24 = 30;
                  continue;
                case 0xBu:
                  *(_DWORD *)v7 = ((int (__fastcall *)(int, unsigned int, _DWORD))unk_81FC)(
                                    v89,
                                    v5,
                                    *(_DWORD *)(*(_DWORD *)(v8 + dword_1107C + 67762) + 428));
                  v7 = (__int64 *)((char *)v7 + 4);
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  v23 = 20164;
                  v24 = 17;
                  continue;
                case 0xCu:
                  *(_DWORD *)v7 = ((int (__fastcall *)(int, unsigned int, _DWORD))unk_81FC)(
                                    v89,
                                    v5,
                                    *(_DWORD *)(*(_DWORD *)(v8 + dword_11054 + 67804) + 424));
                  v7 = (__int64 *)((char *)v7 + 4);
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  v23 = 9946;
                  v24 = 17;
                  continue;
                case 0xDu:
                  v38 = v81;
                  *(_DWORD *)v7 = v82[v81];
                  v7 = (__int64 *)((char *)v7 + 4);
                  ((void (__fastcall *)(int *))unk_BDF4)(&v92);
                  v81 = v38 + 1;
                  v24 = 9;
                  continue;
                case 0xEu:
                  goto LABEL_73;
                case 0xFu:
LABEL_46:
                  v24 = 24;
                  continue;
                case 0x10u:
                  *(_DWORD *)v7 = ((int (__fastcall *)(int, unsigned int, _DWORD))unk_8214)(
                                    v89,
                                    v5,
                                    *(_DWORD *)(*(_DWORD *)(v8 + dword_11048 + 67872) + 440)) != 0;
                  v7 = (__int64 *)((char *)v7 + 4);
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  v23 = 26190;
                  v24 = 17;
                  continue;
                case 0x11u:
                  v39 = 122;
                  v6 = v23 - 131 * ((unsigned int)(64036 * v23) >> 23);
                  if ( !*v80 )
                    v39 = 154;
                  v24 = v39 - v6;
                  v23 = 29151 - v6;
                  continue;
                case 0x12u:
                  v6 = (int)(v80 + 1);
                  v40 = (unsigned __int8)*v80++;
                  if ( v40 <= 89 )
                  {
                    switch ( v40 )
                    {
                      case 'B':
                        goto LABEL_43;
                      case 'C':
                        goto LABEL_44;
                      case 'D':
                        goto LABEL_45;
                      case 'F':
                        goto LABEL_46;
                      case 'I':
                        goto LABEL_47;
                      case 'J':
                        goto LABEL_48;
                      case 'L':
                        goto LABEL_49;
                      case 'S':
                        goto LABEL_50;
                      default:
                        goto LABEL_73;
                    }
                  }
                  if ( v40 == 90 )
                  {
LABEL_72:
                    v24 = 16;
                  }
                  else
                  {
LABEL_73:
                    v93 = -1165510720;
                    v24 = 23;
                    v6 = -1165508860;
                    v23 = 2244;
                  }
                  continue;
                case 0x13u:
                  *(_DWORD *)v7 = ((int (__fastcall *)(int, unsigned int, _DWORD))unk_8220)(
                                    v89,
                                    v5,
                                    *(_DWORD *)(*(_DWORD *)(v8 + dword_11058 + 68096) + 432));
                  v7 = (__int64 *)((char *)v7 + 4);
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  v23 = 12697;
                  v24 = 17;
                  continue;
                case 0x14u:
LABEL_47:
                  v24 = 12;
                  continue;
                case 0x15u:
                  *(_DWORD *)v7 = ((int (__fastcall *)(int, unsigned int, _DWORD))unk_81FC)(
                                    v89,
                                    v5,
                                    *(_DWORD *)(*(_DWORD *)(v8 + dword_11078 + 68138) + 428));
                  v7 = (__int64 *)((char *)v7 + 4);
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  v23 = 24356;
                  v24 = 17;
                  continue;
                case 0x16u:
                  v41 = v85;
                  v92 = 0;
                  v42 = ((int (__fastcall *)(int, int))unk_8004)(36, v6);
                  v43 = v8;
                  v44 = v83;
                  a1 = v42;
                  *(_DWORD *)(v42 + 4) = ((int (__fastcall *)(int))unk_8004)(4 * (unsigned __int16)v83);
                  ((void (*)(void))unk_7FB0)();
                  *(_WORD *)(a1 + 32) = v44;
                  v80 = (_BYTE *)(v41 + 1);
                  v8 = v43;
                  v24 = 4;
                  continue;
                case 0x17u:
                  v45 = v23 - 61 * ((unsigned int)(34380 * v23) >> 21);
                  v46 = v89;
                  do
                  {
                    __dmb(0xBu);
                    do
                      v47 = __ldrex((unsigned int *)(dword_1105C + 68262 + dword_11060));
                    while ( !v47 && __strex(1u, (unsigned int *)(dword_11064 + 68278 + dword_11060 + 4)) );
                    __dmb(0xBu);
                  }
                  while ( v47 == 1 );
                  if ( v47 != 2 )
                  {
                    v48 = (_BYTE *)(dword_1106C + dword_11068 + 68310);
                    v49 = (_BYTE *)(dword_11070 + dword_11068 + 68310);
                    v49[19] = v48[19] ^ 0xB;
                    v49[4] = v48[4] ^ 0x14;
                    v49[14] = v48[14] ^ 0x67;
                    v49[9] = v48[9] ^ 0x14;
                    v49[2] = v48[2] ^ 0x20;
                    *v49 = *v48 ^ 4;
                    v49[3] = v48[3] ^ 0x53;
                    v49[11] = v48[11] ^ 0x22;
                    v49[15] = v48[15] ^ 9;
                    v49[12] = v48[12] ^ 0x77;
                    v49[13] = v48[13] ^ 0x73;
                    v49[8] = v48[8] ^ 0x56;
                    v49[18] = v48[18] ^ 0x55;
                    v49[17] = v48[17] ^ 0x1C;
                    v49[7] = v48[7] ^ 0x13;
                    v49[5] = v48[5] ^ 0x2A;
                    v49[16] = v48[16] ^ 0x53;
                    v49[1] = v48[1] ^ 0x58;
                    v49[10] = v48[10] ^ 0xA;
                    v49[6] = v48[6] ^ 0x7C;
                    *(_DWORD *)(dword_11060 + dword_11068 + 68310 + 4) = 2;
                  }
                  (*(void (__fastcall **)(int, int))(*(_DWORD *)v46 + 72))(v46, dword_11070 + dword_11074 + 68504);
                  v23 = 7636 - v45;
                  v24 = 65 - v45;
                  continue;
                case 0x18u:
                  v50 = ((int (__fastcall *)(int, unsigned int, _DWORD))unk_822C)(
                          v89,
                          v5,
                          *(_DWORD *)(*(_DWORD *)(v8 + dword_1103C + 68530) + 448));
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  *(_DWORD *)v7 = v50;
                  v7 = (__int64 *)((char *)v7 + 4);
                  v23 = 18068;
                  v24 = 17;
                  continue;
                case 0x19u:
                  *(_DWORD *)v7 = v5;
                  v7 = (__int64 *)((char *)v7 + 4);
                  ((void (__fastcall *)(int *, unsigned int))unk_BDF4)(&v92, v5);
                  v23 = 24618;
                  v24 = 17;
                  continue;
                case 0x1Au:
                  *(_DWORD *)v7 = ((int (__fastcall *)(int, unsigned int, _DWORD))unk_81FC)(
                                    v89,
                                    v5,
                                    *(_DWORD *)(*(_DWORD *)(v8 + dword_11050 + 68594) + 436));
                  v7 = (__int64 *)((char *)v7 + 4);
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  v23 = 17151;
                  v24 = 17;
                  continue;
                case 0x1Bu:
LABEL_49:
                  v6 = -1225189750;
                  v93 = -1225189741;
                  v24 = 25;
                  continue;
                case 0x1Cu:
                  v51 = ((__int64 (__fastcall *)(int, unsigned int, _DWORD))unk_8238)(
                          v89,
                          v5,
                          *(_DWORD *)(*(_DWORD *)(v8 + dword_1104C + 68636) + 444));
                  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v89 + 92))(v89, v5);
                  *v7++ = v51;
                  v23 = 14269;
                  v24 = 17;
                  continue;
                case 0x1Du:
                  ((void (__fastcall *)(int, int))unk_7FE0)(a1, v6);
                  ((void (__fastcall *)(int *))unk_BAE0)(&v92);
                  v6 = 157 - v23;
                  v24 = 157 - v23 + 137 * ((unsigned int)(61231 * v23) >> 23);
                  continue;
                case 0x1Eu:
                  v24 = 9;
                  v27 = v83;
                  v28 = *(_DWORD *)(a1 + 4);
                  if ( !v90 )
                    v24 = 13;
LABEL_69:
                  v7 = (__int64 *)(v28 + 4 * ((unsigned __int16)v27 - HIWORD(v27)));
LABEL_20:
                  v6 = 0;
                  v81 = 0;
                  continue;
                case 0x1Fu:
LABEL_43:
                  v24 = 26;
                  continue;
                case 0x20u:
LABEL_48:
                  v24 = 28;
                  continue;
                case 0x21u:
                  v52 = v86;
                  *(_DWORD *)(a1 + 28) = v89;
                  *(_DWORD *)a1 = v52 + 16;
                  v53 = v76;
                  ((void (__fastcall *)(int, unsigned int *, _QWORD *, int))unk_8190)(a1, &v83, v76, v92);
                  *v53 = *(_QWORD *)(a1 + 8);
                  ((void (__fastcall *)(_DWORD))unk_7FE0)(*(_DWORD *)(a1 + 4));
                  v23 = 8891;
                  v24 = 29;
                  continue;
                case 0x22u:
                  a1 = v72;
                  v5 = v75 & 0xD133B128;
                  v14 = 18;
                  v7 = (_QWORD *)&dword_C908;
                  goto LABEL_7;
                default:
                  continue;
              }
            }
          case 9:
            v54 = &v94[v5];
            v55 = v79;
            v56 = 51464 * v79;
            *(v54 - 1358954467) = v94[v5 - 1358954467] ^ v5 ^ 0x5C;
            *(v54 - 1358954460) = v94[v5 - 1358954460] ^ v5 ^ 0x22;
            v94[v5 ^ 0x51000005] ^= (unsigned __int8)v5 ^ 0x20;
            *(v54 - 1358954459) = v94[v5 - 1358954459] ^ v5 ^ 0x5A;
            v94[v5 ^ 0x51000018] ^= (_BYTE)v5 + 78;
            v14 = 97 - v55 + 163 * (v56 >> 23);
            v94[v5 ^ 0x51000015] ^= v5 + 125;
            *(v54 - 1358954489) = v94[v5 - 1358954489] ^ (v5 + 74);
            continue;
          case 10:
            LOWORD(v83) = v77[3];
            HIWORD(v83) = v77[4];
            v84 = v77[5];
            v85 = v77[7];
            v86 = v77[2];
            v87 = *v77;
            v88 = v77[1];
            v14 = 2;
            continue;
          case 11:
            v57 = v78;
            v82[v57] = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 692))(a1, v74, v78);
            v14 = 14;
            continue;
          case 12:
            v58 = &v94[v5];
            v58[40] = v94[v5 + 40] ^ (v5 + 58);
            v58[3] = v94[v5 + 3] ^ (v5 + 125);
            v59 = (v5 * v5) ^ 2;
            v60 = &v94[v5 * v5];
            v5 *= v5;
            v94[v59] ^= (unsigned __int8)v5 ^ 0x3E;
            v94[v5 ^ 8] ^= (unsigned __int8)v5 ^ 0x34;
            v94[v5] ^= (unsigned __int8)v5 ^ 0x22;
            v60[6] ^= (_BYTE)v5 + 78;
            v79 = 2048;
            v14 = 1;
            continue;
          case 13:
            LOWORD(v83) = v77[3];
            HIWORD(v83) = v77[4];
            v84 = v77[5];
            v85 = v77[7];
            v86 = v77[2];
            v87 = *v77;
            v88 = v77[1];
            v14 = 7;
            continue;
          case 14:
            v5 += 912275189;
            ++v78;
            v14 = 4;
            continue;
          case 15:
            v61 = &v94[v5];
            v62 = v79;
            v63 = 51464 * v79;
            v61[13] = v94[v5 + 13] ^ v5 ^ 0x28;
            v61[1] = v94[v5 + 1] ^ (v5 + 90);
            v94[v5 ^ 0x11] ^= (unsigned __int8)v5 ^ 0x2E;
            v94[v5 ^ 0xE] ^= (_BYTE)v5 + 49;
            v14 = 108 - v62 + 163 * (v63 >> 23);
            v61[16] = (v5 + 107) ^ v94[v5 + 16];
            v5 ^= 0xA308C18F;
            continue;
          case 16:
            v94[(v5 - 1867007753) ^ 0x33C07A82] ^= (unsigned __int8)(v5 - 9) ^ 0xBC;
            v64 = &v94[v5];
            v64[1559707279] = v94[v5 + 1559707279] ^ (v5 - 44);
            v64[1559707258] = v94[v5 + 1559707258] ^ (v5 - 44);
            v64[1559707275] = v94[v5 + 1559707275] ^ (v5 - 9) ^ 0xB2;
            v65 = v5 - 51;
            v5 -= 1867007753;
            v94[v5 ^ 0x33C07A8D] ^= v65;
            v94[v5 ^ 0x33C07A92] ^= (unsigned __int8)v5 ^ 0xB8;
            v79 = 13784;
            v14 = 17;
            continue;
          case 17:
            v66 = &v94[v5];
            *(v66 - 868252282) = v94[v5 - 868252282] ^ (v5 - 35);
            *(v66 - 868252267) = v94[v5 - 868252267] ^ v5 ^ 0xE5;
            *(v66 - 868252279) = v94[v5 - 868252279] ^ v5 ^ 0xE3;
            v67 = 51464 * v79;
            v94[v5 - 868252261] ^= (_BYTE)v5 - 33;
            v68 = (void *)(v5 + 1541234421);
            v69 = (void *)(v5 - 4720399);
            while ( linux_eabi_syscall(
                      v5 - 868252261,
                      v94,
                      &unk_34,
                      v69,
                      v68,
                      v94,
                      (void *)v67,
                      (void *)(v5 - 868252261)) == -4 )
              ;
            v14 = 98 - v79 + 163 * (v67 >> 23);
            continue;
          case 18:
            goto LABEL_8;
          default:
            continue;
        }
      }
    }
    if ( v6 == 2 )
      break;
    v9 = v74;
    v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 684))(a1, v74);
    v11 = *(_DWORD *)a1;
    v73 = v10 - 1;
    v12 = (*(int (__fastcall **)(int, int))(v11 + 692))(a1, v9);
    v13 = ((int (__fastcall *)(int, int, _DWORD))unk_81FC)(a1, v12, *(_DWORD *)(v71 + 424));
    v77 = (int *)((int (__fastcall *)(int))unk_81B4)(v13);
    v5 += 1825136872;
    v6 = 0;
    v8 = v15;
  }
  result = **(_DWORD **)(dword_11034 + dword_11080 + 69660) - v96;
  if ( !result )
    return result;
  ((void (*)(void))unk_8244)();
  JUMPOUT(0x1102E);
  return result;
}
