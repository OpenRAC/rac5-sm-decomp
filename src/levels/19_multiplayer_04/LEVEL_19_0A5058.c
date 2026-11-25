/* LEVEL_19:0x0A5058 -- placement copy of LEVEL_06_0B0FB0.c: stores a mode byte and the clamped (non-negative) value in the global block and marks it set. */
extern unsigned char D_001AB998;
extern unsigned int D_001AB8FC;
extern float D_001AB904;
extern unsigned int func_0A5048(void);

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*b < *a)
        return a;
    return b;
}

void func_0A5058(unsigned char mode, float value)
{
    float zero;

    func_0A5048();
    D_001AB8FC = mode;
    zero = 0.0f;
    D_001AB904 = *MaxPtr(&value, &zero);
    D_001AB998 = 1;
}
