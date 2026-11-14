/* LEVEL_24:0x1BEEC0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001F7328[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1BEEC0(Obj *o)
{
    o->tab = D_001F7328;
    return o;
}
