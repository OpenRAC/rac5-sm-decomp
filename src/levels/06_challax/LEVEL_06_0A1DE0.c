int func_0A1188(char *a0);
int func_0A1B00(void);
int func_0B6CF0(void);
void func_0A2470(float *x, float *y, float f12, float f13);
void func_0A1E70(unsigned short a0, unsigned short a1);

void func_0A1DE0(char *a0)
{
    float x, y;

    if (func_0A1188(a0) == 0)
        return;
    if (func_0A1B00() != 0)
        return;
    if (func_0B6CF0() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_0A2470(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_0A1E70((unsigned short)x, (unsigned short)y);
}
