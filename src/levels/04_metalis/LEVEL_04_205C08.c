/* LEVEL_04:0x205C08 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00245AB8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_205C08(Obj *o)
{
    o->tab = D_00245AB8;
    return o;
}
