/* LEVEL_19:0x0BE2F0 -- placement copy of LEVEL_01_0CF320.c: steps the blend factor back down with a clamp at zero, eases the stored value between the two measured positions, and signals the screen when the factor reaches zero. */

struct Loc0CF320 {
    char pad[16];
};

extern float D_001B24CC;
extern float D_001B35DC;
extern int D_001B24B8;

extern int func_09C688(int id, struct Loc0CF320 *out, float f);
extern int func_0965A0(struct Loc0CF320 *l);
extern void func_0A4928(int a);
extern void func_018898(int a, int b);

void func_0BE2F0(void)
{
    struct Loc0CF320 l1;
    struct Loc0CF320 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_001B24CC = D_001B24CC - 0.6000000238418579f;
    if (D_001B24CC < 0.0f) {
        D_001B24CC = 0.0f;
    }
    func_09C688(0x2C4, &l1, 0.0f);
    func_09C688(0x2C5, &l2, 0.0f);
    p = &D_001B35DC;
    a = func_0965A0(&l1);
    b = func_0965A0(&l2);
    t = D_001B24CC;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_001B24CC == 0.0f) {
        D_001B24B8 = 0;
        func_0A4928(0);
        func_018898(4, 0);
    }
}
