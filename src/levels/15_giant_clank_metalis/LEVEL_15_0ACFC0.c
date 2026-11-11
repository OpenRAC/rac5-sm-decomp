typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00243848;

void func_0ACFC0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00243848.f00 = 0;
        D_00243848.f0C = 1.0f;
        D_00243848.f08 = 0;
        D_00243848.f04 = 0;
    }
}
