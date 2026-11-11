typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003E0C08;

void func_154F90(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003E0C08.f00 = 0;
        D_003E0C08.f0C = 1.0f;
        D_003E0C08.f08 = 0;
        D_003E0C08.f04 = 0;
    }
}
