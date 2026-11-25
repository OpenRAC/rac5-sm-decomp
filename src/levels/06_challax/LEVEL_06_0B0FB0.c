/* LEVEL_06:0x0B0FB0 -- stores a mode byte and the clamped (non-negative) value in the global block and marks it set. */
extern unsigned char D_001EB698;
extern unsigned int D_001EB5FC;
extern float D_001EB604;
extern unsigned int func_0B0F68(void);

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*b < *a)
        return a;
    return b;
}

void func_0B0FB0(unsigned char mode, float value)
{
    float zero;

    func_0B0F68();
    D_001EB5FC = mode;
    zero = 0.0f;
    D_001EB604 = *MaxPtr(&value, &zero);
    D_001EB698 = 1;
}
