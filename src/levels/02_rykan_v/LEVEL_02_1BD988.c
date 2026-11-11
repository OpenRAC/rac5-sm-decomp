/* LEVEL_02:0x1BD988 -- relocates the offset fields of the record behind the object's pointer by the global base (two of them are dropped when their target is invalid) and relocates the sub-record in between. */
extern int D_0021BD54;

typedef struct {
    char pad00[0x2C];
    int w2C;
    int w30;
    int w34;
    int w38;
    int w3C;
    int w40;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Owner;

extern void func_030128(Rec *rec);

void func_1BD988(Owner *o)
{
    Rec *r;
    int t;

    r = o->rec;
    if (r->w2C != 0) {
        r->w2C = D_0021BD54 + r->w2C;
    }
    if (r->w34 != 0) {
        t = D_0021BD54 + r->w34;
        if (*(int *)(t + 0x40) == 0) {
            r->w34 = 0;
        } else {
            r->w34 = t;
        }
    }
    func_030128(r);
    if (r->w3C != 0) {
        t = D_0021BD54 + r->w3C;
        if (*(int *)(t + 0x40) == 0) {
            r->w3C = 0;
        } else {
            r->w3C = t;
        }
    }
    if (r->w30 != 0) {
        r->w30 = D_0021BD54 + r->w30;
    }
    if (r->w40 != 0) {
        r->w40 = D_0021BD54 + r->w40;
    }
}
