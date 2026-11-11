typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0033EA90;

void func_0C5AB0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0033EA90.f00 = 0;
        D_0033EA90.f0C = 1.0f;
        D_0033EA90.f08 = 0;
        D_0033EA90.f04 = 0;
    }
}
