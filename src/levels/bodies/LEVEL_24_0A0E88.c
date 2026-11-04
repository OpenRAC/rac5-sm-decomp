int func_0A0230(char *a0);
int func_0A0BA8(void);
int func_0B5CB0(void);
void func_0A1518(float *x, float *y, float f12, float f13);
void func_0A0F18(unsigned short a0, unsigned short a1);

void func_0A0E88(char *a0)
{
    float x, y;

    if (func_0A0230(a0) == 0)
        return;
    if (func_0A0BA8() != 0)
        return;
    if (func_0B5CB0() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_0A1518(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_0A0F18((unsigned short)x, (unsigned short)y);
}
