typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003A1FE0;

void func_1D4C00(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003A1FE0.f00 = 0;
        D_003A1FE0.f0C = 1.0f;
        D_003A1FE0.f08 = 0;
        D_003A1FE0.f04 = 0;
    }
}
