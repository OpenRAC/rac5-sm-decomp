/* USA LEVEL_16:12B570, 220-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 220 bytes: 6 differing words; first difference +0x58. No matching credit.
 * Remaining issue: FP register numbering only (from 8 words): inline Copy3 plus the global read
 * right after r->count-- give retail instruction order; retail names the constants f3/f2 and the
 * y copy f1 (both copies live together in its sched1 order), ours f2/f1/f0; 11 global-read
 * positions, 36 constant-local placements, local-first copies and float* source forms tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_16:0x12B570 -- when the owner has the expected type, copies a position into its effect and arms it. */
struct Vec3 {
    float x, y, z;
};
struct Src {
    char pad[0x24];
    int type;
};
struct Res {
    char pad[0x40];
    int count;
    char pad44[0xB4];
    int id;
};
struct Fx {
    struct Res *res;
    struct Vec3 pos;
    char pad10[4];
    float a;
    float b;
};
struct Owner {
    char pad[0x40];
    struct Src *src;
    char pad44;
    unsigned char mode;
    char pad46[0x12];
    struct Fx *fx;
};
struct Flags {
    char pad[0xD];
    unsigned char v;
};
extern int D_001D04A0;
extern struct Flags D_001DFC30;
extern struct Res *func_0220C8(int a, int b);

static __inline__ void Copy3(struct Vec3 *d, struct Vec3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_12B570(struct Owner *o, struct Vec3 *p)
{
    struct Fx *fx;
    struct Res *r;
    float *d;
    int g;

    if (o->src->type != (int)0x802FD8C8)
        return;
    fx = o->fx;
    r = func_0220C8(6, fx->res->id);
    Copy3(&fx->pos, p);
    r->count--;
    g = D_001D04A0;
    fx->a = 3.000119686126709f;
    fx->b = 0.35000696778297424f;
    o->mode = 5;
    if (g == 9) {
        if ((unsigned char)(D_001DFC30.v - 1) < 0x3F)
            D_001DFC30.v = 0x80;
    }
}
