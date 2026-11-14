/* LEVEL_01:0x1ECA48 -- installs the table pointer in the object and returns the object. */
extern char D_0022B2B0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1ECA48(Obj *o)
{
    o->tab = D_0022B2B0;
    return o;
}
