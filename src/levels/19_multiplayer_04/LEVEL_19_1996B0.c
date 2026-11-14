/* LEVEL_19:0x1996B0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA148[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1996B0(Obj *o)
{
    o->tab = D_001DA148;
    return o;
}
