/* LEVEL_24:0x15F300 -- placement copy of LEVEL_03_179240.c: arms the object when its current table entry has a target: initialises the state record, sets the two counters to 0x96 and the 0x800000 mode bit, and runs the two setup steps. */
struct Ent {
    char pad0[0x14];
    int f14;
    char pad18[0x1C];
};

struct Tab {
    char pad0[4];
    struct Ent *ent;
};

struct Obj;

struct Rec {
    unsigned short h0;
    unsigned char b2;
    struct Obj *f4;
};

struct Obj {
    char pad0[0x40];
    struct Tab *f40;
    unsigned char b44;
    char pad45[0x13];
    struct Rec *f58;
    char pad5C[8];
    unsigned int f64;
    char pad68[0xE];
    unsigned char b76;
    unsigned char b77;
};

extern void func_15F170(struct Obj *o);
extern void func_15F298(struct Obj *o);

int func_15F300(struct Obj *o)
{
    struct Rec *rec = o->f58;

    if (o->f40->ent[o->b44].f14 == 0)
        return 0;
    rec->b2 = 2;
    rec->f4 = o;
    rec->h0 = 0xFFFF;
    o->f64 |= 0x800000;
    o->b77 = 0x96;
    o->b76 = 0x96;
    func_15F170(o);
    func_15F298(o);
    return 1;
}
