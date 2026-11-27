/* LEVEL_08:0x0BCE20 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0BCE10(void);
extern int D_00245074;
extern int D_0024507C;
extern float D_00245080;
extern float D_00245084;
extern unsigned char D_00245118;

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
    D_00245084 = *MaxRef(&zero, amount);
}
void func_0BCE20(int owner, unsigned char flag, float value, float amount)
{
    func_0BCE10();
    D_00245074 = flag;
    D_0024507C = owner;
    D_00245080 = value;
    SetAmount(&amount);
    D_00245118 = 0;
}
