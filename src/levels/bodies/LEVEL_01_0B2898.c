/* LEVEL_01:0x0B2898 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001FC284;
extern int D_001FC288;

void func_0B2898(void)
{
    int *p;
    int v;
    int hi;

    if (D_001FC284 != 0) {
        D_001FC284 = D_001FC284 - 1;
    }
    p = &D_001FC288;
    if (D_001FC284 == 0) {
        v = D_001FC288 - 4;
    } else {
        v = D_001FC288 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001FC288) {
        D_001FC288 = hi;
    }
    if (D_001FC288 < 0) {
        D_001FC288 = 0;
    }
}
