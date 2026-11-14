/* LEVEL_17:0x18BBC8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001CB2C0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_18BBC8(Obj *o)
{
    o->tab = D_001CB2C0;
    return o;
}
