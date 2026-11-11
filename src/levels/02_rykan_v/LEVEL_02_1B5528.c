/* LEVEL_02:0x1B5528 -- forwards its three arguments plus an object's link and the link's field to a helper. */
typedef struct {
    char pad0[0x34];
    int w34;
} Link;

typedef struct {
    char pad0[0x54];
    Link *link;
} Obj;

extern int func_031F60(int a, int b, Obj *o, Link *link, int field);

int func_1B5528(int a, int b, Obj *o)
{
    return func_031F60(a, b, o, o->link, o->link->w34);
}
