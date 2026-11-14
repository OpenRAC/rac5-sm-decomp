/* LEVEL_07:0x200E58 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00240BA0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_200E58(Obj *o)
{
    o->tab = D_00240BA0;
    return o;
}
