typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00360B88;

void func_16E078(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00360B88.f00 = 0;
        D_00360B88.f0C = 1.0f;
        D_00360B88.f08 = 0;
        D_00360B88.f04 = 0;
    }
}
