/* LEVEL_01:0x1BF928 -- relocates the two offset fields of the object's record by the global base (the second one is dropped when its target is invalid), hands the first to func_1CF728, links the second when valid and then triggers the object's state 5; returns 0 when the first field is empty, otherwise 1. */
extern int D_00206D94;

typedef struct {
    int w0;
    int w4;
    char pad08[0x40 - 0x08];
    int w40;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    void *p58;
} Owner;

extern void func_1CF728(void *a, Owner *o, int offset);
extern void func_16F930(char *object, char *member, int value);
extern void func_07CB58(Owner *o, float t, unsigned idx);

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = D_00206D94 + *p;
    return 1;
}

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_00206D94 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

int func_1BF928(Owner *o)
{
    Rec *r;
    void *p;

    r = o->rec;
    p = o->p58;
    if (Fix(&r->w0) == 0) {
        return 0;
    }
    func_1CF728(p, o, r->w0);
    if (FixChecked(&r->w4) != 0) {
        func_16F930((char *)r->w4, (char *)o, 0);
    }
    func_07CB58(o, 0.0f, 5);
    return 1;
}
