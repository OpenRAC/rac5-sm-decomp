/* LEVEL_16:0x0BEA18 -- placement copy of LEVEL_01_0CF320.c: steps the blend factor back down with a clamp at zero, eases the stored value between the two measured positions, and signals the screen when the factor reaches zero. */

struct Loc0CF320 {
    char pad[16];
};

extern float D_001B134C;
extern float D_001B245C;
extern int D_001B1338;

extern int func_09CDF8(int id, struct Loc0CF320 *out, float f);
extern int func_096D10(struct Loc0CF320 *l);
extern void func_0A50B0(int a);
extern void func_018B98(int a, int b);

void func_0BEA18(void)
{
    struct Loc0CF320 l1;
    struct Loc0CF320 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_001B134C = D_001B134C - 0.6000000238418579f;
    if (D_001B134C < 0.0f) {
        D_001B134C = 0.0f;
    }
    func_09CDF8(0x2C4, &l1, 0.0f);
    func_09CDF8(0x2C5, &l2, 0.0f);
    p = &D_001B245C;
    a = func_096D10(&l1);
    b = func_096D10(&l2);
    t = D_001B134C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_001B134C == 0.0f) {
        D_001B1338 = 0;
        func_0A50B0(0);
        func_018B98(4, 0);
    }
}
