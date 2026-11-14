/* LEVEL_08:0x236D70 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0027A6F8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_236D70(Obj *o)
{
    o->tab = D_0027A6F8;
    return o;
}
