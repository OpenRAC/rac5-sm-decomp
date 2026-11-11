/* LEVEL_16:0x066918 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_001A3B24;
extern int D_001A3B28;
extern int D_001A3B2C;
extern int D_0024E25C;
extern int D_0024E2FC;
extern void func_066D80(void);
extern void func_066D28(void);
extern void func_0684C8(void);
extern void func_0680E0(void);
extern void func_0678C0(void);
extern void func_067820(void);
extern void func_087530(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_087708(char *buf);
void func_066918(void)
{
    char buf[16];
    if (D_001A3B24 < 0) {
        func_087530(buf, (D_0024E25C << 16) | 0xB0007059, func_066D80, 0x1C, 0, -1, func_066D28);
        D_001A3B24 = func_087708(buf);
    }
    if (D_001A3B28 < 0) {
        func_087530(buf, (D_0024E25C << 16) | 0x98007059, func_0684C8, 0x44, 0, -1, func_0680E0);
        D_001A3B28 = func_087708(buf);
    }
    if (D_001A3B2C < 0) {
        func_087530(buf, (D_0024E2FC << 16) | 0x88007059, func_0678C0, 0x1C, 0, -1, func_067820);
        D_001A3B2C = func_087708(buf);
    }
}
