// positive sp value has been detected, the output may be wrong!
void __fastcall sub_7942C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // r0
  char v10; // [sp-1DC2h] [bp-2252h]
  unsigned int v11; // [sp-1DB8h] [bp-2248h]
  int v12; // [sp-1D70h] [bp-2200h]
  _DWORD *v13; // [sp-1CE4h] [bp-2174h]
  _DWORD *v14; // [sp-1CD8h] [bp-2168h]
  unsigned int v15; // [sp-1B50h] [bp-1FE0h]
  int v16; // [sp-1A4Ch] [bp-1EDCh]
  unsigned int v17; // [sp-1A44h] [bp-1ED4h]
  char v18; // [sp-17D0h] [bp-1C60h]
  int v19; // [sp-17C8h] [bp-1C58h]
  int v20; // [sp-16C4h] [bp-1B54h]
  int v21; // [sp-1660h] [bp-1AF0h]
  unsigned int v22; // [sp-1654h] [bp-1AE4h]
  char v23; // [sp-1532h] [bp-19C2h]
  char v24; // [sp-1531h] [bp-19C1h]
  char v25; // [sp-12D8h] [bp-1768h]
  _DWORD *v26; // [sp-1274h] [bp-1704h]
  unsigned int v27; // [sp-D18h] [bp-11A8h]
  int v28; // [sp-66Ch] [bp-AFCh]
  int v29; // [sp-CCh] [bp-55Ch]
  _DWORD *v30; // [sp+3Ch] [bp-454h]
  char v31; // [sp+24Fh] [bp-241h]
  int v32; // [sp+404h] [bp-8Ch]
  int v33; // [sp+40Ch] [bp-84h]

  do
  {
    while ( *v14 != 1179403647 )
      ;
  }
  while ( !v10 || !v31 );
  while ( v23 && !v24 )
    ;
  do
  {
    if ( (unsigned int)v13 >= v11 )
      goto LABEL_53;
  }
  while ( *v13 != 2 );
  if ( (v13[6] & 4) != 0 && (v25 & 2) != 0 )
  {
    while ( *v30 && v13[5] + v20 > (unsigned int)v30 )
      ;
  }
LABEL_53:
  if ( v21 != 0 && v22 != 0 )
  {
LABEL_30:
    while ( v17 < v22 && *(_DWORD *)(v21 + 4 * v17) != 0 && v16 == 0 )
    {
      if ( (v18 & 1) != 0 )
      {
        do
        {
          if ( v27 >= 0x1000 )
            goto LABEL_30;
        }
        while ( *(unsigned __int16 *)(v19 + 2 * v27) != 52428 );
        v18 = -112;
      }
      else
      {
        while ( v15 < 0x1000 && *(_DWORD *)(v12 + 4 * v15) != -858993460 )
          ;
      }
    }
  }
  if ( (unsigned int)((int (__fastcall *)(int, int, int, int))unk_77D92)(-1773347256, -1773347256, 30360, -1284830710) >= 0x1000 )
  {
    v32 = *v26 + 8496;
    v33 = v26[1] + 9008;
    *v26 = 0;
    v26[1] = v29;
    v9 = (_DWORD *)((int (__fastcall *)(int, int, bool, int))unk_BB10)(1, 44, v26 != 0, -1284830710);
    *v9 = 1;
    v9[1] = v32;
    v9[2] = v33;
    v9[3] = v28;
  }
  __asm { POP             {R4-R7,PC} }
}
