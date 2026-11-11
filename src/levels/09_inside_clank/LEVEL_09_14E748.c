typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0037B008;

void func_14E748(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0037B008.f00 = 0;
        D_0037B008.f0C = 1.0f;
        D_0037B008.f08 = 0;
        D_0037B008.f04 = 0;
    }
}
