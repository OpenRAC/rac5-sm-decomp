/* LEVEL_15:0x1417D8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001733F0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1417D8(Obj *o)
{
    o->tab = D_001733F0;
    return o;
}
