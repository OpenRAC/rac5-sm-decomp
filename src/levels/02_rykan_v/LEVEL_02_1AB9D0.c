/* LEVEL_02:0x1AB9D0 -- relocates the offset fields of the object's record by the global base (the pointer fields are dropped when their target is invalid), returns 0 when the first two are empty, then asks func_027D10 about the object's mode and clears its flag byte when it answers no; returns 1 on that path. */
extern int D_0021BD54;
extern int D_0022F770;

typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0x54 - 0x47];
    Rec *rec;
} Owner;

extern int func_027D10(int a, int b);

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = D_0021BD54 + *p;
    return 1;
}

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_0021BD54 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

static __inline__ void FixDrop(int *p)
{
    int t;

    if (*p != 0) {
        t = D_0021BD54 + *p;
        if (*(int *)(t + 0x40) == 0) {
            *p = 0;
        } else {
            *p = t;
        }
    }
}

int func_1AB9D0(Owner *o)
{
    Rec *r;
    int sel;
    int m;

    r = o->rec;
    if (Fix(&r->w4) == 0) {
        return 0;
    }
    if (FixChecked(&r->w0) == 0) {
        return 0;
    }
    FixDrop(&r->w8);
    FixDrop(&r->wC);
    m = o->b45;
    sel = D_0022F770;
    if (sel == 0x16) {
        sel = 3;
    } else if (sel == 0x17) {
        sel = 6;
    }
    if (func_027D10(sel * 2 + 2, m) != 0) {
        return 0;
    }
    o->b46 = 0;
    return 1;
}
