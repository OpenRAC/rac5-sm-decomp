/* LEVEL_04:0x0ADC78 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_00215494;
extern unsigned int D_00215498;
extern unsigned char D_0021549C;
extern unsigned char D_0021549D;
extern unsigned char D_002152A4;
extern int func_0B3AC0(void);
extern int func_08B220(int a);
extern void func_0ADBD8(void);

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

void func_0ADC78(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0B3AC0();
    pad = func_08B220(0x40);
    if (pad & 0x100) {
        D_00215494 = D_00215494 - 1;
    } else if (pad & 0x200) {
        D_00215494 = D_00215494 + 1;
    }
    if (pad & 0x8000) {
        D_00215498 = D_00215498 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0ADBD8();
        D_0021549C = 1;
    } else if (pad & 1) {
        D_0021549D ^= 1;
        D_002152A4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_00215494 = *Clamp(&D_00215494, &lo, &hi);
    }
}
