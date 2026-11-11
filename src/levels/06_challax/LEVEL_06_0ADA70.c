typedef struct { int pad0[3]; int at_C; } Buf;
extern void func_0A8ED8(int id, void *out, float v);
extern int func_0ACA58(void);
int func_0ADA70(void){
  Buf first; Buf second;
  func_0A8ED8(0x6C, &first, 0.0f);
  if (func_0ACA58()) { func_0A8ED8(0x6B, &second, 0.0f); return second.at_C - first.at_C; }
  return 0;
}
