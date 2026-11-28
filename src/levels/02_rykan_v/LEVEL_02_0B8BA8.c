/* LEVEL_02:0x0B8BA8 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0B8B98(void);
extern int D_00211174;
extern int D_0021117C;
extern float D_00211180;
extern float D_00211184;
extern unsigned char D_00211218;

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
    D_00211184 = *MaxRef(&zero, amount);
}
void func_0B8BA8(int owner, unsigned char flag, float value, float amount)
{
    func_0B8B98();
    D_00211174 = flag;
    D_0021117C = owner;
    D_00211180 = value;
    SetAmount(&amount);
    D_00211218 = 0;
}
