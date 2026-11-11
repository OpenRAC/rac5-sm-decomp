typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00344C28;

void func_0F1DD8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00344C28.f00 = 0;
        D_00344C28.f0C = 1.0f;
        D_00344C28.f08 = 0;
        D_00344C28.f04 = 0;
    }
}
