int func_0A4F78(char *a0);
int func_0A58F0(void);
int func_0BA998(void);
void func_0A6260(float *x, float *y, float f12, float f13);
void func_0A5C60(unsigned short a0, unsigned short a1);

void func_0A5BD0(char *a0)
{
    float x, y;

    if (func_0A4F78(a0) == 0)
        return;
    if (func_0A58F0() != 0)
        return;
    if (func_0BA998() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_0A6260(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_0A5C60((unsigned short)x, (unsigned short)y);
}
