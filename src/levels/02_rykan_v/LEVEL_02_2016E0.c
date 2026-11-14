/* LEVEL_02:0x2016E0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_002427A8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_2016E0(Obj *o)
{
    o->tab = D_002427A8;
    return o;
}
