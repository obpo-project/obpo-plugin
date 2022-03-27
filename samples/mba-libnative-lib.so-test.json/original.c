int __fastcall sub_750(int a1, int a2)
{
  int v2; // r6
  int v3; // r3
  int v4; // r7
  int v5; // r2
  int v6; // r10
  int v7; // r9
  int v8; // r8
  int v9; // r5
  int result; // r0
  int v11; // r4
  int v12; // r1
  int v13; // [sp+10h] [bp-20h]

  v2 = 1367282131;
  LOWORD(v3) = 16459;
  if ( a1 < a2 )
    v2 = 4678;
  HIWORD(v3) = -2055;
  if ( a1 < a2 )
    HIWORD(v2) = -12257;
  if ( a2 < 10 )
    v3 = 22636;
  LOWORD(v4) = -30231;
  if ( a2 < 10 )
    HIWORD(v3) = -11248;
  LOWORD(v5) = 6923;
  HIWORD(v4) = 30268;
  LOWORD(v6) = 14374;
  if ( a1 < 10 )
    v4 = 13274;
  LOWORD(v7) = 16458;
  LOWORD(v8) = 22635;
  LOWORD(v9) = 4562;
  HIWORD(v5) = -23883;
  if ( a1 < 10 )
    HIWORD(v4) = -5066;
  HIWORD(v6) = 12660;
  HIWORD(v7) = -2055;
  HIWORD(v8) = -11248;
  result = dword_900 + 2028;
  HIWORD(v9) = 20863;
  v11 = v5;
  v13 = v3;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = v5;
          if ( v5 > v7 )
            break;
          if ( v5 > v8 )
          {
            if ( v5 == -737126292 )
            {
              ((void (__fastcall *)(int))unk_694)(dword_904 + 1980);
              result = 3;
              v5 = v6;
            }
            else if ( v5 == -331992102 )
            {
              ((void (__fastcall *)(int))unk_694)(dword_908 + 2004);
              result = 2;
              v5 = v6;
            }
          }
          else
          {
            v5 = v2;
            if ( v12 != v11 )
            {
              v5 = v12;
              if ( v12 == -803270074 )
              {
                ((void (__fastcall *)(int))unk_694)(dword_90C + 1956);
                result = 1;
                v5 = v6;
              }
            }
          }
        }
        if ( v5 <= v9 )
          break;
        v5 = v4;
        if ( v12 != 1367282131 )
        {
          v5 = v12;
          if ( v12 == 1983678953 )
            v5 = v13;
        }
      }
      if ( v5 != -134660021 )
        break;
      ((void (__fastcall *)(int))unk_694)(dword_900 + 2028);
      result = 4;
      v5 = v6;
    }
  }
  while ( v5 != v6 );
  return result;
}
