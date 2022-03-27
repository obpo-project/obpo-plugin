int sub_165220()
{
  unsigned __int8 *v0; // r1
  bool v1; // zf
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r4
  int v7; // r2
  int v8; // r3
  int v9; // r4
  int v10; // r0
  unsigned int v11; // r4
  int v12; // r0
  int result; // r0
  int v14; // [sp+24h] [bp-1094h]
  int v15; // [sp+28h] [bp-1090h]
  int *v16; // [sp+2Ch] [bp-108Ch]
  unsigned __int8 *v17; // [sp+38h] [bp-1080h]
  int *v18; // [sp+3Ch] [bp-107Ch]
  _DWORD *v19; // [sp+40h] [bp-1078h]
  int v20; // [sp+84h] [bp-1034h] BYREF
  char v21; // [sp+8Ah] [bp-102Eh]
  char v22; // [sp+8Bh] [bp-102Dh]
  int v23; // [sp+8Ch] [bp-102Ch]
  int v24[1025]; // [sp+90h] [bp-1028h] BYREF
  int v25; // [sp+1094h] [bp-24h]

  v0 = *(unsigned __int8 **)(dword_165DC4 + 1462872);
  v25 = **(_DWORD **)(dword_165DC0 + 1462864);
  v19 = *(_DWORD **)(dword_165E10 + 1463004);
  v18 = *(int **)(dword_165E14 + 1463016);
  v17 = *(unsigned __int8 **)(dword_165E18 + 1463024);
  v16 = *(int **)(dword_165E04 + 1463060);
  v15 = *(_DWORD *)(dword_165E08 + 1463072);
  v14 = *(_DWORD *)(dword_165E0C + 1463084);
  if ( (~*v0 | 0xFFFFFFFE) == -1 )
    goto LABEL_36;
  v2 = ((int (*)(void))unk_16996C)();
  v6 = 0;
  v4 = *v18;
  v1 = ((((*v19 - 1) * *v19) ^ 0xFFFFFFFE) & ((*v19 - 1) * *v19)) == 0;
  v5 = 0;
  v3 = 1358136084;
  if ( ((((*v19 - 1) * *v19) ^ 0xFFFFFFFE) & ((*v19 - 1) * *v19)) == 0 )
  {
    v5 = 1;
    v3 = 37020;
  }
  v21 = v5;
  if ( v1 )
    HIWORD(v3) = -4340;
  if ( v4 >= 10 )
    v3 = 1358136084;
  else
    v6 = 1;
  if ( v6 != v5 )
    v3 = 37020;
  v22 = v6;
  v7 = *v17;
  if ( v6 != v5 )
    HIWORD(v3) = -4340;
  v8 = 835499947;
  while ( 1 )
  {
    while ( v8 == -280731018 )
    {
      v23 = v7;
      v8 = v3;
      if ( v3 > 1358136083 )
      {
LABEL_17:
        v1 = v8 == 1358136084;
        v8 = -280731018;
        if ( !v1 )
          goto LABEL_35;
      }
    }
    if ( v8 != 835499947 )
      break;
    v8 = 1358136084;
    if ( v22 )
      v8 = -280731018;
    if ( !v21 )
      v8 = 1358136084;
    if ( v21 != v22 )
      v8 = -280731018;
    if ( v8 > 1358136083 )
      goto LABEL_17;
  }
  if ( v8 != -284389220 )
  {
    while ( 1 )
LABEL_35:
      ;
  }
  v9 = v23 & v2 | v23 ^ v2;
  v10 = ((int (*)(void))unk_1690FC)();
  v11 = (~v9 & 0xA248FF8 | v9 & 0xF5DB7007) ^ (~v10 & 0xA248FF8 | v10 & 0xF5DB7007) | ~(~v9 | ~v10);
  v12 = ((int (*)(void))unk_16A224)();
  if ( v11 & v12 | v11 ^ v12 )
  {
    while ( 1 )
    {
      *v16 = *v16 & 8 | *v16 ^ 8;
      ((void (__fastcall *)(int *, int))unk_1A342C)(v24, 4100);
      v24[0] = 9005;
      ((void (__fastcall *)(_DWORD, int *, int))unk_210F8)(*(_DWORD *)(v15 + 44), v24, 4100);
      v20 = 0;
      ((int (__fastcall *)(int *, _DWORD, int, int))unk_21138)(&v20, 0, v14, 10);
    }
  }
LABEL_36:
  result = **(_DWORD **)(dword_165DC8 + 1465776) - v25;
  if ( result )
    ((void (*)(void))unk_1A3300)();
  return result;
}
