/* LEVEL_21:0x0892F0 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_00150C54;
extern unsigned int D_00150C58;
extern unsigned char D_00150C5C;
extern unsigned char D_00150C5D;
extern unsigned char D_00150A64;
extern int func_08F138(void);
extern int func_06C668(int a);
extern void func_089250(void);

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

void func_0892F0(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_08F138();
    pad = func_06C668(0x40);
    if (pad & 0x100) {
        D_00150C54 = D_00150C54 - 1;
    } else if (pad & 0x200) {
        D_00150C54 = D_00150C54 + 1;
    }
    if (pad & 0x8000) {
        D_00150C58 = D_00150C58 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_089250();
        D_00150C5C = 1;
    } else if (pad & 1) {
        D_00150C5D ^= 1;
        D_00150A64 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_00150C54 = *Clamp(&D_00150C54, &lo, &hi);
    }
}
