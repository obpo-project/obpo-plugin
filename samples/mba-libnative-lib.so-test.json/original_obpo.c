int __fastcall sub_750(int a1, int a2)
{
  int v2; // r3
  int v3; // r6
  int v4; // r7
  int result; // r0
  int v6; // r2
  int v7; // [sp+10h] [bp-20h]

  v3 = 1367282131;
  LOWORD(v2) = 16459;
  if ( a1 < a2 )
    v3 = 4678;
  HIWORD(v2) = -2055;
  if ( a1 < a2 )
    HIWORD(v3) = -12257;
  if ( a2 < 10 )
    v2 = 22636;
  LOWORD(v4) = -30231;
  if ( a2 < 10 )
    HIWORD(v2) = -11248;
  HIWORD(v4) = 30268;
  if ( a1 < 10 )
    v4 = 13274;
  if ( a1 >= 10 )
  {
    v7 = v2;
    if ( v3 == 1367282131 )
    {
      v6 = v4;
      goto LABEL_16;
    }
LABEL_24:
    ((void (__fastcall *)(int))unk_694)(dword_90C + 1956);
    return 1;
  }
  HIWORD(v4) = -5066;
  v7 = v2;
  if ( v3 != 1367282131 )
    goto LABEL_24;
  v6 = v4;
LABEL_16:
  if ( v6 == 1983678953 )
  {
    if ( v7 == -134660021 )
    {
      ((void (__fastcall *)(int))unk_694)(dword_900 + 2028);
      result = 4;
    }
    else
    {
      ((void (__fastcall *)(int))unk_694)(dword_904 + 1980);
      result = 3;
    }
  }
  else
  {
    ((void (__fastcall *)(int))unk_694)(dword_908 + 2004);
    result = 2;
  }
  return result;
}
