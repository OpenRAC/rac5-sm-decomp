/* LEVEL_16:0x199C88 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA168[];
typedef struct Obj { char *tab; } Obj;
Obj *func_199C88(Obj *o)
{
    o->tab = D_001DA168;
    return o;
}
