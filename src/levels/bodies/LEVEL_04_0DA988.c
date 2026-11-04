typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003475A0;
extern int D_003475B0;
extern int D_00234170;

void func_0DA988(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003475A0.i0 = 0;
            D_003475A0.i1 = 0;
            D_003475A0.i2 = 0;
            D_003475A0.f3 = 1.0f;
            D_003475B0 = ((D_00234170 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
