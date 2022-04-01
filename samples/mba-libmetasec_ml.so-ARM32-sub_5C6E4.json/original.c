// positive sp value has been detected, the output may be wrong!
int sub_5C6E4()
{
  int v0; // r5
  int v1; // r1
  int v2; // r0
  char v3; // r4
  int v4; // r1
  char v5; // r4
  int v6; // r1
  int v7; // r4
  int v8; // r4
  int v9; // r1
  int v10; // r1
  int v11; // r1
  unsigned int v12; // r8
  int v13; // r8
  unsigned int v14; // r5
  __guard *v15; // r0
  int v16; // r1
  unsigned int v17; // r1
  char v18; // r0
  int v19; // r4
  int v20; // r1
  int v21; // r8
  unsigned int v22; // r5
  __guard *v23; // r0
  int v24; // r1
  int result; // r0
  char *v26; // [sp-38h] [bp-108h]
  char *v27; // [sp-34h] [bp-104h]
  bool v28; // [sp-2Ch] [bp-FCh]
  bool v29; // [sp+A2h] [bp-2Eh]
  bool v30; // [sp+AEh] [bp-22h]
  bool v31; // [sp+AFh] [bp-21h]
  bool v32; // [sp+B1h] [bp-1Fh]
  bool v33; // [sp+B2h] [bp-1Eh]
  bool v34; // [sp+B3h] [bp-1Dh]

  v0 = 612308601;
  sub_8C9D8(7570, 7);
  v29 = v1 != 0;
  v2 = 612308601;
  while ( 1 )
  {
    v24 = v2;
    result = -1828138541;
    if ( v24 == -1828138541 )
      break;
    switch ( v24 )
    {
      case -2146227069:
        v3 = *v27;
        __dmb(0xBu);
        sub_8C9D8(1937, 7);
        v2 = 1932191633;
        if ( v4 )
          v2 = -1685736265;
        v33 = (v3 & 1) == 0;
        break;
      case -1866867989:
        v2 = -137111976;
        if ( v34 )
          v2 = -83172547;
        break;
      case -1863630894:
        v2 = 1593079609;
        if ( v30 )
          v2 = 536499568;
        break;
      case -1685736265:
        v2 = -137111976;
        if ( v33 )
          v2 = 495979342;
        break;
      default:
        v2 = -849010338;
        if ( v24 != -1656366550 )
        {
          switch ( v24 )
          {
            case -1510911561:
              v2 = -978606591;
              break;
            case -1335218761:
              v2 = 999048159;
              break;
            case -978606591:
              v5 = *v26;
              __dmb(0xBu);
              sub_8C9D8(83522, 7);
              v2 = -1510911561;
              if ( v6 )
                v2 = -537020637;
              v28 = (v5 & 1) == 0;
              break;
            case -849010338:
              sub_8C9D8(249002, 7);
              v2 = -2146227069;
              break;
            case -760323257:
              v7 = _cxa_guard_acquire((__guard *)((char *)Z8gB1mZ0jN9qP8vR1zC
                                                + ((((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)
                                                  + ((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)) ^ 0xF5E7DDAC)));
              sub_8C9D8(295940, 19);
              v2 = 1300911796;
              v31 = v7 != 0;
              break;
            case -633172898:
              v2 = 1379646417;
              break;
            case -537020637:
              v2 = -849010338;
              if ( v28 )
                v2 = 260456365;
              break;
            case -137507003:
              v8 = _cxa_guard_acquire((__guard *)((char *)off_B0884
                                                + ((((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)
                                                  + ((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)) ^ 0xF5E7DDAC)));
              sub_8C9D8(135428, 19);
              v2 = 1232142673;
              v32 = v8 != 0;
              break;
            case -137111976:
              sub_8C9D8(24968, 19);
              v2 = -122141512;
              break;
            case -122141512:
              v2 = -1828138541;
              break;
            default:
              v2 = -137111976;
              if ( v24 != -86326986 )
              {
                switch ( v24 )
                {
                  case -83172547:
                    sub_8C9D8(13347, 81);
                    v2 = 1703973112;
                    if ( !v9 )
                      v2 = 485397312;
                    break;
                  case 44489789:
                    sub_8C9D8(343400, 19);
                    v2 = 1960833767;
                    if ( v10 )
                      v2 = 815752596;
                    break;
                  case 260456365:
                    sub_8C9D8(68648, 19);
                    v2 = -137507003;
                    break;
                  default:
                    v2 = 1593079609;
                    if ( v24 != 406538658 )
                    {
                      switch ( v24 )
                      {
                        case 485397312:
                          v2 = 1703973112;
                          break;
                        case 495979342:
                          sub_8C9D8(23108, 19);
                          v2 = -633172898;
                          if ( v11 )
                            v2 = 1379646417;
                          break;
                        case 536499568:
                          sub_8C9D8(2557, 81);
                          v2 = -760323257;
                          break;
                        case 1960833767:
                          v2 = 815752596;
                          break;
                        case 815752596:
                          v12 = (((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)
                               + ((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)) ^ 0xF5E7DDAC;
                          ((void (__fastcall *)(char *, int, int (*)()))OGRlM2UwZjBlMDFmZGQwODEK::NGMzNzhjNmI0NDQyMzdiNTc9::NGMzNzhjNmI0NDQyMzdiNTc9)(
                            (char *)off_B088C + v12,
                            3,
                            sub_5C6B4);
                          _cxa_guard_release((__guard *)((char *)Z8gB1mZ0jN9qP8vR1zC + v12));
                          sub_8C9D8(104013, 81);
                          v2 = 406538658;
                          break;
                        case 999048159:
                          v13 = v0;
                          v14 = (((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)
                               + ((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)) ^ 0xF5E7DDAC;
                          ((void (__fastcall *)(char *, int, int (*)()))OGRlM2UwZjBlMDFmZGQwODEK::NGMzNzhjNmI0NDQyMzdiNTc9::NGMzNzhjNmI0NDQyMzdiNTc9)(
                            (char *)off_B0890 + v14,
                            5,
                            sub_5C6C4);
                          v15 = (__guard *)((char *)off_B0884 + v14);
                          v0 = v13;
                          _cxa_guard_release(v15);
                          sub_8C9D8(125317, 7);
                          v2 = -1335218761;
                          if ( v16 )
                            v2 = -1656366550;
                          break;
                        case 1066051560:
                          v17 = (((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)
                               + ((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)) ^ 0xF5E7DDAC;
                          v26 = (char *)off_B0884 + v17;
                          v27 = (char *)off_B0888 + v17;
                          v18 = *((_BYTE *)Z8gB1mZ0jN9qP8vR1zC + v17);
                          __dmb(0xBu);
                          v30 = (v18 & 1) == 0;
                          v2 = -1863630894;
                          break;
                        case 1202586215:
                          v2 = 1066051560;
                          break;
                        case 1232142673:
                          v2 = -849010338;
                          if ( v32 )
                            v2 = 1832239381;
                          break;
                        case 1300911796:
                          v2 = 1593079609;
                          if ( v31 )
                            v2 = 44489789;
                          break;
                        case 1379646417:
                          v19 = _cxa_guard_acquire((__guard *)((char *)off_B0888
                                                             + ((((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)
                                                               + ((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)) ^ 0xF5E7DDAC)));
                          sub_8C9D8(481640, 19);
                          v2 = -1866867989;
                          v34 = v19 != 0;
                          break;
                        case 1593079609:
                          sub_8C9D8(65026, 7);
                          v2 = -1510911561;
                          if ( v20 )
                            v2 = -978606591;
                          break;
                        case 1703973112:
                          v21 = v0;
                          v22 = (((unsigned int)sub_40400 & (unsigned int)sub_5C6E4 | 0x1010104)
                               + ((~(unsigned int)sub_5C6E4 | 0xA021040) & 0xA061440)) ^ 0xF5E7DDAC;
                          ((void (__fastcall *)(char *, int, int (*)()))OGRlM2UwZjBlMDFmZGQwODEK::NGMzNzhjNmI0NDQyMzdiNTc9::NGMzNzhjNmI0NDQyMzdiNTc9)(
                            (char *)off_B0894 + v22,
                            6,
                            sub_5C6D4);
                          v23 = (__guard *)((char *)off_B0888 + v22);
                          v0 = v21;
                          _cxa_guard_release(v23);
                          v2 = -86326986;
                          break;
                        case 1832239381:
                          sub_8C9D8(50, 7);
                          v2 = 999048159;
                          break;
                        case 1932191633:
                          v2 = -2146227069;
                          break;
                        default:
                          v2 = 1202586215;
                          if ( v29 )
                            v2 = 1066051560;
                          break;
                      }
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
  }
  return result;
}
