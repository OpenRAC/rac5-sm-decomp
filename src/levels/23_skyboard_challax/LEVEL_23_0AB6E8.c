typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002F8F80;

void func_0AB6E8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002F8F80.f00 = 0;
        D_002F8F80.f0C = 1.0f;
        D_002F8F80.f08 = 0;
        D_002F8F80.f04 = 0;
    }
}
