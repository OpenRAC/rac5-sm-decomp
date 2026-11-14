/* LEVEL_08:0x2355D0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0027A528[];
typedef struct Obj { char *tab; } Obj;
Obj *func_2355D0(Obj *o)
{
    o->tab = D_0027A528;
    return o;
}
