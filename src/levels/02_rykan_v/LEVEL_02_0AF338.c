/* LEVEL_02:0x0AF338 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_00210F94;
extern unsigned int D_00210F98;
extern unsigned char D_00210F9C;
extern unsigned char D_00210F9D;
extern unsigned char D_00210DA4;
extern int func_0B5180(void);
extern int func_08E8B8(int a);
extern void func_0AF298(void);

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

void func_0AF338(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0B5180();
    pad = func_08E8B8(0x40);
    if (pad & 0x100) {
        D_00210F94 = D_00210F94 - 1;
    } else if (pad & 0x200) {
        D_00210F94 = D_00210F94 + 1;
    }
    if (pad & 0x8000) {
        D_00210F98 = D_00210F98 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0AF298();
        D_00210F9C = 1;
    } else if (pad & 1) {
        D_00210F9D ^= 1;
        D_00210DA4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_00210F94 = *Clamp(&D_00210F94, &lo, &hi);
    }
}
