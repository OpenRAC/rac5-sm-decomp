/* LEVEL_20:0x08B8F8 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_0010C9A4;
extern int D_0010C9A8;

void func_08B8F8(void)
{
    int *p;
    int v;
    int hi;

    if (D_0010C9A4 != 0) {
        D_0010C9A4 = D_0010C9A4 - 1;
    }
    p = &D_0010C9A8;
    if (D_0010C9A4 == 0) {
        v = D_0010C9A8 - 4;
    } else {
        v = D_0010C9A8 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_0010C9A8) {
        D_0010C9A8 = hi;
    }
    if (D_0010C9A8 < 0) {
        D_0010C9A8 = 0;
    }
}
