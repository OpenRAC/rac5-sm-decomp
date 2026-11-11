/* LEVEL_08:0x19EEC0 -- computes the world position of the object's current table entry (object position plus the linked body's offset), queries the global pool for the hits around it, runs the hit effect and a 0x64 notification for every filled hit slot, then finishes the object; always returns 0. */
struct Link {
    char pad00[0x58];
    float v58[3];
    float f64;
};

struct Ent {
    char pad00[0x14];
    struct Link *f14;
    char pad18[0x1C];
};

struct Tab {
    char pad00[4];
    struct Ent *tbl;
};

struct Obj {
    char pad00[0x30];
    float pos[3];
    char pad3C[4];
    struct Tab *f40;
    unsigned char b44;
};

struct Pool {
    char pad00[0x20];
    char *f20;
    char pad24[4];
    unsigned int f28;
};

extern struct Pool D_003E6EB0;

extern void func_02BEE8(float param, float *vec);
extern void func_03BD38(struct Pool *p, struct Obj *o, void **hits);
extern void func_02BFB0(void *hit, float f);
extern void func_167280(struct Obj *o, unsigned int size);
extern void func_0845F8(struct Obj *o, int n);

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

int func_19EEC0(struct Obj *o)
{
    float v[3];
    void *hits[16];
    struct Link *l;
    unsigned int i;

    l = o->f40->tbl[o->b44].f14;
    Add3(v, o->pos, l->v58);
    func_02BEE8(l->f64, v);
    func_03BD38(&D_003E6EB0, o, hits);
    for (i = 0; i < D_003E6EB0.f28; i++) {
        if (hits[i] != 0) {
            func_02BFB0(hits[i], *(float *)(D_003E6EB0.f20 + i * 0xE4 + 0x10));
            func_167280(o, 0x64);
        }
    }
    func_0845F8(o, 1);
    return 0;
}
