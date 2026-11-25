/* LEVEL_10:0x0B7960 -- placement copy of LEVEL_06_0B0FB0.c: stores a mode byte and the clamped (non-negative) value in the global block and marks it set. */
extern unsigned char D_00205798;
extern unsigned int D_002056FC;
extern float D_00205704;
extern unsigned int func_0B7918(void);

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*b < *a)
        return a;
    return b;
}

void func_0B7960(unsigned char mode, float value)
{
    float zero;

    func_0B7918();
    D_002056FC = mode;
    zero = 0.0f;
    D_00205704 = *MaxPtr(&value, &zero);
    D_00205798 = 1;
}
