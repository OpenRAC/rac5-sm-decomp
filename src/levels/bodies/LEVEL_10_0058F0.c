typedef struct {
    float f00;
    float f04;
    float f08;
} V3;

void func_005820(V3 *a0, void *a1);

void func_0058F0(V3 *a0, V3 *a1, void *a2)
{
    V3 v;

    func_005820(&v, a2);
    a0->f00 = a1->f00 - v.f00;
    a0->f04 = a1->f04 - v.f04;
    a0->f08 = a1->f08 - v.f08;
}
