/* LEVEL_15:0x142F78 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001735C0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_142F78(Obj *o)
{
    o->tab = D_001735C0;
    return o;
}
