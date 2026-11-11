/* LEVEL_04:0x1D7078 -- picks the contact response for a pair of objects from their facing against a normal. */
typedef struct {
    char pad0[0x20];
    float f20;
    char pad1[0x28 - 0x24];
    float f28;
} Obj;

typedef struct {
    int f0;
    int f4;
    void (*cb)(Obj *self, Obj *other);
} Tbl;

typedef struct {
    Obj *obj;
    Tbl *tbl;
} Side;

extern void func_1D6D40(Side *a, float *pa, Side *b, float *pb, float *x, float *y, float t);

void func_1D7078(Side *a, float *pa, Side *b, float *pb, float *n, float t)
{
    Obj *oa;
    Obj *ob;
    Tbl *ta;
    Tbl *tb;

    oa = a->obj;
    ta = a->tbl;
    ob = b->obj;
    tb = b->tbl;
    if (n[0] * oa->f20 + n[1] * oa->f28 >= 0.7071067690849304f) {
        if (n[0] * ob->f20 + n[1] * ob->f28 <= -0.7071067690849304f) {
            if (ta->cb != 0) {
                ta->cb(oa, ob);
            }
            if (tb->cb != 0) {
                tb->cb(ob, oa);
            }
            func_1D6D40(a, pa, b, pb, n, n, t);
        } else {
            if (ta->cb != 0) {
                ta->cb(oa, ob);
            }
            func_1D6D40(a, pa, b, pb, pa + 2, n, t);
        }
    } else {
        if (n[0] * ob->f20 + n[1] * ob->f28 <= -0.7071067690849304f) {
            if (tb->cb != 0) {
                tb->cb(ob, oa);
            }
            func_1D6D40(a, pa, b, pb, pb + 2, n, t);
        } else {
            func_1D6D40(a, pa, b, pb, n, n, t);
        }
    }
}
