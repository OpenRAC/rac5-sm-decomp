/* LEVEL_24:0x0C8C60 -- placement copy of LEVEL_01_0CF320.c: steps the blend factor back down with a clamp at zero, eases the stored value between the two measured positions, and signals the screen when the factor reaches zero. */

struct Loc0CF320 {
    char pad[16];
};

extern float D_001D411C;
extern float D_001D522C;
extern int D_001D4108;

extern int func_0A7F80(int id, struct Loc0CF320 *out, float f);
extern int func_0A1EF8(struct Loc0CF320 *l);
extern void func_0AF8B0(int a);
extern void func_018E18(int a, int b);

void func_0C8C60(void)
{
    struct Loc0CF320 l1;
    struct Loc0CF320 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_001D411C = D_001D411C - 0.6000000238418579f;
    if (D_001D411C < 0.0f) {
        D_001D411C = 0.0f;
    }
    func_0A7F80(0x2C4, &l1, 0.0f);
    func_0A7F80(0x2C5, &l2, 0.0f);
    p = &D_001D522C;
    a = func_0A1EF8(&l1);
    b = func_0A1EF8(&l2);
    t = D_001D411C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_001D411C == 0.0f) {
        D_001D4108 = 0;
        func_0AF8B0(0);
        func_018E18(4, 0);
    }
}
