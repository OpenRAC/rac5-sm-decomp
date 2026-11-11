typedef struct { int pad0[3]; int at_C; } Buf;
extern void func_09CD18(int id, void *out, float v);
extern int func_0A0908(void);
int func_0A18B0(void){
  Buf first; Buf second;
  func_09CD18(0x6C, &first, 0.0f);
  if (func_0A0908()) { func_09CD18(0x6B, &second, 0.0f); return second.at_C - first.at_C; }
  return 0;
}
