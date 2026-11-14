/* LEVEL_06:0x1DBA28 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00218010[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1DBA28(Obj *o)
{
    o->tab = D_00218010;
    return o;
}
