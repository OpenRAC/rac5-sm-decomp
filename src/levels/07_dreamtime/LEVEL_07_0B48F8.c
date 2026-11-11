/* LEVEL_07:0x0B48F8 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_00210584;
extern int D_00210588;

void func_0B48F8(void)
{
    int *p;
    int v;
    int hi;

    if (D_00210584 != 0) {
        D_00210584 = D_00210584 - 1;
    }
    p = &D_00210588;
    if (D_00210584 == 0) {
        v = D_00210588 - 4;
    } else {
        v = D_00210588 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_00210588) {
        D_00210588 = hi;
    }
    if (D_00210588 < 0) {
        D_00210588 = 0;
    }
}
