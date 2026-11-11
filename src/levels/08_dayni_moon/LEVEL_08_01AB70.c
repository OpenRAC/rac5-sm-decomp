typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
} V;

extern V D_0027EDF0;

void func_01AB70(V *src)
{
    V *r = &D_0027EDF0;

    r->f20 = src->f20;
    r->f24 = src->f24;
    r->f28 = src->f28;
    r->f2C = src->f2C;
    D_0027EDF0.f00 = src->f00;
    r->f04 = src->f04;
    r->f08 = src->f08;
    r->f0C = src->f0C;
    r->f10 = src->f10;
    r->f14 = src->f14;
    r->f18 = src->f18;
    r->f1C = src->f1C;
    r->f30 = src->f30;
    r->f34 = src->f34;
    r->f38 = src->f38;
    r->f3C = src->f3C;
}
