/* LEVEL_20:0x0FAC18 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00131918[];
typedef struct Obj { char *tab; } Obj;
Obj *func_0FAC18(Obj *o)
{
    o->tab = D_00131918;
    return o;
}
