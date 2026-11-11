/* LEVEL_22:0x0F1620 -- placement copy of LEVEL_15_0DAD88.c: forwards eight argument words to a helper with a local output buffer and reports whether it returned non-zero. */

int func_0F13E0(unsigned char *buf, int a, int b, int c, int d, int e, int f, int g, int h);

int func_0F1620(int a, int b, int c, int d, int e, int f, int g, int h)
{
    unsigned char buf[16];
    int r;

    r = func_0F13E0(buf, a, b, c, d, e, f, g, h);
    return r != 0;
}
