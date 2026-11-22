/* LEVEL_16:0x0970E8 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001A9F94;
extern unsigned int D_001A9F98;
extern unsigned char D_001A9F9C;
extern unsigned char D_001A9F9D;
extern unsigned char D_001A9DA4;
extern int func_09CF60(void);
extern int func_0794C8(int a);
extern void func_097048(void);

static __inline__ int *Clamp(int *v, int *lo, int *hi)
{
    if (*lo <= *v) {
        if (*hi < *v) {
            return hi;
        }
        return v;
    }
    return lo;
}

void func_0970E8(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_09CF60();
    pad = func_0794C8(0x40);
    if (pad & 0x100) {
        D_001A9F94 = D_001A9F94 - 1;
    } else if (pad & 0x200) {
        D_001A9F94 = D_001A9F94 + 1;
    }
    if (pad & 0x8000) {
        D_001A9F98 = D_001A9F98 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_097048();
        D_001A9F9C = 1;
    } else if (pad & 1) {
        D_001A9F9D ^= 1;
        D_001A9DA4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001A9F94 = *Clamp(&D_001A9F94, &lo, &hi);
    }
}
