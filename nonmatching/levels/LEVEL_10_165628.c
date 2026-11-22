/* USA LEVEL_10.REL:0x165628, 236-byte candidate (21 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x50.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    char pad4[0x78 - 4];
    char *w78;
    char pad7C[0x100 - 0x7C];
    void *w100;
    char pad104[0x114 - 0x104];
    unsigned char b114;
} Child;

typedef struct {
    char pad0[0x54];
    Owner *owner;
    Child *child;
} Obj;

extern char D_00238AF8[];
extern char *D_001FCFAC;
extern void func_081168(char *record);
extern void func_1E02B8(int *a0, int a1, float f12);
extern void func_095BC8(void *entry, unsigned int index);
extern void func_07CCA0(void *p, int a1);

void func_165628(Obj *o)
{
    Child *c = o->child;
    Owner *own = o->owner;
    Base *b;
    Entry *e;
    char *p;
    unsigned int idx;

    func_081168(c->w78);
    func_1E02B8((int *)(D_001FCFAC + 0x13734), 0x15, 0.2f);
    p = D_00238AF8 + c->b3 * 0x68;
    idx = c->h0;
    if (idx != 0xFFFF) {
        func_095BC8(p, idx);
        c->h0 = 0xFFFF;
    }
    if (c->w100 != 0)
        func_07CCA0(c->w100, 1);
    if (own->inner != 0) {
        b = own->inner->base;
        e = &b->entry[c->b114];
        if (e->b18 & 1)
            b->b158--;
        memset(e, 0, 0x1C);
    }
}
