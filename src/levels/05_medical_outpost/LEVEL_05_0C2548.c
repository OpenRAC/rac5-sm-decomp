typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00315060;

void func_0C2548(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00315060.f00 = 0;
        D_00315060.f0C = 1.0f;
        D_00315060.f08 = 0;
        D_00315060.f04 = 0;
    }
}
