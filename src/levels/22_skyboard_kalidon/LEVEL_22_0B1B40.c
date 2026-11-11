typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0027EC30;

void func_0B1B40(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0027EC30.f00 = 0;
        D_0027EC30.f0C = 1.0f;
        D_0027EC30.f08 = 0;
        D_0027EC30.f04 = 0;
    }
}
