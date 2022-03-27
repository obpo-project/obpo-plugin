_DWORD *__fastcall sub_202E8(int a1)
{
  _DWORD *v2; // r7
  int v3; // r0
  int v4; // r7
  int v5; // r1
  int v6; // r7
  int v7; // r7
  int v8; // r7
  int v9; // r7
  int v10; // r7
  int v11; // r7
  _DWORD *result; // r0
  int v13; // [sp+1Ch] [bp-164h]
  int v14; // [sp+1Ch] [bp-164h]
  int v15; // [sp+24h] [bp-15Ch]
  _DWORD *v16; // [sp+28h] [bp-158h]
  _DWORD *v17; // [sp+2Ch] [bp-154h]
  _DWORD *v18; // [sp+30h] [bp-150h]
  int v19; // [sp+34h] [bp-14Ch]
  int v20; // [sp+38h] [bp-148h]
  int v21; // [sp+38h] [bp-148h]
  int v22; // [sp+3Ch] [bp-144h]
  int v23; // [sp+3Ch] [bp-144h]
  int v24; // [sp+40h] [bp-140h]
  int v25; // [sp+44h] [bp-13Ch]
  int v26; // [sp+48h] [bp-138h]
  int v27; // [sp+4Ch] [bp-134h]
  int v28; // [sp+50h] [bp-130h]
  int v29; // [sp+54h] [bp-12Ch]
  int v30; // [sp+58h] [bp-128h]
  int v31; // [sp+5Ch] [bp-124h]
  int v32; // [sp+6Ch] [bp-114h]
  int v33; // [sp+C4h] [bp-BCh]
  __int64 v34; // [sp+C8h] [bp-B8h]
  int v35; // [sp+D4h] [bp-ACh] BYREF
  int v36; // [sp+D8h] [bp-A8h]
  int v37; // [sp+DCh] [bp-A4h]
  int v38; // [sp+E0h] [bp-A0h]
  int v39; // [sp+F0h] [bp-90h]
  int v40; // [sp+F4h] [bp-8Ch]
  int v41; // [sp+F8h] [bp-88h]
  int v42; // [sp+150h] [bp-30h]
  int v43; // [sp+154h] [bp-2Ch] BYREF
  int v44; // [sp+158h] [bp-28h]

  v44 = **(_DWORD **)(dword_21194 + 131856);
  v17 = (_DWORD *)(a1 + 12);
  if ( a1 )
  {
    ((void (__fastcall *)(int *, int))unk_5990)(&v35, 128);
    v15 = 0;
    v32 = ((int (__fastcall *)(int))unk_20068)(a1);
    if ( v32 == -1 )
      v15 = -1;
    v29 = v15;
    if ( !v15 )
    {
      v29 = v15;
      if ( ((int (__fastcall *)(int, int, _DWORD))unk_1FB94)(a1, v32, 0) )
        v29 = -1;
    }
    v19 = v29;
    if ( !v29 )
    {
      if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
        || ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
        || ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
        || ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43) )
      {
        v19 = -1;
      }
      else
      {
        v19 = v29;
      }
    }
    v24 = v19;
    if ( v19 )
    {
      HIDWORD(v34) = 0;
    }
    else if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
           || (v9 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)) )
    {
      HIDWORD(v34) = 0;
      v24 = -1;
    }
    else
    {
      HIDWORD(v34) = v9 + (v43 << 8);
      v24 = v19;
    }
    v25 = v24;
    if ( v24 )
    {
      LODWORD(v34) = 0;
    }
    else if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
           || (v11 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)) )
    {
      LODWORD(v34) = 0;
      v25 = -1;
    }
    else
    {
      LODWORD(v34) = v11 + (v43 << 8);
      v25 = v24;
    }
    v27 = v25;
    if ( !v25 )
    {
      if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
        || (v4 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)) )
      {
        v36 = 0;
        v27 = -1;
      }
      else
      {
        v36 = v4 + (v43 << 8);
        v27 = v25;
      }
    }
    v26 = v27;
    if ( v27 )
    {
      v33 = 0;
    }
    else if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
           || (v10 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)) )
    {
      v33 = 0;
      v26 = -1;
    }
    else
    {
      v33 = v10 + (v43 << 8);
      v26 = v27;
    }
    v30 = v26;
    if ( !v26 )
    {
      v5 = 1116742829;
      if ( v34 )
        v5 = 48283;
      if ( v34 )
        HIWORD(v5) = 23819;
      if ( v33 != v36 )
        v5 = 48283;
      v30 = v26;
      if ( v33 != v36 || v5 != 1116742829 )
        v30 = -103;
    }
    v21 = v30;
    if ( !v30 )
    {
      if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
        || (v7 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43))
        || (v20 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43))
        || (v14 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)) )
      {
        v40 = 0;
        v21 = -1;
      }
      else
      {
        v40 = v7 + (v20 << 8) + (v14 << 16) + (v43 << 24);
        v21 = v30;
      }
    }
    v22 = v21;
    if ( !v21 )
    {
      if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
        || (v6 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43))
        || (v23 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43))
        || (v13 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)) )
      {
        v41 = 0;
        v22 = -1;
      }
      else
      {
        v41 = v6 + (v23 << 8) + (v13 << 16) + (v43 << 24);
        v22 = v21;
      }
    }
    v28 = v22;
    if ( !v22 )
    {
      if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)
        || (v8 = v43, ((int (__fastcall *)(int, int *))unk_1FEE4)(a1, &v43)) )
      {
        v37 = 0;
        v28 = -1;
      }
      else
      {
        v37 = v8 + (v43 << 8);
        v28 = v22;
      }
    }
    v31 = v28;
    if ( !v28 )
    {
      v31 = v28;
      if ( v32 + *v17 < (unsigned int)(v41 + v40) )
        v31 = -103;
    }
    if ( v31 )
    {
      v18 = 0;
      if ( a1 )
      {
        if ( *(_BYTE *)(a1 + 16) )
          ((void (__fastcall *)(_DWORD, int))unk_5984)(*(_DWORD *)(a1 + 4), 1820193118);
        ((void (__fastcall *)(int))unk_575C)(a1);
      }
    }
    else
    {
      v35 = a1;
      v38 = v32 + *v17 - v41 - v40;
      v42 = 0;
      v39 = v32;
      v18 = 0;
      *v17 = 0;
      v2 = (_DWORD *)((int (__fastcall *)(int))unk_5960)(128);
      ((void (__fastcall *)(_DWORD *, int *, int))unk_5978)(v2, &v35, 128);
      if ( v2 )
      {
        v3 = v2[9];
        v2[4] = 0;
        v2[5] = v3;
        v2[6] = ((int (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))unk_21574)(
                  v2,
                  v2 + 10,
                  v2 + 30,
                  0,
                  0,
                  0,
                  0,
                  0,
                  0) == 0;
        v18 = v2;
      }
    }
    v16 = v18;
  }
  else
  {
    v16 = 0;
  }
  if ( **(_DWORD **)(dword_21198 + 135548) == v44 )
    return v16;
  ((void (*)(void))unk_5714)();
  return result;
}
