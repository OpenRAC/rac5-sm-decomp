typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00224F20;
extern float D_00224F30;
extern float expf(float f);

void func_068B20(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *dst = &D_00224F30;
            D_00224F20.f_0C = 1.0f;
            D_00224F20.i_00 = 0;
            D_00224F20.i_08 = 0;
            D_00224F20.i_04 = 0;
            *dst = expf(-0.5f);
        }
    }
}