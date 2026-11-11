int func_087280(char *a0);
int func_087BF8(void);
int func_09CA38(void);
void func_088568(float *x, float *y, float f12, float f13);
void func_087F68(unsigned short a0, unsigned short a1);

void func_087ED8(char *a0)
{
    float x, y;

    if (func_087280(a0) == 0)
        return;
    if (func_087BF8() != 0)
        return;
    if (func_09CA38() != 0)
        return;
    x = 0.0f;
    y = 0.0f;
    func_088568(&x, &y, *(float *)(a0), *(float *)(a0 + 8));
    func_087F68((unsigned short)x, (unsigned short)y);
}
