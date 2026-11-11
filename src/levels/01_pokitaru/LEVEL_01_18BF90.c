/* LEVEL_01:0x18BF90 -- sets a flag on the object, relocates two offset fields of its record by a global base and clears the nested block when both were set. */
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

extern int D_00206D94;
extern void *memset(void *p, int c, unsigned int n);

int func_18BF90(Obj *o)
{
    Rec *r = o->rec;
    int ok1;
    int ok2;

    o->flags |= 0x20;
    if (r->f0 == 0) {
        ok1 = 0;
    } else {
        r->f0 = D_00206D94 + r->f0;
        ok1 = 1;
    }
    if (!ok1) {
        return 0;
    }
    if (r->f4 == 0) {
        ok2 = 0;
    } else {
        r->f4 = D_00206D94 + r->f4;
        ok2 = 1;
    }
    if (!ok2) {
        return 0;
    }
    memset(o->nested, 0, 0x14);
    return 1;
}
