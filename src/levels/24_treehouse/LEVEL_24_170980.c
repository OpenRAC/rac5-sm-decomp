/* LEVEL_24:0x170980 -- placement copy of LEVEL_04_19A560.c: relocates two offset fields of the object's record by a global base, keeping the first only when its target is valid. */
typedef struct {
    int f0;
    int f4;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int D_001D7A14;

void func_170980(Obj *o)
{
    Rec *r = o->rec;
    int t;

    if (r->f0 != 0) {
        t = D_001D7A14 + r->f0;
        if (*(int *)(t + 0x40) == 0) {
            r->f0 = 0;
        } else {
            r->f0 = t;
        }
    }
    if (r->f4 != 0) {
        r->f4 = D_001D7A14 + r->f4;
    }
}
