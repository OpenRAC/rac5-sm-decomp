/* LEVEL_03:0x0B2080 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0B2070(void);
extern int D_00214834;
extern int D_0021483C;
extern float D_00214840;
extern float D_00214844;
extern unsigned char D_002148D8;

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
    D_00214844 = *MaxRef(&zero, amount);
}
void func_0B2080(int owner, unsigned char flag, float value, float amount)
{
    func_0B2070();
    D_00214834 = flag;
    D_0021483C = owner;
    D_00214840 = value;
    SetAmount(&amount);
    D_002148D8 = 0;
}
