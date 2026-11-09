/* LEVEL_10:0x076038 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_001FF0D4;
extern int D_001FF0D8;
extern int D_001FF0DC;
extern int D_002A11DC;
extern int D_002A127C;
extern void func_0764A0(void);
extern void func_076448(void);
extern void func_077BE8(void);
extern void func_077800(void);
extern void func_076FE0(void);
extern void func_076F40(void);
extern void func_096CB8(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_096E90(char *buf);
void func_076038(void)
{
    char buf[16];
    if (D_001FF0D4 < 0) {
        func_096CB8(buf, (D_002A11DC << 16) | 0xB0007059, func_0764A0, 0x1C, 0, -1, func_076448);
        D_001FF0D4 = func_096E90(buf);
    }
    if (D_001FF0D8 < 0) {
        func_096CB8(buf, (D_002A11DC << 16) | 0x98007059, func_077BE8, 0x44, 0, -1, func_077800);
        D_001FF0D8 = func_096E90(buf);
    }
    if (D_001FF0DC < 0) {
        func_096CB8(buf, (D_002A127C << 16) | 0x88007059, func_076FE0, 0x1C, 0, -1, func_076F40);
        D_001FF0DC = func_096E90(buf);
    }
}
