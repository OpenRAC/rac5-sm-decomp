typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002E5638;

void func_166F80(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E5638.f00 = 0;
        D_002E5638.f0C = 1.0f;
        D_002E5638.f08 = 0;
        D_002E5638.f04 = 0;
    }
}
