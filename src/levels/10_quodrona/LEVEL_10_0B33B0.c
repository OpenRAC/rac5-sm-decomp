/* LEVEL_10:0x0B33B0 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0B33A0(void);
extern int D_002051B4;
extern int D_002051BC;
extern float D_002051C0;
extern float D_002051C4;
extern unsigned char D_00205258;

static __inline__ float *MaxRef(float *a, float *b)
{
    if (*a < *b) {
        return b;
    }
    return a;
}

static __inline__ void SetAmount(float *amount)
{
    float zero = 0.0f;
    D_002051C4 = *MaxRef(&zero, amount);
}
void func_0B33B0(int owner, unsigned char flag, float value, float amount)
{
    func_0B33A0();
    D_002051B4 = flag;
    D_002051BC = owner;
    D_002051C0 = value;
    SetAmount(&amount);
    D_00205258 = 0;
}
