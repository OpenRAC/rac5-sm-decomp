/* LEVEL_18:0x09F5F0 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_001AB654;
extern unsigned char D_001AB66D;
extern int D_001AB660;

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

void func_09F5F0(void)
{
    int *p;
    int v;

    if (D_001AB654 != 0) {
        D_001AB654--;
    }
    WrapByte(&D_001AB66D, 24);
    p = &D_001AB660;
    if (D_001AB654 == 0) {
        v = D_001AB660 - 8;
    } else {
        v = D_001AB660 + 8;
    }
    *p = v;
    ClampInt(&D_001AB660, 255);
}
