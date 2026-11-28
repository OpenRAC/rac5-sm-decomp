/* LEVEL_05:0x0B0858 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0B0848(void);
extern int D_001EB534;
extern int D_001EB53C;
extern float D_001EB540;
extern float D_001EB544;
extern unsigned char D_001EB5D8;

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
    D_001EB544 = *MaxRef(&zero, amount);
}
void func_0B0858(int owner, unsigned char flag, float value, float amount)
{
    func_0B0848();
    D_001EB534 = flag;
    D_001EB53C = owner;
    D_001EB540 = value;
    SetAmount(&amount);
    D_001EB5D8 = 0;
}
