typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003ACB00;

void func_174B90(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003ACB00.f00 = 0;
        D_003ACB00.f0C = 1.0f;
        D_003ACB00.f08 = 0;
        D_003ACB00.f04 = 0;
    }
}
