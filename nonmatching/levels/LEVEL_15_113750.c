/* USA LEVEL_15.REL:0x113750, 352-byte candidate (21 November 2026).
 * Measured pinned: 15 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct Obj Obj;

typedef struct {
    char pad0[8];
    void (*enter)(Obj *o);
    void (*leave)(Obj *o);
    char pad10[0x1C - 0x10];
} StateRec;

struct Obj {
    char pad0[4];
    int state;
    float f8;
    float fC;
    char pad10[0x7C - 0x10];
    Vec3 v7C;
    Vec3 v88;
    Vec3 v94;
    char padA0[0x238 - 0xA0];
    Vec3 v238;
    char pad244[0x248 - 0x244];
    float f248;
    char pad24C[0x250 - 0x24C];
    float s250[1];
};

extern StateRec *D_00170328[1];
extern float D_002ECBA8[];
extern char D_002F3D98[];

extern void func_110B20(Obj *o, float *p);
extern void func_0E5BB8(Vec3 *cur, float *state, Vec3 *tgt, float a, float b);
extern void func_0EB9C8(Vec3 *o1, Vec3 *o2, Vec3 *fwd, Vec3 *up, Vec3 *alt);

void func_113750(Obj *o)
{
    void (*fn)(Obj *);
    StateRec *s;
    float t;
    char *g = D_002F3D98;

    o->f8 = o->f8 - 1.0f;
    func_110B20(o, D_002ECBA8);
    func_0E5BB8(&o->v94, o->s250, &o->v238, 0.1666666716337204f, 0.8464816808700562f);
    func_0EB9C8(&o->v7C, &o->v88, &o->v94, (Vec3 *)(g + 0xC), &o->v7C);
    if (o->f248 < 0.0f) {
        s = &D_00170328[0][o->state];
        fn = s->leave;
        if (fn != 0)
            fn(o);
        o->state = 2;
        fn = D_00170328[0][2].enter;
        if (fn != 0)
            fn(o);
    } else {
        t = o->fC - 1.0f;
        if (t <= 0.0f) {
            s = &D_00170328[0][o->state];
        fn = s->leave;
            if (fn != 0)
                fn(o);
            o->state = 4;
            fn = D_00170328[0][4].enter;
            if (fn != 0)
                fn(o);
        } else {
            o->fC = t;
        }
    }
}
