__int64 __fastcall sub_4004D0(int a1)
{
  int v2[2]; // [rsp+20h] [rbp-10h] BYREF
  int v3; // [rsp+28h] [rbp-8h]
  int v4; // [rsp+2Ch] [rbp-4h]

  v2[1] = -1930904559;
  v3 = -1930904559;
  v4 = a1;
  v2[0] = v3 - 1773988183;
  if ( v4 == 1 )
    ((void (__fastcall *)(int *, void *, char *))unk_400640)(v2, &unk_400820, (char *)&unk_400820 + 16);
  else
    ((void (__fastcall *)(int *, char *, void *))unk_400640)(v2, (char *)&unk_400820 + 16, &unk_400820);
  return 0LL;
}
