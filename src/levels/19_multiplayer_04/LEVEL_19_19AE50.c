/* LEVEL_19:0x19AE50 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA318[];
typedef struct Obj { char *tab; } Obj;
Obj *func_19AE50(Obj *o)
{
    o->tab = D_001DA318;
    return o;
}
