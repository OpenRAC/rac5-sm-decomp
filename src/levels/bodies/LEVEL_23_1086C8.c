/* LEVEL_23:0x1086C8 -- placement copy of LEVEL_15_0DAD88.c: forwards eight argument words to a helper with a local output buffer and reports whether it returned non-zero. */

int func_108488(unsigned char *buf, int a, int b, int c, int d, int e, int f, int g, int h);

int func_1086C8(int a, int b, int c, int d, int e, int f, int g, int h)
{
    unsigned char buf[16];
    int r;

    r = func_108488(buf, a, b, c, d, e, f, g, h);
    return r != 0;
}
