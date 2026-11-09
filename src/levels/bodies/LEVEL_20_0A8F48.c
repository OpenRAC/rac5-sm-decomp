/* LEVEL_20:0x0A8F48 -- placement copy of LEVEL_01_0CF320.c: steps the blend factor back down with a clamp at zero, eases the stored value between the two measured positions, and signals the screen when the factor reaches zero. */

struct Loc0CF320 {
    char pad[16];
};

extern float D_00113A2C;
extern float D_00114B3C;
extern int D_00113A18;

extern int func_0874F0(int id, struct Loc0CF320 *out, float f);
extern int func_081408(struct Loc0CF320 *l);
extern void func_08F6B0(int a);
extern void func_016950(int a, int b);

void func_0A8F48(void)
{
    struct Loc0CF320 l1;
    struct Loc0CF320 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_00113A2C = D_00113A2C - 0.6000000238418579f;
    if (D_00113A2C < 0.0f) {
        D_00113A2C = 0.0f;
    }
    func_0874F0(0x2C4, &l1, 0.0f);
    func_0874F0(0x2C5, &l2, 0.0f);
    p = &D_00114B3C;
    a = func_081408(&l1);
    b = func_081408(&l2);
    t = D_00113A2C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_00113A2C == 0.0f) {
        D_00113A18 = 0;
        func_08F6B0(0);
        func_016950(4, 0);
    }
}
