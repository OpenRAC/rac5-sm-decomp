/* LEVEL_23:0x1967A0 -- placement copy of LEVEL_01_1B32A8.c: per-frame effect update: spawns or refreshes an attached effect and notifies hit entries. */
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

extern char D_003663C8[];
extern Group *D_001DC1E8;
extern Group *D_001DC1E4;

extern int func_065848(void *a, Vec3 *out);
extern void func_077F38(Fx *fx);
extern Tmpl *func_11AEE0(unsigned id);
extern void func_077DD0(Obj *o, Tmpl *t, Fx **slot, int a, int b, int c, int d, int e,
                        float f0, float f1, float f2, float f3);
extern int func_1275F8(void *p, Vec3 *v);
extern void *func_127730(void);
extern void func_127728(void *a, void *b);
extern int func_127720(void *p, Vec3 *v);
extern void func_127718(void *p);

void func_1967A0(Obj *o)
{
    Vec3 v;
    Ent *e;
    Tmpl *t;
    Fx *fx;
    char *p;
    char *end;

    e = o->ent;
    if (func_065848(D_003663C8, &v) == 0) {
        if (e->fx == 0)
            return;
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f)
            func_077F38(e->fx);
        return;
    }
    fx = e->fx;
    if (fx == 0) {
        t = func_11AEE0(0x40077AC9);
        if (t)
            func_077DD0(o, t, &e->fx, 0, 0, 0, 1, 1, t->a, t->b, t->c, t->d);
        fx = e->fx;
    }
    if (fx) {
        Vec3 *pp = &fx->pos;
        pp->x = v.x;
        pp->y = v.y;
        pp->z = v.z;
        o->timer = 15.0f;
    }
    if (D_001DC1E8) {
        int n = D_001DC1E8->n;
        char *base = D_001DC1E8->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_1275F8(p, &v)) {
                if (func_127730()) {
                    func_127728(func_127730(), p);
                    return;
                }
            }
        }
    }
    if (D_001DC1E4) {
        int n = D_001DC1E4->n;
        char *base = D_001DC1E4->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_127720(p, &v)) {
                func_127718(p);
                break;
            }
        }
    }
}
