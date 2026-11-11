typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0027B708;

void func_0D2E10(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0027B708.f00 = 0;
        D_0027B708.f0C = 1.0f;
        D_0027B708.f08 = 0;
        D_0027B708.f04 = 0;
    }
}
