/* LEVEL_01:0x031760 -- on every second call projects a point along a direction scaled by a computed speed and, when the move is accepted, updates the object's state. */

struct Obj031760 {
    char pad_00[0x1C];
    float f_1C;
    char pad_20[0x04];
    float f_24;
    unsigned char c_28;
    unsigned char c_29;
};
struct Src031760 {
    char pad_00[0x18];
    float f_18;
    float f_1C;
    float f_20;
};

extern float sqrtf(float x);

int func_0318A8(struct Obj031760 *o, float *p, float *v, void *out);
int func_0319F0(int unused, float *v, struct Src031760 *r);

int func_031760(struct Obj031760 *o, float *p, float *q, struct Src031760 *r, void *out)
{
    float v[3];
    float s;

    o->c_28 = o->c_28 + 1;
    if (o->c_28 >= 2) {
        o->c_28 = 0;
        s = sqrtf(r->f_20 * 2.0f / r->f_1C);
        v[0] = p[0] + q[0] * (s * r->f_18);
        v[1] = p[1] + q[1] * (s * r->f_18);
        v[2] = p[2] + q[2] * (s * r->f_18);
        if (func_0318A8(o, p, v, out) != 0) {
            if (func_0319F0((int)o, v, r) != 0) {
                o->f_1C = r->f_18;
                o->f_24 = s * r->f_1C;
                o->c_29 = 2;
                return 3;
            }
            return 2;
        }
    }
    return 1;
}
