int func_094FC8(char *a0);
int func_095940(void);
int func_0AA898(void);
void func_0962B0(float *x, float *y, float f12, float f13);
void func_095CB0(unsigned short a0, unsigned short a1);

void func_095C20(char *a0)
{
    float x, y;

    if (func_094FC8(a0) == 0)
        return;
    if (func_095940() != 0)
        return;
    if (func_0AA898() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_0962B0(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_095CB0((unsigned short)x, (unsigned short)y);
}
