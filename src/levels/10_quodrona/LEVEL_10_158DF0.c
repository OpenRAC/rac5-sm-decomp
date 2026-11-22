/* LEVEL_10:0x158DF0 -- placement copy of LEVEL_01_160270.c: walks the object's list of 0x80-byte entries after refreshing the global state: for every entry in state 1 it tests whether the entry's target is within the global radius of the current object's position; inside it runs the entry's reaction with a small step, otherwise it releases the entry's linked handle. */
struct Tgt {
    int w00;
    float pos[3];
};

struct Link {
    char pad00[0x10];
    void *f10;
};

struct Ent {
    char pad00[0x4C];
    struct Tgt *f4C;
    char pad50[4];
    struct Link *f54;
    char pad58[0xC];
    unsigned int w64;
    char pad68[0x18];
};

struct Obj {
    char pad00[0xC];
    struct Ent *f0C;
    char pad10[0x20];
    int w30;
};

extern char D_0039E9E0[];
extern float D_00227EC8;

extern void func_1D1190(void *value);
extern char *func_000F68(void);
extern void func_07CCA0(void *h, int flag);
extern void func_159000(struct Ent *e, float step);

static __inline__ int InRange(struct Tgt *t, float *p, float r2)
{
    float *q;
    float dx;
    float dy;
    float dz;

    if (t == 0) {
        return 0;
    }
    q = t->pos;
    dx = p[0] - q[0];
    dy = p[1] - q[1];
    dz = p[2] - q[2];
    return dx * dx + dy * dy + dz * dz < r2;
}

void func_158DF0(struct Obj *o)
{
    struct Ent *e;
    struct Ent *end;
    char *cur;
    float *pp;
    float r2;
    struct Link *l;

    func_1D1190(D_0039E9E0);
    cur = func_000F68();
    if (cur != 0) {
        r2 = D_00227EC8 * D_00227EC8;
        pp = (float *)(cur + 0x30);
        e = o->f0C;
        end = e + o->w30;
        for (; e != end; e++) {
            if ((e->w64 & 7) == 1) {
                if (!InRange(e->f4C, pp, r2)) {
                    l = e->f54;
                    if (l->f10 != 0) {
                        func_07CCA0(l->f10, 0);
                        l->f10 = 0;
                    }
                } else {
                    func_159000(e, 0.033333335f);
                }
            }
        }
    }
}
