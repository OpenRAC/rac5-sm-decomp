/* LEVEL_04:0x207440 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00245CA0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_207440(Obj *o)
{
    o->tab = D_00245CA0;
    return o;
}
