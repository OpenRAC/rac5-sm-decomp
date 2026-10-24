typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0020C340;

void func_07B0F8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0020C340.f00 = 0;
        D_0020C340.f0C = 1.0f;
        D_0020C340.f08 = 0;
        D_0020C340.f04 = 0;
    }
}
