/* LEVEL_04:0x0B7E08 -- decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_00215744;
extern int D_00215748;

void func_0B7E08(void)
{
    int *p;
    int v;
    int hi;

    if (D_00215744 != 0) {
        D_00215744 = D_00215744 - 1;
    }
    p = &D_00215748;
    if (D_00215744 == 0) {
        v = D_00215748 - 4;
    } else {
        v = D_00215748 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_00215748) {
        D_00215748 = hi;
    }
    if (D_00215748 < 0) {
        D_00215748 = 0;
    }
}
