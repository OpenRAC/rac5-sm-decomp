/* LEVEL_16:0x0A0C00 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0A0BF0(void);
extern int D_001AA1F4;
extern int D_001AA1FC;
extern float D_001AA200;
extern float D_001AA204;
extern unsigned char D_001AA298;

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
    D_001AA204 = *MaxRef(&zero, amount);
}
void func_0A0C00(int owner, unsigned char flag, float value, float amount)
{
    func_0A0BF0();
    D_001AA1F4 = flag;
    D_001AA1FC = owner;
    D_001AA200 = value;
    SetAmount(&amount);
    D_001AA298 = 0;
}
