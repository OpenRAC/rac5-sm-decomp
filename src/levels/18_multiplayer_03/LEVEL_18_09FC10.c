/* LEVEL_18:0x09FC10 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_09FC00(void);
extern int D_001AB674;
extern int D_001AB67C;
extern float D_001AB680;
extern float D_001AB684;
extern unsigned char D_001AB718;

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
    D_001AB684 = *MaxRef(&zero, amount);
}
void func_09FC10(int owner, unsigned char flag, float value, float amount)
{
    func_09FC00();
    D_001AB674 = flag;
    D_001AB67C = owner;
    D_001AB680 = value;
    SetAmount(&amount);
    D_001AB718 = 0;
}
