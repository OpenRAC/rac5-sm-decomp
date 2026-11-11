/* LEVEL_06:0x0AD0D8 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001EB184;
extern int D_001EB188;

void func_0AD0D8(void)
{
    int *p;
    int v;
    int hi;

    if (D_001EB184 != 0) {
        D_001EB184 = D_001EB184 - 1;
    }
    p = &D_001EB188;
    if (D_001EB184 == 0) {
        v = D_001EB188 - 4;
    } else {
        v = D_001EB188 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001EB188) {
        D_001EB188 = hi;
    }
    if (D_001EB188 < 0) {
        D_001EB188 = 0;
    }
}
