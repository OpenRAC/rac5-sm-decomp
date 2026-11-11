/* LEVEL_16:0x0900B8 -- placement copy of LEVEL_01_0A0DF0.c: scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_001A4714;
extern int D_00256990[];

float func_0900B8(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_00256990[D_001A4714];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
