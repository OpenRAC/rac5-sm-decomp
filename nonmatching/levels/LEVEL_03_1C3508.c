/* USA LEVEL_03.REL:0x1C3508, 592-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 6 differing words; first difference at 0x1C8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad_00[0x30];
    Vec3 pos;
} Obj;

extern Obj D_0024FFC0;
extern float sqrtf(float x);
extern double func_2039D0(float x);
extern int func_203500(double a, double b);
extern double func_202F70(double first, double second);

static __inline__ void Sub(Vec3 *o, Vec3 *p, Vec3 *q)
{
    o->x = p->x - q->x;
    o->y = p->y - q->y;
    o->z = p->z - q->z;
}

static __inline__ void Add(Vec3 *o, Vec3 *p, Vec3 *q)
{
    o->x = p->x + q->x;
    o->y = p->y + q->y;
    o->z = p->z + q->z;
}

void func_1C3508(Obj *a)
{
    Obj *o;
    Vec3 d;
    double t;
    float d2;
    float inv;

    o = &D_0024FFC0;
    Sub(&d, &o->pos, &a->pos);
    t = func_2039D0(d.x);
    if (func_203500(t, 0.0) < 0)
        t = func_202F70(0.0, t);
    if (func_203500(t, 9.0) < 0) {
        t = func_2039D0(d.y);
        if (func_203500(t, 0.0) < 0)
            t = func_202F70(0.0, t);
        if (func_203500(t, 9.0) < 0) {
            t = func_2039D0(d.z);
            if (func_203500(t, 0.0) < 0)
                t = func_202F70(0.0, t);
            if (func_203500(t, 9.0) < 0) {
                d2 = d.x * d.x + d.y * d.y + d.z * d.z;
                if (!(d2 <= 0.0f) && !(d2 >= 9.0f)) {
                    if (!(d2 < 2.3841858e-7f)) {
                        inv = -3.0f / sqrtf(d2);
                        d.x = d.x * inv;
                        d.y = d.y * inv;
                        d.z = d.z * inv;
                    }
                    Add(&a->pos, &o->pos, &d);
                }
            }
        }
    }
}
