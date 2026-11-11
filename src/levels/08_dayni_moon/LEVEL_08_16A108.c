/* LEVEL_08:0x16A108 -- finds the keyed record in the global table and registers the caller with it. */

struct Elem {
    char pad_00[0x24];
    unsigned int key_24;
    char pad_28[0x1C];
};

struct Table {
    char pad_00[0x34];
    struct Elem *p_34;
    unsigned int n_38;
};

struct Obj {
    char pad_00[0x58];
    char **p_58;
    char pad_5C[0x70 - 0x5C];
    float f_70;
};

extern struct Table *D_0024FC50;
extern float D_00275088;
extern struct Obj *func_0844E0(struct Elem *e, int b, char *c, int d);

static inline struct Elem *find_elem(struct Table *t, unsigned int key)
{
    struct Elem *cur;
    unsigned int i;

    for (i = 0; i < t->n_38; i++) {
        cur = &t->p_34[i];
        if (cur->key_24 == key) {
            return cur;
        }
    }
    return 0;
}

static inline struct Obj *call_found(struct Elem *f, int b, char *c)
{
    if (f == 0) {
        return 0;
    }
    return func_0844E0(f, b, c, 0xFF);
}

struct Obj *func_16A108(char *a0, int a1)
{
    struct Obj *r;
    unsigned int key;
    float t;

    key = 0xB90E7A60;
    r = call_found(find_elem(D_0024FC50, key), a1, a0);
    if (r == 0) {
        return 0;
    }
    t = D_00275088;
    *r->p_58 = a0;
    r->f_70 = t;
    return r;
}
