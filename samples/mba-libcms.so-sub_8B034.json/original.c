// positive sp value has been detected, the output may be wrong!
void __fastcall sub_8B034(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r12
  int v10; // r6
  int v11; // r1
  int v12; // r12
  int m; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int i; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r6
  int v21; // r0
  int l; // r0
  char v23; // r0
  int j; // r0
  int v25; // r5
  int v26; // r5
  int v27; // r0
  int v28; // r1
  int v29; // r5
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int k; // r0
  int v34; // r5
  int v35; // [sp-2B2Ch] [bp-2DACh]
  int v36; // [sp-2B10h] [bp-2D90h]
  int v37; // [sp-1CFCh] [bp-1F7Ch]
  char v38; // [sp-1C14h] [bp-1E94h]
  int v39; // [sp-1BA4h] [bp-1E24h]
  int v40; // [sp-1B9Ch] [bp-1E1Ch]
  int v41; // [sp-1B28h] [bp-1DA8h]
  int v42; // [sp-1B20h] [bp-1DA0h]
  int v43; // [sp-1B14h] [bp-1D94h]
  int v44; // [sp-1A00h] [bp-1C80h]
  int v45; // [sp-19C8h] [bp-1C48h]
  char v46; // [sp-17E0h] [bp-1A60h]
  char v47; // [sp-17DCh] [bp-1A5Ch]
  int v48; // [sp-16B0h] [bp-1930h]
  int v49; // [sp-14D0h] [bp-1750h]
  int v50; // [sp-14C0h] [bp-1740h]
  int v51; // [sp-14B8h] [bp-1738h]
  int v52; // [sp-13E4h] [bp-1664h]
  char v53; // [sp-11C4h] [bp-1444h]
  char v54; // [sp-11C0h] [bp-1440h]
  int v55; // [sp-CFCh] [bp-F7Ch]
  char v56; // [sp-ADCh] [bp-D5Ch]
  char v57; // [sp-AD8h] [bp-D58h]
  int v58; // [sp-4ACh] [bp-72Ch]
  int v59; // [sp-320h] [bp-5A0h]
  int v60; // [sp-2FCh] [bp-57Ch]
  int v61; // [sp-2D8h] [bp-558h]
  int v62; // [sp-280h] [bp-500h]
  int v63; // [sp-27Ch] [bp-4FCh]
  int v64; // [sp-160h] [bp-3E0h]
  char v65; // [sp-DCh] [bp-35Ch]
  char v66; // [sp-D8h] [bp-358h]
  _DWORD *v67; // [sp+38h] [bp-248h]
  char v68; // [sp+C0h] [bp-1C0h]
  char v69; // [sp+C4h] [bp-1BCh]
  bool v70; // [sp+1F5h] [bp-8Bh]
  bool v71; // [sp+1F6h] [bp-8Ah]
  bool v72; // [sp+1F7h] [bp-89h]
  bool v73; // [sp+1F9h] [bp-87h]
  bool v74; // [sp+1FAh] [bp-86h]
  char v75; // [sp+1FBh] [bp-85h]
  bool v76; // [sp+203h] [bp-7Dh]
  char v77; // [sp+20Fh] [bp-71h]
  bool v78; // [sp+217h] [bp-69h]
  int v79; // [sp+218h] [bp-68h]
  char v80; // [sp+21Fh] [bp-61h]
  bool v81; // [sp+22Ah] [bp-56h]
  bool v82; // [sp+22Bh] [bp-55h]
  int v83; // [sp+254h] [bp-2Ch]
  int v84; // [sp+270h] [bp-10h]
  int v85; // [sp+274h] [bp-Ch]

  v9 = -942739891;
  v10 = 1179843450;
  v11 = 339442390;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v11 > 652527286 )
          {
            if ( v11 > 1465298349 )
            {
              if ( v11 > 1811724506 )
              {
                if ( v11 > 2004087391 )
                {
                  if ( v11 <= 2058050800 )
                  {
                    if ( v11 == 2004087392 )
                    {
                      byte_E6080 = byte_DCD90 ^ 0xE0;
                      byte_E6081 = byte_DCD91 ^ 0x21;
                      byte_E6082 = byte_DCD92 ^ 0xBC;
                      byte_E6083 = byte_DCD93 ^ 0x36;
                      byte_E6084 = byte_DCD94 ^ 0x24;
                      byte_E6085 = byte_DCD95 ^ 0x57;
                      byte_E6086 = byte_DCD96 ^ 0xCF;
                      byte_E6087 = byte_DCD97 ^ 0x6F;
                      byte_E6088 = byte_DCD98 ^ 0xF9;
                      byte_E6089 = byte_DCD99 ^ 0xC;
                      byte_E608A = byte_DCD9A ^ 0x5E;
                      byte_E608B = byte_DCD9B ^ 5;
                      byte_E608C = byte_DCD9C ^ 0x24;
                      byte_E608D = byte_DCD9D ^ 0x90;
                      byte_E608E = byte_DCD9E ^ 0x8A;
                      byte_E608F = byte_DCD9F ^ 0x32;
                      byte_E6090 = byte_DCDA0 ^ 0xBC;
                      byte_E6091 = byte_DCDA1 ^ 0xF2;
                      byte_E6092 = byte_DCDA2 ^ 0xC6;
                      byte_E6093 = byte_DCDA3 ^ 0xE3;
                      byte_E6094 = byte_DCDA4 ^ 0x6D;
                      byte_E6095 = byte_DCDA5 ^ 0x68;
                      byte_E6096 = byte_DCDA6 ^ 0x69;
                      byte_E6097 = byte_DCDA7 ^ 0xAD;
                      byte_E6098 = byte_DCDA8 ^ 0x6B;
                      byte_E6099 = byte_DCDA9 ^ 0x2B;
                      byte_E609A = byte_DCDAA ^ 0x10;
                      byte_E609B = byte_DCDAB ^ 0xE2;
                      byte_E609C = byte_DCDAC ^ 0x5A;
                      byte_E609D = byte_DCDAD ^ 0xFB;
                      byte_E609E = byte_DCDAE ^ 0x81;
                      byte_E609F = byte_DCDAF ^ 0xF8;
                      byte_E60A0 = byte_DCDB0 ^ 0x11;
                      byte_E60A1 = byte_DCDB1 ^ 8;
                      byte_E60A2 = byte_DCDB2 ^ 0x6D;
                      byte_E60A3 = byte_DCDB3 ^ 0xF1;
                      byte_E60A4 = byte_DCDB4 ^ 0x5E;
                      byte_E60A5 = byte_DCDB5 ^ 0x98;
                      byte_E60A6 = byte_DCDB6 ^ 0xA9;
                      byte_E60A7 = byte_DCDB7 ^ 0xC9;
                      byte_E60A8 = byte_DCDB8 ^ 0xA2;
                      byte_E60A9 = byte_DCDB9 ^ 0x5F;
                      byte_E60AA = byte_DCDBA ^ 0xC2;
                      byte_E60AB = byte_DCDBB ^ 0x91;
                      byte_E60AC = byte_DCDBC ^ 0x70;
                      byte_E60AD = byte_DCDBD ^ 0xEB;
                      byte_E60AE = byte_DCDBE ^ 0xD6;
                      byte_E60AF = byte_DCDBF ^ 0x75;
                      a3 = 977890425;
                      v11 = 977890425;
                    }
                    else if ( v11 == 2014510583 )
                    {
                      a3 = 19;
                      v11 = 1508197997;
                    }
                    else
                    {
                      __dmb(0xBu);
                      dword_EEEBC = 1;
                      v19 = dword_EEEC0;
                      __dmb(0xBu);
                      v10 = 1179843450;
                      a3 = 503;
                      v11 = 1564224750;
                      v72 = v19 == 0;
                    }
                  }
                  else if ( v11 > 2094870069 )
                  {
                    v11 = 1953816685;
                  }
                  else if ( v11 == 2058050801 )
                  {
                    a3 = 281160;
                    v11 = 1598793716;
                  }
                  else
                  {
                    a3 = -1729897625;
                    v11 = -1729897625;
                  }
                }
                else if ( v11 <= 1919516939 )
                {
                  a3 = 19;
                  v11 = -567878207;
                }
                else if ( v11 > 1962272652 )
                {
                  __dmb(0xBu);
                  dword_EEEC4 = 1;
                  v31 = dword_EEEC8;
                  __dmb(0xBu);
                  v10 = 1179843450;
                  a3 = 29;
                  v73 = v31 == 0;
                  v11 = 176448421;
                }
                else
                {
                  a3 = 1811724506;
                  v11 = -2129634458;
                }
              }
              else if ( v11 > 1564224749 )
              {
                if ( v11 <= 1624801803 )
                {
                  if ( v11 != 1564224750 )
                  {
                    v12 = v10;
                    v18 = 2005784895;
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v28 = v18 & 0x7FFFFFFF;
                        if ( (v18 & 0x7FFFFFFFu) <= 0x737D8220 )
                          break;
                        if ( v28 == 1937605153 )
                        {
                          v18 = 858104620;
                        }
                        else if ( v28 == 2005784895 )
                        {
                          v18 = 1937605153;
                          if ( v57 )
                            v18 = 858104620;
                          if ( v56 )
                            v18 = 858104620;
                        }
                      }
                      if ( v28 == 491038664 )
                        break;
                      if ( v28 == 858104620 )
                      {
                        (*(void (__fastcall **)())(*(_DWORD *)v55 + 68))();
                        v12 = 1179843450;
                        v18 = 491038664;
                      }
                    }
                    a3 = 727;
                    v11 = 1714249544;
                    goto LABEL_2;
                  }
                  v11 = -661089841;
                  if ( v72 )
                    v11 = 1527207247;
                }
                else if ( v11 > 1682280184 )
                {
                  if ( v11 == 1682280185 )
                    v11 = -1399235207;
                  else
                    v11 = 1843108676;
                }
                else
                {
                  byte_E60C3 = byte_DCDD3 ^ 0x8D;
                  byte_E60C4 = byte_DCDD4 ^ 0xF1;
                  byte_E60C5 = byte_DCDD5 ^ 0x2A;
                  byte_E60C6 = byte_DCDD6 ^ 0xC6;
                  byte_E60C7 = byte_DCDD7 ^ 0x99;
                  a3 = -1589773034;
                  v11 = -1589773034;
                }
              }
              else if ( v11 <= 1526411248 )
              {
                if ( v11 != 1508197997 )
                {
                  v35 = ((int (__fastcall *)())dword_8DC00[0])();
                  v16 = ((int (__fastcall *)())dword_C26D0[0])();
                  ((void (__fastcall *)(int, int, int))unk_89BF4)(v36, v16, v35);
                  v12 = 1179843450;
                  a3 = 81;
                  for ( i = 1627065117; ; i = -1915713768 )
                  {
                    while ( i > -896044497 )
                    {
                      if ( i == -896044496 )
                      {
                        i = -1105323978;
                      }
                      else
                      {
                        i = -1105323978;
                        if ( v54 )
                          i = -896044496;
                        if ( !v53 )
                          i = -1105323978;
                      }
                    }
                    if ( i == -1915713768 )
                      break;
                    (*(void (__fastcall **)())(*(_DWORD *)v52 + 92))();
                    v12 = 1179843450;
                  }
                  v11 = -1120877315;
                  goto LABEL_2;
                }
                v11 = 472939683;
              }
              else if ( v11 > 1552681282 )
              {
                if ( v11 == 1552681283 )
                {
                  v11 = -905949570;
                  if ( v71 )
                    v11 = 1561546163;
                }
                else
                {
                  a3 = 389;
                  v11 = 936366161;
                }
              }
              else if ( v11 == 1526411249 )
              {
                a3 = 2014510583;
                v11 = 2014510583;
              }
              else
              {
                a3 = 229;
                v11 = 2004087392;
              }
            }
            else if ( v11 > v10 )
            {
              if ( v11 <= 1321265870 )
              {
                if ( v11 <= 1280759308 )
                {
                  a3 = 919;
                  v11 = 1103333027;
                }
                else
                {
                  if ( v11 <= 1297827649 )
                  {
                    v12 = v10;
                    for ( j = 1627065117; ; j = -1915713768 )
                    {
                      while ( j > -896044497 )
                      {
                        if ( j == -896044496 )
                        {
                          j = -1105323978;
                        }
                        else
                        {
                          j = -1105323978;
                          if ( v66 )
                            j = -896044496;
                          if ( !v65 )
                            j = -1105323978;
                        }
                      }
                      if ( j == -1915713768 )
                        break;
                      (*(void (__fastcall **)())(*(_DWORD *)v60 + 92))();
                      v12 = 1179843450;
                    }
                    a3 = 19;
                    v11 = 2140814453;
                    goto LABEL_2;
                  }
                  v11 = 1525020118;
                }
              }
              else if ( v11 > 1405176684 )
              {
                if ( v11 == 1464600888 )
                {
                  if ( *v67 == v85 )
                    __asm { POPEQ           {R4-R7,PC} }
                  ((void (__fastcall *)(int, int))unk_B96C)(v83, *v67 - v85);
                  JUMPOUT(0x8D93C);
                }
                v15 = dword_EEEB8;
                __dmb(0xBu);
                a3 = 139600;
                v11 = 908751439;
                v70 = v15 == 0;
              }
              else if ( v11 == 1321265871 )
              {
                byte_E6050 = byte_DCD60 ^ 0x33;
                byte_E6051 = byte_DCD61 ^ 0x2E;
                byte_E6052 = byte_DCD62 ^ 0xB7;
                byte_E6053 = byte_DCD63 ^ 0xE3;
                byte_E6054 = byte_DCD64 ^ 0x6F;
                byte_E6055 = byte_DCD65 ^ 0xBE;
                byte_E6056 = byte_DCD66 ^ 0x40;
                byte_E6057 = byte_DCD67 ^ 0x2B;
                byte_E6058 = byte_DCD68 ^ 0xAD;
                byte_E6059 = byte_DCD69 ^ 0xA;
                byte_E605A = byte_DCD6A ^ 0x3B;
                byte_E605B = byte_DCD6B ^ 0xB3;
                byte_E605C = byte_DCD6C ^ 0x2B;
                byte_E605D = byte_DCD6D ^ 0x9D;
                byte_E605E = byte_DCD6E ^ 0x99;
                byte_E605F = byte_DCD6F ^ 0xE;
                byte_E6060 = byte_DCD70 ^ 0x49;
                byte_E6061 = byte_DCD71 ^ 0xE6;
                byte_E6062 = byte_DCD72 ^ 0x8B;
                byte_E6063 = byte_DCD73 ^ 0x17;
                byte_E6064 = byte_DCD74 ^ 7;
                byte_E6065 = byte_DCD75;
                byte_E6066 = byte_DCD76 ^ 0xF8;
                byte_E6067 = byte_DCD77 ^ 0x77;
                byte_E6068 = byte_DCD78 ^ 0xC1;
                byte_E6069 = byte_DCD79 ^ 0x63;
                a3 = -1480154954;
                v11 = -1480154954;
              }
              else if ( v11 == 1328635303 )
              {
                byte_E60B0 = byte_DCDC0 ^ 0xCC;
                byte_E60B1 = byte_DCDC1 ^ 0x8C;
                byte_E60B2 = byte_DCDC2 ^ 0xA;
                byte_E60B3 = byte_DCDC3 ^ 0x24;
                byte_E60B4 = byte_DCDC4 ^ 0xEA;
                byte_E60B5 = byte_DCDC5 ^ 0x18;
                byte_E60B6 = byte_DCDC6 ^ 0x12;
                byte_E60B7 = byte_DCDC7 ^ 0xF2;
                byte_E60B8 = byte_DCDC8 ^ 0xB3;
                byte_E60B9 = byte_DCDC9 ^ 0xB5;
                byte_E60BA = byte_DCDCA ^ 0xFC;
                byte_E60BB = byte_DCDCB ^ 0xC5;
                byte_E60BC = byte_DCDCC ^ 0xBE;
                byte_E60BD = byte_DCDCD ^ 0xA2;
                byte_E60BE = byte_DCDCE ^ 0x7A;
                byte_E60BF = byte_DCDCF ^ 0x7C;
                byte_E60C0 = byte_DCDD0 ^ 0xCA;
                byte_E60C1 = byte_DCDD1 ^ 0x36;
                byte_E60C2 = byte_DCDD2 ^ 0xB9;
                v42 = 2;
                a3 = 449;
                v11 = 944942768;
              }
              else
              {
                v11 = 472939683;
                if ( v77 )
                  v11 = -1295829101;
              }
            }
            else if ( v11 <= 783139033 )
            {
              if ( v11 <= 683596029 )
              {
                if ( v11 == 652527287 )
                {
                  v11 = 164044760;
                  if ( v81 )
                    v11 = 1301573904;
                }
                else if ( v11 == 668814007 )
                {
                  v11 = -548690463;
                }
                else
                {
                  a3 = 30360;
                  v11 = 688106084;
                }
              }
              else if ( v11 > 750055989 )
              {
                v11 = -548690463;
                if ( v80 )
                  v11 = -1701031217;
              }
              else if ( v11 == 683596030 )
              {
                v11 = 2061217468;
              }
              else
              {
                a3 = 37;
                v11 = 1464600888;
              }
            }
            else if ( v11 > 977890424 )
            {
              if ( v11 > 1076188001 )
              {
                if ( v11 == 1076188002 )
                {
                  v12 = v10;
                  v62 = 460;
                  for ( k = 1627065117; ; k = -1915713768 )
                  {
                    while ( k > -896044497 )
                    {
                      if ( k == -896044496 )
                      {
                        k = -1105323978;
                      }
                      else
                      {
                        k = -1105323978;
                        if ( v69 )
                          k = -896044496;
                        if ( !v68 )
                          k = -1105323978;
                      }
                    }
                    if ( k == -1915713768 )
                      break;
                    (*(void (__fastcall **)())(*(_DWORD *)v64 + 92))();
                    v12 = 1179843450;
                  }
                  a3 = -1457376306;
                  v11 = -1457376306;
                  goto LABEL_2;
                }
                v20 = v9;
                v21 = ((int (__fastcall *)(int, int, int, int))unk_E198)(v37, v41, v42, v43);
                a3 = 189;
                v80 = v21 != 0;
                v11 = 750055990;
                v9 = v20;
                v10 = 1179843450;
              }
              else
              {
                v11 = -661089841;
              }
            }
            else if ( v11 > 936366160 )
            {
              if ( v11 == 936366161 )
              {
                byte_E606A = byte_DCD7A ^ 0xFC;
                byte_E606B = byte_DCD7B ^ 0x90;
                byte_E606C = byte_DCD7C ^ 0x36;
                byte_E606D = byte_DCD7D ^ 0x8E;
                byte_E606E = byte_DCD7E ^ 0xF5;
                byte_E606F = byte_DCD7F ^ 0xBE;
                byte_E6070 = byte_DCD80 ^ 0xCC;
                byte_E6071 = byte_DCD81 ^ 0x2D;
                byte_E6072 = byte_DCD82 ^ 0x3F;
                byte_E6073 = byte_DCD83 ^ 0xD2;
                a3 = -1023823771;
                v11 = -1023823771;
              }
              else
              {
                v11 = -1938624230;
              }
            }
            else if ( v11 == 783139034 )
            {
              ((void (__fastcall *)(int, int, char *, char *))dword_8DA30[0])(v40, v45, &byte_E606A, &byte_E6080);
              for ( l = 1149469567; ; l = 259723946 )
              {
                while ( l > 259723945 )
                {
                  if ( l == 259723946 )
                  {
                    (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v60 + 132))(
                      v60,
                      v59,
                      dword_8D93C + 579032,
                      dword_8D940 + 579036);
                    v66 = 13;
                    l = -1356741798;
                  }
                  else
                  {
                    l = 259723946;
                    if ( v62 == v63 )
                      l = -1667186308;
                  }
                }
                if ( l != -1667186308 )
                  break;
              }
              v80 = HIBYTE(v84);
              v9 = -942739891;
              a3 = v84 != 0;
              v77 = (v79 != 0) & a3;
              v11 = 1390683857;
LABEL_261:
              v10 = 1179843450;
            }
            else
            {
              v11 = -1877776230;
              if ( v70 )
                v11 = -575749728;
            }
          }
          if ( v11 <= v9 )
            break;
          if ( v11 <= 74757388 )
          {
            if ( v11 > -596386139 )
            {
              if ( v11 <= -548690464 )
              {
                if ( v11 == -575749728 )
                {
                  a3 = 461;
                  v11 = 1321265871;
                }
                else
                {
                  a3 = 701;
                  v11 = -1699922636;
                }
              }
              else if ( v11 > -237067532 )
              {
                if ( v11 == -237067531 )
                {
                  v11 = 1953816685;
                  if ( v76 )
                    v11 = -1401599572;
                }
                else
                {
                  v11 = -1938624230;
                  if ( v38 )
                    v11 = -1453071376;
                }
              }
              else if ( v11 == -548690463 )
              {
                a3 = 19;
                v11 = 1076188002;
              }
              else
              {
                __dmb(0xBu);
                dword_EEEB8 = 1;
                v14 = dword_EEEBC;
                __dmb(0xBu);
                v10 = 1179843450;
                v11 = 1552681283;
                a3 = 22;
                v71 = v14 == 0;
              }
            }
            else if ( v11 <= -661089842 )
            {
              if ( v11 == -942739890 )
              {
                a3 = 1625667082;
                v11 = 1625667082;
              }
              else if ( v11 == -905949570 )
              {
                a3 = 19608;
                v11 = 2020076725;
              }
              else
              {
                v11 = 1526411249;
                if ( v78 )
                  v11 = 1197782237;
              }
            }
            else if ( v11 > -624625228 )
            {
              __dmb(0xBu);
              dword_EEEC0 = 1;
              __dmb(0xBu);
              v10 = 1179843450;
              a3 = 397;
              v11 = -125879425;
            }
            else if ( v11 == -661089841 )
            {
              a3 = 832;
              v11 = -624625227;
            }
            else
            {
              v12 = v10;
              for ( m = 1627065117; ; m = -1915713768 )
              {
                while ( m > -896044497 )
                {
                  if ( m == -896044496 )
                  {
                    m = -1105323978;
                  }
                  else
                  {
                    m = -1105323978;
                    if ( v47 )
                      m = -896044496;
                    if ( !v46 )
                      m = -1105323978;
                  }
                }
                if ( m == -1915713768 )
                  break;
                (*(void (__fastcall **)())(*(_DWORD *)v44 + 92))();
                v12 = 1179843450;
              }
              a3 = 48968;
              v11 = 668814007;
LABEL_2:
              v10 = v12;
              v9 = -942739891;
            }
          }
          else if ( v11 <= 300945300 )
          {
            if ( v11 <= 176448420 )
            {
              if ( v11 == 92471266 )
              {
                a3 = 641;
                v11 = -1298490680;
              }
              else
              {
                a3 = 991;
                v11 = -630564349;
              }
            }
            else if ( v11 == 176448421 )
            {
              v11 = 92471266;
              if ( v73 )
                v11 = -942739890;
            }
            else
            {
              v11 = 1843108676;
              if ( v82 )
                v11 = 2058050801;
            }
          }
          else if ( v11 > 450045225 )
          {
            if ( v11 > 485566630 )
            {
              v34 = v9;
              v61 = ((int (__fastcall *)(int, char *, int, int))dword_8D944[0])(v58, &byte_E6050, a3, 1811724506);
              v9 = v34;
              a3 = 46256;
              v10 = 1179843450;
              v11 = -237067531;
              v76 = v61 != 0;
            }
            else if ( v11 == 450045226 )
            {
              v25 = v9;
              v51 = ((int (__fastcall *)(int, int, int, int))unk_11ACC)(v48, v50, v49, 1811724506);
              v9 = v25;
              v10 = 1179843450;
              a3 = 1481200;
              v11 = 652527287;
              v81 = v51 != 0;
            }
            else
            {
              v11 = 1280759309;
            }
          }
          else if ( v11 > 364150551 )
          {
            v11 = -987051007;
            if ( v74 )
              v11 = 1682280185;
          }
          else if ( v11 == 300945301 )
          {
            __dmb(0xBu);
            dword_EEECC = 1;
            a3 = 2632;
            v11 = -1506513263;
            v23 = v39;
            if ( v39 )
              v23 = 1;
            v75 = v23;
          }
          else
          {
            v11 = 1405176685;
          }
        }
        if ( v11 <= -1457376307 )
          break;
        if ( v11 > -1218666402 )
        {
          if ( v11 <= -1025374256 )
          {
            if ( v11 == -1120877315 )
              v11 = 164044760;
            else
              v11 = -987051007;
          }
          else if ( v11 > -987051008 )
          {
            a3 = 6256;
            v11 = 300945301;
          }
          else if ( v11 == -1025374255 )
          {
            v11 = 485566631;
          }
          else
          {
            v11 = -905949570;
          }
        }
        else if ( v11 <= -1401599573 )
        {
          if ( v11 == -1457376306 )
            v11 = 1526411249;
          else
            v11 = 1328635303;
        }
        else if ( v11 > -1298490681 )
        {
          if ( v11 == -1298490680 )
          {
            __dmb(0xBu);
            dword_EEEC8 = 1;
            v32 = dword_EEECC;
            __dmb(0xBu);
            v10 = 1179843450;
            v11 = 364150552;
            a3 = 344;
            v74 = v32 == 0;
          }
          else
          {
            a3 = 19;
            v11 = -1626041090;
          }
        }
        else if ( v11 == -1401599572 )
        {
          a3 = 783139034;
          v11 = 783139034;
        }
        else
        {
          byte_E60C8 = byte_DCDD8 ^ 0x29;
          byte_E60C9 = byte_DCDD9 ^ 0xC7;
          byte_E60CA = byte_DCDDA ^ 0x5D;
          byte_E60CB = byte_DCDDB ^ 0x3F;
          byte_E60CC = byte_DCDDC ^ 0xD7;
          byte_E60CD = byte_DCDDD ^ 0x94;
          a3 = 263;
          v11 = -1031267088;
        }
      }
      if ( v11 <= -1699922637 )
        break;
      if ( v11 <= -1508008799 )
      {
        if ( v11 == -1699922636 )
        {
LABEL_221:
          v11 = 671474045;
        }
        else
        {
          if ( v11 == -1626041090 )
          {
            v29 = v9;
            v30 = ((int (__fastcall *)(int, char *, int, int))dword_8DB0C[0])(v55, &byte_E60C8, a3, 1811724506);
            v9 = v29;
            v11 = -785119581;
            a3 = 376;
            v78 = v30 != 0;
            goto LABEL_261;
          }
          v11 = 92471266;
        }
      }
      else if ( v11 > -1480154955 )
      {
        v11 = -1877776230;
      }
      else
      {
        v11 = 683596030;
        if ( v75 )
          v11 = -1025374255;
      }
    }
    if ( v11 <= -1938624231 )
    {
      v26 = v9;
      v27 = ((int (__fastcall *)(int, int, int, int))dword_8DCF8[0])(v52, -2129634458, a3, 1811724506);
      v9 = v26;
      v10 = 1179843450;
      v11 = 238147270;
      a3 = 348;
      v82 = v27 != 0;
    }
    else if ( v11 > -1729897626 )
    {
      if ( v11 == -1729897625 )
        goto LABEL_221;
      a3 = 761;
      v11 = 450045226;
    }
    else if ( v11 == -1938624230 )
    {
      v43 = 196;
      a3 = 19;
      v11 = 1962272653;
    }
    else
    {
      a3 = 81472;
      v11 = -247028301;
    }
  }
}
