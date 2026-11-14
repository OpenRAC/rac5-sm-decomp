/* FRONTEND:0x026D98 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0010A188[];
typedef struct Obj { char *tab; } Obj;
Obj *func_026D98(Obj *o)
{
    o->tab = D_0010A188;
    return o;
}
