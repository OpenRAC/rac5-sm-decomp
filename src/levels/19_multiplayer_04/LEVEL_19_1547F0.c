/* LEVEL_19:0x1547F0 -- relocates the offset fields of the record behind the object's pointer by the global base (two of them are dropped when their target is invalid), with a helper call in between. */
extern int D_001B5A24;

typedef struct {
    char pad00[0x2C];
    int w2C;
    int w30;
    int w34;
    int w38;
    int w3C;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Owner;

extern void func_02D528(Rec *rec);

void func_1547F0(Owner *o)
{
    Rec *r;
    int t;

    r = o->rec;
    if (r->w2C != 0) {
        r->w2C = D_001B5A24 + r->w2C;
    }
    if (r->w30 != 0) {
        t = D_001B5A24 + r->w30;
        if (*(int *)(t + 0x40) == 0) {
            r->w30 = 0;
        } else {
            r->w30 = t;
        }
    }
    func_02D528(r);
    if (r->w38 != 0) {
        r->w38 = D_001B5A24 + r->w38;
    }
    if (r->w3C != 0) {
        t = D_001B5A24 + r->w3C;
        if (*(int *)(t + 0x40) == 0) {
            r->w3C = 0;
        } else {
            r->w3C = t;
        }
    }
}
