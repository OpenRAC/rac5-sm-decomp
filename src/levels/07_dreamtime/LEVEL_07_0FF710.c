typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00346F48;

void func_0FF710(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00346F48.f00 = 0;
        D_00346F48.f0C = 1.0f;
        D_00346F48.f08 = 0;
        D_00346F48.f04 = 0;
    }
}
