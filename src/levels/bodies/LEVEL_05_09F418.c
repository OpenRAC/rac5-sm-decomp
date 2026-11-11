/* LEVEL_05:0x09F418 -- placement copy of LEVEL_01_0A0DF0.c: scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_001E5AC4;
extern int D_0028AD80[];

float func_09F418(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_0028AD80[D_001E5AC4];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
