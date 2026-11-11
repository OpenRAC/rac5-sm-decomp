/* LEVEL_23:0x0C5FD0 -- placement copy of LEVEL_01_0CF1A0.c: advances a blend factor with a clamp and eases a stored value between two measured positions using a smooth curve. */

struct Loc0CF1A0 {
    char pad[16];
};

extern float D_001D689C;
extern float D_001D79AC;
extern int D_001D6888;

extern int func_0A5478(int id, struct Loc0CF1A0 *out, float f);
extern int func_09F3F0(struct Loc0CF1A0 *l);

void func_0C5FD0(void)
{
    struct Loc0CF1A0 l1;
    struct Loc0CF1A0 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_001D689C = D_001D689C + 0.6000000238418579f;
    if (D_001D689C > 1.0f) {
        D_001D689C = 1.0f;
    }
    func_0A5478(0x2C4, &l1, 0.0f);
    func_0A5478(0x2C5, &l2, 0.0f);
    p = &D_001D79AC;
    a = func_09F3F0(&l1);
    b = func_09F3F0(&l2);
    t = D_001D689C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_001D689C == 1.0f) {
        D_001D6888 = 2;
    }
}
