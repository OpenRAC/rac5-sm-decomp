typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0038E620;

void func_19C6F0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0038E620.f00 = 0;
        D_0038E620.f0C = 1.0f;
        D_0038E620.f08 = 0;
        D_0038E620.f04 = 0;
    }
}
