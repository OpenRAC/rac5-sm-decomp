/* LEVEL_03:0x140D08 -- relocates two offset fields of the object record on the global base (the second kept only when its target is valid) and reports whether exactly one of them ended up set. */
extern int D_0021F414;
struct Rec { char pad00[8]; int w08; int w0C; };
struct Obj { char pad00[0x54]; struct Rec *rec; };

int func_140D08(struct Obj *o)
{
    struct Rec *r = o->rec;
    int t;

    if (r->w08 != 0) {
        r->w08 = D_0021F414 + r->w08;
    }
    if (r->w0C != 0) {
        t = D_0021F414 + r->w0C;
        if (*(int *)(t + 0x40) == 0) {
            r->w0C = 0;
        } else {
            r->w0C = t;
        }
    }
    if (r->w08 == 0 && r->w0C == 0) return 0;
    if (r->w08 != 0 && r->w0C != 0) return 0;
    return 1;
}
