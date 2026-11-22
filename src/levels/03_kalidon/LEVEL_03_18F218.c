/* LEVEL_03:0x18F218 -- resolves the record's four offset fields against a global base (clearing the first when its target is unnamed), flags the object, marks the resolved target, clears the nested four-word block and caches the lookup result; returns 1, or 0 when a field was unset. */
typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
} Rec;

typedef struct {
    char pad00[0x40];
    int named_40;
    char pad44[2];
    unsigned char mark_46;
} Target;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    int *nested;
    char pad5C[8];
    unsigned int flags_64;
    char pad68[8];
    int w_70;
} Obj;

extern char *D_0021F414;
extern int D_003B1BE8;
extern int func_1282D0(unsigned int key);

int func_18F218(Obj *o)
{
    Rec *r = o->rec;
    int *nested = o->nested;
    int *p;
    char *target;
    int ok1;
    int ok2;
    int ok3;
    int ok4;
    unsigned int j;

    if (r->f0 == 0) {
        ok1 = 0;
    } else {
        target = D_0021F414 + r->f0;
        if (*(int *)(target + 0x40) == 0) {
            r->f0 = 0;
            ok1 = 0;
        } else {
            r->f0 = (int)target;
            ok1 = 1;
        }
    }
    if (!ok1)
        return 0;
    if (r->f4 == 0) {
        ok2 = 0;
    } else {
        r->f4 = (int)D_0021F414 + r->f4;
        ok2 = 1;
    }
    if (!ok2)
        return 0;
    if (r->f8 == 0) {
        ok3 = 0;
    } else {
        r->f8 = (int)D_0021F414 + r->f8;
        ok3 = 1;
    }
    if (!ok3)
        return 0;
    if (r->fC == 0) {
        ok4 = 0;
    } else {
        r->fC = (int)D_0021F414 + r->fC;
        ok4 = 1;
    }
    if (!ok4)
        return 0;
    o->flags_64 |= 0x20;
    ((Target *)r->f0)->mark_46 = 1;
    p = nested;
    for (j = 0; j < 4; j++)
        *p++ = 0;
    o->w_70 = 0;
    D_003B1BE8 = func_1282D0(0x4928A48A);
    return 1;
}
