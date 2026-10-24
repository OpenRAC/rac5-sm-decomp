typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0036C830;

void func_12CE20(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0036C830.f00 = 0;
        D_0036C830.f0C = 1.0f;
        D_0036C830.f08 = 0;
        D_0036C830.f04 = 0;
    }
}
