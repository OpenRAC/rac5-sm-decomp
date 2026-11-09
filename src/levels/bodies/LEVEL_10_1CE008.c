/* LEVEL_10:0x1CE008 -- finds a keyed entry in a global table and forwards the value to a helper. */
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

struct Ret {
    char pad_00[0x58];
    int *p_58;
};

extern struct Table *D_0020F9F0;
extern struct Ret *func_07CB88(struct Elem *e, unsigned int key, int val, int code);

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

static inline struct Ret *call_found(struct Elem *f, unsigned int key, int val)
{
    if (f == 0) {
        return 0;
    }
    return func_07CB88(f, key, val, 0xFF);
}

struct Ret *func_1CE008(int val)
{
    struct Ret *r;
    unsigned int key;

    key = 0x64028639;
    r = call_found(find_elem(D_0020F9F0, key), key, val);
    if (r == 0) {
        return 0;
    }
    *(int *)((char *)r->p_58 + 0xCC) = val;
    return r;
}
