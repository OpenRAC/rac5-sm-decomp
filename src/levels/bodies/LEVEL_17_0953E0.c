int func_094E28(char *a0);
int func_095100(void);
int func_0AAD38(void);
void func_095828(float *x, float *y, float f12, float f13);
void func_095470(unsigned short a0, unsigned short a1);

void func_0953E0(char *a0)
{
    float x, y;

    if (func_094E28(a0) == 0)
        return;
    if (func_095100() != 0)
        return;
    if (func_0AAD38() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_095828(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_095470((unsigned short)x, (unsigned short)y);
}
