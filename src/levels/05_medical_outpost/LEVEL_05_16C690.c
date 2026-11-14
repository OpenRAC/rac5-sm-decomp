/* LEVEL_05:0x16C690 -- placement copy of LEVEL_02_18F628.c: initialises the object's record, runs a setup helper, sets a flag bit, returns 1. */
typedef struct { int w00; char pad04[0x0A]; unsigned char b0E; char pad0F; void *owner; int w14; } Rec;
typedef struct { char pad00[0x58]; Rec *rec; char pad5C[8]; unsigned int flags; } Obj;
extern void func_16C720(Obj *o);

int func_16C690(Obj *o)
{
    Rec *r = o->rec;

    r->b0E = 2;
    r->owner = o;
    r->w14 = 0;
    r->w00 = 0;
    func_16C720(o);
    o->flags |= 0x10;
    return 1;
}
