typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0024A448;

void func_01B4B0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0024A448.f00 = 0;
        D_0024A448.f0C = 1.0f;
        D_0024A448.f08 = 0;
        D_0024A448.f04 = 0;
    }
}
