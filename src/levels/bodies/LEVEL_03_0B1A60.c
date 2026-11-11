/* LEVEL_03:0x0B1A60 -- placement copy of LEVEL_04_0B6EC8.c: steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_00214814;
extern unsigned char D_0021482D;
extern int D_00214820;

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

void func_0B1A60(void)
{
    int *p;
    int v;

    if (D_00214814 != 0) {
        D_00214814--;
    }
    WrapByte(&D_0021482D, 24);
    p = &D_00214820;
    if (D_00214814 == 0) {
        v = D_00214820 - 8;
    } else {
        v = D_00214820 + 8;
    }
    *p = v;
    ClampInt(&D_00214820, 255);
}
