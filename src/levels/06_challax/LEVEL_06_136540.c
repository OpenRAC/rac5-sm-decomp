typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0037E560;

void func_136540(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0037E560.f00 = 0;
        D_0037E560.f0C = 1.0f;
        D_0037E560.f08 = 0;
        D_0037E560.f04 = 0;
    }
}
