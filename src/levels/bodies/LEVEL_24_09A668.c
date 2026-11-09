/* LEVEL_24:0x09A668 -- placement copy of LEVEL_01_0A0DF0.c: scales a table entry, halving it with the low bit kept when negative, and returns it divided by one thousand. */

extern int D_001C73C4;
extern int D_0026AD00[];

float func_09A668(void)
{
    int v;
    unsigned int h;
    float f;

    v = D_0026AD00[D_001C73C4];
    h = (unsigned int)v >> 1;
    if (v >= 0) {
        f = (float)v;
    } else {
        f = (float)(int)((v & 1) | h);
        f = f + f;
    }
    return f / 1000.0f;
}
