/* LEVEL_16:0x163880 -- resolves the object's lookup into its record and pushes the object onto the global list; returns 1. */
struct Rec {
    struct Obj *next;
    int value;
};

struct Obj {
    char pad00[0x54];
    int *key;
    struct Rec *rec;
};

extern int func_0142F0(int *key, int n);
extern struct Obj *D_001BDFA4[1];

int func_163880(struct Obj *o)
{
    struct Rec *r = o->rec;

    r->value = func_0142F0(o->key, 12);
    r->next = D_001BDFA4[0];
    D_001BDFA4[0] = o;
    return 1;
}
