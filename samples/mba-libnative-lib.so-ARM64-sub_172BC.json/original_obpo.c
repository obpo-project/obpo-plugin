__int64 __fastcall sub_172BC(__int64 result, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // [xsp+60h] [xbp-70h]
  _QWORD *v5; // [xsp+68h] [xbp-68h]
  unsigned __int64 v6; // [xsp+70h] [xbp-60h]
  __int64 v7; // [xsp+98h] [xbp-38h]
  __int64 v8; // [xsp+A0h] [xbp-30h]

  v6 = a3;
  if ( a3 > 0xFFFFFFFFFFFFFFEFLL )
  {
    ((void (__fastcall *)(__int64, __int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64))unk_1451C)(
      result,
      3088245693LL,
      a3,
      1715459449LL,
      3288392743LL,
      2775917828LL,
      1089353661LL,
      849341055LL);
    JUMPOUT(0x17F9CLL);
  }
  if ( a3 >= 0x17 )
  {
    v5 = (_QWORD *)result;
    v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64))unk_14D40)(a3, 3088245693LL) + 1;
    v8 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))unk_15000)(v5, v7, 1479687449LL);
    result = (__int64)v5;
    a3 = v6;
    v5[2] = v8;
    *v5 = v7 & 1 | v7 ^ 1;
    v5[1] = v6;
    v4 = v8;
  }
  else
  {
    *(_BYTE *)result = 2 * a3;
    v4 = result + 1;
  }
  if ( a3 )
  {
    result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64))unk_F030)(
               v4,
               a2,
               v6,
               1715459449LL,
               3288392743LL,
               2775917828LL,
               1089353661LL,
               849341055LL);
    a3 = v6;
  }
  *(_BYTE *)(v4 + a3) = 0;
  return result;
}
