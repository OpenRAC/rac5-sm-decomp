typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00225FA0;
extern float D_00225FB0;
extern float expf(float f);

void func_067C78(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *dst = &D_00225FB0;
            D_00225FA0.f_0C = 1.0f;
            D_00225FA0.i_00 = 0;
            D_00225FA0.i_08 = 0;
            D_00225FA0.i_04 = 0;
            *dst = expf(-0.5f);
        }
    }
}