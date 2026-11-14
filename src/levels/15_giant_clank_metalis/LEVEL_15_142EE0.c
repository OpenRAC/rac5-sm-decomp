/* LEVEL_15:0x142EE0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001735A8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_142EE0(Obj *o)
{
    o->tab = D_001735A8;
    return o;
}
