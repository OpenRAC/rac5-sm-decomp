/* LEVEL_10:0x1E1860 -- relocates the offset fields of the record behind the object's pointer by the global base (the pointer fields are dropped when their target is invalid) and relocates the sub-record after the first field. */
extern int D_0020F9F4;

typedef struct {
    char pad00[0x2C];
    int w2C;
    int w30;
    char pad34[4];
    int w38;
    int w3C;
    int w40;
    int w44;
    int w48;
    int w4C;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Owner;

extern void func_02F7F0(Rec *rec);

void func_1E1860(Owner *o)
{
    Rec *r;
    int t;

    r = o->rec;
    if (r->w2C != 0) {
        r->w2C = D_0020F9F4 + r->w2C;
    }
    func_02F7F0(r);
    if (r->w30 != 0) {
        t = D_0020F9F4 + r->w30;
        if (*(int *)(t + 0x40) == 0) {
            r->w30 = 0;
        } else {
            r->w30 = t;
        }
    }
    if (r->w38 != 0) {
        r->w38 = D_0020F9F4 + r->w38;
    }
    if (r->w3C != 0) {
        r->w3C = D_0020F9F4 + r->w3C;
    }
    if (r->w40 != 0) {
        t = D_0020F9F4 + r->w40;
        if (*(int *)(t + 0x40) == 0) {
            r->w40 = 0;
        } else {
            r->w40 = t;
        }
    }
    if (r->w44 != 0) {
        t = D_0020F9F4 + r->w44;
        if (*(int *)(t + 0x40) == 0) {
            r->w44 = 0;
        } else {
            r->w44 = t;
        }
    }
    if (r->w48 != 0) {
        t = D_0020F9F4 + r->w48;
        if (*(int *)(t + 0x40) == 0) {
            r->w48 = 0;
        } else {
            r->w48 = t;
        }
    }
    if (r->w4C != 0) {
        t = D_0020F9F4 + r->w4C;
        if (*(int *)(t + 0x40) == 0) {
            r->w4C = 0;
        } else {
            r->w4C = t;
        }
    }
}
