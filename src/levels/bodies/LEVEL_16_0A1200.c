/* LEVEL_16:0x0A1200 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001AA2C4;
extern int D_001AA2C8;

void func_0A1200(void)
{
    int *p;
    int v;
    int hi;

    if (D_001AA2C4 != 0) {
        D_001AA2C4 = D_001AA2C4 - 1;
    }
    p = &D_001AA2C8;
    if (D_001AA2C4 == 0) {
        v = D_001AA2C8 - 4;
    } else {
        v = D_001AA2C8 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001AA2C8) {
        D_001AA2C8 = hi;
    }
    if (D_001AA2C8 < 0) {
        D_001AA2C8 = 0;
    }
}
