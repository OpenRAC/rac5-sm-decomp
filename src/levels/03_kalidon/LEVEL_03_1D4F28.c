/* LEVEL_03:0x1D4F28 -- relocates the offset fields of the record behind the object's pointer by the global base (three are dropped when their target is invalid). */
extern int D_0021F414;

typedef struct {
    char pad00[0x2C];
    int w2C;
    int w30;
    int w34;
    int w38;
    int w3C;
    int w40;
    int w44;
    int w48;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Owner;

extern void func_02F758(Rec *rec);

void func_1D4F28(Owner *o)
{
    Rec *r;
    int t;

    r = o->rec;
    func_02F758(r);
    if (r->w3C != 0) {
        r->w3C = D_0021F414 + r->w3C;
    }
    if (r->w40 != 0) {
        r->w40 = D_0021F414 + r->w40;
    }
    if (r->w44 != 0) {
        r->w44 = D_0021F414 + r->w44;
    }
    if (r->w48 != 0) {
        r->w48 = D_0021F414 + r->w48;
    }
    if (r->w2C != 0) {
        t = D_0021F414 + r->w2C;
        if (*(int *)(t + 0x40) == 0) {
            r->w2C = 0;
        } else {
            r->w2C = t;
        }
    }
    if (r->w30 != 0) {
        t = D_0021F414 + r->w30;
        if (*(int *)(t + 0x40) == 0) {
            r->w30 = 0;
        } else {
            r->w30 = t;
        }
    }
    if (r->w34 != 0) {
        t = D_0021F414 + r->w34;
        if (*(int *)(t + 0x40) == 0) {
            r->w34 = 0;
        } else {
            r->w34 = t;
        }
    }
}
