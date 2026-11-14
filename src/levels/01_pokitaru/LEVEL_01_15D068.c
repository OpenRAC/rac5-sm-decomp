/* LEVEL_01:0x15D068 -- forwards its arguments plus the object's linked record and that record's word to the helper. */
struct Link {
    char pad00[0x3C];
    int w3C;
};

struct Obj {
    char pad00[0x54];
    struct Link *f54;
};

extern int func_0315C0(int a0, int a1, struct Obj *a2, struct Link *a3, int t0);

int func_15D068(int a0, int a1, struct Obj *o)
{
    struct Link *l = o->f54;

    return func_0315C0(a0, a1, o, l, l->w3C);
}
