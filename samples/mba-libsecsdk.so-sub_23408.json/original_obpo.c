int __fastcall sub_23408(int *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  int *v4; // r7
  int v5; // r4
  int v6; // r5
  int v7; // r0
  int v8; // r4
  int v9; // r5
  int v10; // r0
  int v11; // r4
  int v12; // r5
  int v13; // r0
  int v14; // r4
  int v15; // r5
  int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r4
  int v20; // r5
  int v21; // r0
  int v22; // r4
  char v23; // r5
  int v24; // r0
  int v25; // r4
  int v26; // r5
  int v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // r4
  int v31; // r5
  int v32; // r0
  int result; // r0
  int v34; // [sp+4h] [bp-FCh]
  int v35; // [sp+4h] [bp-FCh]
  int v36; // [sp+4h] [bp-FCh]
  int v37; // [sp+4h] [bp-FCh]
  int v38; // [sp+8h] [bp-F8h]
  int v39; // [sp+8h] [bp-F8h]
  int v40; // [sp+8h] [bp-F8h]
  int v41; // [sp+8h] [bp-F8h]
  int v44; // [sp+24h] [bp-DCh]
  int v45; // [sp+28h] [bp-D8h]
  int v46; // [sp+2Ch] [bp-D4h]
  int v47; // [sp+30h] [bp-D0h]
  int v48; // [sp+34h] [bp-CCh]
  int *v49; // [sp+38h] [bp-C8h]
  int v51; // [sp+40h] [bp-C0h]
  int v52; // [sp+44h] [bp-BCh]
  int v53; // [sp+48h] [bp-B8h]
  int v54; // [sp+4Ch] [bp-B4h]
  int v55; // [sp+50h] [bp-B0h]
  int v56; // [sp+54h] [bp-ACh]
  int v57; // [sp+58h] [bp-A8h]
  int *v59; // [sp+74h] [bp-8Ch]
  int v60; // [sp+C0h] [bp-40h]
  int v61; // [sp+C4h] [bp-3Ch]
  char v62; // [sp+C8h] [bp-38h]
  int v63; // [sp+CCh] [bp-34h]
  int v64; // [sp+CCh] [bp-34h]
  int v65; // [sp+CCh] [bp-34h]
  int v66; // [sp+CCh] [bp-34h]
  int v67; // [sp+D0h] [bp-30h]
  int v68; // [sp+D4h] [bp-2Ch] BYREF
  int v69; // [sp+D8h] [bp-28h]

  v4 = a1;
  v69 = *(_DWORD *)dword_79C78;
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  v59 = a1 + 30;
  v49 = a1 + 13;
  if ( ((int (__fastcall *)(int, int, _DWORD))unk_1FB94)(*a1, a1[3] + a1[30], 0) )
  {
    v48 = -1;
  }
  else
  {
    v19 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || (v20 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v19, &v68))
      || (v39 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v19, &v68))
      || (v35 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v19, &v68)) )
    {
      v67 = 0;
      v21 = 1094540496;
    }
    else
    {
      v67 = v20 + (v39 << 8) + (v35 << 16) + (v68 << 24);
      v21 = -1155487431;
    }
    if ( v21 == 1094540496 )
    {
      v51 = -1;
    }
    else if ( v67 == 67324752 )
    {
      v51 = 0;
    }
    else
    {
      v51 = -103;
    }
    v17 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || ((int (__fastcall *)(int, int *))unk_1FEE4)(v17, &v68) )
    {
      v44 = v51;
      v18 = -1194862955;
    }
    else
    {
      v44 = v51;
      v18 = 1684582377;
    }
    if ( v18 != 1684582377 )
      v44 = -1;
    v22 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || (v23 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v22, &v68)) )
    {
      v62 = 0;
      v46 = v44;
      v24 = 1201021124;
    }
    else
    {
      v62 = v23;
      v46 = v44;
      v24 = 107650798;
    }
    if ( v24 != 107650798 )
      v46 = -1;
    v14 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || (v15 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v14, &v68)) )
    {
      v64 = 0;
      v16 = 1593919199;
    }
    else
    {
      v64 = v15 + (v68 << 8);
      v16 = -291508981;
    }
    if ( v16 == 1593919199 )
    {
      v54 = -1;
    }
    else
    {
      v54 = v46;
      if ( !v46 )
      {
        v54 = v46;
        if ( v64 != *v49 )
          v54 = -103;
      }
    }
    v53 = v54;
    if ( !v54 )
    {
      v53 = 0;
      if ( *v49 )
      {
        v53 = v54;
        if ( *v49 != 8 )
          v53 = -103;
      }
    }
    v28 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || ((int (__fastcall *)(int, int *))unk_1FEE4)(v28, &v68)
      || ((int (__fastcall *)(int, int *))unk_1FEE4)(v28, &v68)
      || ((int (__fastcall *)(int, int *))unk_1FEE4)(v28, &v68) )
    {
      v45 = v53;
      v29 = 105489709;
    }
    else
    {
      v45 = v53;
      v29 = -1264269370;
    }
    if ( v29 == 105489709 )
      v45 = -1;
    v25 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || (v26 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v25, &v68))
      || (v40 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v25, &v68))
      || (v36 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v25, &v68)) )
    {
      v65 = 0;
      v27 = 1690505169;
    }
    else
    {
      v65 = v26 + (v40 << 8) + (v36 << 16) + (v68 << 24);
      v27 = 1893063118;
    }
    if ( v27 == 1690505169 )
    {
      v55 = -1;
    }
    else
    {
      v55 = v45;
      if ( !v45 )
      {
        v55 = v45;
        if ( v65 != v4[15] )
        {
          v55 = v45;
          if ( (v62 & 8) == 0 )
            v55 = -103;
        }
      }
    }
    v5 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || (v6 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v5, &v68))
      || (v38 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v5, &v68))
      || (v34 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v5, &v68)) )
    {
      v63 = 0;
      v7 = -1450808418;
    }
    else
    {
      v63 = v6 + (v38 << 8) + (v34 << 16) + (v68 << 24);
      v7 = 471787700;
    }
    if ( v7 == 471787700 )
    {
      v56 = v55;
      if ( !v55 )
      {
        v56 = v55;
        if ( v63 != v4[16] )
        {
          v56 = v55;
          if ( (v62 & 8) == 0 )
            v56 = -103;
        }
      }
    }
    else
    {
      v56 = -1;
    }
    v30 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || (v31 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v30, &v68))
      || (v41 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v30, &v68))
      || (v37 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v30, &v68)) )
    {
      v66 = 0;
      v32 = 890886487;
    }
    else
    {
      v66 = v31 + (v41 << 8) + (v37 << 16) + (v68 << 24);
      v32 = -936645866;
    }
    if ( v32 == 890886487 )
    {
      v57 = -1;
    }
    else
    {
      v57 = v56;
      if ( !v56 )
      {
        v57 = v56;
        if ( v66 != v4[17] )
        {
          v57 = v56;
          if ( (v62 & 8) == 0 )
            v57 = -103;
        }
      }
    }
    v11 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || (v12 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v11, &v68)) )
    {
      v61 = 0;
      v13 = -2129748657;
    }
    else
    {
      v61 = v12 + (v68 << 8);
      v13 = 419499421;
    }
    if ( v13 == 419499421 )
    {
      v52 = v57;
      if ( !v57 )
      {
        v52 = v57;
        if ( v61 != v4[18] )
          v52 = -103;
      }
    }
    else
    {
      v52 = -1;
    }
    *a2 += v61;
    v8 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, &v68)
      || (v9 = v68, ((int (__fastcall *)(int, int *))unk_1FEE4)(v8, &v68)) )
    {
      v60 = 0;
      v47 = v52;
      v10 = -511992098;
    }
    else
    {
      v60 = v9 + (v68 << 8);
      v47 = v52;
      v10 = -200375284;
    }
    if ( v10 == -511992098 )
      v47 = -1;
    *a3 = *v59 + v61 + 30;
    *a4 = v60;
    *a2 += v60;
    v48 = v47;
  }
  if ( **(_DWORD **)(dword_24488 + 148592) == v69 )
    return v48;
  ((void (*)(void))unk_5714)();
  return result;
}
