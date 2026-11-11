/* LEVEL_03:0x0B2680 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_00214904;
extern int D_00214908;

void func_0B2680(void)
{
    int *p;
    int v;
    int hi;

    if (D_00214904 != 0) {
        D_00214904 = D_00214904 - 1;
    }
    p = &D_00214908;
    if (D_00214904 == 0) {
        v = D_00214908 - 4;
    } else {
        v = D_00214908 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_00214908) {
        D_00214908 = hi;
    }
    if (D_00214908 < 0) {
        D_00214908 = 0;
    }
}
