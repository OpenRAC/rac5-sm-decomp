/* LEVEL_23:0x09F798 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001CF3D4;
extern unsigned int D_001CF3D8;
extern unsigned char D_001CF3DC;
extern unsigned char D_001CF3DD;
extern unsigned char D_001CF1E4;
extern int func_0A55E0(void);
extern int func_07DE48(int a);
extern void func_09F6F8(void);

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

void func_09F798(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0A55E0();
    pad = func_07DE48(0x40);
    if (pad & 0x100) {
        D_001CF3D4 = D_001CF3D4 - 1;
    } else if (pad & 0x200) {
        D_001CF3D4 = D_001CF3D4 + 1;
    }
    if (pad & 0x8000) {
        D_001CF3D8 = D_001CF3D8 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_09F6F8();
        D_001CF3DC = 1;
    } else if (pad & 1) {
        D_001CF3DD ^= 1;
        D_001CF1E4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001CF3D4 = *Clamp(&D_001CF3D4, &lo, &hi);
    }
}
