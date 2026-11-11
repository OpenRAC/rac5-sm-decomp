typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00383D28;
extern float D_00383D38;
extern float D_00383D3C;
extern float D_001F7C24;
extern float powf(float, float);

void func_19EBC0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_00383D3C;
        float f = D_001F7C24;

        D_00383D28.f_00 = 0;
        D_00383D28.f_04 = 0;
        D_00383D28.f_08 = 0;
        D_00383D28.f_0C = 1.0f;
        D_00383D38 = f * f;
        *dst = powf(0.6f, 1.0f);
    }
}
