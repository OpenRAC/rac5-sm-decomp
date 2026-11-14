/* LEVEL_09:0x1D68B0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00212A20[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1D68B0(Obj *o)
{
    o->tab = D_00212A20;
    return o;
}
