typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B2390;
extern float D_003B23A0;
extern float D_003B23A4;
extern float D_00221C04;
extern float func_000000(float, float);

void func_1BBFD8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_003B23A4;
        float f = D_00221C04;

        D_003B2390.f_00 = 0;
        D_003B2390.f_04 = 0;
        D_003B2390.f_08 = 0;
        D_003B2390.f_0C = 1.0f;
        D_003B23A0 = f * f;
        *dst = func_000000(0.6f, 1.0f);
    }
}
