typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00242668;
extern float D_00242678;
extern float D_0024267C;

extern float func_000000(float a0, float a1);

void func_06CF68(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_00242678;
            float *q = &D_0024267C;
            D_00242668.f_00 = 0;
            D_00242668.f_04 = 0;
            D_00242668.f_08 = 0;
            D_00242668.f_0C = 1.0f;
            *p = func_000000(0.98f, 1.0f);
            *q = func_000000(0.98f, 1.0f);
        }
    }
}
