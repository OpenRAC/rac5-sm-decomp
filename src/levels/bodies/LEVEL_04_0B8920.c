typedef struct { int pad0[3]; int at_C; } Buf;
extern void func_0B3958(int id, void *out, float v);
extern int func_0B7728(void);
int func_0B8920(void){
  Buf first; Buf second;
  func_0B3958(0x6C, &first, 0.0f);
  if (func_0B7728()) { func_0B3958(0x6B, &second, 0.0f); return second.at_C - first.at_C; }
  return 0;
}
