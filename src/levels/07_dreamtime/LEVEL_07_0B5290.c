typedef struct { int pad0[3]; int at_C; } Buf;
extern void func_0B0708(int id, void *out, float v);
extern int func_0B4288(void);
int func_0B5290(void){
  Buf first; Buf second;
  func_0B0708(0x6C, &first, 0.0f);
  if (func_0B4288()) { func_0B0708(0x6B, &second, 0.0f); return second.at_C - first.at_C; }
  return 0;
}
