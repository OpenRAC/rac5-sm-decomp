/* LEVEL_23:0x1C16C0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001F8910[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1C16C0(Obj *o)
{
    o->tab = D_001F8910;
    return o;
}
