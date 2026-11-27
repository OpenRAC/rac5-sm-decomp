/* LEVEL_24:0x0ABB10 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0ABB00(void);
extern int D_001CCE34;
extern int D_001CCE3C;
extern float D_001CCE40;
extern float D_001CCE44;
extern unsigned char D_001CCED8;

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
    D_001CCE44 = *MaxRef(&zero, amount);
}
void func_0ABB10(int owner, unsigned char flag, float value, float amount)
{
    func_0ABB00();
    D_001CCE34 = flag;
    D_001CCE3C = owner;
    D_001CCE40 = value;
    SetAmount(&amount);
    D_001CCED8 = 0;
}
