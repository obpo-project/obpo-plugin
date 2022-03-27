int __fastcall sub_425E0(int a1, int a2)
{
  int v2; // r7
  void *v3; // r8
  unsigned int v4; // r5
  int v5; // r11
  int v6; // r10
  char *v7; // r0
  char *v8; // r0
  int v9; // r6
  int v10; // r7
  int v11; // r0
  int v12; // r5
  int v13; // r9
  char *v14; // r1
  void *v15; // r3
  void *v16; // r3
  void *v17; // r2
  void *v18; // r1
  char *v19; // r0
  char *v20; // r0
  char v21; // r2
  char *v22; // r0
  unsigned int v23; // r2
  int v24; // r1
  char *v25; // r0
  char *v26; // r0
  void *v27; // r3
  void *v28; // r2
  int v29; // r0
  unsigned int v30; // r0
  char *v31; // r0
  unsigned int v32; // r0
  char v33; // r1
  int v35; // [sp+6Ch] [bp-84h]
  int v36; // [sp+70h] [bp-80h]
  int v37; // [sp+74h] [bp-7Ch]
  int v38; // [sp+78h] [bp-78h]
  int v39; // [sp+7Ch] [bp-74h]
  int v40; // [sp+80h] [bp-70h]
  int v41; // [sp+84h] [bp-6Ch]
  int v42; // [sp+88h] [bp-68h]
  char v43[2]; // [sp+8Ch] [bp-64h] BYREF
  char v44; // [sp+8Eh] [bp-62h]
  char v45; // [sp+9Bh] [bp-55h]
  char v46; // [sp+A1h] [bp-4Fh]
  char v47; // [sp+A7h] [bp-49h]
  char v48; // [sp+B0h] [bp-40h]
  char v49; // [sp+B8h] [bp-38h] BYREF
  int v50; // [sp+C8h] [bp-28h]

  v40 = a1;
  v4 = 0;
  v36 = a2;
  v50 = **(_DWORD **)(dword_42C74 + dword_42C70 + 271864);
  v42 = 0;
  ((void (__fastcall *)(char *, int, int))unk_7FBC)(v43, dword_42C78 + dword_42C70 + 271864, 42);
  v5 = 947411124;
  v6 = 13576;
  v35 = *(_DWORD *)(dword_42C7C + dword_42C70 + 271864);
  v37 = v35;
  v38 = v35;
  v41 = v35;
  v39 = v35;
  while ( 1 )
  {
    switch ( v4 )
    {
      case 0u:
        v9 = v40;
        v39 = ((int (__fastcall *)(int, int, _DWORD))unk_888C)(v40, v36, *(_DWORD *)(v35 + 304));
        v10 = ((int (__fastcall *)(int))unk_888C)(v9);
        v11 = *(_DWORD *)v9;
        v41 = v10;
        v12 = (*(int (__fastcall **)(int, int))(v11 + 672))(v9, v10);
        v13 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v9 + 676))(v9, v10, 0);
        v38 = v13;
        v2 = ((int (__fastcall *)(int))unk_8004)(v12 + 1);
        v37 = v2;
        ((void (*)(void))unk_7FB0)();
        ((void (__fastcall *)(int, int, int))unk_7FBC)(v2, v13, v12);
        v4 = 15;
        break;
      case 1u:
        v14 = &v49;
        v15 = (void *)(v5 - 83751888);
        while ( linux_eabi_syscall(v5 - 635604774, v3, v14, 0, v15, v43, (void *)v2, (void *)(v5 - 635604774)) == -4 )
          ;
        v2 = 2 * v5;
        v16 = (void *)((2 * v5) ^ 0x4FFB7824);
        v17 = (void *)(2 * v5 - 423817079);
        v18 = (void *)(2 * v5 - 720139919);
        while ( linux_eabi_syscall(
                  2 * v5 - 1271209548,
                  v3,
                  v18,
                  v17,
                  v16,
                  v43,
                  (void *)v2,
                  (void *)(2 * v5 - 1271209548)) == -4 )
          ;
        v4 = 10;
        v5 = v2 ^ 0x407E3884;
        break;
      case 2u:
        v4 = 9;
        v43[(unsigned int)&unk_5001A ^ v5] ^= (_BYTE)v5 + 89;
        v43[v5 ^ 0x50025] ^= (_BYTE)v5 + 68;
        v43[v5 - 327657] ^= (_BYTE)v5 + 24;
        v5 = 8 * v5 - 1658737072;
        break;
      case 3u:
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v40 + 92))(v40, v41);
        v4 = 39 - v6 + 163 * ((unsigned int)(51464 * v6) >> 23);
        break;
      case 4u:
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v40 + 92))(v40, v39);
        v6 = 25813;
        v4 = 16;
        break;
      case 5u:
        v6 = 3941;
        v4 = 3;
        break;
      case 6u:
        v19 = &v43[v5];
        v19[2147319833] = v43[v5 + 2147319833] ^ (v5 + 38);
        v19[2147319811] = v43[v5 + 2147319811] ^ v5 ^ 0x67;
        v19[2147319820] = v43[v5 + 2147319820] ^ (v5 + 127);
        v43[v5 ^ 0x80028023] ^= (unsigned __int8)v5 ^ 0x15;
        v19[2147319817] = v43[v5 + 2147319817] ^ (v5 + 31);
        v20 = &v43[2 * v5];
        v2 = -327648;
        v4 = 77 - v6 + 79 * ((unsigned int)(53093 * v6) >> 22);
        v21 = 2 * v5 + 106;
        v5 *= 2;
        *(v20 - 327648) ^= v21;
        break;
      case 7u:
        v7 = &v43[v5];
        *(v7 - 534948670) = v43[v5 - 534948670] ^ v5 ^ 0x51;
        *(v7 - 534948675) = v43[v5 - 534948675] ^ v5 ^ 0x2E;
        v43[v5 ^ 0x1FE2AB65] ^= (_BYTE)v5 - 75;
        v5 = (v5 * v5) & 0xC4414314;
        v8 = &v43[v5];
        v2 = 79;
        v4 = 92 - v6 + 79 * ((unsigned int)(53093 * v6) >> 22);
        *(v8 - 1073823705) = v43[v5 - 1073823705] ^ v5 ^ 0x1F;
        *(v8 - 1073823713) = v43[v5 - 1073823713] ^ (v5 + 117);
        break;
      case 8u:
        v43[v5 ^ 0xC0808032] ^= (_BYTE)v5 - 23;
        v22 = &v43[v5];
        v22[1065320417] = v43[v5 + 1065320417] ^ (v5 + 85);
        v43[v5 ^ 0xC0808031] ^= (unsigned __int8)v5 ^ 0x25;
        v22[1065320435] = v43[v5 + 1065320435] ^ (v5 + 46);
        v43[v5 ^ 0xC080802A] ^= (_BYTE)v5 + 17;
        v2 = 1065320427;
        v23 = v6 - 79 * ((unsigned int)(53093 * v6) >> 22);
        v22[1065320427] = v43[v5 + 1065320427] ^ (v5 - 15);
        v5 += 1600269120;
        v6 = 8998 - v23;
        v4 = 82 - v23;
        break;
      case 9u:
        v4 = 12;
        v24 = (v5 ^ 0x2D4A6C30) * (v5 ^ 0x2D4A6C30);
        v25 = &v43[v24];
        v5 = 2 * v24;
        v43[v24 ^ 0x21D5A40D] ^= (_BYTE)v24 + 57;
        *(v25 - 567649239) = v43[v24 - 567649239] ^ (v24 + 17);
        *(v25 - 567649273) = v43[v24 - 567649273] ^ (v24 + 68);
        v2 = -567649272;
        *(v25 - 567649272) = v43[v24 - 567649272] ^ (v24 + 16);
        break;
      case 0xAu:
      case 0x12u:
        if ( **(_DWORD **)(dword_42C74 + dword_42C80 + 273500) == v50 )
          return v37;
        ((void (*)(void))unk_8244)();
        JUMPOUT(0x42C70);
        return v37;
      case 0xBu:
        v5 = -1950073486;
        v4 = 14;
        v48 ^= 0x66u;
        v44 ^= 0x6Au;
        v46 ^= 0x72u;
        v45 ^= 0x1Fu;
        v47 ^= 0x70u;
        break;
      case 0xCu:
        v26 = &v43[v5];
        *(v26 - 1135298556) = v43[v5 - 1135298556] ^ (v5 + 49);
        *(v26 - 1135298538) = v43[v5 - 1135298538] ^ (v5 + 23);
        *(v26 - 1135298532) = v43[v5 - 1135298532] ^ (v5 + 58);
        *(v26 - 1135298560) = v43[v5 - 1135298560] ^ v5 ^ 0x44;
        v43[v5 ^ 0x43AB4818] ^= (_BYTE)v5 + 5;
        v27 = (void *)(v5 ^ 0x16FA37FE);
        v28 = (void *)(v5 - 273860542);
        do
          v3 = (void *)linux_eabi_syscall(v5 ^ 0x43AB4805, v43, 0, v28, v27, v43, (void *)v2, (void *)(v5 ^ 0x43AB4805));
        while ( v3 == (void *)-4 );
        v4 = 1;
        v5 ^= 0x6649C729u;
        break;
      case 0xDu:
        v4 = 3;
        v6 = 19915;
        if ( !v41 )
          v4 = 10;
        break;
      case 0xEu:
        v6 = 13189;
        v4 = 8;
        v29 = ((-2041435025 * v5) & 0x38170804) * ((-2041435025 * v5) & 0x38170804);
        v43[v29 ^ 0x60504004] ^= (_BYTE)v29 + 18;
        v43[v29 ^ 0x60504016] ^= (_BYTE)v29 + 86;
        v5 = (2 * v29) & 0xD1C1E0E0;
        break;
      case 0xFu:
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v40 + 680))(v40, v41, v38);
        v4 = 4;
        v6 = 12030;
        if ( !v39 )
          v4 = 16;
        break;
      case 0x10u:
        v30 = v6 - 11 * ((unsigned int)(47663 * v6) >> 19);
        if ( v41 )
        {
          v4 = 12 - v30;
        }
        else
        {
          v4 = 17 - v30;
          v41 = 0;
        }
        break;
      case 0x11u:
        v31 = &v43[v5];
        v6 = 29305;
        v4 = 6;
        *(v31 - 1073823730) = v43[v5 - 1073823730] ^ v5 ^ 0x2E;
        *(v31 - 1073823728) = v43[v5 - 1073823728] ^ (v5 + 13);
        *(v31 - 1073823704) = v43[v5 - 1073823704] ^ (v5 + 49);
        *(v31 - 1073823711) = v43[v5 - 1073823711] ^ v5 ^ 0x67;
        *(v31 - 1073823706) = v43[v5 - 1073823706] ^ v5 ^ 0x10;
        v32 = (2 * v5) ^ 0x8002801E;
        v33 = v43[v32] ^ (2 * v5);
        v5 *= 2;
        v43[v32] = v33 ^ 0x44;
        break;
      default:
        continue;
    }
  }
}
