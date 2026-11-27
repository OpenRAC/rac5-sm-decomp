/* LEVEL_20:0x08B2F8 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_08B2E8(void);
extern int D_0010C8D4;
extern int D_0010C8DC;
extern float D_0010C8E0;
extern float D_0010C8E4;
extern unsigned char D_0010C978;

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
    D_0010C8E4 = *MaxRef(&zero, amount);
}
void func_08B2F8(int owner, unsigned char flag, float value, float amount)
{
    func_08B2E8();
    D_0010C8D4 = flag;
    D_0010C8DC = owner;
    D_0010C8E0 = value;
    SetAmount(&amount);
    D_0010C978 = 0;
}
