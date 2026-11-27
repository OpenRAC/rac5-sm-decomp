/* LEVEL_23:0x0A9078 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0A9068(void);
extern int D_001CF5B4;
extern int D_001CF5BC;
extern float D_001CF5C0;
extern float D_001CF5C4;
extern unsigned char D_001CF658;

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
    D_001CF5C4 = *MaxRef(&zero, amount);
}
void func_0A9078(int owner, unsigned char flag, float value, float amount)
{
    func_0A9068();
    D_001CF5B4 = flag;
    D_001CF5BC = owner;
    D_001CF5C0 = value;
    SetAmount(&amount);
    D_001CF658 = 0;
}
