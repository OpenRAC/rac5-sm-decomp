typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00288538;

void func_09E9D0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00288538.f00 = 0;
        D_00288538.f0C = 1.0f;
        D_00288538.f08 = 0;
        D_00288538.f04 = 0;
    }
}
