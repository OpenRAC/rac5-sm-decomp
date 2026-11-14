/* LEVEL_04:0x2073A8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00245C88[];
typedef struct Obj { char *tab; } Obj;
Obj *func_2073A8(Obj *o)
{
    o->tab = D_00245C88;
    return o;
}
