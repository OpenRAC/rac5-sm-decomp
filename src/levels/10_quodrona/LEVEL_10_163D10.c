/* LEVEL_10:0x163D10 -- runs the shared counter helper, releases the object's table entry and link, then clears the object's slot record in the owner's table (counter decremented when the record was active). */
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
    char pad0[0x30];
    Inner *inner;
} Owner;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
    char pad4[0x4C - 4];
    void *w4C;
    char pad50[0x60 - 0x50];
    unsigned char b60;
} Child;

typedef struct {
    char pad0[0x54];
    Owner *owner;
    Child *child;
} Obj;

typedef struct {
    char pad[0x68];
} Rec68;

extern Rec68 D_00238AF8[];
extern char *D_001FCFAC;
extern void func_1E02B8(int *a0, int a1, float f12);
extern void func_095BC8(Rec68 *r, unsigned int index);
extern void func_07CCA0(void *p, int a1);

void func_163D10(Obj *o)
{
    Child *c = o->child;
    Owner *own = o->owner;
    Base *b;
    Entry *e;
    Rec68 *p;
    unsigned int id;

    func_1E02B8((int *)(D_001FCFAC + 0x13734), 0x15, 0.2f);
    p = (Rec68 *)(c->b3 * 0x68);
    p = (Rec68 *)((char *)D_00238AF8 + (int)p);
    id = c->h0;
    if (id != 0xFFFF) {
        ((void (*)(Rec68 *))func_095BC8)(p);
        c->h0 = 0xFFFF;
    }
    if (c->w4C != 0)
        func_07CCA0(c->w4C, 1);
    if (own->inner != 0) {
        b = own->inner->base;
        e = &b->entry[c->b60];
        if (e->b18 & 1)
            b->b158--;
        memset(e, 0, 0x1C);
    }
}
