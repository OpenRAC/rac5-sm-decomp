/* LEVEL_23:0x1BFE88 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001F8730[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1BFE88(Obj *o)
{
    o->tab = D_001F8730;
    return o;
}
