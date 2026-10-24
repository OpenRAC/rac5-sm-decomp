typedef struct {
    char pad[0x1F8];
    float f1F8;
} V;

void func_06D900(void *a0, void *a1, void *a2, int a3, float f);

void func_06D8D0(V *v, void *a1, void *a2, void *a3)
{
    func_06D900(a1, a2, a3, 0, v->f1F8);
}
