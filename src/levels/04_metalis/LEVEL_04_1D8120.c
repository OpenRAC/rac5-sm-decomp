/* LEVEL_04:0x1D8120 -- sets the linked record's table pointer and state, the object's timer to 900, and returns 1. */
typedef struct Rec { char *tab; int st; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; char pad5C[0x14]; float f70; } Obj;
extern char D_00243B90[];
int func_1D8120(Obj *o)
{
    Rec *r = o->f58;
    r->tab = D_00243B90;
    r->st = 2;
    o->f70 = 900.0f;
    return 1;
}
