typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0024FD20;

void func_07C6F0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0024FD20.f00 = 0;
        D_0024FD20.f0C = 1.0f;
        D_0024FD20.f08 = 0;
        D_0024FD20.f04 = 0;
    }
}
