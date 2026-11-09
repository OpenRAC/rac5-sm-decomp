/* LEVEL_18:0x046368 -- placement copy of LEVEL_16_047B28.c: runs two flag-gated helpers and forwards its argument to one more helper. */

extern int func_0A1B00(int a);
extern void func_0A1B38(void);
extern int func_111BC8(void);
extern void func_0159F0(void);
extern void func_112DC8(int a);

void func_046368(int a)
{
    if (func_0A1B00(a) != 0) {
        func_0A1B38();
    }
    if (func_111BC8() != 0) {
        func_0159F0();
    } else {
        func_112DC8(a);
    }
}
