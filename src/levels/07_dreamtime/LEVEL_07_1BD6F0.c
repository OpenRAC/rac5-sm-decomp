typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003ACC60;
extern float D_003ACC70;
extern float D_003ACC74;
extern float D_0021D904;
extern float powf(float, float);

void func_1BD6F0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        float *dst = &D_003ACC74;
        float f = D_0021D904;

        D_003ACC60.f_00 = 0;
        D_003ACC60.f_04 = 0;
        D_003ACC60.f_08 = 0;
        D_003ACC60.f_0C = 1.0f;
        D_003ACC70 = f * f;
        *dst = powf(0.6f, 1.0f);
    }
}
