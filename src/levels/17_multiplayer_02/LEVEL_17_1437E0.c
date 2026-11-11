typedef struct {
    char pad[0x64];
    float f64;
    int f68;
} T;

T *func_143870(void *a0);
void func_143250(void *a0);

void func_1437E0(void *a0)
{
    T *p = func_143870(a0);

    if (p == 0)
        return;
    func_143250(a0);
    p->f68 = 0;
    p->f64 = -1.0f;
}
