/* LEVEL_21:0x092B60 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_092B50(void);
extern int D_00150E34;
extern int D_00150E3C;
extern float D_00150E40;
extern float D_00150E44;
extern unsigned char D_00150ED8;

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
    D_00150E44 = *MaxRef(&zero, amount);
}
void func_092B60(int owner, unsigned char flag, float value, float amount)
{
    func_092B50();
    D_00150E34 = flag;
    D_00150E3C = owner;
    D_00150E40 = value;
    SetAmount(&amount);
    D_00150ED8 = 0;
}
