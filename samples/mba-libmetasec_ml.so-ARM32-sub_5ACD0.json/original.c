// positive sp value has been detected, the output may be wrong!
int __fastcall sub_5ACD0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  bool v21; // zf
  int v22; // r0
  _BYTE *v23; // r0
  int v24; // r0
  int v26; // r0
  void (__fastcall *v27)(void *, int *); // r5
  int v28; // [sp+4h] [bp-1FCh]
  char *v31; // [sp+64h] [bp-19Ch]
  char *v32; // [sp+68h] [bp-198h]
  char *v33; // [sp+6Ch] [bp-194h]
  char *v34; // [sp+70h] [bp-190h]
  char *v35; // [sp+74h] [bp-18Ch]
  char *v36; // [sp+78h] [bp-188h]
  int v37; // [sp+88h] [bp-178h]
  int v38; // [sp+94h] [bp-16Ch]
  __int64 v39; // [sp+ACh] [bp-154h]
  __int64 v40; // [sp+B4h] [bp-14Ch]
  int v41; // [sp+BCh] [bp-144h]
  int v42; // [sp+C4h] [bp-13Ch]
  int v43; // [sp+C8h] [bp-138h]
  int v44; // [sp+CCh] [bp-134h]
  void *v45; // [sp+110h] [bp-F0h]
  int v46[8]; // [sp+13Ch] [bp-C4h] BYREF
  int v47; // [sp+15Ch] [bp-A4h] BYREF
  _DWORD v48[9]; // [sp+16Ch] [bp-94h] BYREF
  __int64 v49; // [sp+194h] [bp-6Ch]
  int *v50; // [sp+19Ch] [bp-64h]
  int *v51; // [sp+1A0h] [bp-60h]
  int v52; // [sp+1A8h] [bp-58h] BYREF
  int v53; // [sp+1ACh] [bp-54h] BYREF
  int v54; // [sp+1B0h] [bp-50h] BYREF
  int v55; // [sp+1C0h] [bp-40h] BYREF
  char v56[2]; // [sp+1C4h] [bp-3Ch] BYREF
  __int16 v57; // [sp+1C6h] [bp-3Ah]
  int v58; // [sp+1CCh] [bp-34h] BYREF
  _DWORD v59[3]; // [sp+1D4h] [bp-2Ch] BYREF

  v8 = (((~(unsigned int)sub_5ACD0 | 0xA021040) & 0xA061440) + ((unsigned int)sub_5ACD0 & 0x40400 | 0x1010104)) ^ 0xF4B5893C;
  v31 = (char *)H9bD0dU6iE5wV4eE5jN + v8;
  v32 = (char *)off_B0814 + v8;
  v33 = (char *)off_B0818 + v8;
  v34 = (char *)off_B0818 + v8;
  v35 = (char *)off_B081C + v8;
  v36 = (char *)off_B0820 + v8;
  v9 = sub_67C34();
  v10 = sub_1953C(v9);
  v11 = sub_F234(v10);
  v37 = sub_15138(v11);
  v12 = ((int (__fastcall *)(int, int *))sub_FFE4)(v37, &v58);
  ((void (__fastcall *)(int *, int))sub_EE88)(&v58, v12);
  v14 = 1456549160;
  while ( v14 != -1659000376 )
  {
    if ( v14 == -1996059755 )
    {
      v13 = v44;
      v14 = 1235041275;
      if ( v44 == -1 )
        v14 = 274532651;
      if ( v44 > v43 )
        v14 = 274532651;
    }
    else if ( v14 == -1244426642 )
    {
      ((void (__fastcall *)(int, _DWORD))sub_EF0C)(a1, 0);
      v14 = -935066353;
    }
    else if ( v14 == -980232082 )
    {
      v57 = (*(int (__fastcall **)(void *))(*(_DWORD *)v45 + 40))(v45);
      v14 = -309533425;
    }
    else if ( v14 == -935066353 )
    {
      sub_8C9D8(34970, 7);
      v14 = -1659000376;
    }
    else if ( v14 == -694228878 )
    {
      v15 = ((int (__fastcall *)(int))sub_FED0)(v38);
      v28 = ((int (__fastcall *)(int, int))sub_6D3C0)(v15, 1);
      v14 = 879064207;
    }
    else
    {
      if ( v14 == -503145162 )
      {
        v48[8] = &v54;
        v48[4] = sub_F234(v56);
        v48[5] = &v47;
        v16 = ((int (__fastcall *)(int))sub_116B8)(a3);
        v48[6] = ((int (__fastcall *)(int, char *))sub_67B06)(v16, v36);
        v48[7] = v41;
        v49 = v39;
        v51 = &v52;
        v50 = &v53;
        memset(v46, 0, sizeof(v46));
        ((void (__fastcall *)(char *, int, void (__noreturn *)(), _DWORD, int, int, int))sub_5B604)(
          (char *)&dword_0 + 3,
          374260,
          sub_5B604,
          0,
          a5,
          a6,
          a7);
      }
      switch ( v14 )
      {
        case -469660427:
          ((void (__fastcall *)(_DWORD *, _DWORD, _DWORD))sub_7C398)(v48, v40, HIDWORD(v40));
          ((void (__fastcall *)(int, _DWORD *))sub_7C2C0)(v41, v48);
          ((void (__fastcall *)(_DWORD *))sub_7C22C)(v48);
          v14 = 427232463;
          break;
        case -309533425:
          sub_7C070();
          v52 = 0;
          v53 = 0;
          v17 = sub_4AFF0();
          v18 = sub_F234(v17);
          v39 = ((__int64 (__fastcall *)(int))sub_76200)(v18);
          v19 = ((int (__fastcall *)(int))sub_116B8)(a3);
          LODWORD(v40) = ((int (__fastcall *)(int, char *))sub_67B06)(v19, v31);
          v20 = ((int (__fastcall *)(int))sub_116B8)(a3);
          HIDWORD(v40) = ((int (__fastcall *)(int, char *))sub_67B06)(v20, v32);
          v41 = operator new(0x10u);
          sub_7C128(v41, v33);
          v14 = 427232463;
          if ( v40 )
            v14 = -469660427;
          break;
        case -306037246:
          v38 = a2 + 4;
          v28 = 0;
          v21 = ((int (__fastcall *)(int, _DWORD))sub_FF38)(a2 + 4, 0) == 0;
          v14 = 879064207;
          if ( !v21 )
            v14 = -694228878;
          break;
        case -242459220:
          v22 = sub_4B058(-242459220);
          v23 = (_BYTE *)sub_F234(v22);
          if ( *v23 || (v21 = v23[1] == 0, v14 = -980232082, !v21) )
            v14 = 674257945;
          break;
        case -226490882:
          v24 = sub_F234(&v58);
          ((void (__fastcall *)(char *, int))sub_EE88)(v56, v24 + 4);
          goto LABEL_46;
        case -205305615:
          ((void (__fastcall *)(char *, int))loc_11614)(v56, v37);
LABEL_46:
          v14 = 1533258725;
          break;
        case 274532651:
          return ((int (__fastcall *)(int, int, int, int, int, int, int))sub_5B934)(
                   375074,
                   274532651,
                   v13,
                   1710768192,
                   a5,
                   a6,
                   a7);
        case 427232463:
          sub_7C128((int)&v47, v34);
          v26 = ((int (__fastcall *)(int))sub_116B8)(a3);
          v42 = ((int (__fastcall *)(int, char *))sub_67B06)(v26, v35);
          v14 = 1741385665;
          if ( !v42 )
            v14 = -503145162;
          break;
        case 674257945:
          v27 = *(void (__fastcall **)(void *, int *))(*(_DWORD *)v45 + 36);
          ((void (__fastcall *)(int *, int))sub_27464)(&v55, 15);
          v27(v45, &v55);
          v14 = -980232082;
          break;
        case 879064207:
          v45 = (void *)v28;
          v14 = -242459220;
          if ( !v28 )
            v14 = -309533425;
          v57 = 0;
          break;
        case 1235041275:
          v14 = -503145162;
          break;
        case 1533258725:
          v21 = ((int (__fastcall *)(char *, _DWORD))sub_10E30)(v56, 0) == 0;
          v14 = -306037246;
          if ( !v21 )
            v14 = -1244426642;
          break;
        case 1741385665:
          v43 = ((int (__fastcall *)(int, int, _DWORD))sub_7C5CA)(v42, 63, 0);
          v44 = ((int (__fastcall *)(int, int, _DWORD))sub_7C5CA)(v42, 35, 0);
          v14 = -1996059755;
          if ( v43 == -1 )
            v14 = 1235041275;
          break;
        default:
          v14 = -205305615;
          if ( !v37 )
            v14 = -226490882;
          break;
      }
    }
  }
  ((void (__fastcall *)(char *))sub_F064)(v56);
  ((void (__fastcall *)(int *))sub_1004C)(&v58);
  ((void (__fastcall *)(_DWORD *))sub_F064)(v59);
  return _stack_chk_guard - v59[2];
}
