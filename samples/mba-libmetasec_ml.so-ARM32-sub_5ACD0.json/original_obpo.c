// positive sp value has been detected, the output may be wrong!
int __fastcall sub_5ACD0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _BYTE *v20; // r0
  int v21; // r0
  int v22; // r0
  int result; // r0
  int v24; // r0
  void (__fastcall *v25)(int, int *); // r5
  int v26; // [sp+4h] [bp-1FCh]
  char *v29; // [sp+64h] [bp-19Ch]
  char *v30; // [sp+68h] [bp-198h]
  char *v31; // [sp+6Ch] [bp-194h]
  char *v32; // [sp+70h] [bp-190h]
  char *v33; // [sp+74h] [bp-18Ch]
  char *v34; // [sp+78h] [bp-188h]
  int v35; // [sp+88h] [bp-178h]
  __int64 v36; // [sp+ACh] [bp-154h]
  __int64 v37; // [sp+B4h] [bp-14Ch]
  int v38; // [sp+BCh] [bp-144h]
  int v39; // [sp+C4h] [bp-13Ch]
  int v40; // [sp+C8h] [bp-138h]
  int v41; // [sp+CCh] [bp-134h]
  int v42[8]; // [sp+13Ch] [bp-C4h] BYREF
  int v43; // [sp+15Ch] [bp-A4h] BYREF
  _DWORD v44[9]; // [sp+16Ch] [bp-94h] BYREF
  __int64 v45; // [sp+194h] [bp-6Ch]
  int *v46; // [sp+19Ch] [bp-64h]
  int *v47; // [sp+1A0h] [bp-60h]
  int v48; // [sp+1A8h] [bp-58h] BYREF
  int v49; // [sp+1ACh] [bp-54h] BYREF
  int v50; // [sp+1B0h] [bp-50h] BYREF
  int v51; // [sp+1C0h] [bp-40h] BYREF
  char v52[2]; // [sp+1C4h] [bp-3Ch] BYREF
  __int16 v53; // [sp+1C6h] [bp-3Ah]
  int v54; // [sp+1CCh] [bp-34h] BYREF
  _DWORD v55[3]; // [sp+1D4h] [bp-2Ch] BYREF

  v8 = (((~(unsigned int)sub_5ACD0 | 0xA021040) & 0xA061440) + ((unsigned int)sub_5ACD0 & 0x40400 | 0x1010104)) ^ 0xF4B5893C;
  v29 = (char *)H9bD0dU6iE5wV4eE5jN + v8;
  v30 = (char *)off_B0814 + v8;
  v31 = (char *)off_B0818 + v8;
  v32 = (char *)off_B0818 + v8;
  v33 = (char *)off_B081C + v8;
  v34 = (char *)off_B0820 + v8;
  v9 = sub_67C34();
  v10 = sub_1953C(v9);
  v11 = sub_F234(v10);
  v35 = sub_15138(v11);
  v12 = ((int (__fastcall *)(int, int *))sub_FFE4)(v35, &v54);
  ((void (__fastcall *)(int *, int))sub_EE88)(&v54, v12);
  if ( v35 )
  {
    ((void (__fastcall *)(char *, int))loc_11614)(v52, v35);
  }
  else
  {
    v22 = sub_F234(&v54);
    ((void (__fastcall *)(char *, int))sub_EE88)(v52, v22 + 4);
  }
  if ( ((int (__fastcall *)(char *, _DWORD))sub_10E30)(v52, 0) )
  {
    ((void (__fastcall *)(int, _DWORD))sub_EF0C)(a1, 0);
    sub_8C9D8(34970, 7);
    ((void (__fastcall *)(char *))sub_F064)(v52);
    ((void (__fastcall *)(int *))sub_1004C)(&v54);
    ((void (__fastcall *)(_DWORD *))sub_F064)(v55);
    result = _stack_chk_guard - v55[2];
  }
  else
  {
    v26 = 0;
    if ( ((int (__fastcall *)(int, _DWORD))sub_FF38)(a2 + 4, 0) )
    {
      v14 = ((int (__fastcall *)(int))sub_FED0)(a2 + 4);
      v26 = ((int (__fastcall *)(int, int))sub_6D3C0)(v14, 1);
    }
    if ( v26 )
    {
      v53 = 0;
      v21 = sub_4B058(-242459220);
      v20 = (_BYTE *)sub_F234(v21);
      if ( *v20 || v20[1] )
      {
        v25 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v26 + 36);
        ((void (__fastcall *)(int *, int))sub_27464)(&v51, 15);
        v25(v26, &v51);
      }
      v53 = (*(int (__fastcall **)(int))(*(_DWORD *)v26 + 40))(v26);
    }
    else
    {
      v53 = 0;
    }
    sub_7C070();
    v48 = 0;
    v49 = 0;
    v16 = sub_4AFF0();
    v17 = sub_F234(v16);
    v36 = ((__int64 (__fastcall *)(int))sub_76200)(v17);
    v18 = ((int (__fastcall *)(int))sub_116B8)(a3);
    LODWORD(v37) = ((int (__fastcall *)(int, char *))sub_67B06)(v18, v29);
    v19 = ((int (__fastcall *)(int))sub_116B8)(a3);
    HIDWORD(v37) = ((int (__fastcall *)(int, char *))sub_67B06)(v19, v30);
    v38 = operator new(0x10u);
    sub_7C128(v38, v31);
    if ( v37 )
    {
      ((void (__fastcall *)(_DWORD *, _DWORD, _DWORD))sub_7C398)(v44, v37, HIDWORD(v37));
      ((void (__fastcall *)(int, _DWORD *))sub_7C2C0)(v38, v44);
      ((void (__fastcall *)(_DWORD *))sub_7C22C)(v44);
    }
    sub_7C128((int)&v43, v32);
    v24 = ((int (__fastcall *)(int))sub_116B8)(a3);
    v39 = ((int (__fastcall *)(int, char *))sub_67B06)(v24, v33);
    if ( !v39 )
      goto LABEL_18;
    v40 = ((int (__fastcall *)(int, int, _DWORD))sub_7C5CA)(v39, 63, 0);
    v41 = ((int (__fastcall *)(int, int, _DWORD))sub_7C5CA)(v39, 35, 0);
    if ( v40 == -1 )
      goto LABEL_18;
    v13 = 1235041275;
    if ( v41 == -1 )
      v13 = 274532651;
    if ( v41 <= v40 && v13 == 1235041275 )
    {
LABEL_18:
      v44[8] = &v50;
      v44[4] = sub_F234(v52);
      v44[5] = &v43;
      v15 = ((int (__fastcall *)(int))sub_116B8)(a3);
      v44[6] = ((int (__fastcall *)(int, char *))sub_67B06)(v15, v34);
      v44[7] = v38;
      v45 = v36;
      v47 = &v48;
      v46 = &v49;
      memset(v42, 0, sizeof(v42));
      ((void (__fastcall *)(char *, int, void (__noreturn *)(), _DWORD, int, int, int))sub_5B604)(
        (char *)&dword_0 + 3,
        374260,
        sub_5B604,
        0,
        a5,
        a6,
        a7);
    }
    result = ((int (__fastcall *)(int, int, int, int, int, int, int))sub_5B934)(
               375074,
               274532651,
               v41,
               1710768192,
               a5,
               a6,
               a7);
  }
  return result;
}
