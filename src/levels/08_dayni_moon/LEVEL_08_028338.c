/* LEVEL_08:0x028338 -- placement copy of LEVEL_01_027D10.c: clamps the two counters at +0x18 and +0x1C of the global state block to the range 0..255. */
extern char *D_0023CB2C;

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

void func_028338(void)
{
    int lo0;
    int hi0;
    int lo1;
    int hi1;

    lo0 = 0;
    hi0 = 0xFF;
    *(int *)(D_0023CB2C + 0x18) = *Clamp(&*(int *)(D_0023CB2C + 0x18), &lo0, &hi0);
    lo1 = 0;
    hi1 = 0xFF;
    *(int *)(D_0023CB2C + 0x1C) = *Clamp(&*(int *)(D_0023CB2C + 0x1C), &lo1, &hi1);
}
