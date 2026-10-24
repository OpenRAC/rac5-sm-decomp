typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_001F7780;

void func_000968(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001F7780.f00 = 0;
        D_001F7780.f0C = 1.0f;
        D_001F7780.f08 = 0;
        D_001F7780.f04 = 0;
    }
}
