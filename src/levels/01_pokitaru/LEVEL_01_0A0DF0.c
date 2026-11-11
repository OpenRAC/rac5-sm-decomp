/* LEVEL_01:0x0A0DF0 -- scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_001F6744;
extern int D_0029EE40[];

float func_0A0DF0(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_0029EE40[D_001F6744];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
