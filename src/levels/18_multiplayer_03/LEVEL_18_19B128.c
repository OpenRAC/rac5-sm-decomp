/* LEVEL_18:0x19B128 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA4D8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_19B128(Obj *o)
{
    o->tab = D_001DA4D8;
    return o;
}
