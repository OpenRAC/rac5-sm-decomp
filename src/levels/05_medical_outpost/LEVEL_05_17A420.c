/* LEVEL_05:0x17A420 -- placement copy of LEVEL_01_18BF90.c: sets a flag on the object, relocates two offset fields of its record by a global base and clears the nested block when both were set. */
typedef struct {
    int f0;
    int f4;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    char *nested;
    char pad5C[8];
    unsigned int flags;
} Obj;

extern int D_001F5E14;
extern void *memset(void *p, int c, unsigned int n);

int func_17A420(Obj *o)
{
    Rec *r = o->rec;
    int ok1;
    int ok2;

    o->flags |= 0x20;
    if (r->f0 == 0) {
        ok1 = 0;
    } else {
        r->f0 = D_001F5E14 + r->f0;
        ok1 = 1;
    }
    if (!ok1) {
        return 0;
    }
    if (r->f4 == 0) {
        ok2 = 0;
    } else {
        r->f4 = D_001F5E14 + r->f4;
        ok2 = 1;
    }
    if (!ok2) {
        return 0;
    }
    memset(o->nested, 0, 0x14);
    return 1;
}
