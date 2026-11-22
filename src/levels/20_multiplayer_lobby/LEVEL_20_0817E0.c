/* LEVEL_20:0x0817E0 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_0010C674;
extern unsigned int D_0010C678;
extern unsigned char D_0010C67C;
extern unsigned char D_0010C67D;
extern unsigned char D_0010C484;
extern int func_087658(void);
extern int func_067138(int a);
extern void func_081740(void);

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

void func_0817E0(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_087658();
    pad = func_067138(0x40);
    if (pad & 0x100) {
        D_0010C674 = D_0010C674 - 1;
    } else if (pad & 0x200) {
        D_0010C674 = D_0010C674 + 1;
    }
    if (pad & 0x8000) {
        D_0010C678 = D_0010C678 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_081740();
        D_0010C67C = 1;
    } else if (pad & 1) {
        D_0010C67D ^= 1;
        D_0010C484 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_0010C674 = *Clamp(&D_0010C674, &lo, &hi);
    }
}
