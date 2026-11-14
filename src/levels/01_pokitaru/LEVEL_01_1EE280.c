/* LEVEL_01:0x1EE280 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0022B490[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1EE280(Obj *o)
{
    o->tab = D_0022B490;
    return o;
}
