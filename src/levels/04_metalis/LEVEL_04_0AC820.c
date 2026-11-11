int func_0ABBC8(char *a0);
int func_0AC540(void);
int func_0C1C00(void);
void func_0ACEB0(float *x, float *y, float f12, float f13);
void func_0AC8B0(unsigned short a0, unsigned short a1);

void func_0AC820(char *a0)
{
    float x, y;

    if (func_0ABBC8(a0) == 0)
        return;
    if (func_0AC540() != 0)
        return;
    if (func_0C1C00() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_0ACEB0(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_0AC8B0((unsigned short)x, (unsigned short)y);
}
