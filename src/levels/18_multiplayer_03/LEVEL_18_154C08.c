typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002E5488;

void func_154C08(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002E5488.f00 = 0;
        D_002E5488.f0C = 1.0f;
        D_002E5488.f08 = 0;
        D_002E5488.f04 = 0;
    }
}
