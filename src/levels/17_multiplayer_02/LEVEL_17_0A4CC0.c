/* LEVEL_17:0x0A4CC0 -- placement copy of LEVEL_06_0B0FB0.c: stores a mode byte and the clamped (non-negative) value in the global block and marks it set. */
extern unsigned char D_0019DE18;
extern unsigned int D_0019DD7C;
extern float D_0019DD84;
extern unsigned int func_0A4CB0(void);

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*b < *a)
        return a;
    return b;
}

void func_0A4CC0(unsigned char mode, float value)
{
    float zero;

    func_0A4CB0();
    D_0019DD7C = mode;
    zero = 0.0f;
    D_0019DD84 = *MaxPtr(&value, &zero);
    D_0019DE18 = 1;
}
