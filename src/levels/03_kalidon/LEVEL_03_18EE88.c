/* LEVEL_03:0x18EE88 -- turns the object's stored offset into a pointer when its target is valid and active (clearing it otherwise), then sets two flags on the target and reports 1. */
typedef struct Target {
    char pad00[0x40];
    unsigned int kind;
    char pad44[0x20];
    unsigned int flags;
} Target;

typedef union Ref {
    unsigned int offset;
    Target *target;
} Ref;

extern char *D_0021F414;

static __inline__ int Resolve(Ref *r)
{
    Target *p;

    if (r->offset == 0) {
        return 0;
    }
    p = (Target *)(D_0021F414 + r->offset);
    if (p->kind == 0) {
        r->target = 0;
        return 0;
    }
    if (!(p->flags & 1)) {
        r->target = 0;
        return 0;
    }
    r->target = p;
    return 1;
}

int func_18EE88(Ref *r)
{
    if (Resolve(r)) {
        r->target->flags |= 0x20;
        r->target->flags |= 8;
        return 1;
    }
    return 0;
}
