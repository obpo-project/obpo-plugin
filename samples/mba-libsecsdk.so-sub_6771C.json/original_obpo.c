int __fastcall sub_6771C(int *a1, int a2, int a3, int a4, int a5)
{
  bool v7; // zf
  bool v8; // zf
  int v9; // r1
  bool v10; // zf
  bool v11; // zf
  bool v12; // zf
  int v13; // r0
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  int v17; // r0
  bool v18; // zf
  bool v19; // zf
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  bool v24; // zf
  bool v25; // zf
  bool v26; // zf
  int v27; // r0
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  int v31; // r0
  bool v32; // zf
  int v33; // r0
  bool v34; // zf
  int v35; // r0
  bool v36; // zf
  int v37; // r0
  bool v38; // zf
  int v39; // r0
  bool v40; // zf
  bool v41; // zf
  int result; // r0
  int *v43; // [sp+Ch] [bp-3Ch]
  int v45[5]; // [sp+30h] [bp-18h] BYREF
  int *v46; // [sp+44h] [bp-4h]
  int v47[4]; // [sp+48h] [bp+0h] BYREF
  int v48; // [sp+58h] [bp+10h]
  int *v49; // [sp+5Ch] [bp+14h]
  int v50[5]; // [sp+60h] [bp+18h] BYREF
  int *v51; // [sp+74h] [bp+2Ch]
  int v52[5]; // [sp+78h] [bp+30h] BYREF
  int *v53; // [sp+8Ch] [bp+44h]
  int v54[5]; // [sp+90h] [bp+48h] BYREF
  int *v55; // [sp+A4h] [bp+5Ch]
  int v56; // [sp+A8h] [bp+60h]

  v43 = a1;
  v56 = *(_DWORD *)dword_79C78;
  *a1 = 0;
  a1[1] = 0;
  if ( a5 == 76 )
    goto LABEL_59;
  v9 = 439470573;
  if ( a5 != 91 )
    v9 = 1668649320;
  if ( a4 || v9 == 439470573 )
  {
LABEL_59:
    v54[4] = (int)v54;
    v55 = v54;
    LOBYTE(v54[0]) = 0;
    v53 = v52;
    v50[4] = (int)v50;
    v52[4] = (int)v52;
    v51 = v50;
    LOBYTE(v52[0]) = 0;
    LOBYTE(v50[0]) = 0;
    if ( a5 < 74 )
    {
      if ( a5 >= 68 )
      {
        if ( a5 >= 70 )
        {
          if ( a5 >= 73 )
          {
            ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688E8 + 427372);
            ((void (__fastcall *)(int *, int *, int))unk_85AC)(v52, v49, v48);
            v40 = v49 == v47;
            if ( v49 != v47 )
              v40 = v49 == 0;
            if ( !v40 )
            {
              if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
                ((void (*)(void))unk_5768)();
              else
                ((void (*)(void))unk_575C)();
            }
            ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68918 + 427420);
            ((void (__fastcall *)(int *, int *, int))unk_85AC)(v54, v49, v48);
            v41 = v49 == v47;
            if ( v49 != v47 )
              v41 = v49 == 0;
            if ( !v41 )
            {
              if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
                ((void (*)(void))unk_5768)();
              else
                ((void (*)(void))unk_575C)();
            }
            ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_6891C + 426836);
            ((void (__fastcall *)(int *, int *, int))unk_85AC)(v50, v49, v48);
            v30 = v49 == v47;
            if ( v49 != v47 )
              v30 = v49 == 0;
            if ( !v30 )
            {
              if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
                ((void (*)(void))unk_5768)();
              else
                ((void (*)(void))unk_575C)();
            }
            v31 = ((int (__fastcall *)(_DWORD, int))unk_6ABB0)(0, a3);
            *v43 = ((int (__fastcall *)(int, int, int))unk_6BED0)(a3, a4, v31);
          }
          else if ( a5 == 70 )
          {
            ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688F4 + 426412);
            ((void (__fastcall *)(int *, int *, int))unk_85AC)(v52, v49, v48);
            v22 = v49 == v47;
            if ( v49 != v47 )
              v22 = v49 == 0;
            if ( !v22 )
            {
              if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
                ((void (*)(void))unk_5768)();
              else
                ((void (*)(void))unk_575C)();
            }
            ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68920 + 426460);
            ((void (__fastcall *)(int *, int *, int))unk_85AC)(v54, v49, v48);
            v23 = v49 == v47;
            if ( v49 != v47 )
              v23 = v49 == 0;
            if ( !v23 )
            {
              if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
                ((void (*)(void))unk_5768)();
              else
                ((void (*)(void))unk_575C)();
            }
            ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688D8 + 426628);
            ((void (__fastcall *)(int *, int *, int))unk_85AC)(v50, v49, v48);
            v26 = v49 == v47;
            if ( v49 != v47 )
              v26 = v49 == 0;
            if ( !v26 )
            {
              if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
                ((void (*)(void))unk_5768)();
              else
                ((void (*)(void))unk_575C)();
            }
            v27 = ((int (__fastcall *)(_DWORD, int))unk_6ABB0)(0, a3);
            *v43 = ((int (__fastcall *)(int, int, int))unk_6BF28)(a3, a4, v27);
          }
        }
        else if ( a5 == 68 )
        {
          ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688EC + 426728);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v52, v49, v48);
          v28 = v49 == v47;
          if ( v49 != v47 )
            v28 = v49 == 0;
          if ( !v28 )
          {
            if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68930 + 426776);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v54, v49, v48);
          v29 = v49 == v47;
          if ( v49 != v47 )
            v29 = v49 == 0;
          if ( !v29 )
          {
            if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688E0 + 426944);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v50, v49, v48);
          v32 = v49 == v47;
          if ( v49 != v47 )
            v32 = v49 == 0;
          if ( !v32 )
          {
            if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          v33 = ((int (__fastcall *)(_DWORD, int))unk_6ABB0)(0, a3);
          *(_QWORD *)v43 = ((__int64 (__fastcall *)(int, int, int))unk_6BFD8)(a3, a4, v33);
        }
      }
      else if ( a5 >= 67 )
      {
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_6890C + 426520);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v52, v49, v48);
        v24 = v49 == v47;
        if ( v49 != v47 )
          v24 = v49 == 0;
        if ( !v24 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68910 + 426568);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v54, v49, v48);
        v25 = v49 == v47;
        if ( v49 != v47 )
          v25 = v49 == 0;
        if ( !v25 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688D4 + 427164);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v50, v49, v48);
        v36 = v49 == v47;
        if ( v49 != v47 )
          v36 = v49 == 0;
        if ( !v36 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        v37 = ((int (__fastcall *)(_DWORD, int))unk_6ABB0)(0, a3);
        *(_WORD *)v43 = ((int (__fastcall *)(int, int, int))unk_6BE20)(a3, a4, v37);
      }
      else if ( a5 == 66 )
      {
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68900 + 426196);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v52, v49, v48);
        v18 = v49 == v47;
        if ( v49 != v47 )
          v18 = v49 == 0;
        if ( !v18 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68904 + 426244);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v54, v49, v48);
        v19 = v49 == v47;
        if ( v49 != v47 )
          v19 = v49 == 0;
        if ( !v19 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68908 + 425876);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v50, v49, v48);
        v12 = v49 == v47;
        if ( v49 != v47 )
          v12 = v49 == 0;
        if ( !v12 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        v13 = ((int (__fastcall *)(_DWORD, int))unk_6ABB0)(0, a3);
        *(_BYTE *)v43 = ((int (__fastcall *)(int, int, int))unk_6BDC8)(a3, a4, v13);
      }
      goto LABEL_23;
    }
    if ( a5 >= 83 )
    {
      if ( a5 < 90 )
      {
        if ( a5 == 83 )
        {
          ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688E4 + 426304);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v52, v49, v48);
          v20 = v49 == v47;
          if ( v49 != v47 )
            v20 = v49 == 0;
          if ( !v20 )
          {
            if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68914 + 426352);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v54, v49, v48);
          v21 = v49 == v47;
          if ( v49 != v47 )
            v21 = v49 == 0;
          if ( !v21 )
          {
            if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688DC + 427264);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v50, v49, v48);
          v38 = v49 == v47;
          if ( v49 != v47 )
            v38 = v49 == 0;
          if ( !v38 )
          {
            if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          v39 = ((int (__fastcall *)(_DWORD, int))unk_6ABB0)(0, a3);
          *(_WORD *)v43 = ((int (__fastcall *)(int, int, int))unk_6BE78)(a3, a4, v39);
        }
        goto LABEL_23;
      }
      if ( a5 < 91 )
      {
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688F8 + 425976);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v52, v49, v48);
        v14 = v49 == v47;
        if ( v49 != v47 )
          v14 = v49 == 0;
        if ( !v14 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688FC + 426024);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v54, v49, v48);
        v15 = v49 == v47;
        if ( v49 != v47 )
          v15 = v49 == 0;
        if ( !v15 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_688F0 + 427056);
        ((void (__fastcall *)(int *, int *, int))unk_85AC)(v50, v49, v48);
        v34 = v49 == v47;
        if ( v49 != v47 )
          v34 = v49 == 0;
        if ( !v34 )
        {
          if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
            ((void (*)(void))unk_5768)();
          else
            ((void (*)(void))unk_575C)();
        }
        v35 = ((int (__fastcall *)(_DWORD, int))unk_6ABB0)(0, a3);
        *(_BYTE *)v43 = ((int (__fastcall *)(int, int, int))unk_6BD70)(a3, a4, v35);
        goto LABEL_23;
      }
      if ( a5 == 91 )
      {
LABEL_36:
        *a1 = a4;
        goto LABEL_23;
      }
    }
    else
    {
      if ( a5 < 76 )
      {
        if ( a5 == 74 )
        {
          ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_68924 + 425304);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v52, v49, v48);
          v8 = v49 == v47;
          if ( v49 != v47 )
            v8 = v49 == 0;
          if ( !v8 )
          {
            if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          ((void (__fastcall *)(int *, int))unk_65C38)(v45, dword_68928 + 425376);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v54, v46, v45[4]);
          if ( v46 != v45 && v46 )
          {
            if ( (unsigned int)(v45[0] - (_DWORD)v46) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          ((void (__fastcall *)(int *, int))unk_65C38)(v47, dword_6892C + 426088);
          ((void (__fastcall *)(int *, int *, int))unk_85AC)(v50, v49, v48);
          v16 = v49 == v47;
          if ( v49 != v47 )
            v16 = v49 == 0;
          if ( !v16 )
          {
            if ( (unsigned int)(v47[0] - (_DWORD)v49) < 0x81 )
              ((void (*)(void))unk_5768)();
            else
              ((void (*)(void))unk_575C)();
          }
          v17 = ((int (__fastcall *)(_DWORD, int))unk_6ABB0)(0, a3);
          *(_QWORD *)a1 = ((__int64 (__fastcall *)(int, int, int))unk_6BF80)(a3, a4, v17);
        }
        goto LABEL_23;
      }
      if ( a5 == 76 )
        goto LABEL_36;
    }
LABEL_23:
    v7 = v51 == v50;
    if ( v51 != v50 )
      v7 = v51 == 0;
    if ( !v7 )
    {
      if ( (unsigned int)(v50[0] - (_DWORD)v51) < 0x81 )
        ((void (*)(void))unk_5768)();
      else
        ((void (*)(void))unk_575C)();
    }
    v10 = v53 == v52;
    if ( v53 != v52 )
      v10 = v53 == 0;
    if ( !v10 )
    {
      if ( (unsigned int)(v52[0] - (_DWORD)v53) < 0x81 )
        ((void (*)(void))unk_5768)();
      else
        ((void (*)(void))unk_575C)();
    }
    v11 = v55 == v54;
    if ( v55 != v54 )
      v11 = v55 == 0;
    if ( !v11 )
    {
      if ( (unsigned int)(v54[0] - (_DWORD)v55) < 0x81 )
        ((void (*)(void))unk_5768)();
      else
        ((void (*)(void))unk_575C)();
    }
  }
  result = **(_DWORD **)(dword_68934 + 428224) - v56;
  if ( result )
    ((void (*)(void))unk_5714)();
  return result;
}
