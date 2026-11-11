typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00253A78;
extern float D_00253A88;
extern float D_00253A8C;

extern float powf(float a0, float a1);

void func_06F930(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_00253A88;
            float *q = &D_00253A8C;
            D_00253A78.f_00 = 0;
            D_00253A78.f_04 = 0;
            D_00253A78.f_08 = 0;
            D_00253A78.f_0C = 1.0f;
            *p = powf(0.98f, 1.0f);
            *q = powf(0.98f, 1.0f);
        }
    }
}
