typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00348470;

void func_0DAB48(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00348470.f00 = 0;
        D_00348470.f0C = 1.0f;
        D_00348470.f08 = 0;
        D_00348470.f04 = 0;
    }
}
