typedef struct { int pad0[3]; int at_C; } Buf;
extern void func_0ACCC8(int id, void *out, float v);
extern int func_0B0848(void);
int func_0B17F0(void){
  Buf first; Buf second;
  func_0ACCC8(0x6C, &first, 0.0f);
  if (func_0B0848()) { func_0ACCC8(0x6B, &second, 0.0f); return second.at_C - first.at_C; }
  return 0;
}
