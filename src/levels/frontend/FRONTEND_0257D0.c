/* FRONTEND:0x0257D0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0010A008[];
typedef struct Obj { char *tab; } Obj;
Obj *func_0257D0(Obj *o)
{
    o->tab = D_0010A008;
    return o;
}
