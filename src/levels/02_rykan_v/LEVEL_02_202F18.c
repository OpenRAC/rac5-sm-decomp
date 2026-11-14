/* LEVEL_02:0x202F18 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00242990[];
typedef struct Obj { char *tab; } Obj;
Obj *func_202F18(Obj *o)
{
    o->tab = D_00242990;
    return o;
}
