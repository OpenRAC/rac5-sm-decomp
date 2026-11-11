/* LEVEL_08:0x0BD4F0 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_00245144;
extern int D_00245148;

void func_0BD4F0(void)
{
    int *p;
    int v;
    int hi;

    if (D_00245144 != 0) {
        D_00245144 = D_00245144 - 1;
    }
    p = &D_00245148;
    if (D_00245144 == 0) {
        v = D_00245148 - 4;
    } else {
        v = D_00245148 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_00245148) {
        D_00245148 = hi;
    }
    if (D_00245148 < 0) {
        D_00245148 = 0;
    }
}
