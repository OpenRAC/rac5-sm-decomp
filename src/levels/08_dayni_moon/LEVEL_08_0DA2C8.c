/* LEVEL_08:0x0DA2C8 -- placement copy of LEVEL_01_0CF320.c: steps the blend factor back down with a clamp at zero, eases the stored value between the two measured positions, and signals the screen when the factor reaches zero. */

struct Loc0CF320 {
    char pad[16];
};

extern float D_0024C35C;
extern float D_0024D46C;
extern int D_0024C348;

extern int func_0B9040(int id, struct Loc0CF320 *out, float f);
extern int func_0B2F78(struct Loc0CF320 *l);
extern int func_0C0F10(int a);
extern void func_01B1A0(int a, int b);

void func_0DA2C8(void)
{
    struct Loc0CF320 l1;
    struct Loc0CF320 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_0024C35C = D_0024C35C - 0.6000000238418579f;
    if (D_0024C35C < 0.0f) {
        D_0024C35C = 0.0f;
    }
    func_0B9040(0x2C4, &l1, 0.0f);
    func_0B9040(0x2C5, &l2, 0.0f);
    p = &D_0024D46C;
    a = func_0B2F78(&l1);
    b = func_0B2F78(&l2);
    t = D_0024C35C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_0024C35C == 0.0f) {
        D_0024C348 = 0;
        func_0C0F10(0);
        func_01B1A0(4, 0);
    }
}
