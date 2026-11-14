/* LEVEL_06:0x1DD1C8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_002181E0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1DD1C8(Obj *o)
{
    o->tab = D_002181E0;
    return o;
}
