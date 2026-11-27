/* LEVEL_07:0x0B4298 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0B4288(void);
extern int D_002104B4;
extern int D_002104BC;
extern float D_002104C0;
extern float D_002104C4;
extern unsigned char D_00210558;

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
    D_002104C4 = *MaxRef(&zero, amount);
}
void func_0B4298(int owner, unsigned char flag, float value, float amount)
{
    func_0B4288();
    D_002104B4 = flag;
    D_002104BC = owner;
    D_002104C0 = value;
    SetAmount(&amount);
    D_00210558 = 0;
}
