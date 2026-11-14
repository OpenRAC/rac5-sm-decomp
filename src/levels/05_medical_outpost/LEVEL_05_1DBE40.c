/* LEVEL_05:0x1DBE40 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00216FA8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1DBE40(Obj *o)
{
    o->tab = D_00216FA8;
    return o;
}
