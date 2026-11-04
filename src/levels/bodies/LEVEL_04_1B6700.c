typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B2110;
extern float D_003B2120;
extern float D_003B2124;
extern float D_0022235C;
extern float func_000000(float, float);

void func_1B6700(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_003B2124;
        float f = D_0022235C;

        D_003B2110.f_00 = 0;
        D_003B2110.f_04 = 0;
        D_003B2110.f_08 = 0;
        D_003B2110.f_0C = 1.0f;
        D_003B2120 = f * f;
        *dst = func_000000(0.6f, 1.0f);
    }
}
