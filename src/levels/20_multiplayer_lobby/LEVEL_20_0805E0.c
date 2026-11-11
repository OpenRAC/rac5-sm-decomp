int func_080028(char *a0);
int func_080300(void);
int func_095D28(void);
void func_080A28(float *x, float *y, float f12, float f13);
void func_080670(unsigned short a0, unsigned short a1);

void func_0805E0(char *a0)
{
    float x, y;

    if (func_080028(a0) == 0)
        return;
    if (func_080300() != 0)
        return;
    if (func_095D28() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_080A28(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_080670((unsigned short)x, (unsigned short)y);
}
