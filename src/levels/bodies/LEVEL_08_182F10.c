typedef struct {
    float f00;
    float f04;
} V;

void func_0356B0(void *a0, void *a1, int a2, int a3, float f0, float f1);

void func_182F10(void *a0, void *a1, V *v, int a3, int a4)
{
    func_0356B0(a0, a1, a3, a4, v->f00, v->f04);
}
