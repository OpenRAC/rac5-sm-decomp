/* LEVEL_19.REL:0x148F50: reviewed 256-byte candidate, held for ABI review.
 * Keeps or reacquires a tracked target based on distance.
 * pinned C with gnu-ee-trial links 256/256 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_037638 returning int with (int), but the accepted
 * LEVEL_01_03C360.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct { int first; } Inner;
typedef struct { char pad0[0x30]; Vec3 pos; char pad1[0x1C]; Inner *inner; char pad2[0x540]; int next; } Tgt;
typedef struct { char pad0[4]; Tgt *cur; } State;
typedef struct { char pad0[0x30]; Vec3 pos; char pad1[0x1C]; State *st; } Obj;
extern int func_037638(int a);
extern Tgt *func_112F38(Vec3 *pos, Vec3 *out);

static inline float dist2(Vec3 *a, Vec3 *b)
{
    float dx, dy, dz;

    dx = a->x - b->x;
    dy = a->y - b->y;
    dz = a->z - b->z;
    return dx * dx + dy * dy + dz * dz;
}

int func_148F50(Obj *o)
{
    State *s;
    Tgt *r;
    Vec3 v;

    s = o->st;
    if (s->cur) {
        if (func_037638(s->cur->inner->first))
            s->cur = 0;
        else if (2500.0f <= dist2(&o->pos, &s->cur->pos))
            s->cur = 0;
    }
    if (s->cur)
        return 1;
    r = func_112F38(&o->pos, &v);
    if (r) {
        if (v.x < 1225.0f)
            s->cur = (Tgt *)r->next;
    }
    return s->cur != 0;
}
