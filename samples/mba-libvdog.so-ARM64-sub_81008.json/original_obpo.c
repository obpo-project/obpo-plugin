__int64 __fastcall sub_81008(__int64 ***a1)
{
  __int64 v1; // x9
  __int64 v2; // x26
  __int64 v3; // x26
  int v4; // w0
  __int64 v5; // x8
  __int64 v6; // x9
  int i; // w10
  __int64 v8; // x26
  __int64 v9; // x8
  __int64 v10; // x9
  int v11; // w10
  int j; // w11
  __int64 *v13; // x8
  __int64 v14; // x26
  __int64 *v15; // x8
  __int64 v16; // x26
  int v17; // w0
  __int64 v18; // x8
  __int64 v19; // x9
  int k; // w10
  __int64 v21; // x0
  int l; // w8
  __int64 v23; // x26
  _QWORD *v24; // x8
  __int64 result; // x0
  __int64 v26; // [xsp-420h] [xbp-6E0h] BYREF
  _BYTE v27[16]; // [xsp-410h] [xbp-6D0h] BYREF
  _BYTE v28[1008]; // [xsp-400h] [xbp-6C0h] BYREF
  __int64 v29; // [xsp-10h] [xbp-2D0h] BYREF
  __int64 *v30; // [xsp+30h] [xbp-290h]
  __int64 v31; // [xsp+38h] [xbp-288h]
  int v32; // [xsp+40h] [xbp-280h]
  int v33; // [xsp+44h] [xbp-27Ch]
  __int64 v34; // [xsp+48h] [xbp-278h]
  int v35; // [xsp+54h] [xbp-26Ch]
  __int64 v36; // [xsp+58h] [xbp-268h]
  __int64 **v37; // [xsp+60h] [xbp-260h]
  __int64 ***v38; // [xsp+68h] [xbp-258h]
  __int64 v39; // [xsp+70h] [xbp-250h]
  int v40; // [xsp+78h] [xbp-248h]
  int v41; // [xsp+7Ch] [xbp-244h]
  __int64 v42; // [xsp+80h] [xbp-240h]
  int v43; // [xsp+8Ch] [xbp-234h]
  __int64 v44; // [xsp+90h] [xbp-230h]
  __int64 v45; // [xsp+98h] [xbp-228h]
  _BYTE *v46; // [xsp+A0h] [xbp-220h]
  __int64 *v47; // [xsp+A8h] [xbp-218h]
  _BYTE *v48; // [xsp+B0h] [xbp-210h]
  __int64 *v49; // [xsp+B8h] [xbp-208h]
  _BYTE *v50; // [xsp+C0h] [xbp-200h]
  _BYTE *v51; // [xsp+C8h] [xbp-1F8h]
  __int64 v52; // [xsp+D0h] [xbp-1F0h]
  _BYTE *v53; // [xsp+D8h] [xbp-1E8h]
  __int64 v54; // [xsp+E0h] [xbp-1E0h]
  unsigned int v55; // [xsp+ECh] [xbp-1D4h]
  _BYTE *v56; // [xsp+F0h] [xbp-1D0h]
  _BYTE *v57; // [xsp+F8h] [xbp-1C8h]
  __int64 v58; // [xsp+100h] [xbp-1C0h]
  int v59; // [xsp+10Ch] [xbp-1B4h]
  __int64 *v60; // [xsp+110h] [xbp-1B0h]
  __int64 *v61; // [xsp+118h] [xbp-1A8h]
  int *v62; // [xsp+120h] [xbp-1A0h]
  int v63; // [xsp+12Ch] [xbp-194h]
  __int64 *v64; // [xsp+130h] [xbp-190h]
  __int64 v65; // [xsp+138h] [xbp-188h]
  int v66; // [xsp+144h] [xbp-17Ch]
  _BYTE *v67; // [xsp+148h] [xbp-178h]
  _BYTE *v68; // [xsp+150h] [xbp-170h]
  __int64 v69; // [xsp+158h] [xbp-168h]
  unsigned int v70; // [xsp+164h] [xbp-15Ch]
  __int64 v71; // [xsp+168h] [xbp-158h]
  __int64 v73; // [xsp+178h] [xbp-148h]
  __int64 v75; // [xsp+188h] [xbp-138h]
  __int64 v77; // [xsp+198h] [xbp-128h]
  unsigned int v78; // [xsp+1A4h] [xbp-11Ch]
  __int64 v79; // [xsp+1A8h] [xbp-118h]
  unsigned int v80; // [xsp+1B4h] [xbp-10Ch]
  __int64 v81; // [xsp+1B8h] [xbp-108h]
  int v82; // [xsp+1C4h] [xbp-FCh]
  __int64 v83; // [xsp+1C8h] [xbp-F8h] BYREF
  __int64 v84; // [xsp+1D0h] [xbp-F0h] BYREF
  __int64 v85; // [xsp+1E0h] [xbp-E0h]
  __int64 v86; // [xsp+1E8h] [xbp-D8h]
  __int64 v87; // [xsp+1F0h] [xbp-D0h]
  __int64 v88; // [xsp+1F8h] [xbp-C8h]
  __int64 v89; // [xsp+200h] [xbp-C0h]
  __int64 v90; // [xsp+208h] [xbp-B8h]
  __int64 v91; // [xsp+210h] [xbp-B0h]
  __int64 ***v92; // [xsp+218h] [xbp-A8h]
  __int64 **v93; // [xsp+220h] [xbp-A0h]
  __int64 *v94; // [xsp+228h] [xbp-98h]
  int v95; // [xsp+230h] [xbp-90h] BYREF
  char v96; // [xsp+234h] [xbp-8Ch]
  __int64 v97; // [xsp+238h] [xbp-88h] BYREF
  __int16 v98; // [xsp+240h] [xbp-80h]
  __int64 v99; // [xsp+248h] [xbp-78h] BYREF
  __int16 v100; // [xsp+250h] [xbp-70h]
  char v101; // [xsp+252h] [xbp-6Eh]
  __int64 v102; // [xsp+258h] [xbp-68h] BYREF
  int v103; // [xsp+260h] [xbp-60h]
  __int64 v104; // [xsp+268h] [xbp-58h]

  v38 = a1;
  v104 = *(_QWORD *)qword_DFF90;
  v37 = (__int64 **)&v84;
  v43 = v1;
  v44 = v1;
  v33 = v1;
  v34 = v1;
  v45 = v1;
  v35 = v1;
  v36 = v1;
  v40 = v1;
  v39 = v1;
  v32 = v1;
  v31 = v1;
  v41 = v1;
  v42 = v1;
  v46 = v28;
  v47 = &v29;
  v48 = v27;
  v49 = &v26;
  v50 = v28;
  v51 = v27;
  ((void (*)(void))unk_D0A0)();
  v93 = v37;
  v94 = *v37;
  if ( v94 )
  {
    v101 = 0;
    v100 = -18727;
    v60 = &v99;
    v61 = &v102;
    v103 = dword_C68AC;
    v102 = qword_C68A4;
    v99 = qword_C6670;
    v4 = ((__int64 (__fastcall *)(__int64 *))unk_DA20)(&v99);
    v5 = (__int64)v60;
    v6 = (__int64)v61;
    for ( i = 0; ; i = (_DWORD)v92 + 1 )
    {
      LODWORD(v92) = i;
      if ( i >= v4 )
        break;
      LODWORD(v90) = (int)v92 % 3;
      v93 = (__int64 **)((int)v92 % 3);
      v94 = (__int64 *)(v6 + 4LL * (_QWORD)v93);
      *(_BYTE *)(v5 + (int)v92) ^= *(_DWORD *)v94;
      LODWORD(v91) = (_DWORD)v92 + 1;
    }
    v96 = 0;
    v95 = -220608841;
    v62 = &v95;
    v63 = ((__int64 (__fastcall *)(int *))unk_DA20)(&v95);
    v9 = (__int64)v61;
    v10 = (__int64)v62;
    v11 = v63;
    for ( j = 0; ; j = (_DWORD)v92 + 1 )
    {
      LODWORD(v92) = j;
      if ( j >= v11 )
        break;
      LODWORD(v90) = (int)v92 % 3;
      v93 = (__int64 **)((int)v92 % 3);
      v94 = (__int64 *)(v9 + 4LL * (_QWORD)v93);
      *(_BYTE *)(v10 + (int)v92) ^= *(_DWORD *)v94;
      LODWORD(v91) = (_DWORD)v92 + 1;
    }
    v98 = 194;
    v64 = &v97;
    v97 = qword_C6680;
    v17 = ((__int64 (__fastcall *)(__int64 *))unk_DA20)(&v97);
    v18 = (__int64)v61;
    v19 = (__int64)v64;
    for ( k = 0; ; k = (_DWORD)v92 + 1 )
    {
      LODWORD(v92) = k;
      if ( k >= v17 )
        break;
      LODWORD(v90) = (int)v92 % 3;
      v93 = (__int64 **)((int)v92 % 3);
      v94 = (__int64 *)(v18 + 4LL * (_QWORD)v93);
      *(_BYTE *)(v19 + (int)v92) ^= *(_DWORD *)v94;
      LODWORD(v91) = (_DWORD)v92 + 1;
    }
    v41 = 1;
    while ( 1 )
    {
      v81 = v42;
      v82 = v41;
      if ( v41 >= 11 )
        break;
      v53 = v46;
      ((void (__fastcall *)(_BYTE *, _QWORD, __int64))unk_DCA0)(v46, 0LL, 1024LL);
      v3 = (__int64)v46;
      ((void (__fastcall *)(_BYTE *, __int64 *))unk_DE00)(v46, v60);
      v94 = &v83;
      ((void (__fastcall *)(__int64, __int64))unk_D040)(v3, *v94);
      *(_WORD *)(v3 + ((__int64 (__fastcall *)(__int64))unk_DA20)(v3)) = 45;
      v13 = v47;
      *((_WORD *)v47 + 4) = 0;
      *v13 = 0LL;
      v30 = v47;
      ((void (*)(void))unk_D690)();
      ((void (__fastcall *)(__int64, __int64 *))unk_D040)(v3, v30);
      ((void (__fastcall *)(__int64, int *))unk_D040)(v3, v62);
      v54 = ((__int64 (__fastcall *)(__int64))unk_D8A0)(v3);
      if ( v54 )
      {
        v44 = v54;
        v43 = 1;
      }
      else
      {
        v44 = v81;
        v43 = 0;
      }
      v71 = v44;
      if ( v43 )
      {
        v45 = v71;
        goto LABEL_47;
      }
      v66 = v82 + 1;
      v41 = v82 + 1;
      v42 = v71;
    }
    v31 = v81;
    v32 = 1;
    while ( 1 )
    {
      v79 = v31;
      v80 = v32;
      if ( v32 >= 11 )
        break;
      v56 = v48;
      ((void (__fastcall *)(_BYTE *, _QWORD, __int64))unk_DCA0)(v48, 0LL, 1024LL);
      v57 = v48;
      ((void (__fastcall *)(_BYTE *, __int64 *))unk_DE00)(v48, v60);
      v94 = &v83;
      ((void (__fastcall *)(_BYTE *, __int64))unk_D040)(v57, v83);
      v14 = (__int64)v57;
      *(_WORD *)(v14 + ((__int64 (__fastcall *)(_BYTE *))unk_DA20)(v57)) = 45;
      v15 = v49;
      *((_WORD *)v49 + 4) = 0;
      *v15 = 0LL;
      v16 = (__int64)v49;
      ((void (__fastcall *)(__int64 *, void *, _QWORD))unk_D690)(v49, &unk_C68FC, v80);
      ((void (__fastcall *)(_BYTE *, __int64))unk_D040)(v57, v16);
      ((void (__fastcall *)(_BYTE *, __int64 *))unk_D040)(v57, v64);
      v58 = ((__int64 (__fastcall *)(_BYTE *))unk_D8A0)(v57);
      if ( v58 )
      {
        v36 = v58;
        v35 = 1;
      }
      else
      {
        v36 = v79;
        v35 = 0;
      }
      v75 = v36;
      if ( v35 )
      {
        v45 = v75;
        goto LABEL_47;
      }
      v70 = v80 + 1;
      v32 = v80 + 1;
      v31 = v75;
    }
    v39 = v79;
    v40 = 1;
    while ( 1 )
    {
      v77 = v39;
      v78 = v40;
      if ( v40 >= 11 )
        break;
      v67 = v50;
      ((void (__fastcall *)(_BYTE *, _QWORD, __int64))unk_DCA0)(v50, 0LL, 1024LL);
      v68 = v50;
      ((void (__fastcall *)(_BYTE *, __int64 *))unk_DE00)(v50, v60);
      for ( l = 609632072; l == 609632072; l = -599505393 )
        v94 = &v83;
      ((void (__fastcall *)(_BYTE *, __int64))unk_D040)(v68, *v94);
      v23 = (__int64)v68;
      *(_WORD *)(v23 + ((__int64 (__fastcall *)(_BYTE *))unk_DA20)(v68)) = 45;
      v24 = v51;
      *((_WORD *)v51 + 4) = 0;
      *v24 = 0LL;
      v2 = (__int64)v51;
      ((void (__fastcall *)(_BYTE *, void *, _QWORD))unk_D690)(v51, &unk_C68FC, v78);
      ((void (__fastcall *)(_BYTE *, __int64))unk_D040)(v68, v2);
      v69 = ((__int64 (__fastcall *)(_BYTE *))unk_D8A0)(v68);
      if ( v69 )
      {
        v34 = v69;
        v33 = 1;
      }
      else
      {
        v34 = v77;
        v33 = 0;
      }
      v73 = v34;
      if ( v33 )
      {
        v45 = v73;
        goto LABEL_47;
      }
      v55 = v78 + 1;
      v40 = v78 + 1;
      v39 = v73;
    }
    v59 = ((__int64 (*)(void))unk_DB70)();
    if ( v59 <= 25 )
      goto LABEL_14;
    v92 = v38;
    v93 = *v38;
    v94 = (__int64 *)(v93 + 6);
    v85 = ((__int64 (__fastcall *)(__int64 ***, void *))v93[6])(v38, &unk_C635E);
    v92 = (__int64 ***)*v38;
    v93 = (__int64 **)(v92 + 33);
    v94 = (__int64 *)v92[33];
    v86 = ((__int64 (__fastcall *)(__int64 ***, __int64, void *, void *))v94)(v38, v85, &unk_C668A, &unk_C63BD);
    v87 = ((__int64 (__fastcall *)(__int64 ***))unk_80808)(v38);
    if ( v87 )
    {
      v88 = ((__int64 (__fastcall *)(__int64 ***, __int64, __int64))unk_C8C0)(v38, v87, v86);
      v89 = v88;
      v92 = (__int64 ***)*v38;
      v93 = (__int64 **)(v92 + 169);
      v94 = (__int64 *)v92[169];
      v90 = ((__int64 (__fastcall *)(__int64 ***, __int64, _QWORD))v94)(v38, v88, 0LL);
      v91 = v85;
      v92 = v38;
      v93 = *v38;
      v94 = v93[23];
      ((void (__fastcall *)(__int64 ***, __int64))v94)(v38, v85);
      v8 = v90;
    }
    else
    {
      v8 = 0LL;
    }
    v52 = v8;
    v65 = ((__int64 (__fastcall *)(_QWORD))unk_D8A0)(0LL);
    if ( v65 )
      v45 = v65;
    else
LABEL_14:
      v45 = 0LL;
  }
  else
  {
    v45 = 0LL;
  }
LABEL_47:
  v21 = ((__int64 (__fastcall *)(__int64 *))unk_D5D0)(&v83);
  if ( *(_QWORD *)qword_DFF90 == v104 )
    return v45;
  ((void (__fastcall *)(__int64))unk_D2E0)(v21);
  return result;
}
