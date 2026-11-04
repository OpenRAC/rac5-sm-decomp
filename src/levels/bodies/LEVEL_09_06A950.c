typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002209E8;
extern float D_002209F8;
extern float D_002209FC;

extern float func_000000(float a0, float a1);

void func_06A950(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *p = &D_002209F8;
            float *q = &D_002209FC;
            D_002209E8.f_00 = 0;
            D_002209E8.f_04 = 0;
            D_002209E8.f_08 = 0;
            D_002209E8.f_0C = 1.0f;
            *p = func_000000(0.98f, 1.0f);
            *q = func_000000(0.98f, 1.0f);
        }
    }
}
