typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003970D8;
extern float D_003970E8;
extern float D_003970EC;
extern float D_00208C64;
extern float powf(float, float);

void func_1AA728(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_003970EC;
        float f = D_00208C64;

        D_003970D8.f_00 = 0;
        D_003970D8.f_04 = 0;
        D_003970D8.f_08 = 0;
        D_003970D8.f_0C = 1.0f;
        D_003970E8 = f * f;
        *dst = powf(0.6f, 1.0f);
    }
}
