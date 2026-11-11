/* LEVEL_15:0x0AF7E0 -- placement copy of LEVEL_01_0CF1A0.c: advances a blend factor with a clamp and eases a stored value between two measured positions using a smooth curve. */

struct Loc0CF1A0 {
    char pad[16];
};

extern float D_0015811C;
extern float D_0015922C;
extern int D_00158108;

extern int func_08EFD0(int id, struct Loc0CF1A0 *out, float f);
extern int func_088F48(struct Loc0CF1A0 *l);

void func_0AF7E0(void)
{
    struct Loc0CF1A0 l1;
    struct Loc0CF1A0 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_0015811C = D_0015811C + 0.6000000238418579f;
    if (D_0015811C > 1.0f) {
        D_0015811C = 1.0f;
    }
    func_08EFD0(0x2C4, &l1, 0.0f);
    func_08EFD0(0x2C5, &l2, 0.0f);
    p = &D_0015922C;
    a = func_088F48(&l1);
    b = func_088F48(&l2);
    t = D_0015811C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_0015811C == 1.0f) {
        D_00158108 = 2;
    }
}
