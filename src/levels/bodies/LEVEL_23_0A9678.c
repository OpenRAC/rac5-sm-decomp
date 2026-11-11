/* LEVEL_23:0x0A9678 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001CF684;
extern int D_001CF688;

void func_0A9678(void)
{
    int *p;
    int v;
    int hi;

    if (D_001CF684 != 0) {
        D_001CF684 = D_001CF684 - 1;
    }
    p = &D_001CF688;
    if (D_001CF684 == 0) {
        v = D_001CF688 - 4;
    } else {
        v = D_001CF688 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001CF688) {
        D_001CF688 = hi;
    }
    if (D_001CF688 < 0) {
        D_001CF688 = 0;
    }
}
