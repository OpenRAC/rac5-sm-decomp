/* LEVEL_04:0x0B6EC8 -- steps a countdown and a byte counter, then clamps a signed level value to 0..255. */

extern int D_00215654;
extern unsigned char D_0021566D;
extern int D_00215660;

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

void func_0B6EC8(void)
{
    int *p;
    int v;

    if (D_00215654 != 0) {
        D_00215654--;
    }
    WrapByte(&D_0021566D, 24);
    p = &D_00215660;
    if (D_00215654 == 0) {
        v = D_00215660 - 8;
    } else {
        v = D_00215660 + 8;
    }
    *p = v;
    ClampInt(&D_00215660, 255);
}
