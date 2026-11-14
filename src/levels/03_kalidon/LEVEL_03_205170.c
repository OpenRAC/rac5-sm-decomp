/* LEVEL_03:0x205170 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00246148[];
typedef struct Obj { char *tab; } Obj;
Obj *func_205170(Obj *o)
{
    o->tab = D_00246148;
    return o;
}
