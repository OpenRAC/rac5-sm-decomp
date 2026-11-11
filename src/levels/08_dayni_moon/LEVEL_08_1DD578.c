typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003E91F8;
extern float D_003E9208;
extern float D_003E920C;
extern float D_002523D4;
extern float powf(float, float);

void func_1DD578(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_003E920C;
        float f = D_002523D4;

        D_003E91F8.f_00 = 0;
        D_003E91F8.f_04 = 0;
        D_003E91F8.f_08 = 0;
        D_003E91F8.f_0C = 1.0f;
        D_003E9208 = f * f;
        *dst = powf(0.6f, 1.0f);
    }
}
