/* LEVEL_23:0x0C6150 -- placement copy of LEVEL_01_0CF320.c: steps the blend factor back down with a clamp at zero, eases the stored value between the two measured positions, and signals the screen when the factor reaches zero. */

struct Loc0CF320 {
    char pad[16];
};

extern float D_001D689C;
extern float D_001D79AC;
extern int D_001D6888;

extern int func_0A5478(int id, struct Loc0CF320 *out, float f);
extern int func_09F3F0(struct Loc0CF320 *l);
extern void func_0ACDE8(int a);
extern void func_019338(int a, int b);

void func_0C6150(void)
{
    struct Loc0CF320 l1;
    struct Loc0CF320 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_001D689C = D_001D689C - 0.6000000238418579f;
    if (D_001D689C < 0.0f) {
        D_001D689C = 0.0f;
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
    if (D_001D689C == 0.0f) {
        D_001D6888 = 0;
        func_0ACDE8(0);
        func_019338(4, 0);
    }
}
