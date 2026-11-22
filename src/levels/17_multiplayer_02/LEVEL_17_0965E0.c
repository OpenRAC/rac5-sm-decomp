/* LEVEL_17:0x0965E0 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_0019D594;
extern unsigned int D_0019D598;
extern unsigned char D_0019D59C;
extern unsigned char D_0019D59D;
extern unsigned char D_0019D3A4;
extern int func_09C458(void);
extern int func_079F40(int a);
extern void func_096540(void);

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

void func_0965E0(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_09C458();
    pad = func_079F40(0x40);
    if (pad & 0x100) {
        D_0019D594 = D_0019D594 - 1;
    } else if (pad & 0x200) {
        D_0019D594 = D_0019D594 + 1;
    }
    if (pad & 0x8000) {
        D_0019D598 = D_0019D598 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_096540();
        D_0019D59C = 1;
    } else if (pad & 1) {
        D_0019D59D ^= 1;
        D_0019D3A4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_0019D594 = *Clamp(&D_0019D594, &lo, &hi);
    }
}
