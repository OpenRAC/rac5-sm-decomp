/* LEVEL_09:0x0A5CD8 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001E5DD4;
extern unsigned int D_001E5DD8;
extern unsigned char D_001E5DDC;
extern unsigned char D_001E5DDD;
extern unsigned char D_001E5BE4;
extern int func_0ABB20(void);
extern int func_084940(int a);
extern void func_0A5C38(void);

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

void func_0A5CD8(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0ABB20();
    pad = func_084940(0x40);
    if (pad & 0x100) {
        D_001E5DD4 = D_001E5DD4 - 1;
    } else if (pad & 0x200) {
        D_001E5DD4 = D_001E5DD4 + 1;
    }
    if (pad & 0x8000) {
        D_001E5DD8 = D_001E5DD8 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0A5C38();
        D_001E5DDC = 1;
    } else if (pad & 1) {
        D_001E5DDD ^= 1;
        D_001E5BE4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001E5DD4 = *Clamp(&D_001E5DD4, &lo, &hi);
    }
}
