int __fastcall sub_1F83C(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v5; // r9
  unsigned int v6; // r7
  int v7; // r8
  unsigned int v8; // r4
  int v9; // r8
  unsigned int v10; // r0
  int v11; // r5
  int v12; // r6
  unsigned int v13; // r4
  int v14; // r8
  unsigned int v15; // r7
  int result; // r0
  int v17; // r0
  int *v18; // r0
  int v19; // [sp+10h] [bp-98h]
  int v20; // [sp+14h] [bp-94h]
  int v21; // [sp+18h] [bp-90h]
  int v22; // [sp+1Ch] [bp-8Ch]
  unsigned int v24; // [sp+28h] [bp-80h]
  int v25; // [sp+2Ch] [bp-7Ch]
  int v26[2]; // [sp+58h] [bp-50h] BYREF
  int v27; // [sp+60h] [bp-48h] BYREF
  int v28[4]; // [sp+64h] [bp-44h] BYREF
  int *v29; // [sp+74h] [bp-34h]
  int *v30; // [sp+78h] [bp-30h]
  int v31; // [sp+7Ch] [bp-2Ch]

  v31 = *unk_54A34;
  v19 = unk_59F2C(a1, a2, a3, a4, a5);
  v22 = a3[1] + *(_DWORD *)(v19 + 32);
  v26[0] = *(_DWORD *)(v22 + 8);
  if ( *unk_54A38 )
  {
    v21 = v22 + 16;
    v5 = 0;
    if ( *unk_54A38 )
    {
      v14 = ((HIBYTE(v26[0]) << 24) + (BYTE2(v26[0]) << 16) + (BYTE1(v26[0]) << 8) + LOBYTE(v26[0]) + 17973517) ^ 0x7F76D;
      v8 = (-1622558010 - v14) ^ (v14 << 8);
      v6 = (-17973517 - v14 - v8) ^ (v8 >> 13);
      v7 = (v14 - v8 - v6) ^ (v6 >> 12);
      v13 = (v8 - v6 - v7) ^ (v7 << 16);
      v15 = (v6 - v7 - v13) ^ (v13 >> 5);
      v9 = (v7 - v13 - v15) ^ (v15 >> 3);
      v24 = (*(_DWORD *)(*(_DWORD *)(**(_DWORD **)((char *)&unk_54DF0 + dword_20088) + 20) + 4) - 1) & ((v15 - v9 - ((v13 - v15 - v9) ^ (v9 << 10))) ^ (((v13 - v15 - v9) ^ (v9 << 10)) >> 15));
      if ( *(_DWORD *)(**(_DWORD **)(*unk_54A38 + 20) + 12 * v24) )
        v5 = (_DWORD *)(*(_DWORD *)(**(_DWORD **)(*unk_54A38 + 20) + 12 * v24)
                      - *(_DWORD *)(*(_DWORD *)(*unk_54A38 + 20) + 20));
      else
        v5 = 0;
      while ( v5 && (v5[11] != 4 || ((int (__fastcall *)(_DWORD, int *, int, int))unk_CB98)(v5[10], v26, 4, 70)) )
      {
        if ( v5[9] )
          v5 = (_DWORD *)(v5[9] - *(_DWORD *)(*(_DWORD *)(**(_DWORD **)((char *)&unk_54DF0 + dword_20088) + 20) + 20));
        else
          v5 = 0;
      }
    }
  }
  else
  {
    v5 = 0;
    v21 = v22 + 16;
  }
  if ( v5 )
  {
    if ( v5[4] )
    {
LABEL_28:
      if ( *unk_54B10 )
        *(_DWORD *)(v19 + 32) = v5[2] - a3[1];
      goto LABEL_43;
    }
    ((void (__fastcall *)(_DWORD))unk_CBA4)(unk_54B3C);
    if ( v5[4] )
    {
LABEL_20:
      ((void (__fastcall *)(_DWORD))unk_CBB0)(unk_54B3C);
      goto LABEL_28;
    }
    ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD *))unk_1EE38)(v26[0], v5[1], v5[3], v5 + 2);
    v20 = v5[2];
    if ( *unk_54B10 )
    {
      if ( v26[0] < 0x3C000000u )
      {
        if ( v26[0] >= 0x4000000u )
          *(_DWORD *)(v20 + 8) = v26[0] & 0x3FFFFFF;
      }
      else
      {
        *(_DWORD *)(v20 + 8) = 0;
      }
      goto LABEL_33;
    }
    v29 = v28;
    v30 = v28;
    v12 = a3[8];
    v11 = a3[7] - v12;
    v10 = v11 + 1;
    v25 = a3[7];
    if ( v11 == -1 )
    {
      ((void (__fastcall *)(void *))dword_4AD48[0])(&unk_50EC5);
    }
    else
    {
      if ( v10 > 0x10 )
      {
        v26[1] = 0;
        v27 = v11 + 1;
        if ( v10 <= 0x80 )
          v17 = ((int (__fastcall *)(int *))dword_4B190)(&v27);
        else
          v17 = ((int (*)(void))dword_4A5F8[0])();
        v30 = (int *)v17;
        v29 = (int *)v17;
        v28[0] = v17 + v27;
      }
      v18 = v30;
      if ( v25 != v12 )
        v18 = (int *)(((int (__fastcall *)(int *, int, int))unk_C9E8)(v30, v12, v11) + v11);
      v29 = v18;
      *(_BYTE *)v18 = 0;
      (**(void (__fastcall ***)(unsigned int, unsigned int, int))((char *)&unk_54DF0 + dword_2008C))(
        (a3[1] + 4095) & 0xFFFFF000,
        ((a3[1] + a3[2] + 4095) & 0xFFFFF000) - ((a3[1] + 4095) & 0xFFFFF000),
        3);
      if ( v30 != v28 && v30 )
      {
        if ( (unsigned int)(v28[0] - (_DWORD)v30) <= 0x80 )
          ((void (*)(void))dword_4B194[0])();
        else
          ((void (*)(void))dword_4A4F0[0])();
      }
      ((void (__fastcall *)(int, int, int))unk_C9E8)(v22 + 16, v20 + 16, 2 * *(_DWORD *)(v22 + 12));
      if ( v26[0] < 0x3C000000u )
      {
        if ( v26[0] >= 0x4000000u )
          *(_DWORD *)(v21 - 8) = v26[0] & 0x3FFFFFF;
        goto LABEL_33;
      }
    }
    *(_DWORD *)(v21 - 8) = 0;
LABEL_33:
    v5[4] = 1;
    goto LABEL_20;
  }
LABEL_43:
  result = v19;
  if ( v31 != *unk_54A34 )
    result = ((int (__fastcall *)(int))unk_CA00)(v19);
  return result;
}
