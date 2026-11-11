/* LEVEL_19:0x0A0A90 -- placement copy of LEVEL_04_0B7E08.c: decrements a counter when nonzero, steps a second counter up or down by four, and clamps it to the range zero to 255. */
extern int D_001AB444;
extern int D_001AB448;

void func_0A0A90(void)
{
    int *p;
    int v;
    int hi;

    if (D_001AB444 != 0) {
        D_001AB444 = D_001AB444 - 1;
    }
    p = &D_001AB448;
    if (D_001AB444 == 0) {
        v = D_001AB448 - 4;
    } else {
        v = D_001AB448 + 4;
    }
    *p = v;
    hi = 255;
    if (hi < D_001AB448) {
        D_001AB448 = hi;
    }
    if (D_001AB448 < 0) {
        D_001AB448 = 0;
    }
}
