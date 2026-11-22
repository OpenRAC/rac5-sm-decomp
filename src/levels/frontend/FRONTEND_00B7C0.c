/* FRONTEND:0x00B7C0 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_0002FFE4;
extern unsigned int D_0002FFE8;
extern unsigned char D_0002FFEC;
extern unsigned char D_0002FFED;
extern unsigned char D_0002FDE4;
extern int func_010180(void);
extern int func_005650(int a);
extern void func_00B720(void);

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

void func_00B7C0(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_010180();
    pad = func_005650(0x40);
    if (pad & 0x100) {
        D_0002FFE4 = D_0002FFE4 - 1;
    } else if (pad & 0x200) {
        D_0002FFE4 = D_0002FFE4 + 1;
    }
    if (pad & 0x8000) {
        D_0002FFE8 = D_0002FFE8 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_00B720();
        D_0002FFEC = 1;
    } else if (pad & 1) {
        D_0002FFED ^= 1;
        D_0002FDE4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_0002FFE4 = *Clamp(&D_0002FFE4, &lo, &hi);
    }
}
