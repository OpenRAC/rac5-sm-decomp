/* LEVEL_08:0x0F6DD8 -- placement copy of LEVEL_01_0ED0E0.c: packs seven small fields into one control word with a low tag, passes it with a table to a helper on a local buffer, then runs a second helper on the buffer. */

extern unsigned char D_000F6488[];

void func_09E868(unsigned char *buf, unsigned int mask, unsigned int tbl, int n, int a, int b, unsigned int c);
int func_09EA40(unsigned char *buf);

int func_0F6DD8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2)
{
    unsigned char buf[16];
    unsigned int x3;
    unsigned int x4;
    unsigned int x5;
    unsigned int x6;

    a0 = a0 << 27;
    a1 = a1 << 16;
    a0 = a0 | a1;
    a2 = a2 << 15;
    a0 = a0 | a2;
    x3 = a3 << 14;
    x4 = t0 << 13;
    a0 = a0 | x3;
    a0 = a0 | x4;
    a1 = t1 << 10;
    x6 = t2 << 6;
    a0 = a0 | a1;
    a0 = a0 | x6;
    func_09E868(buf, a0 | 0x21, (unsigned int)D_000F6488, 0x24, 0, -1, 0);
    return func_09EA40(buf);
}
