/* LEVEL_02:0x0B91A8 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_00211244;
extern int D_00211248;

void func_0B91A8(void)
{
    int *p;
    int v;
    int hi;

    if (D_00211244 != 0) {
        D_00211244 = D_00211244 - 1;
    }
    p = &D_00211248;
    if (D_00211244 == 0) {
        v = D_00211248 - 4;
    } else {
        v = D_00211248 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_00211248) {
        D_00211248 = hi;
    }
    if (D_00211248 < 0) {
        D_00211248 = 0;
    }
}
