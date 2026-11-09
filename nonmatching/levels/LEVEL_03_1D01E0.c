/* LEVEL_03.REL:0x1D01E0: reviewed 316-byte candidate, held for ABI review.
 * Picks an action from the squared distance to a point and attaches a found
 * object when far enough.
 * gnu-ee-trial C with gnu-ee-trial links 316/316 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_1D41D0 returning void with (pointer, pointer), but the
 * accepted LEVEL_03_1D41D0.c defines it returning int with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Link1D01E0 {
    char pad0[0x40];
    void *p40;
};

struct Obj1D01E0 {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x1C];
    struct Link1D01E0 *p58;
};

extern void func_01A0B0(float *v);
extern void *func_1D0AD8(struct Obj1D01E0 *o, float *lim);
extern void func_1D41D0(void *r, struct Obj1D01E0 *o);
extern void func_1CFE00(struct Obj1D01E0 *o, int act);

static __inline__ void sub3_1D01E0(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

void func_1D01E0(struct Obj1D01E0 *o)
{
    struct Link1D01E0 *l;
    float p[3];
    float d[3];
    float dist;

    l = o->p58;
    func_01A0B0(p);
    sub3_1D01E0(d, p, o->pos);
    dist = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (dist <= 25.0f) {
        func_1CFE00(o, 0xD);
    } else if (dist <= 225.0f) {
        float lim;
        void *r;

        lim = 0.0f;
        r = func_1D0AD8(o, &lim);
        if (r == 0 || dist < lim) {
            func_1CFE00(o, 0xD);
        } else {
            l->p40 = r;
            func_1D41D0(r, o);
            func_1CFE00(o, 0x15);
        }
    } else {
        float lim2;
        void *r2;

        lim2 = 0.0f;
        r2 = func_1D0AD8(o, &lim2);
        if (r2 == 0) {
            func_1CFE00(o, 0xD);
        } else {
            l->p40 = r2;
            func_1D41D0(r2, o);
            func_1CFE00(o, 0x15);
        }
    }
}
