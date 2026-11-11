/* LEVEL_01:0x190838 -- relocates the first offset field of the object's record by a global base and, when it was set, the second one too; returns whether it was set. */
typedef struct {
    int f0;
    int f4;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int D_00206D94;

int func_190838(Obj *o)
{
    Rec *r = o->rec;
    int ok;

    if (r->f0 == 0) {
        ok = 0;
    } else {
        r->f0 = D_00206D94 + r->f0;
        ok = 1;
    }
    if (!ok) {
        return 0;
    }
    if (r->f4 != 0) {
        r->f4 = D_00206D94 + r->f4;
    }
    return 1;
}
