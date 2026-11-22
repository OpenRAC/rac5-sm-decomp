/* LEVEL_24:0x0A22A0 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001CCC54;
extern unsigned int D_001CCC58;
extern unsigned char D_001CCC5C;
extern unsigned char D_001CCC5D;
extern unsigned char D_001CCA64;
extern int func_0A80E8(void);
extern int func_081228(int a);
extern void func_0A2200(void);

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

void func_0A22A0(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0A80E8();
    pad = func_081228(0x40);
    if (pad & 0x100) {
        D_001CCC54 = D_001CCC54 - 1;
    } else if (pad & 0x200) {
        D_001CCC54 = D_001CCC54 + 1;
    }
    if (pad & 0x8000) {
        D_001CCC58 = D_001CCC58 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0A2200();
        D_001CCC5C = 1;
    } else if (pad & 1) {
        D_001CCC5D ^= 1;
        D_001CCA64 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001CCC54 = *Clamp(&D_001CCC54, &lo, &hi);
    }
}
