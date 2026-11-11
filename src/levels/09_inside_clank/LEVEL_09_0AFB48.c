/* LEVEL_09:0x0AFB48 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001E6084;
extern int D_001E6088;

void func_0AFB48(void)
{
    int *p;
    int v;
    int hi;

    if (D_001E6084 != 0) {
        D_001E6084 = D_001E6084 - 1;
    }
    p = &D_001E6088;
    if (D_001E6084 == 0) {
        v = D_001E6088 - 4;
    } else {
        v = D_001E6088 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001E6088) {
        D_001E6088 = hi;
    }
    if (D_001E6088 < 0) {
        D_001E6088 = 0;
    }
}
