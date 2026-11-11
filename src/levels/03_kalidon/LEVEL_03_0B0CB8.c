typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00338410;

void func_0B0CB8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00338410.f00 = 0;
        D_00338410.f0C = 1.0f;
        D_00338410.f08 = 0;
        D_00338410.f04 = 0;
    }
}
