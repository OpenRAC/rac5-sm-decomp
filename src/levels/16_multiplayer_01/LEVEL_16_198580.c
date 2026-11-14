/* LEVEL_16:0x198580 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001D9FB0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_198580(Obj *o)
{
    o->tab = D_001D9FB0;
    return o;
}
