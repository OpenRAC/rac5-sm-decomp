typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0038E708;
extern float D_0038E718;
extern float D_0038E71C;
extern float D_001F7D04;
extern float powf(float, float);

void func_1A4D28(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_0038E71C;
        float f = D_001F7D04;

        D_0038E708.f_00 = 0;
        D_0038E708.f_04 = 0;
        D_0038E708.f_08 = 0;
        D_0038E708.f_0C = 1.0f;
        D_0038E718 = f * f;
        *dst = powf(0.6f, 1.0f);
    }
}
