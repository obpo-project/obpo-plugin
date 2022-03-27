int __fastcall sub_1F83C(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v5; // r4
  unsigned int v6; // r7
  int v7; // r8
  _DWORD *v8; // r9
  unsigned __int8 *v9; // r10
  int v10; // r3
  int v11; // r3
  int v12; // r6
  int v13; // r5
  unsigned int v14; // r0
  unsigned int v15; // r4
  unsigned int v16; // r8
  unsigned int v17; // r4
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int result; // r0
  unsigned int v22; // r8
  int v23; // r0
  int *v24; // r0
  int v25; // r3
  _DWORD *v26; // [sp+8h] [bp-A0h]
  unsigned int v27; // [sp+Ch] [bp-9Ch]
  int v28; // [sp+10h] [bp-98h]
  int v29; // [sp+14h] [bp-94h]
  int v30; // [sp+18h] [bp-90h]
  int v31; // [sp+1Ch] [bp-8Ch]
  int v32; // [sp+20h] [bp-88h]
  int v34; // [sp+28h] [bp-80h]
  int v35; // [sp+2Ch] [bp-7Ch]
  int v36; // [sp+30h] [bp-78h]
  int v40; // [sp+54h] [bp-54h]
  int v41[2]; // [sp+58h] [bp-50h] BYREF
  int v42; // [sp+60h] [bp-48h] BYREF
  int v43[4]; // [sp+64h] [bp-44h] BYREF
  int *v44; // [sp+74h] [bp-34h]
  int *v45; // [sp+78h] [bp-30h]
  int v46; // [sp+7Ch] [bp-2Ch]

  v46 = *unk_54A34;
  v40 = 15;
  while ( 1 )
  {
    switch ( v40 )
    {
      case 0:
        v6 += 4;
        v40 = 86;
        continue;
      case 1:
        v8 = 0;
        v40 = 36;
        continue;
      case 2:
        v40 = 30;
        v6 = (v6 - v7 - v5) ^ (v5 >> 15);
        continue;
      case 3:
LABEL_55:
        v40 = 50;
        continue;
      case 4:
        v16 = v7 - v5 - v6;
        v5 -= v6;
        v7 = v16 ^ (v6 >> 13);
        v40 = 81;
        continue;
      case 5:
        ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD *))unk_1EE38)(v41[0], v8[1], v8[3], v8 + 2);
        v29 = v8[2];
        if ( *unk_54B10 )
          v40 = 34;
        else
          v40 = 33;
        continue;
      case 6:
        v8[4] = 1;
        v40 = 67;
        continue;
      case 7:
        v40 = 78;
        continue;
      case 8:
        v6 = (v6 - v5) ^ (v5 >> 5);
        v7 = v7 - v5 - v6;
        v40 = 17;
        continue;
      case 9:
        v40 = 77;
        continue;
      case 10:
        v6 ^= v5 >> 13;
        v7 = (v7 - v5 - v6) ^ (v6 >> 12);
        v40 = 28;
        continue;
      case 11:
        v40 = 42;
        continue;
      case 12:
        v7 += v9[1] << 8;
        v40 = 22;
        continue;
      case 13:
LABEL_84:
        v40 = 37;
        continue;
      case 14:
        v7 += *v9;
        v40 = 38;
        continue;
      case 15:
        v28 = unk_59F2C(a1, a2, a3, a4, a5);
        v31 = a3[1] + *(_DWORD *)(v28 + 32);
        v40 = 59;
        v36 = v28;
        v26 = a3;
        continue;
      case 16:
LABEL_40:
        v40 = 84;
        continue;
      case 17:
        v7 ^= v6 >> 3;
        v5 = (v5 - v6 - v7) ^ (v7 << 10);
        v40 = 2;
        continue;
      case 18:
        *(_DWORD *)(v36 + 32) = v8[2] - v26[1];
        v40 = 35;
        continue;
      case 19:
        v40 = 90;
        continue;
      case 20:
        v6 = (v6 - v5) ^ (v5 >> 5);
        v7 = v7 - v5 - v6;
        v40 = 52;
        continue;
      case 21:
        if ( *unk_54B10 )
          v40 = 18;
        else
          v40 = 35;
        continue;
      case 22:
LABEL_27:
        v40 = 14;
        continue;
      case 23:
        if ( v8 )
          v40 = 74;
        else
          v40 = 43;
        continue;
      case 24:
        v40 = 25;
        continue;
      case 25:
        v8 = 0;
        if ( *unk_54A38 )
          v40 = 19;
        else
          v40 = 87;
        continue;
      case 26:
        v40 = 11;
        v6 = (v6 - v7 - v5) ^ (v5 >> 15);
        continue;
      case 27:
        v40 = 43;
        continue;
      case 28:
        v15 = v5 - v6 - v7;
        v6 -= v7;
        v5 = v15 ^ (v7 << 16);
        v40 = 20;
        continue;
      case 29:
        while ( linux_eabi_syscall(__NR_open, (const char *)0x76FB9678, -1627406353, (void *)0x8F087F04) == -4 )
          ;
        v40 = 83;
        continue;
      case 30:
        v40 = 89;
        continue;
      case 31:
        if ( v8 )
          v40 = 16;
        else
          v40 = 50;
        continue;
      case 32:
        v5 += v9[4];
        v40 = 58;
        continue;
      case 33:
        v44 = v43;
        v45 = v43;
        v12 = v26[8];
        v13 = v26[7] - v12;
        v14 = v13 + 1;
        v35 = v26[7];
        if ( v13 == -1 )
        {
          ((void (__fastcall *)(void *))dword_4AD48[0])(&unk_50EC5);
LABEL_81:
          *(_DWORD *)(v30 - 8) = 0;
          v40 = 6;
        }
        else
        {
          if ( v14 > 0x10 )
          {
            v41[1] = 0;
            v42 = v13 + 1;
            if ( v14 <= 0x80 )
              v23 = ((int (__fastcall *)(int *))dword_4B190)(&v42);
            else
              v23 = ((int (*)(void))dword_4A5F8[0])();
            v45 = (int *)v23;
            v44 = (int *)v23;
            v43[0] = v23 + v42;
          }
          v24 = v45;
          if ( v35 != v12 )
            v24 = (int *)(((int (__fastcall *)(int *, int, int))unk_C9E8)(v45, v12, v13) + v13);
          v44 = v24;
          *(_BYTE *)v24 = 0;
          (**(void (__fastcall ***)(unsigned int, unsigned int, int))((char *)&unk_54DF0 + dword_2008C))(
            (v26[1] + 4095) & 0xFFFFF000,
            ((v26[1] + v26[2] + 4095) & 0xFFFFF000) - ((v26[1] + 4095) & 0xFFFFF000),
            3);
          if ( v45 != v43 && v45 )
          {
            if ( (unsigned int)(v43[0] - (_DWORD)v45) <= 0x80 )
              ((void (*)(void))dword_4B194[0])();
            else
              ((void (*)(void))dword_4A4F0[0])();
          }
          ((void (__fastcall *)(int, int, int))unk_C9E8)(v32, v29 + 16, 2 * *(_DWORD *)(v31 + 12));
          if ( v41[0] < 0x3C000000u )
            v25 = 56;
          else
            v25 = 55;
          v40 = v25;
        }
        break;
      case 34:
        if ( v41[0] < 0x3C000000u )
          v18 = 60;
        else
          v18 = 61;
        v40 = v18;
        continue;
      case 35:
        result = v28;
        if ( v46 != *unk_54A34 )
          result = ((int (__fastcall *)(int))unk_CA00)(v28);
        return result;
      case 36:
        v40 = 23;
        continue;
      case 37:
        v5 += v9[7] << 24;
        v40 = 44;
        continue;
      case 38:
        v40 = 4;
        continue;
      case 39:
        v7 += *v9 + (v9[1] << 8) + (v9[2] << 16) + (v9[3] << 24);
        v5 += v9[4] + (v9[5] << 8) + (v9[6] << 16) + (v9[7] << 24);
        v6 += v9[8] + (v9[9] << 8) + (v9[10] << 16) + (v9[11] << 24);
        v40 = 46;
        continue;
      case 40:
LABEL_131:
        v40 = 53;
        continue;
      case 41:
        v40 = 72;
        continue;
      case 42:
        v34 = (*(_DWORD *)(*(_DWORD *)(**(_DWORD **)((char *)&unk_54DF0 + dword_20088) + 20) + 4) - 1) & v6;
        v40 = 82;
        continue;
      case 43:
        v40 = 87;
        continue;
      case 44:
LABEL_132:
        v40 = 48;
        continue;
      case 45:
        v17 = v5 - v6 - v7;
        v6 -= v7;
        v5 = v17 ^ (v7 << 16);
        v40 = 8;
        continue;
      case 46:
        v22 = v7 - v5 - v6;
        v5 -= v6;
        v7 = v22 ^ (v6 >> 13);
        v40 = 65;
        continue;
      case 47:
        v6 += v9[8] << 8;
        v40 = 13;
        continue;
      case 48:
        v5 += v9[6] << 16;
        v40 = 3;
        continue;
      case 49:
        v7 += v9[2] << 16;
        v40 = 75;
        continue;
      case 50:
        v5 += v9[5] << 8;
        v40 = 69;
        continue;
      case 51:
LABEL_51:
        v40 = 47;
        continue;
      case 52:
        v7 ^= v6 >> 3;
        v5 = (v5 - v6 - v7) ^ (v7 << 10);
        v40 = 26;
        continue;
      case 53:
        v6 += v9[9] << 16;
        v40 = 51;
        continue;
      case 54:
        if ( v8 )
          v40 = 73;
        else
          v40 = 35;
        continue;
      case 55:
        goto LABEL_81;
      case 56:
        if ( v41[0] < 0x4000000u )
          v19 = 6;
        else
          v19 = 91;
        v40 = v19;
        continue;
      case 57:
        ((void (__fastcall *)(_DWORD))unk_CBA4)(unk_54B3C);
        if ( v8[4] )
          v40 = 67;
        else
          v40 = 5;
        continue;
      case 58:
LABEL_25:
        v40 = 68;
        continue;
      case 59:
        v32 = v31 + 16;
        v41[0] = *(_DWORD *)(v31 + 8);
        if ( *unk_54A38 )
          v40 = 24;
        else
          v40 = 63;
        v8 = 0;
        v30 = v31 + 16;
        continue;
      case 60:
        if ( v41[0] < 0x4000000u )
          v10 = 6;
        else
          v10 = 80;
        v40 = v10;
        continue;
      case 61:
        *(_DWORD *)(v29 + 8) = 0;
        v40 = 6;
        continue;
      case 62:
        if ( v8 )
          v40 = 42;
        else
          v40 = 15;
        continue;
      case 63:
        v40 = 88;
        continue;
      case 64:
        v6 ^= v5 >> 13;
        v7 = (v7 - v5 - v6) ^ (v6 >> 12);
        v40 = 45;
        continue;
      case 65:
        v5 = (v5 - v7) ^ (v7 << 8);
        v6 = v6 - v7 - v5;
        v40 = 64;
        continue;
      case 66:
        v40 = 23;
        continue;
      case 67:
        ((void (__fastcall *)(_DWORD))unk_CBB0)(unk_54B3C);
        v40 = 21;
        continue;
      case 68:
        v7 += v9[3] << 24;
        v40 = 76;
        continue;
      case 69:
LABEL_138:
        v40 = 32;
        continue;
      case 70:
        if ( ((int (__fastcall *)(_DWORD, int *, int, int))unk_CB98)(v8[10], v41, 4, v40) )
          v40 = 83;
        else
          v40 = 27;
        continue;
      case 71:
        v40 = 7;
        continue;
      case 72:
        v8 = (_DWORD *)(*(_DWORD *)(**(_DWORD **)(*unk_54A38 + 20) + 12 * v34)
                      - *(_DWORD *)(*(_DWORD *)(*unk_54A38 + 20) + 20));
        v40 = 79;
        continue;
      case 73:
        if ( v8[4] )
          v40 = 21;
        else
          v40 = 57;
        continue;
      case 74:
        if ( v8[11] == 4 )
          v11 = 70;
        else
          v11 = 83;
        v40 = v11;
        continue;
      case 75:
LABEL_129:
        v40 = 12;
        continue;
      case 76:
LABEL_64:
        v40 = 49;
        continue;
      case 77:
        v8 = (_DWORD *)(v8[9] - *(_DWORD *)(*(_DWORD *)(**(_DWORD **)((char *)&unk_54DF0 + dword_20088) + 20) + 20));
        v40 = 66;
        continue;
      case 78:
        if ( *(_DWORD *)(**(_DWORD **)(*unk_54A38 + 20) + 12 * v34) )
          v40 = 41;
        else
          v40 = 1;
        continue;
      case 79:
        v40 = 36;
        continue;
      case 80:
        *(_DWORD *)(v29 + 8) = v41[0] & 0x3FFFFFF;
        v40 = 6;
        continue;
      case 81:
        v5 = (v5 - v7) ^ (v7 << 8);
        v6 = v6 - v7 - v5;
        v40 = 10;
        continue;
      case 82:
        v40 = 71;
        continue;
      case 83:
        if ( v8[9] )
          v40 = 9;
        else
          v40 = 92;
        continue;
      case 84:
        v6 += v9[10] << 24;
        v40 = 40;
        continue;
      case 85:
        if ( v27 <= 0xB )
          v20 = 0;
        else
          v20 = 39;
        v40 = v20;
        continue;
      case 86:
        switch ( v27 )
        {
          case 1u:
            goto LABEL_27;
          case 2u:
            goto LABEL_129;
          case 3u:
            goto LABEL_64;
          case 4u:
            goto LABEL_25;
          case 5u:
            goto LABEL_138;
          case 6u:
            goto LABEL_55;
          case 7u:
            goto LABEL_132;
          case 8u:
            goto LABEL_84;
          case 9u:
            goto LABEL_51;
          case 0xAu:
            goto LABEL_131;
          case 0xBu:
            goto LABEL_40;
          default:
            v40 = 38;
            break;
        }
        continue;
      case 87:
        v40 = 54;
        continue;
      case 88:
        v40 = 54;
        continue;
      case 89:
        v9 += 12;
        v27 -= 12;
        v40 = 85;
        continue;
      case 90:
        v5 = -1640531527;
        v9 = (unsigned __int8 *)v41;
        v40 = 85;
        v6 = -17973521;
        v7 = -1640531527;
        v27 = 4;
        continue;
      case 91:
        *(_DWORD *)(v30 - 8) = v41[0] & 0x3FFFFFF;
        v40 = 6;
        continue;
      case 92:
        v8 = 0;
        v40 = 23;
        continue;
      default:
        continue;
    }
  }
}
