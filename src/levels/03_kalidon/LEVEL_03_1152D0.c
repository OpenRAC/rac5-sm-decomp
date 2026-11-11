/* LEVEL_03:0x1152D0 -- placement copy of LEVEL_15_0DAD88.c: forwards eight argument words to a helper with a local output buffer and reports whether it returned non-zero. */

int func_115090(unsigned char *buf, int a, int b, int c, int d, int e, int f, int g, int h);

int func_1152D0(int a, int b, int c, int d, int e, int f, int g, int h)
{
    unsigned char buf[16];
    int r;

    r = func_115090(buf, a, b, c, d, e, f, g, h);
    return r != 0;
}
