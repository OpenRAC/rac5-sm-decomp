/* LEVEL_09:0x0AEF28 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_001E5F94;
extern unsigned char D_001E5FAD;
extern int D_001E5FA0;

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

void func_0AEF28(void)
{
    int *p;
    int v;

    if (D_001E5F94 != 0) {
        D_001E5F94--;
    }
    WrapByte(&D_001E5FAD, 24);
    p = &D_001E5FA0;
    if (D_001E5F94 == 0) {
        v = D_001E5FA0 - 8;
    } else {
        v = D_001E5FA0 + 8;
    }
    *p = v;
    ClampInt(&D_001E5FA0, 255);
}
