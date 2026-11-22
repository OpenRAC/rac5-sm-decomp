/* LEVEL_01:0x0A8A28 -- debug menu input: steps the selection, toggles the highlight value and flags, then clamps the selection. */
extern int D_001FBFD4;
extern unsigned int D_001FBFD8;
extern unsigned char D_001FBFDC;
extern unsigned char D_001FBFDD;
extern unsigned char D_001FBDE4;
extern int func_0AE870(void);
extern int func_087F88(int a);
extern void func_0A8988(void);

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

void func_0A8A28(void)
{
    int pad;
    int count;
    int lo;
    int hi;

    count = func_0AE870();
    pad = func_087F88(0x40);
    if (pad & 0x100) {
        D_001FBFD4 = D_001FBFD4 - 1;
    } else if (pad & 0x200) {
        D_001FBFD4 = D_001FBFD4 + 1;
    }
    if (pad & 0x8000) {
        D_001FBFD8 = D_001FBFD8 == 0xE0FFFFFF ? 0 : 0xE0FFFFFF;
    } else if (pad & 0x2000) {
        func_0A8988();
        D_001FBFDC = 1;
    } else if (pad & 1) {
        D_001FBFDD ^= 1;
        D_001FBDE4 ^= 1;
    }
    if (count > 0) {
        lo = 0;
        hi = count - 1;
        D_001FBFD4 = *Clamp(&D_001FBFD4, &lo, &hi);
    }
}
