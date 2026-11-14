/* LEVEL_05:0x1DBED8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00216FC0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1DBED8(Obj *o)
{
    o->tab = D_00216FC0;
    return o;
}
