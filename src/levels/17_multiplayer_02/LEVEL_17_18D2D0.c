/* LEVEL_17:0x18D2D0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001CB478[];
typedef struct Obj { char *tab; } Obj;
Obj *func_18D2D0(Obj *o)
{
    o->tab = D_001CB478;
    return o;
}
