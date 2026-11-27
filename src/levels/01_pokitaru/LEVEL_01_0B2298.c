/* LEVEL_01:0x0B2298 -- stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0B2288(void);
extern int D_001FC1B4;
extern int D_001FC1BC;
extern float D_001FC1C0;
extern float D_001FC1C4;
extern unsigned char D_001FC258;

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
    D_001FC1C4 = *MaxRef(&zero, amount);
}
void func_0B2298(int owner, unsigned char flag, float value, float amount)
{
    func_0B2288();
    D_001FC1B4 = flag;
    D_001FC1BC = owner;
    D_001FC1C0 = value;
    SetAmount(&amount);
    D_001FC258 = 0;
}
