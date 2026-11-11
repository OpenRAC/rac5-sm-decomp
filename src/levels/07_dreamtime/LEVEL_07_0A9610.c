int func_0A89B8(char *a0);
int func_0A9330(void);
int func_0BE450(void);
void func_0A9CA0(float *x, float *y, float f12, float f13);
void func_0A96A0(unsigned short a0, unsigned short a1);

void func_0A9610(char *a0)
{
    float x, y;

    if (func_0A89B8(a0) == 0)
        return;
    if (func_0A9330() != 0)
        return;
    if (func_0BE450() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_0A9CA0(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_0A96A0((unsigned short)x, (unsigned short)y);
}
