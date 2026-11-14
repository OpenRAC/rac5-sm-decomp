/* LEVEL_16:0x1704F0 -- runs the record setup helper, then rebases two offset fields of the record by the global base (the first one is dropped when its target is invalid). */
extern int D_001B48A4;

typedef struct {
    char pad00[0x2C];
    int w2C;
    int w30;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern void func_02D780(Rec *rec);

void func_1704F0(Obj *o)
{
    Rec *r;
    int t;

    r = o->rec;
    func_02D780(r);
    if (r->w30 != 0) {
        t = D_001B48A4 + r->w30;
        if (*(int *)(t + 0x40) == 0) {
            r->w30 = 0;
        } else {
            r->w30 = t;
        }
    }
    if (r->w2C != 0) {
        r->w2C = D_001B48A4 + r->w2C;
    }
}
