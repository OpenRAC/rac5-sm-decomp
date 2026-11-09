/* LEVEL_01:0x075998 -- lazily registers three handlers and stores their ids. */
extern int D_001F60D4;
extern int D_001F60D8;
extern int D_001F60DC;
extern int D_00297DDC;
extern int D_00297E7C;
extern void func_075E00(void);
extern void func_075DA8(void);
extern void func_077548(void);
extern void func_077160(void);
extern void func_076940(void);
extern void func_0768A0(void);
extern void func_096948(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_096B20(char *buf);
void func_075998(void)
{
    char buf[16];
    if (D_001F60D4 < 0) {
        func_096948(buf, (D_00297DDC << 16) | 0xB0007059, func_075E00, 0x1C, 0, -1, func_075DA8);
        D_001F60D4 = func_096B20(buf);
    }
    if (D_001F60D8 < 0) {
        func_096948(buf, (D_00297DDC << 16) | 0x98007059, func_077548, 0x44, 0, -1, func_077160);
        D_001F60D8 = func_096B20(buf);
    }
    if (D_001F60DC < 0) {
        func_096948(buf, (D_00297E7C << 16) | 0x88007059, func_076940, 0x1C, 0, -1, func_0768A0);
        D_001F60DC = func_096B20(buf);
    }
}
