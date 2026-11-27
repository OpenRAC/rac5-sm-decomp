/* LEVEL_09:0x0AF548 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0AF538(void);
extern int D_001E5FB4;
extern int D_001E5FBC;
extern float D_001E5FC0;
extern float D_001E5FC4;
extern unsigned char D_001E6058;

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
    D_001E5FC4 = *MaxRef(&zero, amount);
}
void func_0AF548(int owner, unsigned char flag, float value, float amount)
{
    func_0AF538();
    D_001E5FB4 = flag;
    D_001E5FBC = owner;
    D_001E5FC0 = value;
    SetAmount(&amount);
    D_001E6058 = 0;
}
