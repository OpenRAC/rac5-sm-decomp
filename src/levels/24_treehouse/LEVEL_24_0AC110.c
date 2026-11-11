/* LEVEL_24:0x0AC110 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001CCF04;
extern int D_001CCF08;

void func_0AC110(void)
{
    int *p;
    int v;
    int hi;

    if (D_001CCF04 != 0) {
        D_001CCF04 = D_001CCF04 - 1;
    }
    p = &D_001CCF08;
    if (D_001CCF04 == 0) {
        v = D_001CCF08 - 4;
    } else {
        v = D_001CCF08 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001CCF08) {
        D_001CCF08 = hi;
    }
    if (D_001CCF08 < 0) {
        D_001CCF08 = 0;
    }
}
