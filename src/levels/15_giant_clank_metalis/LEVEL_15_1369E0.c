/* LEVEL_15:0x1369E0 -- restarts the timer record (duration 1.0, step 1/6, elapsed 0), and when the inactive counter has run out lowers the value by the step amount, clamped at zero, and runs func_097898 with 90. */
typedef struct {
    char pad00[0x2C];
    float value;
    char pad30[0x138 - 0x30];
    float active;
    char pad13C[0x148 - 0x13C];
    float duration;
    float step;
    float elapsed;
    float extra;
} Global;

extern Global D_002F4F88;
extern void func_097898(int a);

static __inline__ const float *Max(const float *a, const float *b)
{
    return *a > *b ? a : b;
}

static __inline__ int NotPositive(float x)
{
    return x <= 0.0f;
}

void func_1369E0(float dt)
{
    if (D_002F4F88.duration <= 0.0f)
        D_002F4F88.extra = 0.0f;
    D_002F4F88.duration = 1.0f;
    D_002F4F88.step = 0.1666666716337204f;
    D_002F4F88.elapsed = 0.0f;
    if ((unsigned char)NotPositive(D_002F4F88.active)) {
        float f = D_002F4F88.value - dt;
        float zero = 0.0f;

        D_002F4F88.value = *Max(&f, &zero);
        func_097898(90);
    }
}
