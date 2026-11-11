typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003A2490;

void func_1F3080(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003A2490.f00 = 0;
        D_003A2490.f0C = 1.0f;
        D_003A2490.f08 = 0;
        D_003A2490.f04 = 0;
    }
}
