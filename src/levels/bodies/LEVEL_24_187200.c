typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00360F10;
extern float D_00360F20;
extern float D_00360F24;
extern float D_001D9B14;
extern float func_000000(float, float);

void func_187200(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_00360F24;
        float f = D_001D9B14;

        D_00360F10.f_00 = 0;
        D_00360F10.f_04 = 0;
        D_00360F10.f_08 = 0;
        D_00360F10.f_0C = 1.0f;
        D_00360F20 = f * f;
        *dst = func_000000(0.6f, 1.0f);
    }
}
