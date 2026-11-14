/* LEVEL_18:0x199A20 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA328[];
typedef struct Obj { char *tab; } Obj;
Obj *func_199A20(Obj *o)
{
    o->tab = D_001DA328;
    return o;
}
