/* LEVEL_19:0x199748 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA160[];
typedef struct Obj { char *tab; } Obj;
Obj *func_199748(Obj *o)
{
    o->tab = D_001DA160;
    return o;
}
