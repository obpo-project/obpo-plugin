// positive sp value has been detected, the output may be wrong!
void __fastcall sub_4B170(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  char v20; // r0
  int v21; // r1
  int v22; // r1
  int v23; // r0
  int v24; // r1
  int v25; // r0
  char *v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r6
  int v30; // r0
  int v31; // r0
  char *v33; // [sp+14h] [bp-1B0h]
  int v34; // [sp+1Ch] [bp-1A8h]
  int v35; // [sp+28h] [bp-19Ch]
  _DWORD v36[3]; // [sp+FCh] [bp-C8h] BYREF
  char v37[8]; // [sp+108h] [bp-BCh] BYREF
  char v38[8]; // [sp+118h] [bp-ACh] BYREF
  int v39; // [sp+144h] [bp-80h] BYREF
  char v40[60]; // [sp+14Ch] [bp-78h] BYREF

  v10 = (((~(unsigned int)sub_4B170 | 0xA021040) & 0xA061440) + ((unsigned int)sub_4B170 & 0x40400 | 0x1010104)) ^ 0xF5F1C344;
  v33 = (char *)off_B0670 + v10;
  qmemcpy(v40, (char *)off_B066C + v10, 0x14u);
  v12 = sub_4B058(v11);
  v13 = sub_F234(v12);
  v14 = sub_5C2C4(v13);
  v15 = sub_4B058(v14);
  v16 = sub_F234(v15);
  v17 = sub_5C530(v16);
  v18 = sub_1953C(v17);
  v19 = sub_F234(v18);
  v34 = sub_15138(v19);
  v20 = v34;
  v21 = -1986178147;
  if ( v34 )
    v20 = 1;
  if ( v20 )
    v21 = 1810547942;
  if ( v21 == 1810547942 )
    ((void (__fastcall *)(int *, int))sub_EE88)(&v39, v34 + 12);
  else
    ((void (__fastcall *)(int *, _DWORD))sub_EF0C)(&v39, 0);
  v23 = ((int (__fastcall *)(int *, _DWORD))sub_FF38)(&v39, 0);
  v22 = 661194683;
  if ( v23 )
    v22 = -1174121995;
  if ( v22 == -1174121995 )
  {
    v25 = ((int (__fastcall *)(int *))sub_FED0)(&v39);
    v35 = ((int (__fastcall *)(int, int))sub_6D3C0)(v25, 4);
    v24 = 1089302360;
    if ( !v35 )
      v24 = 791484641;
    if ( v24 != 791484641 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v35 + 56))(v35, 1);
  }
  v26 = (char *)((int (__fastcall *)(char *, int))sub_7554C)(v40, 20);
  sub_7C128((int)v37, v26);
  ((void (__fastcall *)(char *, int, char *, int))sub_6826C)(v38, 1, v37, 10);
  v27 = ((int (__fastcall *)(char *))sub_7C22C)(v37);
  v28 = ((int (__fastcall *)(int))sub_FF7C)(v27);
  v29 = sub_F234(v28);
  sub_7C128((int)v37, v33);
  ((void (__fastcall *)(int, char *))sub_63C10)(v29, v37);
  ((void (__fastcall *)(char *))sub_7C22C)(v37);
  v36[2] = a3;
  ((void (__fastcall *)(_DWORD *))sub_67C34)(v36);
  v30 = sub_67C34();
  v31 = ((int (__fastcall *)(int))sub_10EA8)(v30);
  ((__int64 (__fastcall *)(int))sub_F234)(v31);
  ((void (__fastcall *)(char *, int, void (__noreturn *)(), _DWORD, int, int, int, int, int, int))sub_4B728)(
    (char *)&dword_0 + 3,
    309016,
    sub_4B728,
    0,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
}
