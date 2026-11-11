/* LEVEL_20:0x07A7B0 -- placement copy of LEVEL_01_0A0DF0.c: scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_00106DF4;
extern int D_0017A1D0[];

float func_07A7B0(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_0017A1D0[D_00106DF4];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
