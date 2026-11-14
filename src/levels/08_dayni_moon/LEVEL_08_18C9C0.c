/* LEVEL_08:0x18C9C0 -- releases the object's table entry and clears its slot record in the owner's table (counter decremented when the record was active). */
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
    char pad0[0x2C];
    Inner *inner;
} Owner;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
    char pad4[0x55 - 4];
    unsigned char b55;
} Child;

typedef struct {
    char pad0[0x54];
    Owner *owner;
    Child *child;
} Obj;

typedef struct {
    char pad[0x68];
} Rec68;

extern Rec68 D_0027E978[];
extern void func_09D778(Rec68 *r, unsigned int index);

void func_18C9C0(Obj *o)
{
    Child *c = o->child;
    Owner *own = o->owner;
    Base *b;
    Entry *e;
    Rec68 *p;
    unsigned int id;
    int oa;

    oa = c->b3 * 0x68;
    oa += (int)D_0027E978;
    p = (Rec68 *)oa;
    if (c->h0 != 0xFFFF) {
        func_09D778(p, c->h0);
        c->h0 = 0xFFFF;
    }
    if (own->inner != 0) {
        b = own->inner->base;
        e = &b->entry[c->b55];
        if (e->b18 & 1)
            b->b158--;
        memset(e, 0, 0x1C);
    }
}
