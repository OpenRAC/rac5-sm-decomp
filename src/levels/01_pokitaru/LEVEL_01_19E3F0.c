typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00396F00;

void func_19E3F0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00396F00.f00 = 0;
        D_00396F00.f0C = 1.0f;
        D_00396F00.f08 = 0;
        D_00396F00.f04 = 0;
    }
}
