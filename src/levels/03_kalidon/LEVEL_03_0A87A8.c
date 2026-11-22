/* LEVEL_03:0x0A87A8 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_00214654;
extern unsigned int D_00214658;
extern unsigned char D_0021465C;
extern unsigned char D_0021465D;
extern unsigned char D_00214464;
extern int func_0AE5F0(void);
extern int func_087DE0(int a);
extern void func_0A8708(void);

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

void func_0A87A8(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0AE5F0();
    pad = func_087DE0(0x40);
    if (pad & 0x100) {
        D_00214654 = D_00214654 - 1;
    } else if (pad & 0x200) {
        D_00214654 = D_00214654 + 1;
    }
    if (pad & 0x8000) {
        D_00214658 = D_00214658 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0A8708();
        D_0021465C = 1;
    } else if (pad & 1) {
        D_0021465D ^= 1;
        D_00214464 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_00214654 = *Clamp(&D_00214654, &lo, &hi);
    }
}
