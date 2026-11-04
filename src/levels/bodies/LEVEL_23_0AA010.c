typedef struct { int pad0[3]; int at_C; } Buf;
extern void func_0A5478(int id, void *out, float v);
extern int func_0A9068(void);
int func_0AA010(void){
  Buf first; Buf second;
  func_0A5478(0x6C, &first, 0.0f);
  if (func_0A9068()) { func_0A5478(0x6B, &second, 0.0f); return second.at_C - first.at_C; }
  return 0;
}
