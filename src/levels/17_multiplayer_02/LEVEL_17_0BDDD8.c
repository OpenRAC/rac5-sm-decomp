/* LEVEL_17:0x0BDDD8 -- placement copy of LEVEL_01_0CF1A0.c: advances a blend factor with a clamp and eases a stored value between two measured positions using a smooth curve. */

struct Loc0CF1A0 {
    char pad[16];
};

extern float D_001A494C;
extern float D_001A5A5C;
extern int D_001A4938;

extern int func_09C2F0(int id, struct Loc0CF1A0 *out, float f);
extern int func_096208(struct Loc0CF1A0 *l);

void func_0BDDD8(void)
{
    struct Loc0CF1A0 l1;
    struct Loc0CF1A0 l2;
    int a;
    int b;
    int v;
    float t;
    float t2;
    float *p;

    D_001A494C = D_001A494C + 0.6000000238418579f;
    if (D_001A494C > 1.0f) {
        D_001A494C = 1.0f;
    }
    func_09C2F0(0x2C4, &l1, 0.0f);
    func_09C2F0(0x2C5, &l2, 0.0f);
    p = &D_001A5A5C;
    a = func_096208(&l1);
    b = func_096208(&l2);
    t = D_001A494C;
    if (t <= 9.999999747378752e-05f) {
        v = a;
    } else if (t >= 0.9990000128746033f) {
        v = b;
    } else {
        t2 = t * t;
        v = (int)((float)(b - a) * (t2 * -2.0f * t + t2 * 3.0f)) + a;
    }
    *p = (float)v;
    if (D_001A494C == 1.0f) {
        D_001A4938 = 2;
    }
}
