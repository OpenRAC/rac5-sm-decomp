/* LEVEL_03:0x1626E8 -- placement copy of LEVEL_01_15D068.c: forwards its arguments plus the object's linked record and that record's word to the helper. */
struct Link {
    char pad00[0x3C];
    int w3C;
};

struct Obj {
    char pad00[0x54];
    struct Link *f54;
};

extern int func_031228(int a0, int a1, struct Obj *a2, struct Link *a3, int t0);

int func_1626E8(int a0, int a1, struct Obj *o)
{
    struct Link *l = o->f54;

    return func_031228(a0, a1, o, l, l->w3C);
}
