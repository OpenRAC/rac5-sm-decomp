/* LEVEL_22:0x0A02F8 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_0015B514;
extern unsigned char D_0015B52D;
extern int D_0015B520;

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

void func_0A02F8(void)
{
    int *p;
    int v;

    if (D_0015B514 != 0) {
        D_0015B514--;
    }
    WrapByte(&D_0015B52D, 24);
    p = &D_0015B520;
    if (D_0015B514 == 0) {
        v = D_0015B520 - 8;
    } else {
        v = D_0015B520 + 8;
    }
    *p = v;
    ClampInt(&D_0015B520, 255);
}
