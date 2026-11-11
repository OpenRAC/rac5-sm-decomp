/* LEVEL_24:0x0AB4F0 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_001CCE14;
extern unsigned char D_001CCE2D;
extern int D_001CCE20;

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

void func_0AB4F0(void)
{
    int *p;
    int v;

    if (D_001CCE14 != 0) {
        D_001CCE14--;
    }
    WrapByte(&D_001CCE2D, 24);
    p = &D_001CCE20;
    if (D_001CCE14 == 0) {
        v = D_001CCE20 - 8;
    } else {
        v = D_001CCE20 + 8;
    }
    *p = v;
    ClampInt(&D_001CCE20, 255);
}
