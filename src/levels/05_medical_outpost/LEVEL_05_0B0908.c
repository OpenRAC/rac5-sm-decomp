typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00313828;

void func_0B0908(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00313828.f00 = 0;
        D_00313828.f0C = 1.0f;
        D_00313828.f08 = 0;
        D_00313828.f04 = 0;
    }
}
