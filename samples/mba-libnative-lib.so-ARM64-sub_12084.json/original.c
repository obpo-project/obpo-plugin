__int64 __fastcall sub_12084(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 result; // x0
  int v3; // w9
  __int128 v4; // q0
  int v5; // w8
  int n; // w8
  int v7; // w8
  unsigned __int8 *v8; // x20
  int mm; // w9
  int v10; // w9
  int k; // w10
  int kk; // w8
  int v13; // w8
  int v14; // w8
  int v15; // w8
  int i; // w9
  int l; // w9
  int j; // w8
  int ii; // w9
  int jj; // w10
  int v21; // w10
  int v22; // w8
  int v23; // w8
  int v24; // w9
  int m; // w10
  int v26; // w9
  int ll; // w10
  unsigned __int64 v28; // [xsp+8h] [xbp-D8h]
  unsigned __int8 *v30; // [xsp+18h] [xbp-C8h]
  unsigned __int8 *v31; // [xsp+30h] [xbp-B0h]
  unsigned __int8 *v32; // [xsp+38h] [xbp-A8h]
  __int64 v33; // [xsp+40h] [xbp-A0h]
  __int64 v34; // [xsp+48h] [xbp-98h]
  unsigned __int8 *v35; // [xsp+58h] [xbp-88h]
  __int64 *v36; // [xsp+60h] [xbp-80h]
  unsigned __int8 *v37; // [xsp+68h] [xbp-78h]
  unsigned __int8 *v38; // [xsp+70h] [xbp-70h]
  unsigned __int8 *v39; // [xsp+78h] [xbp-68h]
  __int64 v40; // [xsp+88h] [xbp-58h]

  v28 = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  result = 1638577616LL;
  v3 = 265295858;
  v40 = *(_QWORD *)(v28 + 40);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = v3;
          if ( v3 > 265295857 )
            break;
          if ( v3 > -808331055 )
          {
            if ( v3 == -808331054 )
            {
              v15 = 1399070992;
              while ( v15 != -426701488 )
              {
                if ( v15 == 1373445142 )
                {
                  for ( i = 974296751; ; i = -247358200 )
                  {
                    while ( i == 974296751 )
                      i = -1033071829;
                    if ( i == -247358200 )
                      break;
                    v39 = v37;
                  }
                  v38 = v39;
                  v15 = -426701488;
                }
                else
                {
                  v37 = a2;
                  v15 = 1373445142;
                }
              }
              v37 = v38;
              for ( j = -1687366343; ; j = 1399514980 )
              {
                while ( j == 1399514980 )
                {
                  v39 = v38 + 8;
                  j = -1359689467;
                }
                if ( j == -1359689467 )
                  break;
                v38 = v37;
              }
              v3 = 123864739;
              v34 = *(_QWORD *)v39;
            }
            else if ( v3 == -311373955 )
            {
              v10 = -648961170;
              while ( v10 != 2039807433 )
              {
                if ( v10 == -391464850 )
                {
                  for ( k = -212956856; ; k = 1139177831 )
                  {
                    while ( k == -212956856 )
                      k = 92055732;
                    if ( k == 1139177831 )
                      break;
                    v39 = v37;
                  }
                  v38 = v39;
                  v10 = 2039807433;
                }
                else
                {
                  v37 = v30;
                  v10 = -391464850;
                }
              }
              v3 = 1487096151;
              v32 = v38;
            }
            else
            {
              v8 = a2;
              ((void (__fastcall *)(unsigned __int8 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))unk_172BC)(
                a1,
                v33,
                v34,
                287568387LL,
                4134339109LL,
                3880710774LL,
                3405803793LL,
                3086396599LL);
              a2 = v8;
              result = 1638577616LL;
              v3 = 1083784062;
            }
          }
          else if ( v3 == -1913165677 )
          {
            v13 = -1422697352;
            while ( v13 != 814471366 )
            {
              if ( v13 == -1422697352 )
              {
                v13 = -1726662336;
              }
              else
              {
                v14 = -2019732010;
                while ( v14 != 1970458948 )
                {
                  if ( v14 == 1312329472 )
                    v14 = 1970458948;
                  else
                    v14 = 1312329472;
                }
                v13 = 814471366;
              }
            }
            for ( l = 1318605279; ; l = -1308118203 )
            {
              while ( l == -1308118203 )
              {
                v21 = -160628187;
                while ( v21 != 1035379591 )
                {
                  if ( v21 == 287568387 )
                  {
                    *(_QWORD *)v39 = 0LL;
                    *((_QWORD *)v39 + 1) = 0LL;
                    *((_QWORD *)v39 + 2) = 0LL;
                    v21 = 1035379591;
                  }
                  else
                  {
                    v39 = v38;
                    v21 = 287568387;
                  }
                }
                l = -414256522;
              }
              if ( l == -414256522 )
                break;
              v38 = v30;
            }
            v22 = 1277103837;
            while ( v22 != -889163503 )
            {
              if ( v22 == 666711318 )
                v22 = -889163503;
              else
                v22 = 666711318;
            }
            v23 = -1494690083;
            while ( v23 != -1208570697 )
            {
              if ( v23 == -1418602223 )
              {
                v36 = (__int64 *)((unsigned __int8)v35 & 1);
                v23 = -1208570697;
              }
              else
              {
                v24 = 1399070992;
                while ( v24 != -426701488 )
                {
                  if ( v24 == 1373445142 )
                  {
                    for ( m = 974296751; ; m = -247358200 )
                    {
                      while ( m == 974296751 )
                        m = -1033071829;
                      if ( m == -247358200 )
                        break;
                      v39 = v37;
                    }
                    v38 = v39;
                    v24 = -426701488;
                  }
                  else
                  {
                    v37 = a2;
                    v24 = 1373445142;
                  }
                }
                v35 = (unsigned __int8 *)*v38;
                v23 = -1418602223;
              }
            }
            if ( v36 )
              v3 = 571115583;
            else
              v3 = 994854951;
          }
          else
          {
            v3 = 1638577616;
            if ( v5 != -1912310092 )
            {
              for ( n = 1711066387; ; n = -1234777684 )
              {
                while ( n == -1234777684 )
                {
                  for ( ii = 495756669; ; ii = -762445930 )
                  {
                    while ( ii == -762445930 )
                    {
                      for ( jj = 1375721376; ; jj = 1372914663 )
                      {
                        while ( jj == 1375721376 )
                          jj = -1166891103;
                        if ( jj == 1372914663 )
                          break;
                        v39 = v37;
                      }
                      v38 = v39;
                      ii = 1857738186;
                    }
                    if ( ii == 1857738186 )
                      break;
                    v37 = v35;
                  }
                  v36 = (__int64 *)v38;
                  n = -1201519391;
                }
                if ( n == -1201519391 )
                  break;
                v35 = a2;
              }
              v3 = -1913165677;
            }
          }
        }
        if ( v3 > 1083784061 )
          break;
        if ( v3 == 265295858 )
        {
          v3 = -1499254124;
          v30 = a1;
        }
        else if ( v3 == 571115583 )
        {
          for ( kk = -344310898; ; kk = -1415833995 )
          {
            while ( kk == -1415833995 )
            {
              v36 = (__int64 *)(v35 + 16);
              kk = 2133920417;
            }
            if ( kk == 2133920417 )
              break;
            v26 = 1399070992;
            while ( v26 != -426701488 )
            {
              if ( v26 == 1373445142 )
              {
                for ( ll = 974296751; ; ll = -247358200 )
                {
                  while ( ll == 974296751 )
                    ll = -1033071829;
                  if ( ll == -247358200 )
                    break;
                  v39 = v37;
                }
                v38 = v39;
                v26 = -426701488;
              }
              else
              {
                v37 = a2;
                v26 = 1373445142;
              }
            }
            v35 = v38;
          }
          v3 = -808331054;
          v33 = *v36;
        }
        else
        {
          v7 = 1399070992;
          while ( v7 != -426701488 )
          {
            if ( v7 == 1373445142 )
            {
              for ( mm = 974296751; ; mm = -247358200 )
              {
                while ( mm == 974296751 )
                  mm = -1033071829;
                if ( mm == -247358200 )
                  break;
                v39 = v37;
              }
              v38 = v39;
              v7 = -426701488;
            }
            else
            {
              v37 = a2;
              v7 = 1373445142;
            }
          }
          v3 = -311373955;
          v31 = v38;
        }
      }
      v3 = 1638577616;
    }
    while ( v5 == 1083784062 );
    if ( v5 != 1487096151 )
      break;
    v4 = *(_OWORD *)v31;
    v3 = -1912310092;
    *((_QWORD *)v32 + 2) = *((_QWORD *)v31 + 2);
    *(_OWORD *)v32 = v4;
  }
  if ( *(_QWORD *)(v28 + 40) == v40 )
    return result;
  ((void (__fastcall *)(__int64, unsigned __int8 *, __int64, __int64, __int64, __int64, __int64, __int64))unk_EDD0)(
    1638577616LL,
    a2,
    1035379591LL,
    287568387LL,
    4134339109LL,
    3880710774LL,
    3405803793LL,
    3086396599LL);
  JUMPOUT(0x12AE4LL);
  return result;
}
