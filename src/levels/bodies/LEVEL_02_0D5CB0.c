/* LEVEL_02:0x0D5CB0 -- placement copy of LEVEL_01_0CF320.c: steps the blend factor back down with a clamp at zero, eases the stored value between the two measured positions, and signals the screen when the factor reaches zero. */

struct Loc0CF320 {
    char pad[16];
};

extern float D_0021845C;
extern float D_0021956C;
extern int D_00218448;

extern int func_0B5018(int id, struct Loc0CF320 *out, float f);
extern int func_0AEF90(struct Loc0CF320 *l);
extern void func_0BC930(int a);
extern void func_01B188(int a, int b);

void func_0D5CB0(void)
{
    struct Loc0CF320 l1;
    struct Loc0CF320 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_0021845C = D_0021845C - 0.6000000238418579f;
    if (D_0021845C < 0.0f) {
        D_0021845C = 0.0f;
    }
    func_0B5018(0x2C4, &l1, 0.0f);
    func_0B5018(0x2C5, &l2, 0.0f);
    p = &D_0021956C;
    a = func_0AEF90(&l1);
    b = func_0AEF90(&l2);
    t = D_0021845C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_0021845C == 0.0f) {
        D_00218448 = 0;
        func_0BC930(0);
        func_01B188(4, 0);
    }
}
