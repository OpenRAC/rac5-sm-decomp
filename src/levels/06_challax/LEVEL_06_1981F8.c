typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00383C70;

void func_1981F8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00383C70.f00 = 0;
        D_00383C70.f0C = 1.0f;
        D_00383C70.f08 = 0;
        D_00383C70.f04 = 0;
    }
}
