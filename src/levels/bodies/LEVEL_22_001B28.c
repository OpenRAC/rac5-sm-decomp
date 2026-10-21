typedef struct {
    float f00;
    float f04;
    float f08;
} V3;

void func_001AE0(V3 *a0, void *a1);

void func_001B28(V3 *a0, void *a1, V3 *a2)
{
    V3 v;

    func_001AE0(&v, a1);
    a0->f00 = a2->f00 + v.f00;
    a0->f04 = a2->f04 + v.f04;
    a0->f08 = a2->f08 + v.f08;
}
