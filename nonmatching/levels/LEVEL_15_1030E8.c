/* USA LEVEL_15.REL:0x1030E8, 396-byte candidate (21 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x160.
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

typedef struct {
    char pad0[0x118];
    float f118;
} Link;

struct Obj {
    char pad0[4];
    int state;
    float f8;
    float fC;
    char pad10[0x60 - 0x10];
    Vec3 v60;
    Vec3 v6C;
    Vec3 v78;
    char pad84[0x21C - 0x84];
    Vec3 v21C;
    char pad228[0x22C - 0x228];
    float f22C;
    char pad230[0x238 - 0x230];
    float s238[1];
    char pad23C[0x23C - 0x23C];
    Link *link;
    char pad240[0x458 - 0x240];
    char x458[1];
};

extern StateRec *D_0016FB00[1];
extern float D_002ECBA8[];
extern float D_002ECF08;
extern char D_002F3D98[];
extern char D_0016C628[];
extern char D_0016C618[];

extern void func_0FD978(char *dst, char *a, char *b, float scale);
extern void func_1008E8(Obj *item, float *other);
extern void func_0E5BB8(Vec3 *cur, float *state, Vec3 *tgt, float a, float b);
extern void func_0EB9C8(Vec3 *o1, Vec3 *o2, Vec3 *fwd, Vec3 *up, Vec3 *alt);

void func_1030E8(Obj *o)
{
    void (*fn)(Obj *);
    StateRec *s;
    Link *link = o->link;
    char *g = D_002F3D98;
    float t;
    float u;

    if (o->f22C < 0.0f) {
        s = &D_0016FB00[0][o->state];
        fn = s->leave;
        if (fn != 0)
            fn(o);
        o->state = 1;
        fn = D_0016FB00[0][1].enter;
        if (fn != 0)
            fn(o);
        return;
    }
    t = o->fC - 1.0f;
    if (t <= 0.0f) {
        s = &D_0016FB00[0][o->state];
        fn = s->leave;
        if (fn != 0)
            fn(o);
        o->state = 3;
        fn = D_0016FB00[0][3].enter;
        if (fn != 0)
            fn(o);
        return;
    }
    o->fC = t;
    u = o->f8 - 1.0f;
    o->f8 = u;
    if (u <= 0.0f)
        func_0FD978(o->x458, D_0016C628, D_0016C618, link->f118);
    func_1008E8(o, D_002ECBA8);
    func_0E5BB8(&o->v78, o->s238, &o->v21C, 0.3333333432674408f, D_002ECF08);
    func_0EB9C8(&o->v60, &o->v6C, &o->v78, (Vec3 *)(g + 0xC), &o->v60);
}
