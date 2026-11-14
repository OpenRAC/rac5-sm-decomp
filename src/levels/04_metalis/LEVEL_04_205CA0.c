/* LEVEL_04:0x205CA0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00245AD0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_205CA0(Obj *o)
{
    o->tab = D_00245AD0;
    return o;
}
