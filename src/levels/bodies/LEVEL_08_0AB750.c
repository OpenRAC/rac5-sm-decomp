/* LEVEL_08:0x0AB750 -- placement copy of LEVEL_01_0A0DF0.c: scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_0023F604;
extern int D_002EE140[];

float func_0AB750(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_002EE140[D_0023F604];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
