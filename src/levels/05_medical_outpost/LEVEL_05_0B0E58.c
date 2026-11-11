/* LEVEL_05:0x0B0E58 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001EB604;
extern int D_001EB608;

void func_0B0E58(void)
{
    int *p;
    int v;
    int hi;

    if (D_001EB604 != 0) {
        D_001EB604 = D_001EB604 - 1;
    }
    p = &D_001EB608;
    if (D_001EB604 == 0) {
        v = D_001EB608 - 4;
    } else {
        v = D_001EB608 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001EB608) {
        D_001EB608 = hi;
    }
    if (D_001EB608 < 0) {
        D_001EB608 = 0;
    }
}
