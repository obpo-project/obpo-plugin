// positive sp value has been detected, the output may be wrong!
int sub_5C6E4()
{
  char v0; // r0
  int v1; // r4
  int v2; // r4
  char v3; // r4
  int v4; // r4
  unsigned int v6; // r8
  unsigned int v7; // r5
  unsigned int v8; // r1
  char v9; // r4
  unsigned int v10; // r5
  char *v11; // [sp-38h] [bp-108h]
  char *v12; // [sp-34h] [bp-104h]

  sub_8C9D8(7570, 7);
  v8 = (((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)
      + ((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)) ^ 0xF5E7DDAC;
  v11 = (char *)off_B0884 + v8;
  v12 = (char *)off_B0888 + v8;
  v0 = *((_BYTE *)Z8gB1mZ0jN9qP8vR1zC + v8);
  __dmb(0xBu);
  if ( (v0 & 1) == 0 )
  {
    sub_8C9D8(2557, 81);
    v1 = _cxa_guard_acquire((__guard *)((char *)Z8gB1mZ0jN9qP8vR1zC
                                      + ((((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)
                                        + ((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)) ^ 0xF5E7DDAC)));
    sub_8C9D8(295940, 19);
    if ( v1 )
    {
      sub_8C9D8(343400, 19);
      v6 = (((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)
          + ((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)) ^ 0xF5E7DDAC;
      ((void (__fastcall *)(char *, int, int (*)()))OGRlM2UwZjBlMDFmZGQwODEK::NGMzNzhjNmI0NDQyMzdiNTc9::NGMzNzhjNmI0NDQyMzdiNTc9)(
        (char *)off_B088C + v6,
        3,
        sub_5C6B4);
      _cxa_guard_release((__guard *)((char *)Z8gB1mZ0jN9qP8vR1zC + v6));
      sub_8C9D8(104013, 81);
    }
  }
  sub_8C9D8(65026, 7);
  v9 = *v11;
  __dmb(0xBu);
  sub_8C9D8(83522, 7);
  if ( (v9 & 1) == 0 )
  {
    sub_8C9D8(68648, 19);
    v4 = _cxa_guard_acquire((__guard *)((char *)off_B0884
                                      + ((((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)
                                        + ((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)) ^ 0xF5E7DDAC)));
    sub_8C9D8(135428, 19);
    if ( v4 )
    {
      sub_8C9D8(50, 7);
      v7 = (((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)
          + ((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)) ^ 0xF5E7DDAC;
      ((void (__fastcall *)(char *, int, int (*)()))OGRlM2UwZjBlMDFmZGQwODEK::NGMzNzhjNmI0NDQyMzdiNTc9::NGMzNzhjNmI0NDQyMzdiNTc9)(
        (char *)off_B0890 + v7,
        5,
        sub_5C6C4);
      _cxa_guard_release((__guard *)((char *)off_B0884 + v7));
      sub_8C9D8(125317, 7);
    }
  }
  sub_8C9D8(249002, 7);
  v3 = *v12;
  __dmb(0xBu);
  sub_8C9D8(1937, 7);
  if ( (v3 & 1) == 0 )
  {
    sub_8C9D8(23108, 19);
    v2 = _cxa_guard_acquire((__guard *)((char *)off_B0888
                                      + ((((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)
                                        + ((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)) ^ 0xF5E7DDAC)));
    sub_8C9D8(481640, 19);
    if ( v2 )
    {
      sub_8C9D8(13347, 81);
      v10 = (((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)
           + ((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)) ^ 0xF5E7DDAC;
      ((void (__fastcall *)(char *, int, int (*)()))OGRlM2UwZjBlMDFmZGQwODEK::NGMzNzhjNmI0NDQyMzdiNTc9::NGMzNzhjNmI0NDQyMzdiNTc9)(
        (char *)off_B0894 + v10,
        6,
        sub_5C6D4);
      _cxa_guard_release((__guard *)((char *)off_B0888 + v10));
    }
  }
  sub_8C9D8(24968, 19);
  return -1828138541;
}
