/* LEVEL_09:0x1D80E8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00212C00[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1D80E8(Obj *o)
{
    o->tab = D_00212C00;
    return o;
}
