/* USA LEVEL_16:1669E0, 224-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial, assembler gnu-ee-trial; options: -fno-schedule-insns.
 * Compiled 224 bytes: 3 differing words; first difference +0x5C. No matching credit.
 * Remaining issue: scheduling: argument moves a0/a2 vs the three diagonal stores before
 * func_1040F8 (retail a1,a0,sw20,a2,sw0 + sw10 in the delay slot); gnu-ee-trial fixes the ra/f20
 * prologue; 6 store orders x matrix forms (float[9], [3][3], struct, pointer local, inline
 * SetScale with memset) x sched on/off: best 3 words
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_16:0x1669E0 -- attaches a target to an object, sets a half-scale matrix and optionally forwards the target's four floats. */
struct Link {
    int target;
    char pad4[0x3C];
    unsigned int flags;
};
struct Obj {
    char pad0[0x45];
    char mode;
    char pad46[0x12];
    struct Link *link;
};
struct Params {
    char pad0[0x14];
    float a, b, c, d;
};
struct G { struct Params *p; };
extern struct G D_001BE014;
extern void *memset(void *p, int c, unsigned int n);
extern void func_0380F8(int target, struct Obj *o);
extern void func_1040F8(struct Obj *a, struct Obj *b, float *m);
extern void func_117290(int target);
extern void func_073518(struct Obj *o, struct Params *p, float a, float b, float c, float d,
                        int i0, int i1, int i2, int i3, int i4, int i5);

void func_1669E0(struct Obj *o, int target)
{
    struct Link *l = o->link;
    float m[9];
    float h;
    struct Params *p;

    if (target) {
        func_0380F8(target, o);
        h = 0.5f;
        l->target = target;
        o->mode = 3;
        memset(m, 0, 0x24);
        m[4] = h;
        m[8] = h;
        m[0] = h;
        func_1040F8(o, o, m);
        func_117290(target);
        l->flags |= 1;
        p = D_001BE014.p;
        if (p)
            func_073518(o, p, p->a, p->b, p->c, p->d, 0, 0, 0, 0, 0, 1);
    }
}
