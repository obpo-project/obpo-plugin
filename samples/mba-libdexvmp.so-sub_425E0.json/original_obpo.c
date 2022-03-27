int __fastcall sub_425E0(int a1, int a2)
{
  int v2; // r5
  int result; // r0
  int v5; // [sp+74h] [bp-7Ch]
  int v6; // [sp+78h] [bp-78h]
  int v7; // [sp+7Ch] [bp-74h]
  int v9; // [sp+84h] [bp-6Ch]
  char v10[2]; // [sp+8Ch] [bp-64h] BYREF
  int v11; // [sp+C8h] [bp-28h]

  v11 = **(_DWORD **)(dword_42C74 + dword_42C70 + 271864);
  ((void (__fastcall *)(char *, int, int))unk_7FBC)(v10, dword_42C78 + dword_42C70 + 271864, 42);
  v7 = ((int (__fastcall *)(int, int, _DWORD))unk_888C)(
         a1,
         a2,
         *(_DWORD *)(*(_DWORD *)(dword_42C7C + dword_42C70 + 271864) + 304));
  v9 = ((int (__fastcall *)(int))unk_888C)(a1);
  v2 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 672))(a1, v9);
  v6 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 676))(a1, v9, 0);
  v5 = ((int (__fastcall *)(int))unk_8004)(v2 + 1);
  ((void (*)(void))unk_7FB0)();
  ((void (__fastcall *)(int, int, int))unk_7FBC)(v5, v6, v2);
  (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 680))(a1, v9, v6);
  if ( v7 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 92))(a1, v7);
  if ( v9 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 92))(a1, v9);
  if ( **(_DWORD **)(dword_42C74 + dword_42C80 + 273500) == v11 )
    return v5;
  ((void (*)(void))unk_8244)();
  return result;
}
