__int64 __fastcall sub_12084(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 result; // x0
  __int128 v3; // q0
  unsigned __int8 *v4; // x20
  unsigned __int64 v5; // [xsp+60h] [xbp-80h]
  __int64 vars0; // [xsp+E0h] [xbp+0h]

  v5 = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  result = 1638577616LL;
  vars0 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  if ( (*a2 & 1) != 0 )
  {
    v4 = a2;
    ((void (__fastcall *)(unsigned __int8 *, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64))unk_172BC)(
      a1,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 1),
      287568387LL,
      4134339109LL,
      3880710774LL,
      3405803793LL,
      3086396599LL);
    a2 = v4;
    result = 1638577616LL;
  }
  else
  {
    v3 = *(_OWORD *)a2;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    *(_OWORD *)a1 = v3;
  }
  if ( *(_QWORD *)(v5 + 40) != vars0 )
    ((void (__fastcall *)(__int64, unsigned __int8 *, __int64, __int64, __int64, __int64, __int64, __int64))unk_EDD0)(
      1638577616LL,
      a2,
      1035379591LL,
      287568387LL,
      4134339109LL,
      3880710774LL,
      3405803793LL,
      3086396599LL);
  return result;
}
