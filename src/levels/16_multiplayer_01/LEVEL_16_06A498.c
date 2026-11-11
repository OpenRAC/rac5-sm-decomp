typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_001EC960;

void func_06A498(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001EC960.f00 = 0;
        D_001EC960.f0C = 1.0f;
        D_001EC960.f08 = 0;
        D_001EC960.f04 = 0;
    }
}
