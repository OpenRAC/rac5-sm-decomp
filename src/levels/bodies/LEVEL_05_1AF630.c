/* LEVEL_05:0x1AF630 -- placement copy of LEVEL_01_1B32A8.c: per-frame effect update: spawns or refreshes an attached effect and notifies hit entries. */
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

extern char D_0038F820[];
extern Group *D_001F7E78;
extern Group *D_001F7E74;

extern int func_069D08(void *a, Vec3 *out);
extern void func_07E1D8(Fx *fx);
extern Tmpl *func_1259E0(unsigned id);
extern void func_07E070(Obj *o, Tmpl *t, Fx **slot, int a, int b, int c, int d, int e,
                        float f0, float f1, float f2, float f3);
extern int func_15FA68(void *p, Vec3 *v);
extern void *func_1AE2D0(void);
extern void func_1ADF38(void *a, void *b);
extern int func_1ADE30(void *p, Vec3 *v);
extern void func_1ADEC8(void *p);

void func_1AF630(Obj *o)
{
    Vec3 v;
    Ent *e;
    Tmpl *t;
    Fx *fx;
    char *p;
    char *end;

    e = o->ent;
    if (func_069D08(D_0038F820, &v) == 0) {
        if (e->fx == 0)
            return;
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f)
            func_07E1D8(e->fx);
        return;
    }
    fx = e->fx;
    if (fx == 0) {
        t = func_1259E0(0x40077AC9);
        if (t)
            func_07E070(o, t, &e->fx, 0, 0, 0, 1, 1, t->a, t->b, t->c, t->d);
        fx = e->fx;
    }
    if (fx) {
        Vec3 *pp = &fx->pos;
        pp->x = v.x;
        pp->y = v.y;
        pp->z = v.z;
        o->timer = 15.0f;
    }
    if (D_001F7E78) {
        int n = D_001F7E78->n;
        char *base = D_001F7E78->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_15FA68(p, &v)) {
                if (func_1AE2D0()) {
                    func_1ADF38(func_1AE2D0(), p);
                    return;
                }
            }
        }
    }
    if (D_001F7E74) {
        int n = D_001F7E74->n;
        char *base = D_001F7E74->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_1ADE30(p, &v)) {
                func_1ADEC8(p);
                break;
            }
        }
    }
}
