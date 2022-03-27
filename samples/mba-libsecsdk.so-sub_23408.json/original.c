int __fastcall sub_23408(int *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  int *v4; // r7
  int v5; // r10
  int v6; // r0
  int *i; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  bool v12; // zf
  int *v13; // r6
  int v14; // r4
  int v15; // r5
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r4
  int v20; // r5
  int v21; // r4
  int v22; // r5
  int v23; // r4
  int v24; // r5
  int v25; // r4
  int v26; // r5
  int v27; // r6
  int *v28; // r10
  int v29; // r4
  int v30; // r5
  int v31; // r4
  char v32; // r5
  int v33; // r4
  int v34; // r5
  int v35; // r4
  int v36; // r5
  int v37; // r4
  int v38; // r5
  int v40; // [sp+4h] [bp-FCh]
  int v41; // [sp+4h] [bp-FCh]
  int v42; // [sp+4h] [bp-FCh]
  int v43; // [sp+4h] [bp-FCh]
  int v44; // [sp+8h] [bp-F8h]
  int v45; // [sp+8h] [bp-F8h]
  int v46; // [sp+8h] [bp-F8h]
  int v47; // [sp+8h] [bp-F8h]
  int v48; // [sp+8h] [bp-F8h]
  int v51; // [sp+24h] [bp-DCh]
  int v52; // [sp+28h] [bp-D8h]
  int v53; // [sp+28h] [bp-D8h]
  int v54; // [sp+2Ch] [bp-D4h]
  int v55; // [sp+30h] [bp-D0h]
  int v56; // [sp+34h] [bp-CCh]
  int *v57; // [sp+38h] [bp-C8h]
  int v59; // [sp+40h] [bp-C0h]
  int v60; // [sp+44h] [bp-BCh]
  int v61; // [sp+48h] [bp-B8h]
  int v62; // [sp+4Ch] [bp-B4h]
  int v63; // [sp+50h] [bp-B0h]
  int v64; // [sp+54h] [bp-ACh]
  int v65; // [sp+58h] [bp-A8h]
  _DWORD *v67; // [sp+74h] [bp-8Ch]
  int v68; // [sp+78h] [bp-88h]
  int v69; // [sp+7Ch] [bp-84h]
  _DWORD *v70; // [sp+80h] [bp-80h]
  int v71; // [sp+84h] [bp-7Ch]
  int v72; // [sp+88h] [bp-78h]
  _DWORD *v73; // [sp+8Ch] [bp-74h]
  int v74; // [sp+90h] [bp-70h]
  _DWORD *v75; // [sp+94h] [bp-6Ch]
  int v76; // [sp+98h] [bp-68h]
  _DWORD *v77; // [sp+9Ch] [bp-64h]
  int v78; // [sp+A0h] [bp-60h]
  _DWORD *v79; // [sp+A4h] [bp-5Ch]
  int v80; // [sp+A8h] [bp-58h]
  int v81; // [sp+ACh] [bp-54h]
  int v82; // [sp+B0h] [bp-50h]
  int v83; // [sp+B4h] [bp-4Ch]
  int v84; // [sp+B8h] [bp-48h]
  int v85; // [sp+BCh] [bp-44h]
  int v86; // [sp+C0h] [bp-40h]
  int v87; // [sp+C4h] [bp-3Ch]
  char v88; // [sp+C8h] [bp-38h]
  int v89; // [sp+CCh] [bp-34h]
  int v90; // [sp+D0h] [bp-30h]
  int v91; // [sp+D4h] [bp-2Ch] BYREF
  int v92; // [sp+D8h] [bp-28h]

  v4 = a1;
  v92 = *(_DWORD *)dword_79C78;
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  v67 = a1 + 30;
  v68 = ((int (__fastcall *)(int, int, _DWORD))unk_1FB94)(*a1, a1[3] + a1[30], 0);
  v5 = -1351015380;
  v57 = v4 + 13;
  v6 = -711353502;
  for ( i = &v91; ; i = &v91 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v6 > 107650797 )
          {
            if ( v6 <= 1237671662 )
            {
              if ( v6 <= 675846431 )
              {
                if ( v6 > 463694195 )
                {
                  if ( v6 == 463694196 )
                  {
                    v13 = i;
                    v35 = *a1;
                    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
                      || (v36 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v35, v13))
                      || (v53 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v35, v13))
                      || (v47 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v35, v13)) )
                    {
                      v89 = 0;
                      v52 = v61;
                      v6 = 105489709;
                    }
                    else
                    {
                      v89 = v36 + (v53 << 8) + (v47 << 16) + (v91 << 24);
                      v52 = v61;
                      v6 = -1264269370;
                    }
                    goto LABEL_182;
                  }
                  if ( v6 != 471787700 )
                  {
                    v17 = -103;
                    goto LABEL_85;
                  }
                  v6 = 1977060349;
                  v64 = v83;
                  if ( !v83 )
                    v6 = -2076974845;
                }
                else
                {
                  if ( v6 == 107650798 )
                  {
                    v80 = v54;
                    v23 = *a1;
                    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
                      || (v24 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v23, &v91)) )
                    {
                      v89 = 0;
                      v6 = 1593919199;
                    }
                    else
                    {
                      v89 = v24 + (v91 << 8);
                      v6 = -291508981;
                    }
                    goto LABEL_152;
                  }
                  if ( v6 == 243207598 )
                  {
                    v6 = -639478689;
                    v63 = v82;
                    if ( v72 == *v73 )
                      v6 = -800269536;
                  }
                  else
                  {
                    v6 = 2047198428;
                    v60 = v85;
                    if ( !v85 )
                      v6 = 100955679;
                  }
                }
              }
              else if ( v6 <= 890886486 )
              {
                if ( v6 == 675846432 )
                {
                  v18 = -103;
LABEL_137:
                  v64 = v18;
                  v6 = 1977060349;
                }
                else
                {
                  if ( v6 != 679440810 )
                  {
                    v16 = -103;
                    goto LABEL_134;
                  }
                  v59 = 0;
                  v6 = -218486214;
                }
              }
              else if ( v6 > 1094540495 )
              {
                if ( v6 == 1094540496 )
                {
                  v11 = -1;
LABEL_175:
                  v59 = v11;
                  v6 = 1237671663;
                }
                else
                {
                  v54 = -1;
                  v6 = 107650798;
                }
              }
              else
              {
                if ( v6 != 890886487 )
                {
                  v9 = -103;
                  goto LABEL_72;
                }
                v8 = -1;
LABEL_106:
                v65 = v8;
                v6 = -1354889893;
              }
            }
            else if ( v6 > 1626288712 )
            {
              if ( v6 <= 1893063117 )
              {
                if ( v6 == 1626288713 )
                {
                  v61 = -103;
                  v6 = 463694196;
                }
                else
                {
                  if ( v6 == 1684582377 )
                  {
                    v31 = *a1;
                    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
                      || (v32 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v31, &v91)) )
                    {
                      v88 = 0;
                      v54 = v51;
                      v6 = 1201021124;
                    }
                    else
                    {
                      v88 = v32;
                      v54 = v51;
                      v6 = 107650798;
                    }
                    goto LABEL_152;
                  }
                  v9 = -1;
LABEL_72:
                  v63 = v9;
                  v6 = -800269536;
                }
              }
              else if ( v6 > 1977060348 )
              {
                if ( v6 != 1977060349 )
                {
                  *a2 += v87;
                  v19 = *a1;
                  if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
                    || (v20 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v19, &v91)) )
                  {
                    v86 = 0;
                    v55 = v60;
                    v6 = -511992098;
                  }
                  else
                  {
                    v86 = v20 + (v91 << 8);
                    v55 = v60;
                    v6 = -200375284;
                  }
                  goto LABEL_152;
                }
                v13 = i;
                v84 = v64;
                v37 = *a1;
                if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
                  || (v38 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v37, v13))
                  || (v48 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v37, v13))
                  || (v43 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v37, v13)) )
                {
                  v89 = 0;
                  v6 = 890886487;
                }
                else
                {
                  v89 = v38 + (v48 << 8) + (v43 << 16) + (v91 << 24);
                  v6 = -936645866;
                }
LABEL_182:
                i = v13;
              }
              else
              {
                if ( v6 != 1893063118 )
                {
                  v11 = -103;
                  goto LABEL_175;
                }
                v6 = -800269536;
                v63 = v82;
                if ( !v82 )
                  v6 = -1467293305;
              }
            }
            else if ( v6 <= 1389027035 )
            {
              if ( v6 == 1237671663 )
              {
                v25 = *a1;
                if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
                  || (v26 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v25, &v91)) )
                {
                  v89 = 0;
                  v51 = v59;
                  v6 = -1194862955;
                }
                else
                {
                  v89 = v26 + (v91 << 8);
                  v51 = v59;
                  v6 = 1684582377;
                }
                goto LABEL_152;
              }
              if ( v6 == 1325608152 )
              {
                v76 = v89;
                v77 = v4 + 17;
                v6 = -1196519807;
              }
              else
              {
                v6 = -1354889893;
                v65 = v84;
                if ( (v88 & 8) == 0 )
                  v6 = 1393785175;
              }
            }
            else if ( v6 > 1452855163 )
            {
              if ( v6 == 1452855164 )
              {
                v81 = v62;
                v6 = 463694196;
                v61 = v62;
                if ( !v62 )
                  v6 = -86569810;
              }
              else
              {
                v17 = -1;
LABEL_85:
                v62 = v17;
                v6 = 1452855164;
              }
            }
            else
            {
              if ( v6 != 1389027036 )
              {
                v8 = -103;
                goto LABEL_106;
              }
              v6 = 1977060349;
              v64 = v83;
              if ( (v88 & 8) == 0 )
                v6 = 675846432;
            }
          }
          if ( v6 <= -1155487432 )
            break;
          if ( v6 > -232911692 )
          {
            if ( v6 <= -86569811 )
            {
              if ( v6 == -232911691 )
              {
                v6 = 591972146;
                v62 = v80;
                if ( v69 == *v70 )
                  v6 = 1452855164;
              }
              else if ( v6 == -218486214 )
              {
                v27 = v5;
                v28 = i;
                v29 = *a1;
                if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
                  || (v30 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v29, v28))
                  || (v45 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v29, v28))
                  || (v41 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v29, v28)) )
                {
                  v90 = 0;
                  v6 = 1094540496;
                }
                else
                {
                  v90 = v30 + (v45 << 8) + (v41 << 16) + (v91 << 24);
                  v6 = -1155487431;
                }
                i = v28;
                v5 = v27;
              }
              else
              {
                *a3 = *v67 + v87 + 30;
                *a4 = v86;
                *a2 += v86;
                v10 = v55;
LABEL_68:
                v56 = v10;
                v6 = -1361213161;
              }
            }
            else if ( v6 > 100955678 )
            {
              if ( v6 == 100955679 )
              {
                v78 = v87;
                v79 = v4 + 18;
                v6 = -1829805436;
              }
              else
              {
                v52 = -1;
                v6 = -1264269370;
              }
            }
            else
            {
              if ( v6 != -86569810 )
              {
                v10 = -1;
                goto LABEL_68;
              }
              v71 = *v57;
              v12 = *v57 == 0;
              v6 = v5;
              v61 = v81;
LABEL_108:
              if ( v12 )
                v6 = 463694196;
            }
          }
          else if ( v6 <= -711353503 )
          {
            if ( v6 == -1155487431 )
            {
              v6 = 1911313543;
              if ( v90 == 67324752 )
                v6 = 1237671663;
              v59 = 0;
            }
            else
            {
              if ( v6 != -936645866 )
              {
                v13 = i;
                v83 = v63;
                v14 = *a1;
                if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
                  || (v15 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v14, v13))
                  || (v44 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v14, v13))
                  || (v40 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v14, v13)) )
                {
                  v89 = 0;
                  v6 = -1450808418;
                }
                else
                {
                  v89 = v15 + (v44 << 8) + (v40 << 16) + (v91 << 24);
                  v6 = 471787700;
                }
                goto LABEL_182;
              }
              v6 = -1354889893;
              v65 = v84;
              if ( !v84 )
                v6 = 1325608152;
            }
          }
          else if ( v6 > -511992099 )
          {
            if ( v6 == -511992098 )
            {
              v55 = -1;
              v6 = -200375284;
            }
            else
            {
              v6 = 1452855164;
              v62 = v80;
              if ( !v80 )
                v6 = -1633886647;
            }
          }
          else if ( v6 == -711353502 )
          {
            v6 = 25618634;
            if ( !v68 )
              v6 = 679440810;
          }
          else
          {
            v6 = -800269536;
            v63 = v82;
            if ( (v88 & 8) == 0 )
              v6 = 943700909;
          }
        }
        if ( v6 > -1361213162 )
          break;
        if ( v6 <= -1659850162 )
        {
          if ( v6 == -2129748657 )
          {
            v16 = -1;
LABEL_134:
            v60 = v16;
            v6 = 2047198428;
          }
          else if ( v6 == -2076974845 )
          {
            v74 = v89;
            v75 = v4 + 16;
            v6 = -1659850161;
          }
          else
          {
            v6 = 690858991;
            v60 = v85;
            if ( v78 == *v79 )
              v6 = 2047198428;
          }
        }
        else if ( v6 > -1467293306 )
        {
          if ( v6 != -1467293305 )
          {
            v18 = -1;
            goto LABEL_137;
          }
          v72 = v89;
          v73 = v4 + 15;
          v6 = 243207598;
        }
        else if ( v6 == -1659850161 )
        {
          v6 = 1389027036;
          v64 = v83;
          if ( v74 == *v75 )
            v6 = 1977060349;
        }
        else
        {
          v69 = v89;
          v70 = v4 + 13;
          v6 = -232911691;
        }
      }
      if ( v6 <= -1264269371 )
        break;
      if ( v6 == -1264269370 )
      {
        v13 = i;
        v82 = v52;
        v33 = *a1;
        if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
          || (v34 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v33, v13))
          || (v46 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v33, v13))
          || (v42 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v33, v13)) )
        {
          v89 = 0;
          v6 = 1690505169;
        }
        else
        {
          v89 = v34 + (v46 << 8) + (v42 << 16) + (v91 << 24);
          v6 = 1893063118;
        }
        goto LABEL_182;
      }
      if ( v6 == -1196519807 )
      {
        v6 = 1376400305;
        v65 = v84;
        if ( v76 == *v77 )
          v6 = -1354889893;
      }
      else
      {
        v51 = -1;
        v6 = 1684582377;
      }
    }
    if ( v6 == -1361213161 )
      break;
    if ( v6 != -1354889893 )
    {
      v12 = v71 == 8;
      v6 = 1626288713;
      v61 = v81;
      goto LABEL_108;
    }
    v85 = v65;
    v21 = *a1;
    if ( ((int (__fastcall *)(int, int *))unk_1FEE4)(*a1, i)
      || (v22 = v91, ((int (__fastcall *)(int, int *))unk_1FEE4)(v21, &v91)) )
    {
      v87 = 0;
      v6 = -2129748657;
    }
    else
    {
      v87 = v22 + (v91 << 8);
      v6 = 419499421;
    }
LABEL_152:
    ;
  }
  if ( **(_DWORD **)(dword_24488 + 148592) == v92 )
    return v56;
  ((void (*)(void))unk_5714)();
  JUMPOUT(0x24488);
  return v56;
}
