/* LEVEL_01:0x0C94D8 -- formats one lookup into a buffer and forwards three lookups; the other branch forwards three lookups directly. */
extern int D_00200CE4;
extern char D_0032BEB8[];
extern int func_001324B0(int);
extern int func_001336F8(void);
extern void func_000D6F50(int, int, int, int);
extern void func_000D6F88(int);
extern int sprintf(char *buf, const char *fmt, int value);

void func_0C94D8(void)
{
    int a;
    int b;
    int c;
    char *buf;

    if (D_00200CE4 != 0) {
        a = func_001336F8();
        buf = D_0032BEB8;
        b = func_001324B0(0x6E6);
        sprintf(buf, (char *)b, a);
        a = func_001324B0(0x30A);
        b = func_001324B0(0x218);
        func_000D6F50(3, (int)buf, a, b);
        func_000D6F88(10);
    } else {
        a = func_001324B0(0x214);
        b = func_001324B0(0x30B);
        c = func_001324B0(0x218);
        func_000D6F50(3, a, b, c);
    }
}
