// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3221C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  void **v9; // r11
  int v10; // r0
  void **v11; // r9
  char v12; // r11
  int v13; // r1
  bool v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // [sp-410h] [bp-478h]
  char v18; // [sp-3CCh] [bp-434h]
  int v19; // [sp-2B4h] [bp-31Ch]
  int v20; // [sp-120h] [bp-188h]
  bool v21; // [sp+4Ah] [bp-1Eh]
  bool v22; // [sp+4Bh] [bp-1Dh]

  sub_8C9D8(168922, 7);
  v9 = &W0jT1uK2bO1qR6uR2iM;
  v10 = -515883861;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v16 = v10;
            if ( v10 != -2049516399 )
              break;
            v10 = 1677354147;
          }
          if ( v10 != -1473682360 )
            break;
          ((void (__fastcall *)(int, int, int (*)()))OGRlM2UwZjBlMDFmZGQwODEK::NGMzNzhjNmI0NDQyMzdiNTc9::NGMzNzhjNmI0NDQyMzdiNTc9)(
            *(_DWORD *)&byte_4[(_DWORD)v9] + v17,
            1,
            sub_3220C);
          _cxa_guard_release((__guard *)((char *)*v9 + v17));
          sub_8C9D8(90307, 81);
          v10 = 1988054189;
        }
        if ( v10 != -1129955408 )
          break;
        sub_8C9D8(22504, 19);
        v10 = -1473682360;
      }
      if ( v10 != -904097368 )
        break;
      v10 = 232557015;
    }
    switch ( v10 )
    {
      case -790568684:
        v10 = 603595294;
        if ( v22 )
          v10 = -1129955408;
        break;
      case -515883861:
        v10 = 877516626;
        if ( v18 )
          v10 = 877516626;
        break;
      case 603595294:
        sub_8C9D8(7748, 19);
        v10 = -904097368;
        break;
      case 877516626:
        v11 = v9;
        v12 = *((_BYTE *)*v9 + v19);
        __dmb(0xBu);
        sub_8C9D8(75080, 19);
        v10 = 2022827715;
        if ( v13 )
          v10 = 2051448429;
        v14 = (v12 & 1) == 0;
        v9 = v11;
        v21 = v14;
        break;
      case 1260174657:
        sub_8C9D8(810004, 19);
        v10 = -2049516399;
        if ( v15 )
          v10 = 1677354147;
        break;
      case 1677354147:
        v22 = _cxa_guard_acquire((__guard *)((char *)*v9 + v20)) != 0;
        v10 = -790568684;
        break;
      default:
        v10 = 603595294;
        if ( v16 != 1988054189 )
        {
          if ( v16 == 2022827715 )
          {
            v10 = 877516626;
          }
          else if ( v16 == 2051448429 )
          {
            v10 = 603595294;
            if ( v21 )
              v10 = 1260174657;
          }
          else
          {
            v10 = v16;
            if ( v16 == 232557015 )
              __asm { POP             {R4-R7,PC} }
          }
        }
        break;
    }
  }
}
