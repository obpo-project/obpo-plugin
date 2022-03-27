void __fastcall sub_1047C(int a1, int a2, int a3)
{
  int v3; // r1
  int v4; // r5
  int v5; // r8
  unsigned int v6; // r9
  int v7; // r0
  int v8; // r0
  int v9; // r7
  int v10; // r8
  __int64 v11; // kr00_8
  int v12; // r5
  int v13; // r0
  __int16 v14; // r6
  int *v15; // r10
  int v16; // r9
  int v17; // r0
  unsigned int v18; // r2
  _BYTE *v19; // r6
  _BYTE *v20; // r2
  int v21; // r4
  __int64 v22; // kr08_8
  int v23; // r1
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // [sp+3Ch] [bp-1ACh]
  int v29; // [sp+44h] [bp-1A4h]
  int v31; // [sp+4Ch] [bp-19Ch]
  int *v33; // [sp+54h] [bp-194h]
  int i; // [sp+58h] [bp-190h]
  _BYTE *v35; // [sp+60h] [bp-188h]
  int v36; // [sp+64h] [bp-184h]
  _DWORD v37[64]; // [sp+68h] [bp-180h]
  unsigned int v38; // [sp+168h] [bp-80h] BYREF
  __int16 v39; // [sp+16Ch] [bp-7Ch]
  int v40; // [sp+170h] [bp-78h]
  int v41; // [sp+174h] [bp-74h]
  int v42; // [sp+178h] [bp-70h]
  int v43; // [sp+17Ch] [bp-6Ch]
  int v44; // [sp+180h] [bp-68h]
  bool v45; // [sp+184h] [bp-64h]
  int v46; // [sp+188h] [bp-60h]
  int v47; // [sp+18Ch] [bp-5Ch] BYREF
  int v48; // [sp+190h] [bp-58h]
  char v49[28]; // [sp+194h] [bp-54h] BYREF
  int v50; // [sp+1C0h] [bp-28h]

  v5 = a1;
  v50 = **(_DWORD **)(dword_11034 + dword_11030 + 66706);
  v46 = 0;
  ((void (__fastcall *)(char *, int, int))unk_7FBC)(v49, dword_11038 + dword_11030 + 66706, 43);
  v6 = -190560642;
  v3 = 1;
  v4 = dword_11040;
  v27 = *(_DWORD *)(dword_11040 + dword_11030 + 66706);
  v33 = (int *)dword_11040;
  v29 = dword_11040;
  while ( v3 )
  {
    v29 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 684))(v5, a2) - 1;
    v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 692))(v5, a2);
    v8 = ((int (__fastcall *)(int, int, _DWORD))unk_81FC)(v5, v7, *(_DWORD *)(v27 + 424));
    v33 = (int *)((int (__fastcall *)(int))unk_81B4)(v8);
    v6 += 1825136872;
    v3 = 0;
  }
  while ( 1 )
  {
    LOWORD(v38) = v33[3];
    HIWORD(v38) = v33[4];
    v39 = v33[5];
    v40 = v33[7];
    v41 = v33[2];
    v42 = *v33;
    v43 = v33[1];
    v45 = v33[6] != 0;
    v44 = v5;
    for ( i = 0; i < v29; ++i )
    {
      v37[i] = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 692))(v5, a2, i);
      v6 += 912275189;
    }
    v48 = 0;
    v31 = 4 * v6;
    v10 = v4;
    v47 = 0;
    v12 = v40;
    v13 = ((int (__fastcall *)(int, int))unk_8004)(36, 2);
    v14 = v38;
    v9 = v13;
    *(_DWORD *)(v13 + 4) = ((int (__fastcall *)(int))unk_8004)(4 * (unsigned __int16)v38);
    ((void (*)(void))unk_7FB0)();
    v35 = (_BYTE *)(v12 + 1);
    v4 = v10;
    *(_WORD *)(v9 + 32) = v14;
    v24 = 9;
    if ( !v45 )
      v24 = 13;
    v15 = (int *)(*(_DWORD *)(v9 + 4) + 4 * ((unsigned __int16)v38 - HIWORD(v38)));
    v36 = 0;
    if ( v24 == 13 )
    {
      *v15++ = v37[0];
      ((void (__fastcall *)(int *))unk_BDF4)(&v47);
      v36 = 1;
    }
LABEL_12:
    while ( *v35 )
    {
      v16 = v37[v36++];
      v17 = (unsigned __int8)*v35++;
      if ( v17 <= 89 )
      {
        switch ( v17 )
        {
          case 'B':
            *v15++ = ((int (__fastcall *)(int, int, _DWORD))unk_81FC)(
                       v44,
                       v16,
                       *(_DWORD *)(*(_DWORD *)(v10 + dword_11050 + 68594) + 436));
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 92))(v44, v16);
            goto LABEL_12;
          case 'C':
            *v15++ = ((int (__fastcall *)(int, int, _DWORD))unk_8220)(
                       v44,
                       v16,
                       *(_DWORD *)(*(_DWORD *)(v10 + dword_11058 + 68096) + 432));
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 92))(v44, v16);
            goto LABEL_12;
          case 'D':
            v48 = -1516369697;
            v11 = ((__int64 (__fastcall *)(int, int, _DWORD))unk_8208)(
                    v44,
                    v16,
                    *(_DWORD *)(*(_DWORD *)(v10 + dword_11044 + 67546) + 452));
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 92))(v44, v16);
            *(_QWORD *)v15 = v11;
            v15 += 2;
            goto LABEL_12;
          case 'F':
            v21 = ((int (__fastcall *)(int, int, _DWORD))unk_822C)(
                    v44,
                    v16,
                    *(_DWORD *)(*(_DWORD *)(v10 + dword_1103C + 68530) + 448));
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 92))(v44, v16);
            *v15++ = v21;
            goto LABEL_12;
          case 'I':
            *v15++ = ((int (__fastcall *)(int, int, _DWORD))unk_81FC)(
                       v44,
                       v16,
                       *(_DWORD *)(*(_DWORD *)(v10 + dword_11054 + 67804) + 424));
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 92))(v44, v16);
            goto LABEL_12;
          case 'J':
            v22 = ((__int64 (__fastcall *)(int, int, _DWORD))unk_8238)(
                    v44,
                    v16,
                    *(_DWORD *)(*(_DWORD *)(v10 + dword_1104C + 68636) + 444));
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 92))(v44, v16);
            *(_QWORD *)v15 = v22;
            v15 += 2;
            goto LABEL_12;
          case 'L':
            v48 = -1225189741;
            *v15++ = v16;
            ((void (__fastcall *)(int *, int))unk_BDF4)(&v47, v16);
            goto LABEL_12;
          case 'S':
            *v15++ = ((int (__fastcall *)(int, int, _DWORD))unk_81FC)(
                       v44,
                       v16,
                       *(_DWORD *)(*(_DWORD *)(v10 + dword_1107C + 67762) + 428));
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 92))(v44, v16);
            goto LABEL_12;
          default:
            goto LABEL_35;
        }
      }
      if ( v17 == 90 )
      {
        *v15++ = ((int (__fastcall *)(int, int, _DWORD))unk_8214)(
                   v44,
                   v16,
                   *(_DWORD *)(*(_DWORD *)(v10 + dword_11048 + 67872) + 440)) != 0;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v44 + 92))(v44, v16);
      }
      else
      {
LABEL_35:
        v48 = -1165510720;
        v26 = v44;
        do
        {
          __dmb(0xBu);
          do
            v18 = __ldrex((unsigned int *)(dword_1105C + 68262 + dword_11060));
          while ( !v18 && __strex(1u, (unsigned int *)(dword_11064 + 68278 + dword_11060 + 4)) );
          __dmb(0xBu);
        }
        while ( v18 == 1 );
        if ( v18 != 2 )
        {
          v19 = (_BYTE *)(dword_1106C + dword_11068 + 68310);
          v20 = (_BYTE *)(dword_11070 + dword_11068 + 68310);
          v20[19] = v19[19] ^ 0xB;
          v20[4] = v19[4] ^ 0x14;
          v20[14] = v19[14] ^ 0x67;
          v20[9] = v19[9] ^ 0x14;
          v20[2] = v19[2] ^ 0x20;
          *v20 = *v19 ^ 4;
          v20[3] = v19[3] ^ 0x53;
          v20[11] = v19[11] ^ 0x22;
          v20[15] = v19[15] ^ 9;
          v20[12] = v19[12] ^ 0x77;
          v20[13] = v19[13] ^ 0x73;
          v20[8] = v19[8] ^ 0x56;
          v20[18] = v19[18] ^ 0x55;
          v20[17] = v19[17] ^ 0x1C;
          v20[7] = v19[7] ^ 0x13;
          v20[5] = v19[5] ^ 0x2A;
          v20[16] = v19[16] ^ 0x53;
          v20[1] = v19[1] ^ 0x58;
          v20[10] = v19[10] ^ 0xA;
          v20[6] = v19[6] ^ 0x7C;
          *(_DWORD *)(dword_11060 + dword_11068 + 68310 + 4) = 2;
        }
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v26 + 72))(v26, dword_11070 + dword_11074 + 68504);
      }
    }
    v25 = v41;
    *(_DWORD *)(v9 + 28) = v44;
    *(_DWORD *)v9 = v25 + 16;
    ((void (__fastcall *)(int, unsigned int *, int, int))unk_8190)(v9, &v38, a3, v47);
    *(_QWORD *)a3 = *(_QWORD *)(v9 + 8);
    ((void (__fastcall *)(_DWORD))unk_7FE0)(*(_DWORD *)(v9 + 4));
    ((void (__fastcall *)(int, int))unk_7FE0)(v9, v23);
    ((void (__fastcall *)(int *))unk_BAE0)(&v47);
    v5 = a1;
    v6 = v31 & 0xD133B128;
  }
}
