/* LEVEL_10:0x169EB8 -- steps a two-level cursor over entry tables after a successful action. */
typedef struct {
    char pad0[0x45];
    unsigned char b45;
} Item;
typedef struct {
    Item *p[8];
    void *q[4];
    unsigned char cnt[4];
} Tbl;
typedef struct {
    char pad0[0x20];
    unsigned char c20;
    unsigned char c21;
    unsigned char c22;
    unsigned char c23;
} Cur;
typedef struct {
    char pad0[0x54];
    Tbl *tbl;
    Cur *cur;
} Obj;
extern int func_169978(Item *a, void *b);

int func_169EB8(Obj *o)
{
    Cur *c;
    Tbl *t;
    Item *it;
    int r;

    c = o->cur;
    t = o->tbl;
    it = t->p[c->c20];
    if (it->b45 != 0)
        return 0;
    r = func_169978(it, t->q[c->c21]);
    if (r != 0) {
        c->c22++;
        if (c->c22 >= t->cnt[c->c21]) {
            c->c21++;
            if (c->c21 >= 4 || t->q[c->c21] == 0)
                c->c23 = 1;
            c->c22 = 0;
        }
        c->c20++;
        if (c->c20 >= 8 || t->p[c->c20] == 0)
            c->c20 = 0;
        return r;
    }
    return 0;
}
