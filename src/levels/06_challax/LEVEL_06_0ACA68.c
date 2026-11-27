/* LEVEL_06:0x0ACA68 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0ACA58(void);
extern int D_001EB0B4;
extern int D_001EB0BC;
extern float D_001EB0C0;
extern float D_001EB0C4;
extern unsigned char D_001EB158;

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
    D_001EB0C4 = *MaxRef(&zero, amount);
}
void func_0ACA68(int owner, unsigned char flag, float value, float amount)
{
    func_0ACA58();
    D_001EB0B4 = flag;
    D_001EB0BC = owner;
    D_001EB0C0 = value;
    SetAmount(&amount);
    D_001EB158 = 0;
}
