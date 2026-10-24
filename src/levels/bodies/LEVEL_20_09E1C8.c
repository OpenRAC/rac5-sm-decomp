typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0019AC30;

void func_09E1C8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0019AC30.f00 = 0;
        D_0019AC30.f0C = 1.0f;
        D_0019AC30.f08 = 0;
        D_0019AC30.f04 = 0;
    }
}
