/* LEVEL_10:0x1F5AA0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00234668[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1F5AA0(Obj *o)
{
    o->tab = D_00234668;
    return o;
}
