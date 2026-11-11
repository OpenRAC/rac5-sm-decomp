/* LEVEL_06:0x09B628 -- placement copy of LEVEL_01_0A0DF0.c: scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_001E5644;
extern int D_0028BC40[];

float func_09B628(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_0028BC40[D_001E5644];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
