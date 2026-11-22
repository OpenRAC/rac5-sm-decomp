/* LEVEL_08:0x0B3360 -- placement copy of LEVEL_01_0A8A28.c: debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_00244E94;
extern unsigned int D_00244E98;
extern unsigned char D_00244E9C;
extern unsigned char D_00244E9D;
extern unsigned char D_00244CA4;
extern int func_0B91A8(void);
extern int func_08FFD8(int a);
extern void func_0B32C0(void);

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

void func_0B3360(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0B91A8();
    pad = func_08FFD8(0x40);
    if (pad & 0x100) {
        D_00244E94 = D_00244E94 - 1;
    } else if (pad & 0x200) {
        D_00244E94 = D_00244E94 + 1;
    }
    if (pad & 0x8000) {
        D_00244E98 = D_00244E98 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0B32C0();
        D_00244E9C = 1;
    } else if (pad & 1) {
        D_00244E9D ^= 1;
        D_00244CA4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_00244E94 = *Clamp(&D_00244E94, &lo, &hi);
    }
}
