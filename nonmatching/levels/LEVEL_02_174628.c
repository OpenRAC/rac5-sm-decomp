/* USA LEVEL_02.REL:0x174628 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_174828 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
struct Sub { char pad_00[0x10]; unsigned char b_10; };
struct Obj {
    char pad_00[0x30];
    float pos[4];
    char pad_40[5];
    unsigned char state;
    char pad_46[0x54 - 0x46];
    struct Sub *sub;
};
struct Ref { char pad_00[0x30]; float pos[3]; };

extern struct Ref D_0024C650;
extern void func_174828(void *o);
extern void func_1749B0(void *o);
extern void func_174818(void *o);
extern void func_174860(void *o, float dt);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

static __inline__ float Dist2(struct Ref *r, float *b)
{
    float *a = r->pos;
    float dx = a[0] - b[0];
    float dy = a[1] - b[1];
    float dz = a[2] - b[2];

    return dx * dx + dy * dy + dz * dz;
}

void func_174628(struct Obj *o, float dt)
{
    struct Sub *s;
    float tmp[4];

    s = o->sub;
    switch (o->state) {
    case 0:
        o->state = 1;
        break;
    case 1:
        func_174828(o);
        break;
    case 2:
        func_1749B0(o);
        break;
    }
    if (s->b_10 == 0) {
        Copy4(tmp, o->pos);
        if (Dist2(&D_0024C650, tmp) < 1.21f) {
            func_174818(o);
        }
    } else {
        func_174860(o, dt);
    }
}
