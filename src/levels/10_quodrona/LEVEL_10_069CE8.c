typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00242620;
extern float D_00242630;
extern float expf(float f);

void func_069CE8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *dst = &D_00242630;
            D_00242620.f_0C = 1.0f;
            D_00242620.i_00 = 0;
            D_00242620.i_08 = 0;
            D_00242620.i_04 = 0;
            *dst = expf(-0.5f);
        }
    }
}