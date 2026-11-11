/* LEVEL_02:0x1D35C0 -- placement copy of LEVEL_01_1B32A8.c: per-frame effect update: spawns or refreshes an attached effect and notifies hit entries. */
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

extern char D_003B02B8[];
extern Group *D_0021DE38;
extern Group *D_0021DE34;

extern int func_071520(void *a, Vec3 *out);
extern void func_087408(Fx *fx);
extern Tmpl *func_130418(unsigned id);
extern void func_0872A0(Obj *o, Tmpl *t, Fx **slot, int a, int b, int c, int d, int e,
                        float f0, float f1, float f2, float f3);
extern int func_180558(void *p, Vec3 *v);
extern void *func_1D2090(void);
extern void func_1D1CF8(void *a, void *b);
extern int func_1D1BF0(void *p, Vec3 *v);
extern void func_1D1C88(void *p);

void func_1D35C0(Obj *o)
{
    Vec3 v;
    Ent *e;
    Tmpl *t;
    Fx *fx;
    char *p;
    char *end;

    e = o->ent;
    if (func_071520(D_003B02B8, &v) == 0) {
        if (e->fx == 0)
            return;
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f)
            func_087408(e->fx);
        return;
    }
    fx = e->fx;
    if (fx == 0) {
        t = func_130418(0x40077AC9);
        if (t)
            func_0872A0(o, t, &e->fx, 0, 0, 0, 1, 1, t->a, t->b, t->c, t->d);
        fx = e->fx;
    }
    if (fx) {
        Vec3 *pp = &fx->pos;
        pp->x = v.x;
        pp->y = v.y;
        pp->z = v.z;
        o->timer = 15.0f;
    }
    if (D_0021DE38) {
        int n = D_0021DE38->n;
        char *base = D_0021DE38->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_180558(p, &v)) {
                if (func_1D2090()) {
                    func_1D1CF8(func_1D2090(), p);
                    return;
                }
            }
        }
    }
    if (D_0021DE34) {
        int n = D_0021DE34->n;
        char *base = D_0021DE34->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_1D1BF0(p, &v)) {
                func_1D1C88(p);
                break;
            }
        }
    }
}
