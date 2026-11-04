typedef struct { int pad0[3]; int at_C; } Buf;
extern void func_0874F0(int id, void *out, float v);
extern int func_08B2E8(void);
int func_08C290(void){
  Buf first; Buf second;
  func_0874F0(0x6C, &first, 0.0f);
  if (func_08B2E8()) { func_0874F0(0x6B, &second, 0.0f); return second.at_C - first.at_C; }
  return 0;
}
