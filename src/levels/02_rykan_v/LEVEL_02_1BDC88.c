/* LEVEL_02:0x1BDC88 -- releases the object's table record, clears the owner's slot record (counter decremented when it was active) and runs the shared cleanup. */
extern void *memset(void *, int, unsigned int);

typedef struct {
    char pad0[0x18];
    unsigned char b18;
    char pad19[0x1C - 0x19];
} Entry;

typedef struct {
    Entry entry[12];
    char pad150[0x158 - 0x150];
    unsigned char b158;
} Base;

typedef struct {
    char pad0[0x58];
    Base *base;
} Inner;

typedef struct {
    char pad0[0x34];
    Inner *inner;
} Owner;

typedef struct {
    char pad0[0x44];
    unsigned short h44;
    char pad46;
    unsigned char b47;
    char pad48[0x90 - 0x48];
    unsigned char b90;
} Child;

typedef struct {
    char pad0[0x54];
    Owner *owner;
    Child *child;
} Obj;

typedef struct {
    char pad[0x68];
} Rec68;

extern Rec68 D_00246BF8[];
extern void func_09BF28(Rec68 *r, unsigned int index);
extern void func_019FB8(Obj *o);

void func_1BDC88(Obj *o)
{
    Child *c = o->child;
    Owner *own = o->owner;
    Base *b;
    Entry *e;
    Rec68 *p;

    p = (Rec68 *)(c->b47 * 0x68);
    p = (Rec68 *)((char *)D_00246BF8 + (int)p);
    if (c->h44 != 0xFFFF) {
        func_09BF28(p, c->h44);
        c->h44 = 0xFFFF;
    }
    if (own->inner != 0) {
        b = own->inner->base;
        e = &b->entry[c->b90];
        if (e->b18 & 1)
            b->b158--;
        memset(e, 0, 0x1C);
    }
    func_019FB8(o);
}
