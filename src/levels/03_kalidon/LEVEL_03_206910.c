/* LEVEL_03:0x206910 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00246310[];
typedef struct Obj { char *tab; } Obj;
Obj *func_206910(Obj *o)
{
    o->tab = D_00246310;
    return o;
}
