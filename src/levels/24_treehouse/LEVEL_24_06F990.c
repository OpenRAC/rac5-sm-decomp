/* LEVEL_24:0x06F990 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_001C6D54;
extern int D_001C6D58;
extern int D_001C6D5C;
extern int D_00263C9C;
extern int D_00263D3C;
extern void func_06FE98(void);
extern void func_06FE40(void);
extern void func_0715E0(void);
extern void func_0711F8(void);
extern void func_0709D8(void);
extern void func_070938(void);
extern void func_08F748(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_08F920(char *buf);
void func_06F990(void)
{
    char buf[16];
    if (D_001C6D54 < 0) {
        func_08F748(buf, (D_00263C9C << 16) | 0xB0007059, func_06FE98, 0x1C, 0, -1, func_06FE40);
        D_001C6D54 = func_08F920(buf);
    }
    if (D_001C6D58 < 0) {
        func_08F748(buf, (D_00263C9C << 16) | 0x98007059, func_0715E0, 0x44, 0, -1, func_0711F8);
        D_001C6D58 = func_08F920(buf);
    }
    if (D_001C6D5C < 0) {
        func_08F748(buf, (D_00263D3C << 16) | 0x88007059, func_0709D8, 0x1C, 0, -1, func_070938);
        D_001C6D5C = func_08F920(buf);
    }
}
