/* LEVEL_01:0x18DB98 -- relocates the two offset fields of the object's record by the global base (the second one is dropped when its target is invalid), hands the first to func_1CF728, links the second when valid, starts the matching state and installs the object's hook; returns 0 when the first field is empty, -1 when the second is invalid and the flag byte is clear, otherwise 1. */
extern int D_00206D94;
extern unsigned char D_001F616C;
extern int D_0021A7F0;

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

extern void func_1CF728(void *a, Owner *o, int offset);
extern void func_16F930(char *object, char *member, int value);
extern void func_07CB58(Owner *o, float t, unsigned idx);
extern void func_18DD38(void);

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

int func_18DB98(Owner *o)
{
    Rec *r;
    Aux *p;

    r = o->rec;
    p = o->aux;
    if (Fix(&r->w0) == 0) {
        return 0;
    }
    func_1CF728(p, o, r->w0);
    if (FixChecked(&r->w4) != 0) {
        func_16F930((char *)r->w4, (char *)o, 0);
    } else if (D_001F616C == 0) {
        return -1;
    }
    if (D_0021A7F0 == 1) {
        func_07CB58(o, 0.0f, 8);
    } else {
        func_07CB58(o, 0.0f, 6);
    }
    p->wC = 0;
    o->obj->hook = (void *)func_18DD38;
    return 1;
}
