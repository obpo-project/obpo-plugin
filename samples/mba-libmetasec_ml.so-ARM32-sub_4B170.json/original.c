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
  int v20; // r1
  char v21; // r0
  int v22; // r0
  int v23; // r0
  char *v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r6
  int v28; // r0
  int v29; // r0
  int v30; // r0
  char *v32; // [sp+14h] [bp-1B0h]
  int v33; // [sp+1Ch] [bp-1A8h]
  int v34; // [sp+28h] [bp-19Ch]
  _DWORD v35[3]; // [sp+FCh] [bp-C8h] BYREF
  char v36[8]; // [sp+108h] [bp-BCh] BYREF
  char v37[8]; // [sp+118h] [bp-ACh] BYREF
  int v38; // [sp+144h] [bp-80h] BYREF
  char v39[60]; // [sp+14Ch] [bp-78h] BYREF

  v10 = (((~(unsigned int)sub_4B170 | 0xA021040) & 0xA061440) + ((unsigned int)sub_4B170 & 0x40400 | 0x1010104)) ^ 0xF5F1C344;
  v32 = (char *)off_B0670 + v10;
  qmemcpy(v39, (char *)off_B066C + v10, 0x14u);
  v12 = sub_4B058(v11);
  v13 = sub_F234(v12);
  v14 = sub_5C2C4(v13);
  v15 = sub_4B058(v14);
  v16 = sub_F234(v15);
  v17 = sub_5C530(v16);
  v18 = sub_1953C(v17);
  v19 = sub_F234(v18);
  v33 = sub_15138(v19);
  v20 = -2038358227;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = v20;
        if ( v20 != -1986178147 )
          break;
        ((void (__fastcall *)(int *, _DWORD))sub_EF0C)(&v38, 0);
        v20 = -1832528851;
      }
      if ( v20 == -1832528851 )
        break;
      if ( v20 == -1174121995 )
      {
        v23 = ((int (__fastcall *)(int *))sub_FED0)(&v38);
        v34 = ((int (__fastcall *)(int, int))sub_6D3C0)(v23, 4);
        v20 = 1089302360;
        if ( !v34 )
          v20 = 791484641;
      }
      else
      {
        if ( v20 == 661194683 )
        {
          v24 = (char *)((int (__fastcall *)(char *, int))sub_7554C)(v39, 20);
          sub_7C128((int)v36, v24);
          ((void (__fastcall *)(char *, int, char *, int))sub_6826C)(v37, 1, v36, 10);
          v25 = ((int (__fastcall *)(char *))sub_7C22C)(v36);
          v26 = ((int (__fastcall *)(int))sub_FF7C)(v25);
          v27 = sub_F234(v26);
          sub_7C128((int)v36, v32);
          ((void (__fastcall *)(int, char *))sub_63C10)(v27, v36);
          ((void (__fastcall *)(char *))sub_7C22C)(v36);
          v35[2] = a3;
          ((void (__fastcall *)(_DWORD *))sub_67C34)(v35);
          v28 = sub_67C34();
          v29 = ((int (__fastcall *)(int))sub_10EA8)(v28);
          ((__int64 (__fastcall *)(int))sub_F234)(v29);
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
        v20 = 661194683;
        if ( v30 != 791484641 )
        {
          if ( v30 == 1089302360 )
          {
            (*(void (__fastcall **)(int, int))(*(_DWORD *)v34 + 56))(v34, 1);
            v20 = 791484641;
          }
          else if ( v30 == 1810547942 )
          {
            ((void (__fastcall *)(int *, int))sub_EE88)(&v38, v33 + 12);
            v20 = -1832528851;
          }
          else
          {
            v21 = v33;
            v20 = -1986178147;
            if ( v33 )
              v21 = 1;
            if ( v21 )
              v20 = 1810547942;
          }
        }
      }
    }
    v22 = ((int (__fastcall *)(int *, _DWORD))sub_FF38)(&v38, 0);
    v20 = 661194683;
    if ( v22 )
      v20 = -1174121995;
  }
}
