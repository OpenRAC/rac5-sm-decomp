/* LEVEL_05:0x0B0238 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_001EB514;
extern unsigned char D_001EB52D;
extern int D_001EB520;

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

void func_0B0238(void)
{
    int *p;
    int v;

    if (D_001EB514 != 0) {
        D_001EB514--;
    }
    WrapByte(&D_001EB52D, 24);
    p = &D_001EB520;
    if (D_001EB514 == 0) {
        v = D_001EB520 - 8;
    } else {
        v = D_001EB520 + 8;
    }
    *p = v;
    ClampInt(&D_001EB520, 255);
}
