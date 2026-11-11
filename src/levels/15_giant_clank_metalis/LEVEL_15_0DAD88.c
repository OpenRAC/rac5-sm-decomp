/* LEVEL_15:0x0DAD88 -- forwards eight argument words to a helper with a local output buffer and reports whether it returned non-zero. */

int func_0DAB48(unsigned char *buf, int a, int b, int c, int d, int e, int f, int g, int h);

int func_0DAD88(int a, int b, int c, int d, int e, int f, int g, int h)
{
    unsigned char buf[16];
    int r;

    r = func_0DAB48(buf, a, b, c, d, e, f, g, h);
    return r != 0;
}
