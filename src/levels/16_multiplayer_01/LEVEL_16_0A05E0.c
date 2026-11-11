/* LEVEL_16:0x0A05E0 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_001AA1D4;
extern unsigned char D_001AA1ED;
extern int D_001AA1E0;

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

void func_0A05E0(void)
{
    int *p;
    int v;

    if (D_001AA1D4 != 0) {
        D_001AA1D4--;
    }
    WrapByte(&D_001AA1ED, 24);
    p = &D_001AA1E0;
    if (D_001AA1D4 == 0) {
        v = D_001AA1E0 - 8;
    } else {
        v = D_001AA1E0 + 8;
    }
    *p = v;
    ClampInt(&D_001AA1E0, 255);
}
