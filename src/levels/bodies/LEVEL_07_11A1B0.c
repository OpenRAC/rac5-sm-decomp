/* LEVEL_07:0x11A1B0 -- placement copy of LEVEL_15_0DAD88.c: forwards eight argument words to a helper with a local output buffer and reports whether it returned non-zero. */

int func_119F70(unsigned char *buf, int a, int b, int c, int d, int e, int f, int g, int h);

int func_11A1B0(int a, int b, int c, int d, int e, int f, int g, int h)
{
    unsigned char buf[16];
    int r;

    r = func_119F70(buf, a, b, c, d, e, f, g, h);
    return r != 0;
}
