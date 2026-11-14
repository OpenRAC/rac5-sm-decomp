/* LEVEL_20:0x0FC450 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00131B00[];
typedef struct Obj { char *tab; } Obj;
Obj *func_0FC450(Obj *o)
{
    o->tab = D_00131B00;
    return o;
}
