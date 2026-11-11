typedef struct {
    float f00;
    char pad[4];
    float f08;
} V;

void func_12ECA0(void *a0, void *a1, float f0, float f1, float f2);

void func_17C948(V *v, void *a1, void *a2, float s)
{
    func_12ECA0(a1, a2, v->f00, v->f08, s);
}
