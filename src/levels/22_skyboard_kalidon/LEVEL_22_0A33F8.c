typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0027E078;

void func_0A33F8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0027E078.f00 = 0;
        D_0027E078.f0C = 1.0f;
        D_0027E078.f08 = 0;
        D_0027E078.f04 = 0;
    }
}
