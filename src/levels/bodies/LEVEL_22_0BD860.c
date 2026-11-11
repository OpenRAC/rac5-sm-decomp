/* LEVEL_22:0x0BD860 -- placement copy of LEVEL_01_0CF320.c: steps the blend factor back down with a clamp at zero, eases the stored value between the two measured positions, and signals the screen when the factor reaches zero. */

struct Loc0CF320 {
    char pad[16];
};

extern float D_0016281C;
extern float D_0016392C;
extern int D_00162808;

extern int func_09CD18(int id, struct Loc0CF320 *out, float f);
extern int func_096C90(struct Loc0CF320 *l);
extern int func_0A4570(int index);
extern void func_016E40(int a, int b);

void func_0BD860(void)
{
    struct Loc0CF320 l1;
    struct Loc0CF320 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_0016281C = D_0016281C - 0.6000000238418579f;
    if (D_0016281C < 0.0f) {
        D_0016281C = 0.0f;
    }
    func_09CD18(0x2C4, &l1, 0.0f);
    func_09CD18(0x2C5, &l2, 0.0f);
    p = &D_0016392C;
    a = func_096C90(&l1);
    b = func_096C90(&l2);
    t = D_0016281C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_0016281C == 0.0f) {
        D_00162808 = 0;
        func_0A4570(0);
        func_016E40(4, 0);
    }
}
