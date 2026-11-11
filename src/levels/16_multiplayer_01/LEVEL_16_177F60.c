/* LEVEL_16:0x177F60 -- bumps a byte counter, clears a word, and compares against a limit. */
typedef struct { char pad_00[0x14]; unsigned short limit; } Lim;
typedef struct { char pad_00[0x10]; Lim *lim; char pad_14[0x11]; unsigned char count; char pad_26[2]; int clear; } Child;
typedef struct { char pad_00[0x54]; Child *child; } Obj;
int func_177F60(Obj *o)
{
    Child *c = o->child;
    c->clear = 0;
    c->count++;
    return c->count < c->lim->limit;
}
