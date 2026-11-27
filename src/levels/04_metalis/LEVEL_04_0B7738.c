/* LEVEL_04:0x0B7738 -- placement copy of LEVEL_01_0B2298.c: stores a byte, an owner, a float and a non-negative float into the effect globals and clears the active byte. */
extern unsigned int func_0B7728(void);
extern int D_00215674;
extern int D_0021567C;
extern float D_00215680;
extern float D_00215684;
extern unsigned char D_00215718;

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
    D_00215684 = *MaxRef(&zero, amount);
}
void func_0B7738(int owner, unsigned char flag, float value, float amount)
{
    func_0B7728();
    D_00215674 = flag;
    D_0021567C = owner;
    D_00215680 = value;
    SetAmount(&amount);
    D_00215718 = 0;
}
