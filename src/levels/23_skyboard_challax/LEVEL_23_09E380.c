int func_09D728(char *a0);
int func_09E0A0(void);
int func_0B3188(void);
void func_09EA10(float *x, float *y, float f12, float f13);
void func_09E410(unsigned short a0, unsigned short a1);

void func_09E380(char *a0)
{
    float x, y;

    if (func_09D728(a0) == 0)
        return;
    if (func_09E0A0() != 0)
        return;
    if (func_0B3188() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_09EA10(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_09E410((unsigned short)x, (unsigned short)y);
}
