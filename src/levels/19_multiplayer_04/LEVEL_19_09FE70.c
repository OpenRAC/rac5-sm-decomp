/* LEVEL_19:0x09FE70 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_001AB354;
extern unsigned char D_001AB36D;
extern int D_001AB360;

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

void func_09FE70(void)
{
    int *p;
    int v;

    if (D_001AB354 != 0) {
        D_001AB354--;
    }
    WrapByte(&D_001AB36D, 24);
    p = &D_001AB360;
    if (D_001AB354 == 0) {
        v = D_001AB360 - 8;
    } else {
        v = D_001AB360 + 8;
    }
    *p = v;
    ClampInt(&D_001AB360, 255);
}
