int __usercall sub_32CD0@<eax>(_DWORD *a1@<edx>, int a2@<ecx>, int a4)
{
  int v4; // edi
  bool v5; // zf
  __int64 v6; // rax
  unsigned int v7; // ecx
  int v8; // eax
  bool v9; // zf
  bool v11; // zf
  __int64 v12; // rax
  unsigned int v13; // ecx
  int result; // eax
  bool v17; // [esp+16h] [ebp-636h]
  bool v18; // [esp+18h] [ebp-634h]
  int v21; // [esp+24h] [ebp-628h]
  int v22; // [esp+28h] [ebp-624h]
  int v23; // [esp+2Ch] [ebp-620h]
  int v24; // [esp+30h] [ebp-61Ch]
  int v25; // [esp+34h] [ebp-618h]
  int v26; // [esp+44h] [ebp-608h]
  int v27; // [esp+58h] [ebp-5F4h]
  unsigned int *v28; // [esp+5Ch] [ebp-5F0h]
  _DWORD *v29; // [esp+8Ch] [ebp-5C0h]
  int v30; // [esp+94h] [ebp-5B8h]
  int v31; // [esp+98h] [ebp-5B4h]
  int v32; // [esp+A0h] [ebp-5ACh]
  int v33; // [esp+B8h] [ebp-594h]
  int v34; // [esp+FCh] [ebp-550h]
  int v35; // [esp+110h] [ebp-53Ch]
  _QWORD v36[33]; // [esp+128h] [ebp-524h] BYREF
  _BYTE v37[256]; // [esp+230h] [ebp-41Ch] BYREF
  _BYTE v38[256]; // [esp+330h] [ebp-31Ch] BYREF
  _BYTE v39[256]; // [esp+430h] [ebp-21Ch] BYREF
  _OWORD v40[16]; // [esp+530h] [ebp-11Ch] BYREF
  int v41; // [esp+638h] [ebp-14h]
  unsigned int v42; // [esp+63Ch] [ebp-10h]
  int savedregs; // [esp+64Ch] [ebp+0h]

  v41 = *(_DWORD *)dword_3FD8C;
  v28 = a1 + 2;
  if ( ((int (*)(void))unk_302D0)() != 1 )
  {
    ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
    v32 = ((int (__cdecl *)(void *))unk_1B60)(&unk_3BD08);
    ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
    if ( !v32 || dword_435D8 > 25 )
    {
      v25 = (*(int (__cdecl **)(int, _DWORD *, int))dword_3FE60)(a2, a1, a4);
LABEL_27:
      v4 = v25;
      goto LABEL_71;
    }
    ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
    v33 = ((int (__cdecl *)(void *))unk_1B60)(&unk_3BCF7);
    ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
    v40[15] = 0LL;
    v40[14] = 0LL;
    v40[13] = 0LL;
    v40[12] = 0LL;
    v40[11] = 0LL;
    v40[10] = 0LL;
    v40[9] = 0LL;
    v40[8] = 0LL;
    v40[7] = 0LL;
    v40[6] = 0LL;
    v40[5] = 0LL;
    v40[4] = 0LL;
    v40[3] = 0LL;
    v40[2] = 0LL;
    v40[1] = 0LL;
    v40[0] = 0LL;
    ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v39, 0, 256);
    v8 = ((int (*)(void))unk_1E10)();
    ((void (__cdecl *)(_OWORD *, void *, int))unk_1A50)(v40, &unk_3BD4D, v8);
    ((void (__cdecl *)(_OWORD *, _BYTE *, int))unk_1E20)(v40, v39, 256);
    ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v38, 0, 256);
    ((void (__cdecl *)(_BYTE *, _DWORD, int))unk_1A20)(v37, 0, 256);
    ((void (__cdecl *)(_QWORD *, _DWORD, int))unk_1A20)(&v36[1], 0, 256);
    if ( v33 )
    {
      ((void (__cdecl *)(void *))unk_1E50)(&unk_435D0);
      v26 = ((int (__cdecl *)(void *))unk_1B60)(&unk_3BCEA);
      ((void (__cdecl *)(void *))unk_1E70)(&unk_435D0);
      ((void (__cdecl *)(_BYTE *, int, void *))unk_23F50)(v38, v26, &unk_3BD70);
      ((void (__cdecl *)(_BYTE *, void *, int, void *))unk_1A50)(v37, &unk_3BDE9, v26, &unk_3BD70);
      ((void (__cdecl *)(_QWORD *, void *, int, void *))unk_1A50)(&v36[1], &unk_3BE0E, v26, &unk_3BD70);
    }
    v17 = ((int (__cdecl *)(_BYTE *, _BYTE *))unk_1D10)(v39, v38) != 0;
    if ( !v17 || (v11 = ((int (__cdecl *)(_BYTE *, void *))unk_1D10)(v39, &unk_3BF4F) == 0) )
    {
      v18 = ((int (__cdecl *)(_BYTE *, _BYTE *))unk_1D10)(v39, v37) != 0;
      if ( !v18 || (v9 = ((int (__cdecl *)(_BYTE *, void *))unk_1D10)(v39, &unk_3BF4F) == 0) )
      {
        if ( ((int (__cdecl *)(_BYTE *, _QWORD *))unk_1D10)(v39, &v36[1]) == 0 )
          goto LABEL_52;
        if ( ((int (__cdecl *)(_BYTE *, void *))unk_1D10)(v39, &unk_3BF4F) == 0 )
          goto LABEL_52;
      }
    }
    if ( dword_435D8 > 23 || !(v5 = ((int (__cdecl *)(void *, void *))unk_1A60)(&unk_435F8, &unk_3BD95) != 0) )
    {
      if ( dword_43314 == -1 )
      {
        dword_43314 = ((int (__cdecl *)(int, _DWORD, int))unk_1D70)(a2, 0, 1);
        dword_436FC = *(unsigned int *)((char *)v28 + *a1);
      }
      v23 = (*(int (__cdecl **)(int, _DWORD *, int))dword_3FE60)(a2, a1, a4);
      goto LABEL_48;
    }
    strcpy((char *)v36, "dex\n035");
    savedregs = 175399279;
    v42 = 0;
    v42 = *a1;
    LODWORD(v6) = _byteswap_ulong(0xA74616Fu);
    v7 = _byteswap_ulong(v42);
    HIDWORD(v6) = (unsigned int)v6 > v7;
    if ( (v6 - (unsigned __int64)v7) >> 32 )
    {
      if ( *(_QWORD *)a1 == v36[0] )
      {
        LODWORD(v12) = _byteswap_ulong(*v28);
        v13 = _byteswap_ulong(dword_4370C);
        HIDWORD(v12) = (unsigned int)v12 > v13;
        if ( !((v12 - (unsigned __int64)v13) >> 32) && dword_43708 == a4 )
        {
          v35 = (*(int (__cdecl **)(int, int, int))dword_3FE60)(a2, dword_436F8, a4);
          if ( dword_436F8 )
          {
            ((void (__cdecl *)(int))unk_1A10)(dword_436F8);
            dword_436F8 = 0;
          }
          v24 = 1;
          v22 = v35;
LABEL_51:
          if ( v24 )
          {
            v23 = v22;
LABEL_48:
            v25 = v23;
            goto LABEL_27;
          }
LABEL_52:
          v23 = (*(int (__cdecl **)(int, _DWORD *, int))dword_3FE60)(a2, a1, a4);
          goto LABEL_48;
        }
      }
    }
    else if ( dword_435D8 == 19 )
    {
      if ( ((int (__cdecl *)(int, _DWORD, int))unk_1D70)(a2, 0, 1) == 4096 )
      {
        v21 = ((int (__cdecl *)(int))unk_1B80)(a4);
        ((void (__cdecl *)(int, _DWORD *, int))unk_1C00)(v21, a1, a4);
        v29 = (_DWORD *)(v21 + 64 + *(_DWORD *)(v21 + 60) + *(_DWORD *)(v21 + 64 + *(_DWORD *)(v21 + 60)) + 4);
        if ( *v29 == dword_4370C )
          *v29 = dword_43704;
        v34 = (*(int (__cdecl **)(int, int, int))dword_3FE60)(a2, v21, a4);
        if ( v21 )
          ((void (__cdecl *)(int))unk_1A10)(v21);
        v27 = 1;
        v31 = v34;
      }
      else
      {
        v27 = 0;
      }
      if ( v27 )
      {
        v22 = v31;
        v24 = v27;
        goto LABEL_51;
      }
      v30 = v31;
    }
    v24 = 0;
    v22 = v30;
    goto LABEL_51;
  }
  v4 = -1;
LABEL_71:
  if ( *(_DWORD *)dword_3FD8C == v41 )
    return v4;
  ((void (*)(void))unk_1AA0)();
  return result;
}
