/* LEVEL_19:0x096978 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001AB114;
extern unsigned int D_001AB118;
extern unsigned char D_001AB11C;
extern unsigned char D_001AB11D;
extern unsigned char D_001AAF24;
extern int func_09C7F0(void);
extern int func_0799B0(int a);
extern void func_0968D8(void);

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

void func_096978(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_09C7F0();
    pad = func_0799B0(0x40);
    if (pad & 0x100) {
        D_001AB114 = D_001AB114 - 1;
    } else if (pad & 0x200) {
        D_001AB114 = D_001AB114 + 1;
    }
    if (pad & 0x8000) {
        D_001AB118 = D_001AB118 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0968D8();
        D_001AB11C = 1;
    } else if (pad & 1) {
        D_001AB11D ^= 1;
        D_001AAF24 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001AB114 = *Clamp(&D_001AB114, &lo, &hi);
    }
}
