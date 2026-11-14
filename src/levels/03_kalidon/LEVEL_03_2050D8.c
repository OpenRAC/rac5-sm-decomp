/* LEVEL_03:0x2050D8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00246130[];
typedef struct Obj { char *tab; } Obj;
Obj *func_2050D8(Obj *o)
{
    o->tab = D_00246130;
    return o;
}
