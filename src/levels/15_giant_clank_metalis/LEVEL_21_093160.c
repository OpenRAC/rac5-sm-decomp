/* LEVEL_21:0x093160 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_00150F04;
extern int D_00150F08;

void func_093160(void)
{
    int *p;
    int v;
    int hi;

    if (D_00150F04 != 0) {
        D_00150F04 = D_00150F04 - 1;
    }
    p = &D_00150F08;
    if (D_00150F04 == 0) {
        v = D_00150F08 - 4;
    } else {
        v = D_00150F08 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_00150F08) {
        D_00150F08 = hi;
    }
    if (D_00150F08 < 0) {
        D_00150F08 = 0;
    }
}
