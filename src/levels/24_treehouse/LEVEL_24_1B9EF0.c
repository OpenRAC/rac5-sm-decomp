typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00362A98;

void func_1B9EF0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00362A98.f00 = 0;
        D_00362A98.f0C = 1.0f;
        D_00362A98.f08 = 0;
        D_00362A98.f04 = 0;
    }
}
