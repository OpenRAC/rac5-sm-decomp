/* LEVEL_22:0x0A0918 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0A0908(void);
extern int D_0015B534;
extern int D_0015B53C;
extern float D_0015B540;
extern float D_0015B544;
extern unsigned char D_0015B5D8;

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
    D_0015B544 = *MaxRef(&zero, amount);
}
void func_0A0918(int owner, unsigned char flag, float value, float amount)
{
    func_0A0908();
    D_0015B534 = flag;
    D_0015B53C = owner;
    D_0015B540 = value;
    SetAmount(&amount);
    D_0015B5D8 = 0;
}
