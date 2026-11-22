/* LEVEL_22:0x097038 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_0015B354;
extern unsigned int D_0015B358;
extern unsigned char D_0015B35C;
extern unsigned char D_0015B35D;
extern unsigned char D_0015B164;
extern int func_09CE80(void);
extern int func_0793A0(int a);
extern void func_096F98(void);

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

void func_097038(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_09CE80();
    pad = func_0793A0(0x40);
    if (pad & 0x100) {
        D_0015B354 = D_0015B354 - 1;
    } else if (pad & 0x200) {
        D_0015B354 = D_0015B354 + 1;
    }
    if (pad & 0x8000) {
        D_0015B358 = D_0015B358 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_096F98();
        D_0015B35C = 1;
    } else if (pad & 1) {
        D_0015B35D ^= 1;
        D_0015B164 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_0015B354 = *Clamp(&D_0015B354, &lo, &hi);
    }
}
