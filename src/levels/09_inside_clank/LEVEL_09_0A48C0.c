int func_0A3C68(char *a0);
int func_0A45E0(void);
int func_0B96A0(void);
void func_0A4F50(float *x, float *y, float f12, float f13);
void func_0A4950(unsigned short a0, unsigned short a1);

void func_0A48C0(char *a0)
{
    float x, y;

    if (func_0A3C68(a0) == 0)
        return;
    if (func_0A45E0() != 0)
        return;
    if (func_0B96A0() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_0A4F50(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_0A4950((unsigned short)x, (unsigned short)y);
}
