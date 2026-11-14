/* LEVEL_16:0x199D20 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA180[];
typedef struct Obj { char *tab; } Obj;
Obj *func_199D20(Obj *o)
{
    o->tab = D_001DA180;
    return o;
}
