typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002884B0;
extern float D_002884C0;
extern float func_000000(float f);

void func_070700(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            float *dst = &D_002884C0;
            D_002884B0.f_0C = 1.0f;
            D_002884B0.i_00 = 0;
            D_002884B0.i_08 = 0;
            D_002884B0.i_04 = 0;
            *dst = func_000000(-0.5f);
        }
    }
}