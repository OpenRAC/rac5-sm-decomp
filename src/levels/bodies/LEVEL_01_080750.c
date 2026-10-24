typedef struct {
    char pad[0x30];
    float f30;
    float f34;
    float f38;
} V;

void func_126200(void *a0, float f0, float f1, float f2);

void func_080750(V *v, void *a1)
{
    func_126200(a1, v->f30, v->f34, v->f38);
}
