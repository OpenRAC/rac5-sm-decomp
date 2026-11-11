/* LEVEL_01:0x1596D0 -- relocates the offset fields of the record behind the object's pointer by the global base (two of them are dropped when their target is invalid) and relocates the sub-record in between. */
extern int D_00206D94;

typedef struct {
    char pad00[0x2C];
    int w2C;
    int w30;
    int w34;
    int w38;
    int w3C;
    char pad40[0x48 - 0x40];
    int w48;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Owner;

extern void func_02F8D0(Rec *rec);

void func_1596D0(Owner *o)
{
    Rec *r;
    int t;

    r = o->rec;
    if (r->w2C != 0) {
        r->w2C = D_00206D94 + r->w2C;
    }
    if (r->w30 != 0) {
        r->w30 = D_00206D94 + r->w30;
    }
    if (r->w34 != 0) {
        t = D_00206D94 + r->w34;
        if (*(int *)(t + 0x40) == 0) {
            r->w34 = 0;
        } else {
            r->w34 = t;
        }
    }
    if (r->w38 != 0) {
        t = D_00206D94 + r->w38;
        if (*(int *)(t + 0x40) == 0) {
            r->w38 = 0;
        } else {
            r->w38 = t;
        }
    }
    if (r->w3C != 0) {
        r->w3C = D_00206D94 + r->w3C;
    }
    func_02F8D0(r);
    if (r->w48 != 0) {
        r->w48 = D_00206D94 + r->w48;
    }
}
