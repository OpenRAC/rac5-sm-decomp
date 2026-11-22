/* LEVEL_05:0x0A6FE8 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001EB354;
extern unsigned int D_001EB358;
extern unsigned char D_001EB35C;
extern unsigned char D_001EB35D;
extern unsigned char D_001EB164;
extern int func_0ACE30(void);
extern int func_0858E0(int a);
extern void func_0A6F48(void);

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

void func_0A6FE8(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0ACE30();
    pad = func_0858E0(0x40);
    if (pad & 0x100) {
        D_001EB354 = D_001EB354 - 1;
    } else if (pad & 0x200) {
        D_001EB354 = D_001EB354 + 1;
    }
    if (pad & 0x8000) {
        D_001EB358 = D_001EB358 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0A6F48();
        D_001EB35C = 1;
    } else if (pad & 1) {
        D_001EB35D ^= 1;
        D_001EB164 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001EB354 = *Clamp(&D_001EB354, &lo, &hi);
    }
}
