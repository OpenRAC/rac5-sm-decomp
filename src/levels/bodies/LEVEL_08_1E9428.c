/* LEVEL_08:0x1E9428 -- placement copy of LEVEL_01_1B32A8.c: per-frame effect update: spawns or refreshes an attached effect and notifies hit entries. */
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

extern char D_003EA7C8[];
extern Group *D_00252560;
extern Group *D_0025255C;

extern int func_0718E8(void *a, Vec3 *out);
extern void func_088AA8(Fx *fx);
extern Tmpl *func_13B5A0(unsigned id);
extern void func_088940(Obj *o, Tmpl *t, Fx **slot, int a, int b, int c, int d, int e,
                        float f0, float f1, float f2, float f3);
extern int func_181978(void *p, Vec3 *v);
extern void *func_1E7EF8(void);
extern void func_1E7B60(void *a, void *b);
extern int func_1E7A58(void *p, Vec3 *v);
extern void func_1E7AF0(void *p);

void func_1E9428(Obj *o)
{
    Vec3 v;
    Ent *e;
    Tmpl *t;
    Fx *fx;
    char *p;
    char *end;

    e = o->ent;
    if (func_0718E8(D_003EA7C8, &v) == 0) {
        if (e->fx == 0)
            return;
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f)
            func_088AA8(e->fx);
        return;
    }
    fx = e->fx;
    if (fx == 0) {
        t = func_13B5A0(0x40077AC9);
        if (t)
            func_088940(o, t, &e->fx, 0, 0, 0, 1, 1, t->a, t->b, t->c, t->d);
        fx = e->fx;
    }
    if (fx) {
        Vec3 *pp = &fx->pos;
        pp->x = v.x;
        pp->y = v.y;
        pp->z = v.z;
        o->timer = 15.0f;
    }
    if (D_00252560) {
        int n = D_00252560->n;
        char *base = D_00252560->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_181978(p, &v)) {
                if (func_1E7EF8()) {
                    func_1E7B60(func_1E7EF8(), p);
                    return;
                }
            }
        }
    }
    if (D_0025255C) {
        int n = D_0025255C->n;
        char *base = D_0025255C->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_1E7A58(p, &v)) {
                func_1E7AF0(p);
                break;
            }
        }
    }
}
