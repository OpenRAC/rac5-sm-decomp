/* FRONTEND:0x025868 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0010A020[];
typedef struct Obj { char *tab; } Obj;
Obj *func_025868(Obj *o)
{
    o->tab = D_0010A020;
    return o;
}
