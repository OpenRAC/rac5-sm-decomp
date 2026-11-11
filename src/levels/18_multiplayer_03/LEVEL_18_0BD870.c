/* LEVEL_18:0x0BD870 -- placement copy of LEVEL_01_0CF1A0.c: advances a blend factor with a clamp and eases a stored value between two measured positions using a smooth curve. */

struct Loc0CF1A0 {
    char pad[16];
};

extern float D_001B27CC;
extern float D_001B38DC;
extern int D_001B27B8;

extern int func_09BE08(int id, struct Loc0CF1A0 *out, float f);
extern int func_095D20(struct Loc0CF1A0 *l);

void func_0BD870(void)
{
    struct Loc0CF1A0 l1;
    struct Loc0CF1A0 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_001B27CC = D_001B27CC + 0.6000000238418579f;
    if (D_001B27CC > 1.0f) {
        D_001B27CC = 1.0f;
    }
    func_09BE08(0x2C4, &l1, 0.0f);
    func_09BE08(0x2C5, &l2, 0.0f);
    p = &D_001B38DC;
    a = func_095D20(&l1);
    b = func_095D20(&l2);
    t = D_001B27CC;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_001B27CC == 1.0f) {
        D_001B27B8 = 2;
    }
}
