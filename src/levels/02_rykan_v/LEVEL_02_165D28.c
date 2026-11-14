/* LEVEL_02:0x165D28 -- finds a keyed entry in a global table, forwards the value to a helper and stores it in the result's record. */
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

extern struct Table *D_0021BD50;
extern struct Ret *func_082E40(struct Elem *e, unsigned int key, int val, int code);

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
    return func_082E40(f, key, val, 0xFF);
}

struct Ret *func_165D28(int val)
{
    struct Ret *r;
    unsigned int key;

    key = 0x5A45D019;
    r = call_found(find_elem(D_0021BD50, key), key, val);
    if (r == 0) {
        return 0;
    }
    *(int *)((char *)r->p_58 + 0x18) = val;
    return r;
}
