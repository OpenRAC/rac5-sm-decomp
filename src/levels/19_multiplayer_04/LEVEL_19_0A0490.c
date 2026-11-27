/* LEVEL_19:0x0A0490 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0A0480(void);
extern int D_001AB374;
extern int D_001AB37C;
extern float D_001AB380;
extern float D_001AB384;
extern unsigned char D_001AB418;

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
    D_001AB384 = *MaxRef(&zero, amount);
}
void func_0A0490(int owner, unsigned char flag, float value, float amount)
{
    func_0A0480();
    D_001AB374 = flag;
    D_001AB37C = owner;
    D_001AB380 = value;
    SetAmount(&amount);
    D_001AB418 = 0;
}
