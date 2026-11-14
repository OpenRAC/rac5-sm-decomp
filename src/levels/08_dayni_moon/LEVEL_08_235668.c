/* LEVEL_08:0x235668 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0027A540[];
typedef struct Obj { char *tab; } Obj;
Obj *func_235668(Obj *o)
{
    o->tab = D_0027A540;
    return o;
}
