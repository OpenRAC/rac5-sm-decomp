typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00247210;

void func_02C3F8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00247210.f00 = 0;
        D_00247210.f0C = 1.0f;
        D_00247210.f08 = 0;
        D_00247210.f04 = 0;
    }
}
