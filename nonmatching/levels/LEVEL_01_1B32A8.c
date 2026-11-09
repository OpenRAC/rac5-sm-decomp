/* LEVEL_01.REL:0x1B32A8: reviewed 448-byte candidate, held for ABI review.
 * Per-frame effect update: spawns or refreshes an attached effect and notifies
 * hit entries.
 * pinned C with gnu-ee-trial links 448/448 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning pointer with (int), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * It declares func_135E68 returning int with (pointer, pointer), but the
 * accepted FRONTEND_0025B0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern char D_003981B0[];
extern Group *D_00208DD8;
extern Group *D_00208DD4;

extern int func_06C0A0(void *a, Vec3 *out);
extern void func_080B38(Fx *fx);
extern Tmpl *func_12A068(unsigned id);
extern void func_0809D0(Obj *o, Tmpl *t, Fx **slot, int a, int b, int c, int d, int e,
                        float f0, float f1, float f2, float f3);
extern int func_135E68(void *p, Vec3 *v);
extern void *func_135FF0(void);
extern void func_135FE8(void *a, void *b);
extern int func_135FE0(void *p, Vec3 *v);
extern void func_135FD8(void *p);

void func_1B32A8(Obj *o)
{
    Vec3 v;
    Ent *e;
    Tmpl *t;
    Fx *fx;
    char *p;
    char *end;

    e = o->ent;
    if (func_06C0A0(D_003981B0, &v) == 0) {
        if (e->fx == 0)
            return;
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f)
            func_080B38(e->fx);
        return;
    }
    fx = e->fx;
    if (fx == 0) {
        t = func_12A068(0x40077AC9);
        if (t)
            func_0809D0(o, t, &e->fx, 0, 0, 0, 1, 1, t->a, t->b, t->c, t->d);
        fx = e->fx;
    }
    if (fx) {
        Vec3 *pp = &fx->pos;
        pp->x = v.x;
        pp->y = v.y;
        pp->z = v.z;
        o->timer = 15.0f;
    }
    if (D_00208DD8) {
        int n = D_00208DD8->n;
        char *base = D_00208DD8->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_135E68(p, &v)) {
                if (func_135FF0()) {
                    func_135FE8(func_135FF0(), p);
                    return;
                }
            }
        }
    }
    if (D_00208DD4) {
        int n = D_00208DD4->n;
        char *base = D_00208DD4->base;
        end = base + (n << 7);
        for (p = base; p != end; p += 0x80) {
            if (func_135FE0(p, &v)) {
                func_135FD8(p);
                break;
            }
        }
    }
}
