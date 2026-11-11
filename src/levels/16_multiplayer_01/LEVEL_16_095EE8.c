int func_095930(char *a0);
int func_095C08(void);
int func_0AB7F8(void);
void func_096330(float *x, float *y, float f12, float f13);
void func_095F78(unsigned short a0, unsigned short a1);

void func_095EE8(char *a0)
{
    float x, y;

    if (func_095930(a0) == 0)
        return;
    if (func_095C08() != 0)
        return;
    if (func_0AB7F8() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_096330(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_095F78((unsigned short)x, (unsigned short)y);
}
