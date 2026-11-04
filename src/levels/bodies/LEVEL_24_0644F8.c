typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00205120;
extern float D_00205130;
extern float func_000000(float f);

void func_0644F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *dst = &D_00205130;
            D_00205120.f_0C = 1.0f;
            D_00205120.i_00 = 0;
            D_00205120.i_08 = 0;
            D_00205120.i_04 = 0;
            *dst = func_000000(-0.5f);
        }
    }
}