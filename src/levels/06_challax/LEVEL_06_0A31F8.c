/* LEVEL_06:0x0A31F8 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001EAED4;
extern unsigned int D_001EAED8;
extern unsigned char D_001EAEDC;
extern unsigned char D_001EAEDD;
extern unsigned char D_001EACE4;
extern int func_0A9040(void);
extern int func_080E00(int a);
extern void func_0A3158(void);

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

void func_0A31F8(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0A9040();
    pad = func_080E00(0x40);
    if (pad & 0x100) {
        D_001EAED4 = D_001EAED4 - 1;
    } else if (pad & 0x200) {
        D_001EAED4 = D_001EAED4 + 1;
    }
    if (pad & 0x8000) {
        D_001EAED8 = D_001EAED8 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0A3158();
        D_001EAEDC = 1;
    } else if (pad & 1) {
        D_001EAEDD ^= 1;
        D_001EACE4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001EAED4 = *Clamp(&D_001EAED4, &lo, &hi);
    }
}
