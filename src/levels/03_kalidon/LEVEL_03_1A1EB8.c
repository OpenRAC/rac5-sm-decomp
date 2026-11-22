/* LEVEL_03:0x1A1EB8 -- finds the keyed table entry, starts its effect and attaches the owner to the result. */
struct Elem {
    char pad_00[0x24];
    unsigned int key_24;
    char pad_28[0x44 - 0x28];
};

struct Table {
    char pad_00[0x34];
    struct Elem *p_34;
    unsigned int n_38;
};

struct Rec {
    char pad_00[4];
    void *owner;
};

struct Ret {
    char pad_00[0x54];
    struct Rec *p_54;
};

extern struct Table *D_0021F410;
extern unsigned int D_002216F0;
extern struct Ret *func_07C350(struct Elem *e, int a, void *o, int code);
extern void func_0127D0(void *p, float a, float b, float c, float d, float e, float f);

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

static inline struct Ret *call_found(struct Elem *f, void *o)
{
    if (f == 0) {
        return 0;
    }
    return func_07C350(f, 0, o, 0xFF);
}

void func_1A1EB8(char *o)
{
    struct Ret *r;
    unsigned int key;

    key = D_002216F0;
    r = call_found(find_elem(D_0021F410, key), o);
    r->p_54->owner = o;
    func_0127D0(o + 0x30, 225.0f, 2500.0f, 0.0f, 75.0f, 75.0f, 0.3499999940395355f);
}
