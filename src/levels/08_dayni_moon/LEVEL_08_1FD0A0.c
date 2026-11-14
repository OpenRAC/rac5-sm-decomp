/* LEVEL_08:0x1FD0A0 -- placement copy of LEVEL_04_1D8120.c: sets the linked record's table pointer and state, the object's timer to 900, and returns 1. */
typedef struct Rec { char *tab; int st; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; char pad5C[0x14]; float f70; } Obj;
extern char D_00277E00[];
int func_1FD0A0(Obj *o)
{
    Rec *r = o->f58;
    r->tab = D_00277E00;
    r->st = 2;
    o->f70 = 900.0f;
    return 1;
}
