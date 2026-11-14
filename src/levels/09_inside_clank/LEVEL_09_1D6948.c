/* LEVEL_09:0x1D6948 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00212A38[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1D6948(Obj *o)
{
    o->tab = D_00212A38;
    return o;
}
