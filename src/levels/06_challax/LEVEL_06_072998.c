typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00227010;

void func_072998(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00227010.f00 = 0;
        D_00227010.f0C = 1.0f;
        D_00227010.f08 = 0;
        D_00227010.f04 = 0;
    }
}
