/* LEVEL_17:0x0A00F8 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0A00E8(void);
extern int D_0019D7F4;
extern int D_0019D7FC;
extern float D_0019D800;
extern float D_0019D804;
extern unsigned char D_0019D898;

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
    D_0019D804 = *MaxRef(&zero, amount);
}
void func_0A00F8(int owner, unsigned char flag, float value, float amount)
{
    func_0A00E8();
    D_0019D7F4 = flag;
    D_0019D7FC = owner;
    D_0019D800 = value;
    SetAmount(&amount);
    D_0019D898 = 0;
}
