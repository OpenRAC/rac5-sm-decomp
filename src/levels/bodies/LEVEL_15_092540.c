/* LEVEL_15:0x092540 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_00150E14;
extern unsigned char D_00150E2D;
extern int D_00150E20;

static inline void WrapByte(unsigned char *p, unsigned int limit)
{
    *p = *p + 1;
    if (*p > limit) {
        *p = 0;
    }
}

static inline void ClampInt(int *p, int max)
{
    if (*p > max) {
        *p = max;
    }
    if (*p < 0) {
        *p = 0;
    }
}

void func_092540(void)
{
    int *p;
    int v;

    if (D_00150E14 != 0) {
        D_00150E14--;
    }
    WrapByte(&D_00150E2D, 24);
    p = &D_00150E20;
    if (D_00150E14 == 0) {
        v = D_00150E20 - 8;
    } else {
        v = D_00150E20 + 8;
    }
    *p = v;
    ClampInt(&D_00150E20, 255);
}
