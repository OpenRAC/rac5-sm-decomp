/* LEVEL_18:0x0A0210 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001AB744;
extern int D_001AB748;

void func_0A0210(void)
{
    int *p;
    int v;
    int hi;

    if (D_001AB744 != 0) {
        D_001AB744 = D_001AB744 - 1;
    }
    p = &D_001AB748;
    if (D_001AB744 == 0) {
        v = D_001AB748 - 4;
    } else {
        v = D_001AB748 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001AB748) {
        D_001AB748 = hi;
    }
    if (D_001AB748 < 0) {
        D_001AB748 = 0;
    }
}
