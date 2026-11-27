/* LEVEL_01:0x1916C8 -- compares a record with a global object and a float field, using an optional helper result. */
struct Q1916C8 {
    char pad0[0x18];
    void *f18;
};

struct P1916C8 {
    char pad0[0x34];
    float f34;
    char pad38[0x45 - 0x38];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    struct Q1916C8 *f58;
};

struct G1916C8 {
    char pad0[0x34];
    float f34;
    char pad38[0x334 - 0x38];
    void *f334;
};

extern struct G1916C8 D_00235140;
extern int func_135E28(void *arg0);

int func_1916C8(struct P1916C8 *p)
{
    struct Q1916C8 *q;
    struct G1916C8 *g;
    int r;
    int b;

    q = p->f58;
    r = 0;
    if (q->f18 != 0) {
        r = func_135E28(q->f18);
    }
    g = &D_00235140;
    if (g->f334 == p) {
        b = p->b45;
    } else {
        if (r == 0) {
            return 0;
        }
        b = p->b45;
    }
    if (b == 1 || g->f34 - p->f34 < 0.5f) {
        return 1;
    }
    return 0;
}
