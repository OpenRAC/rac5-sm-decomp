/* LEVEL_07:0x1C82B0 -- placement copy of LEVEL_02_1D0D80.c: relocates the offset fields of the record behind the object's pointer by the global base (two are dropped when their target is invalid). */
extern int D_0021B094;

typedef struct {
    char pad00[0x34];
    int w34;
    int w38;
    int w3C;
    int w40;
    int w44;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Owner;

extern void func_030FE8(Rec *rec);

void func_1C82B0(Owner *o)
{
    Rec *r;
    int t;

    r = o->rec;
    func_030FE8(r);
    if (r->w34 != 0) {
        r->w34 = D_0021B094 + r->w34;
    }
    if (r->w38 != 0) {
        r->w38 = D_0021B094 + r->w38;
    }
    if (r->w3C != 0) {
        t = D_0021B094 + r->w3C;
        if (*(int *)(t + 0x40) == 0) {
            r->w3C = 0;
        } else {
            r->w3C = t;
        }
    }
    if (r->w40 != 0) {
        t = D_0021B094 + r->w40;
        if (*(int *)(t + 0x40) == 0) {
            r->w40 = 0;
        } else {
            r->w40 = t;
        }
    }
    if (r->w44 != 0) {
        r->w44 = D_0021B094 + r->w44;
    }
}
