/* FRONTEND:0x026E30 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0010A1A0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_026E30(Obj *o)
{
    o->tab = D_0010A1A0;
    return o;
}
