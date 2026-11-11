typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002A7390;

void func_102CE8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002A7390.f00 = 0;
        D_002A7390.f0C = 1.0f;
        D_002A7390.f08 = 0;
        D_002A7390.f04 = 0;
    }
}
