int func_0A7AD0(char *a0);
int func_0A8448(void);
int func_0BD738(void);
void func_0A8DB8(float *x, float *y, float f12, float f13);
void func_0A87B8(unsigned short a0, unsigned short a1);

void func_0A8728(char *a0)
{
    float x, y;

    if (func_0A7AD0(a0) == 0)
        return;
    if (func_0A8448() != 0)
        return;
    if (func_0BD738() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_0A8DB8(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_0A87B8((unsigned short)x, (unsigned short)y);
}
