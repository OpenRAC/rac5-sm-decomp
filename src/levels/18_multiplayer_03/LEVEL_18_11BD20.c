/* LEVEL_18:0x11BD20 -- records the smaller of two values and the first value in the per-slot tables together with the slot's flag byte and word. */
extern unsigned int func_11BD10(void);
extern float D_002E17B0[];
extern float D_002E17B8[];
extern unsigned char D_001B99C8[];
extern int D_001B99D0;

static __inline__ float *MinPtr(float *y, float *x)
{
    if (*y < *x)
        return y;
    return x;
}

void func_11BD20(int slot, int flag, unsigned char word, float a, float b)
{
    float *p;

    func_11BD10();
    p = MinPtr(&b, &a);
    D_002E17B0[slot] = *p;
    D_002E17B8[slot] = a;
    D_001B99D0 = word;
    D_001B99C8[slot] = flag;
}
