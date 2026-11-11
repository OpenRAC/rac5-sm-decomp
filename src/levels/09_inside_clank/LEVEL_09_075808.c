typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00221A00;

void func_075808(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00221A00.f00 = 0;
        D_00221A00.f0C = 1.0f;
        D_00221A00.f08 = 0;
        D_00221A00.f04 = 0;
    }
}
