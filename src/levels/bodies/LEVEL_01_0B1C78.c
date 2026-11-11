/* LEVEL_01:0x0B1C78 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_001FC194;
extern unsigned char D_001FC1AD;
extern int D_001FC1A0;

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

void func_0B1C78(void)
{
    int *p;
    int v;

    if (D_001FC194 != 0) {
        D_001FC194--;
    }
    WrapByte(&D_001FC1AD, 24);
    p = &D_001FC1A0;
    if (D_001FC194 == 0) {
        v = D_001FC1A0 - 8;
    } else {
        v = D_001FC1A0 + 8;
    }
    *p = v;
    ClampInt(&D_001FC1A0, 255);
}
