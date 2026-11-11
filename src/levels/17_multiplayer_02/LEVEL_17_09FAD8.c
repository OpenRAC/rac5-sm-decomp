/* LEVEL_17:0x09FAD8 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_0019D7D4;
extern unsigned char D_0019D7ED;
extern int D_0019D7E0;

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

void func_09FAD8(void)
{
    int *p;
    int v;

    if (D_0019D7D4 != 0) {
        D_0019D7D4--;
    }
    WrapByte(&D_0019D7ED, 24);
    p = &D_0019D7E0;
    if (D_0019D7D4 == 0) {
        v = D_0019D7E0 - 8;
    } else {
        v = D_0019D7E0 + 8;
    }
    *p = v;
    ClampInt(&D_0019D7E0, 255);
}
