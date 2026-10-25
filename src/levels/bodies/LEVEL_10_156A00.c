typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0039CCF0;

void func_156A00(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0039CCF0.f00 = 0;
        D_0039CCF0.f0C = 1.0f;
        D_0039CCF0.f08 = 0;
        D_0039CCF0.f04 = 0;
    }
}
