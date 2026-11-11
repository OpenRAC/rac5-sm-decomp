typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0022BF80;

void func_087EF0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0022BF80.f00 = 0;
        D_0022BF80.f0C = 1.0f;
        D_0022BF80.f08 = 0;
        D_0022BF80.f04 = 0;
    }
}
