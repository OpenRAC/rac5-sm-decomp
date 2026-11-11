/* LEVEL_03:0x075788 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_0020E754;
extern int D_0020E758;
extern int D_0020E75C;
extern int D_002B2C5C;
extern int D_002B2CFC;
extern void func_075BF0(void);
extern void func_075B98(void);
extern void func_077338(void);
extern void func_076F50(void);
extern void func_076730(void);
extern void func_076690(void);
extern void func_096578(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_096750(char *buf);
void func_075788(void)
{
    char buf[16];
    if (D_0020E754 < 0) {
        func_096578(buf, (D_002B2C5C << 16) | 0xB0007059, func_075BF0, 0x1C, 0, -1, func_075B98);
        D_0020E754 = func_096750(buf);
    }
    if (D_0020E758 < 0) {
        func_096578(buf, (D_002B2C5C << 16) | 0x98007059, func_077338, 0x44, 0, -1, func_076F50);
        D_0020E758 = func_096750(buf);
    }
    if (D_0020E75C < 0) {
        func_096578(buf, (D_002B2CFC << 16) | 0x88007059, func_076730, 0x1C, 0, -1, func_076690);
        D_0020E75C = func_096750(buf);
    }
}
