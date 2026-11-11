typedef struct { int pad0[3]; int at_C; } Buf;
extern void func_0A7F80(int id, void *out, float v);
extern int func_0ABB00(void);
int func_0ACAA8(void){
  Buf first; Buf second;
  func_0A7F80(0x6C, &first, 0.0f);
  if (func_0ABB00()) { func_0A7F80(0x6B, &second, 0.0f); return second.at_C - first.at_C; }
  return 0;
}
