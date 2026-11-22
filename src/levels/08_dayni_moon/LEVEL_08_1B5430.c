/* LEVEL_08:0x1B5430 -- placement copy of LEVEL_01_18DB98.c: relocates the two offset fields of the object's record by the global base (the second one is dropped when its target is invalid), hands the first to func_20BDE8, links the second when valid, starts the matching state and installs the object's hook; returns 0 when the first field is empty, -1 when the second is invalid and the flag byte is clear, otherwise 1. */
extern int D_0024FC54;
extern unsigned char D_0023F02C;
extern int D_00264470;

typedef struct {
    int w0;
    int w4;
    char pad08[0x40 - 0x08];
    int w40;
} Rec;

typedef struct {
    char pad00[0xC];
    int wC;
} Aux;

typedef struct {
    char pad00[0xDC];
    void *hook;
} Obj;

typedef struct {
    char pad00[0x48];
    Obj *obj;
    char pad4C[8];
    Rec *rec;
    Aux *aux;
} Owner;

extern void func_20BDE8(void *a, Owner *o, int offset);
extern void func_188C70(char *object, char *member, int value);
extern void func_084AC8(Owner *o, float t, unsigned idx);
extern void func_1B55D0(void);

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = D_0024FC54 + *p;
    return 1;
}

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_0024FC54 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

int func_1B5430(Owner *o)
{
    Rec *r;
    Aux *p;

    r = o->rec;
    p = o->aux;
    if (Fix(&r->w0) == 0) {
        return 0;
    }
    func_20BDE8(p, o, r->w0);
    if (FixChecked(&r->w4) != 0) {
        func_188C70((char *)r->w4, (char *)o, 0);
    } else if (D_0023F02C == 0) {
        return -1;
    }
    if (D_00264470 == 1) {
        func_084AC8(o, 0.0f, 8);
    } else {
        func_084AC8(o, 0.0f, 6);
    }
    p->wC = 0;
    o->obj->hook = (void *)func_1B55D0;
    return 1;
}
