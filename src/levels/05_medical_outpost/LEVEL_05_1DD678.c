/* LEVEL_05:0x1DD678 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00217190[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1DD678(Obj *o)
{
    o->tab = D_00217190;
    return o;
}
