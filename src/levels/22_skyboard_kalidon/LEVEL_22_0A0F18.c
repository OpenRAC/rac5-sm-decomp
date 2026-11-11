/* LEVEL_22:0x0A0F18 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_0015B604;
extern int D_0015B608;

void func_0A0F18(void)
{
    int *p;
    int v;
    int hi;

    if (D_0015B604 != 0) {
        D_0015B604 = D_0015B604 - 1;
    }
    p = &D_0015B608;
    if (D_0015B604 == 0) {
        v = D_0015B608 - 4;
    } else {
        v = D_0015B608 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_0015B608) {
        D_0015B608 = hi;
    }
    if (D_0015B608 < 0) {
        D_0015B608 = 0;
    }
}
