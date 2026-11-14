/* LEVEL_02:0x201778 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_002427C0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_201778(Obj *o)
{
    o->tab = D_002427C0;
    return o;
}
