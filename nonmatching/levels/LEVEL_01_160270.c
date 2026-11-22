/* USA LEVEL_01.REL:0x160270 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_160480 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
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

extern char D_00395728[];
extern float D_0021F9E0;

extern void func_1CCEE8(void *value);
extern char *func_0011D8(void);
extern void func_07C670(void *h, int flag);
extern void func_160480(struct Ent *e, float step);

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

void func_160270(struct Obj *o)
{
    struct Ent *e;
    struct Ent *end;
    char *cur;
    float *pp;
    float r2;
    struct Link *l;

    func_1CCEE8(D_00395728);
    cur = func_0011D8();
    if (cur != 0) {
        r2 = D_0021F9E0 * D_0021F9E0;
        pp = (float *)(cur + 0x30);
        e = o->f0C;
        end = e + o->w30;
        for (; e != end; e++) {
            if ((e->w64 & 7) == 1) {
                if (!InRange(e->f4C, pp, r2)) {
                    l = e->f54;
                    if (l->f10 != 0) {
                        func_07C670(l->f10, 0);
                        l->f10 = 0;
                    }
                } else {
                    func_160480(e, 0.033333335f);
                }
            }
        }
    }
}
