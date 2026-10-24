typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002FE090;

void func_0CB318(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002FE090.f00 = 0;
        D_002FE090.f0C = 1.0f;
        D_002FE090.f08 = 0;
        D_002FE090.f04 = 0;
    }
}
