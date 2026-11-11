/* LEVEL_07:0x0B3C78 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_00210494;
extern unsigned char D_002104AD;
extern int D_002104A0;

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

void func_0B3C78(void)
{
    int *p;
    int v;

    if (D_00210494 != 0) {
        D_00210494--;
    }
    WrapByte(&D_002104AD, 24);
    p = &D_002104A0;
    if (D_00210494 == 0) {
        v = D_002104A0 - 8;
    } else {
        v = D_002104A0 + 8;
    }
    *p = v;
    ClampInt(&D_002104A0, 255);
}
