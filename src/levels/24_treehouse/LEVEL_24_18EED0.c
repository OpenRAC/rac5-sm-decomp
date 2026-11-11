/* LEVEL_24:0x18EED0 -- placement copy of LEVEL_01_1B32A8.c: per-frame effect update: spawns or refreshes an attached effect and notifies hit entries. */
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

extern char D_00361FA8[];
extern Group *D_001D9C58;
extern Group *D_001D9C54;

extern int func_0656E0(void *a, Vec3 *out);
extern void func_07B218(Fx *fx);
extern Tmpl *func_11FB68(unsigned id);
extern void func_07B0B0(Obj *o, Tmpl *t, Fx **slot, int a, int b, int c, int d, int e,
                        float f0, float f1, float f2, float f3);
extern int func_12B908(void *p, Vec3 *v);
extern void *func_12BA20(void);
extern void func_12BA18(void *a, void *b);
extern int func_12BA10(void *p, Vec3 *v);
extern void func_12BA08(void *p);

void func_18EED0(Obj *o)
{
    Vec3 v;
    Ent *e;
    Tmpl *t;
    Fx *fx;
    char *p;
    char *end;

    e = o->ent;
    if (func_0656E0(D_00361FA8, &v) == 0) {
        if (e->fx == 0)
            return;
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f)
            func_07B218(e->fx);
        return;
    }
    fx = e->fx;
    if (fx == 0) {
        t = func_11FB68(0x40077AC9);
        if (t)
            func_07B0B0(o, t, &e->fx, 0, 0, 0, 1, 1, t->a, t->b, t->c, t->d);
        fx = e->fx;
    }
    if (fx) {
        Vec3 *pp = &fx->pos;
        pp->x = v.x;
        pp->y = v.y;
        pp->z = v.z;
        o->timer = 15.0f;
    }
    if (D_001D9C58) {
        int n = D_001D9C58->n;
        char *base = D_001D9C58->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_12B908(p, &v)) {
                if (func_12BA20()) {
                    func_12BA18(func_12BA20(), p);
                    return;
                }
            }
        }
    }
    if (D_001D9C54) {
        int n = D_001D9C54->n;
        char *base = D_001D9C54->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_12BA10(p, &v)) {
                func_12BA08(p);
                break;
            }
        }
    }
}
