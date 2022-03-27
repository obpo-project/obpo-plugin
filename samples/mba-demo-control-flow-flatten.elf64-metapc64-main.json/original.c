__int64 __fastcall sub_4004D0(int a1)
{
  int v1; // edx
  int v3; // [rsp+Ch] [rbp-24h]
  int v4[2]; // [rsp+20h] [rbp-10h] BYREF
  int v5; // [rsp+28h] [rbp-8h]
  int v6; // [rsp+2Ch] [rbp-4h]

  v4[1] = -1930904559;
  v5 = -1930904559;
  v6 = a1;
  v3 = -401934658;
  do
  {
    while ( 1 )
    {
      while ( v3 < 1876324853 )
      {
        if ( v3 < 1776719230 )
        {
          if ( v3 == -401934658 )
          {
            v1 = v5 - 275658614;
            if ( v6 == 1 )
              v1 = v5 - 587343507;
            v3 = v1;
          }
        }
        else if ( v3 == 1776719230 )
        {
          v4[0] = v5 - 1773988183;
          ((void (__fastcall *)(int *, void *, char *))unk_400640)(v4, &unk_400820, (char *)&unk_400820 + 16);
          v3 = v5 - 487737884;
        }
      }
      if ( v3 < 2088404123 )
        break;
      if ( v3 == 2088404123 )
      {
        v4[0] = v5 - 1773988183;
        ((void (__fastcall *)(int *, char *, void *))unk_400640)(v4, (char *)&unk_400820 + 16, &unk_400820);
        v3 = v5 - 487737884;
      }
    }
  }
  while ( v3 != 1876324853 );
  return 0LL;
}
