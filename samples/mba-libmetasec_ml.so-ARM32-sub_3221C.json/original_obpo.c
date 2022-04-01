// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3221C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  char v9; // r11
  bool v10; // r1
  int v11; // [sp-410h] [bp-478h]
  int v12; // [sp-2B4h] [bp-31Ch]
  int v13; // [sp-120h] [bp-188h]

  sub_8C9D8(168922, 7);
  v9 = *((_BYTE *)W0jT1uK2bO1qR6uR2iM + v12);
  __dmb(0xBu);
  sub_8C9D8(75080, 19);
  v10 = 0;
  if ( (v9 & 1) == 0 )
    v10 = (v9 & 1) == 0;
  if ( v10 )
  {
    sub_8C9D8(810004, 19);
    if ( _cxa_guard_acquire((__guard *)((char *)W0jT1uK2bO1qR6uR2iM + v13)) != 0 )
    {
      sub_8C9D8(22504, 19);
      ((void (__fastcall *)(char *, int, int (*)()))OGRlM2UwZjBlMDFmZGQwODEK::NGMzNzhjNmI0NDQyMzdiNTc9::NGMzNzhjNmI0NDQyMzdiNTc9)(
        (char *)off_B01B8 + v11,
        1,
        sub_3220C);
      _cxa_guard_release((__guard *)((char *)W0jT1uK2bO1qR6uR2iM + v11));
      sub_8C9D8(90307, 81);
    }
  }
  sub_8C9D8(7748, 19);
  __asm { POP             {R4-R7,PC} }
}
