typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0032C7C0;

void func_0CEA10(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0032C7C0.f00 = 0;
        D_0032C7C0.f0C = 1.0f;
        D_0032C7C0.f08 = 0;
        D_0032C7C0.f04 = 0;
    }
}
