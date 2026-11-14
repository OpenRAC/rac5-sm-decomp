/* LEVEL_24:0x1BD720 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001F7160[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1BD720(Obj *o)
{
    o->tab = D_001F7160;
    return o;
}
