/* LEVEL_04:0x1E5E58 -- advances a fractional counter and spawns one effect per whole step from a mirrored orientation. */

struct Fx1E5E58 {
    float m[16];
    float f_40;
    float f_44;
    float f_48;
    void *p_4C;
};
struct Obj1E5E58 {
    char pad_00[0x1C];
    float f_1C;
};
struct Src1E5E58 {
    char pad_00[0x34];
    float f_34;
};

extern float floorf(float x);
extern char D_003B3E98[];
extern void *D_0022285C;

float func_080418(struct Src1E5E58 *s, struct Fx1E5E58 *fx, int idx);
void func_110458(void *g, struct Fx1E5E58 *fx, int n, float a, float b);

void func_1E5E58(struct Obj1E5E58 *o, struct Src1E5E58 *s)
{
    struct Fx1E5E58 fx;
    float old;
    float t;
    float fl;
    float k;
    float z;
    void *g;

    k = 0.019999997690320015f;
    z = 0.0f;
    func_080418(s, &fx, 9);
    old = o->f_1C;
    fx.m[8] = -fx.m[8];
    fx.m[9] = -fx.m[9];
    fx.m[10] = -fx.m[10];
    fx.f_40 = 0.30000001192092896f;
    fx.f_48 = s->f_34 + 0.10000000149011612f;
    fx.p_4C = D_003B3E98;
    fx.f_44 = 0.1745329350233078f;
    g = D_0022285C;
    t = old + 50.000003814697266f;
    fl = floorf(t);
    if (fl > z) {
        func_110458(g, &fx, (int)fl, (1.0f - old) * k, k);
        o->f_1C = t - fl;
    } else {
        o->f_1C = t;
    }
}
