/* LEVEL_10:0x0B3A70 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_00205284;
extern int D_00205288;

void func_0B3A70(void)
{
    int *p;
    int v;
    int hi;

    if (D_00205284 != 0) {
        D_00205284 = D_00205284 - 1;
    }
    p = &D_00205288;
    if (D_00205284 == 0) {
        v = D_00205288 - 4;
    } else {
        v = D_00205288 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_00205288) {
        D_00205288 = hi;
    }
    if (D_00205288 < 0) {
        D_00205288 = 0;
    }
}
