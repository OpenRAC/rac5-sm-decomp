/* LEVEL_17:0x18D368 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001CB490[];
typedef struct Obj { char *tab; } Obj;
Obj *func_18D368(Obj *o)
{
    o->tab = D_001CB490;
    return o;
}
