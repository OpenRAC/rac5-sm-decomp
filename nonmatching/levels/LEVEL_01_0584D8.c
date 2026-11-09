/* LEVEL_01.REL:0x0584D8: reviewed 312-byte candidate, held for ABI review.
 * Gathers nearby objects and runs their class callback with a position and a
 * direction record.
 * pinned C with gnu-ee-trial links 312/312 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, int, int, pointer,
 * int, int, float, float), but the accepted caller LEVEL_01_058610.c declares
 * it returning void with (pointer, int, int, float, float, pointer, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Cls_0584D8 {
    char pad_00[0x20];
    void (*cb)(void *o, float f12, int a1, int a2, float *pos, float *dir, int t1);
    int id_24;
};

struct Obj_0584D8 {
    char pad_00[0x40];
    struct Cls_0584D8 *cls;
};

extern int func_01C3E8(void *buf, int n, float *pos, int a3, int t0, int t1, int t2);

static __inline__ void init4_0584D8(float *v, float *src, float w)
{
    v[0] = src[0];
    v[1] = src[1];
    v[2] = src[2];
    v[3] = w;
}

void func_0584D8(float *pos, int a1, int a2, float *dir, int t0, int t1, float f12, float f13)
{
    struct Obj_0584D8 *list[16];
    float p[4];
    float d[4];
    struct Obj_0584D8 **pp;
    struct Obj_0584D8 **end;
    struct Obj_0584D8 *o;
    struct Cls_0584D8 *c;

    end = list + func_01C3E8(list, 0x10, pos, 0x169, 0x101, 0xAE3E, 1);
    init4_0584D8(p, pos, 1.0f);
    init4_0584D8(d, dir, 0.0f);
    for (pp = list; pp != end; pp++) {
        o = *pp;
        c = o->cls;
        if (t1 == 0 || c->id_24 == t1) {
            c->cb(o, f13, a1, a2, p, d, t0);
        }
    }
}
