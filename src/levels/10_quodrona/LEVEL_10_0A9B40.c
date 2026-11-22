/* LEVEL_10:0x0A9B40 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_00204FD4;
extern unsigned int D_00204FD8;
extern unsigned char D_00204FDC;
extern unsigned char D_00204FDD;
extern unsigned char D_00204DE4;
extern int func_0AF988(void);
extern int func_0882F0(int a);
extern void func_0A9AA0(void);

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

void func_0A9B40(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0AF988();
    pad = func_0882F0(0x40);
    if (pad & 0x100) {
        D_00204FD4 = D_00204FD4 - 1;
    } else if (pad & 0x200) {
        D_00204FD4 = D_00204FD4 + 1;
    }
    if (pad & 0x8000) {
        D_00204FD8 = D_00204FD8 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0A9AA0();
        D_00204FDC = 1;
    } else if (pad & 1) {
        D_00204FDD ^= 1;
        D_00204DE4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_00204FD4 = *Clamp(&D_00204FD4, &lo, &hi);
    }
}
