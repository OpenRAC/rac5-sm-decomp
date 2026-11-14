/* LEVEL_07:0x200DC0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00240B88[];
typedef struct Obj { char *tab; } Obj;
Obj *func_200DC0(Obj *o)
{
    o->tab = D_00240B88;
    return o;
}
