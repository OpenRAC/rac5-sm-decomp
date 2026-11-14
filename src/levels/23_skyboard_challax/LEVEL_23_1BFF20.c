/* LEVEL_23:0x1BFF20 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001F8748[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1BFF20(Obj *o)
{
    o->tab = D_001F8748;
    return o;
}
