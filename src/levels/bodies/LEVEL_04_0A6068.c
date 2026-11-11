/* LEVEL_04:0x0A6068 -- placement copy of LEVEL_01_0A0DF0.c: scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_0020FC04;
extern int D_002B96C0[];

float func_0A6068(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_002B96C0[D_0020FC04];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
