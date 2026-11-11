/* LEVEL_01:0x0A0E58 -- placement copy of LEVEL_01_0A0DF0.c: scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_001F6744;
extern int D_0029EEC0[];

float func_0A0E58(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_0029EEC0[D_001F6744];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
