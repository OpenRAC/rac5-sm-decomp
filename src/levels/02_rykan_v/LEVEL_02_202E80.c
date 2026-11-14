/* LEVEL_02:0x202E80 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00242978[];
typedef struct Obj { char *tab; } Obj;
Obj *func_202E80(Obj *o)
{
    o->tab = D_00242978;
    return o;
}
