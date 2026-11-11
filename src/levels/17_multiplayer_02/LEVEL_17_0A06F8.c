/* LEVEL_17:0x0A06F8 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_0019D8C4;
extern int D_0019D8C8;

void func_0A06F8(void)
{
    int *p;
    int v;
    int hi;

    if (D_0019D8C4 != 0) {
        D_0019D8C4 = D_0019D8C4 - 1;
    }
    p = &D_0019D8C8;
    if (D_0019D8C4 == 0) {
        v = D_0019D8C8 - 4;
    } else {
        v = D_0019D8C8 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_0019D8C8) {
        D_0019D8C8 = hi;
    }
    if (D_0019D8C8 < 0) {
        D_0019D8C8 = 0;
    }
}
