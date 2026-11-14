/* LEVEL_16:0x1984E8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001D9F98[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1984E8(Obj *o)
{
    o->tab = D_001D9F98;
    return o;
}
