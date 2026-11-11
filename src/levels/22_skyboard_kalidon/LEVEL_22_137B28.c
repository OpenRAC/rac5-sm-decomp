/* LEVEL_22:0x137B28 -- placement copy of LEVEL_01_1B32A8.c: per-frame effect update: spawns or refreshes an attached effect and notifies hit entries. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[0x24];
    Vec3 pos;
} Fx;

typedef struct {
    char pad0[0xC];
    Fx *fx;
} Ent;

typedef struct {
    char pad0[0x58];
    Ent *ent;
    char pad1[0x70 - 0x5C];
    float timer;
} Obj;

typedef struct {
    char pad0[0x14];
    float a, b, c, d;
} Tmpl;

typedef struct {
    char pad0[0xC];
    char *base;
    char pad1[0x30 - 0x10];
    int n;
} Group;

extern char D_002E80D0[];
extern Group *D_00166920;
extern Group *D_0016691C;

extern int func_0613B8(void *a, Vec3 *out);
extern void func_073510(Fx *fx);
extern Tmpl *func_100C58(unsigned id);
extern void func_0733A8(Obj *o, Tmpl *t, Fx **slot, int a, int b, int c, int d, int e,
                        float f0, float f1, float f2, float f3);
extern int func_10D348(void *p, Vec3 *v);
extern void *func_10D4A0(void);
extern void func_10D498(void *a, void *b);
extern int func_10D490(void *p, Vec3 *v);
extern void func_10D488(void *p);

void func_137B28(Obj *o)
{
    Vec3 v;
    Ent *e;
    Tmpl *t;
    Fx *fx;
    char *p;
    char *end;

    e = o->ent;
    if (func_0613B8(D_002E80D0, &v) == 0) {
        if (e->fx == 0)
            return;
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f)
            func_073510(e->fx);
        return;
    }
    fx = e->fx;
    if (fx == 0) {
        t = func_100C58(0x40077AC9);
        if (t)
            func_0733A8(o, t, &e->fx, 0, 0, 0, 1, 1, t->a, t->b, t->c, t->d);
        fx = e->fx;
    }
    if (fx) {
        Vec3 *pp = &fx->pos;
        pp->x = v.x;
        pp->y = v.y;
        pp->z = v.z;
        o->timer = 15.0f;
    }
    if (D_00166920) {
        int n = D_00166920->n;
        char *base = D_00166920->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_10D348(p, &v)) {
                if (func_10D4A0()) {
                    func_10D498(func_10D4A0(), p);
                    return;
                }
            }
        }
    }
    if (D_0016691C) {
        int n = D_0016691C->n;
        char *base = D_0016691C->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_10D490(p, &v)) {
                func_10D488(p);
                break;
            }
        }
    }
}
