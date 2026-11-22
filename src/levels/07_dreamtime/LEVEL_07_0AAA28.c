/* LEVEL_07:0x0AAA28 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_002102D4;
extern unsigned int D_002102D8;
extern unsigned char D_002102DC;
extern unsigned char D_002102DD;
extern unsigned char D_002100E4;
extern int func_0B0870(void);
extern int func_08A058(int a);
extern void func_0AA988(void);

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

void func_0AAA28(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0B0870();
    pad = func_08A058(0x40);
    if (pad & 0x100) {
        D_002102D4 = D_002102D4 - 1;
    } else if (pad & 0x200) {
        D_002102D4 = D_002102D4 + 1;
    }
    if (pad & 0x8000) {
        D_002102D8 = D_002102D8 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0AA988();
        D_002102DC = 1;
    } else if (pad & 1) {
        D_002102DD ^= 1;
        D_002100E4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_002102D4 = *Clamp(&D_002102D4, &lo, &hi);
    }
}
