typedef struct {
    float f00;
    float f04;
    float f08;
} V3;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    int f1C;
} S;

void func_0ECB38(void *a0, S *a1, int a2);

void func_16F338(void *a0, V3 *a1, V3 *a2)
{
    S s;

    s.f00 = a1->f00;
    s.f04 = a1->f04;
    s.f08 = a1->f08;
    s.f0C = a2->f00;
    s.f10 = a2->f04;
    s.f14 = a2->f08;
    s.f18 = 0.5f;
    s.f1C = 0;
    func_0ECB38(a0, &s, 0);
}
