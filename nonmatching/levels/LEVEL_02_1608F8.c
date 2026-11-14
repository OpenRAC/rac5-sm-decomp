/* USA LEVEL_02.REL:0x1608F8, 172-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 144.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Obj;

struct Link {
    char pad0[0xDC];
    void (*fDC)(void);
};

struct State {
    int f0;
    char pad4[0xA];
    unsigned char b0E;
    char pad0F;
    struct Obj *f10;
    int f14;
};

struct Obj {
    char pad0[0x48];
    struct Link *f48;
    char pad4C[0xC];
    struct State *f58;
    char pad5C[8];
    unsigned int f64;
    char pad68[0x10];
    unsigned int f78;
};

extern void *memset(void *p, int c, unsigned int n);
extern void func_161C18(void);
extern void func_160E60(struct Obj *o, int a1, int a2);

int func_1608F8(struct Obj *o)
{
    struct State *s;

    o->f64 |= 0x40000;
    o->f48->fDC = func_161C18;
    s = o->f58;
    memset(s, 0, 0x6C);
    func_160E60(o, 1, 0);
    s->f10 = o;
    s->b0E = 2;
    s->f14 = 0;
    s->f0 = 0;
    o->f64 |= 0x1000;
    o->f78 = (o->f78 & 0xFFF0FFFFu) | 0x20000u;
    return 1;
}
