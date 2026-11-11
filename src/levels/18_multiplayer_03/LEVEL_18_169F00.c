/* LEVEL_18:0x169F00 -- placement copy of LEVEL_17_15D890.c: advances an angle-like field by a rate, wrapping it into (-pi, pi]. */
struct Inner {
    char pad0[0x14];
    float f14;
    char pad1[4];
    float f1c;
    unsigned char b20;
};

struct Outer {
    char pad[0x58];
    struct Inner *in;
};

struct Outer *func_167FF0(int id);
extern float D_001E09AC;

void func_169F00(int id)
{
    struct Outer *o;
    struct Inner *a;
    float f3;
    float f0;

    o = func_167FF0(id);
    if (o == 0) {
        return;
    }
    a = o->in;
    f3 = D_001E09AC;
    if (a->b20 != 0) {
        a->b20 = 0;
        return;
    }
    a->f1c = a->f1c - f3 / 0.3f;
    if (a->f1c > 0.0f) {
        a->f14 = -3.14159265f;
        return;
    }
    f0 = a->f14 + f3 * 6.28318548f;
    a->f14 = f0;
    if (3.14159265f < f0) {
        f0 = f0 - 6.28318548f;
        a->f14 = f0;
    }
}
