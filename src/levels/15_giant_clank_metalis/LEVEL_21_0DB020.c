/* LEVEL_21:0x0DB020 -- placement copy of LEVEL_15_0DAD88.c: forwards eight argument words and two floats to a helper with a local output buffer and reports whether it returned non-zero. */

int func_0DADE0(unsigned char *buf, int a, int b, int c, int d, int e, float x, float y, int f, int g,
                int h);

int func_0DB020(int a, int b, int c, int d, int e, float x, float y, int f, int g, int h)
{
    unsigned char buf[16];
    int r;

    r = func_0DADE0(buf, a, b, c, d, e, x, y, f, g, h);
    return r != 0;
}
