/* LEVEL_18:0x0960F8 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001AB414;
extern unsigned int D_001AB418;
extern unsigned char D_001AB41C;
extern unsigned char D_001AB41D;
extern unsigned char D_001AB224;
extern int func_09BF70(void);
extern int func_078E48(int a);
extern void func_096058(void);

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

void func_0960F8(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_09BF70();
    pad = func_078E48(0x40);
    if (pad & 0x100) {
        D_001AB414 = D_001AB414 - 1;
    } else if (pad & 0x200) {
        D_001AB414 = D_001AB414 + 1;
    }
    if (pad & 0x8000) {
        D_001AB418 = D_001AB418 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_096058();
        D_001AB41C = 1;
    } else if (pad & 1) {
        D_001AB41D ^= 1;
        D_001AB224 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001AB414 = *Clamp(&D_001AB414, &lo, &hi);
    }
}
