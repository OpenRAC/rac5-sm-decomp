/* LEVEL_16:0x16A428 -- when the slot is free, looks up the keyed table entry, creates its handle, and either flags the failure or stores the offset vector. */

struct Ent {
    char pad_00[0x24];
    unsigned int id_24;
    char pad_28[0x44 - 0x28];
};

struct Tab {
    char pad_00[0x34];
    struct Ent *ents_34;
    unsigned int count_38;
};

struct H {
    char pad_00[0x30];
    float v_30[3];
};

struct Sub {
    int w_00;
    char pad_04[8];
    struct H *h_0C;
};

struct Obj {
    char pad_00[0x10];
    float v_10[3];
    char pad_1C[0x30 - 0x1C];
    float v_30[3];
    char pad_3C[0x58 - 0x3C];
    struct Sub *p_58;
};

extern struct Tab *D_001B48A0;
extern char D_001CCC80[];

extern struct H *func_06F830(struct Ent *e, unsigned int key, char *d, int f);
extern void func_16A568(struct Obj *o, int n);

static __inline__ struct Ent *FindEnt(struct Tab *t, unsigned int key)
{
    unsigned int i;

    for (i = 0; i < t->count_38; i++) {
        if (t->ents_34[i].id_24 == key) {
            return &t->ents_34[i];
        }
    }
    return 0;
}

static __inline__ struct H *MakeHandle(char *tbl, struct Ent *e, unsigned int key)
{
    if (e == 0) {
        return 0;
    }
    return func_06F830(e, key, tbl, 0xFF);
}

static __inline__ void OffsetVec(float *d, float *a, float *b)
{
    float t0;
    float t1;
    float t2;

    t0 = -b[0];
    d[0] = a[0] + t0;
    t1 = -b[1];
    d[1] = a[1] + t1;
    t2 = -b[2];
    d[2] = a[2] + t2;
}

void func_16A428(struct Obj *o, int arg)
{
    struct Sub *s;
    struct H *h;
    struct Tab *t;
    char *tbl;
    unsigned int key;

    s = o->p_58;
    if (s->h_0C == 0) {
        key = 0x4384E09E;
        t = D_001B48A0;
        tbl = D_001CCC80;
        h = MakeHandle(tbl, FindEnt(t, key), 0x4384E09E);
        s->h_0C = h;
        if (h == 0) {
            s->w_00 = arg;
            func_16A568(o, 4);
        } else {
            OffsetVec(h->v_30, o->v_30, o->v_10);
            func_16A568(o, 1);
            s->w_00 = arg;
        }
    }
}
