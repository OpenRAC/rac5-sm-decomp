/* USA LEVEL_08.REL:0x199740, 140-byte candidate (14 November 2026).
 * Measured pinned: 14 differing words; first difference at +0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0x45];
    unsigned char b45;
} Parent;

typedef struct {
    char pad0[0x2C];
    Parent *parent;
    int w30;
    int w34;
    int w38;
    int w3C;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Rec *rec;
} Obj;

extern void func_199AB0(Obj *o, int state, int mode);
extern void func_0845F8(Obj *o, int a);
extern void func_1C07C0(Obj *o, Rec *r, void *p, int a, int b, int c, int d);

void func_199740(Obj *o)
{
    Rec *r;

    if (o->b45 - 0xBU < 2U) {
        return;
    }
    r = o->rec;
    if ((r->parent->b45 ^ 2) != 0) {
        func_199AB0(o, o->b45, 10);
        return;
    }
    func_0845F8(o, 0);
    func_1C07C0(o, r, r->parent, r->w30, r->w34, r->w38, r->w3C);
}
