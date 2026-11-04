typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003AF178;
extern float D_003AF188;
extern float D_003AF18C;
extern float D_0021DCBC;
extern float powf(float, float);

void func_1C8710(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_003AF18C;
        float f = D_0021DCBC;

        D_003AF178.f_00 = 0;
        D_003AF178.f_04 = 0;
        D_003AF178.f_08 = 0;
        D_003AF178.f_0C = 1.0f;
        D_003AF188 = f * f;
        *dst = powf(0.6f, 1.0f);
    }
}
