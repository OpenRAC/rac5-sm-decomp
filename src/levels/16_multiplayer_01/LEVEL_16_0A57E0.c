/* LEVEL_16:0x0A57E0 -- placement copy of LEVEL_06_0B0FB0.c: stores a mode byte and the clamped (non-negative) value in the global block and marks it set. */
extern unsigned char D_001AA818;
extern unsigned int D_001AA77C;
extern float D_001AA784;
extern unsigned int func_0A57D0(void);

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*b < *a)
        return a;
    return b;
}

void func_0A57E0(unsigned char mode, float value)
{
    float zero;

    func_0A57D0();
    D_001AA77C = mode;
    zero = 0.0f;
    D_001AA784 = *MaxPtr(&value, &zero);
    D_001AA818 = 1;
}
