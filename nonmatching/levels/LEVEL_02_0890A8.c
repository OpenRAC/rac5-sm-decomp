/* USA LEVEL_02.REL:0x0890A8, 236-byte candidate (21 November 2026).
 * Measured pinned: 3 differing words; first difference at 0xC4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Obj;

typedef struct {
    char pad00[0x24];
    void (*prepare)(struct Obj *o);
} Vtbl;

typedef struct {
    char pad00[0x10];
    Vtbl *vtbl;
    int (*step)(struct Obj *o);
    char pad18[0x40 - 0x18];
    unsigned short count;
} Class;

typedef struct {
    unsigned int b0 : 1;
    unsigned int rest : 31;
} Bits;

typedef struct Obj {
    char pad00[0x40];
    Class *cls;
    char pad44[0x64 - 0x44];
    int flags;
} Obj;

extern int D_0020B11C;

extern void func_082F58(Obj *o, int a);
extern void func_0830B8(Obj *o);
extern void func_019160(Obj *o);
extern void func_087558(Obj *o);

void func_0890A8(Obj *o)
{
    int keep;
    void (*prepare)(Obj *);

    func_082F58(o, 1);
    if ((o->flags & 6) != 0) {
        func_0830B8(o);
    }
    keep = o->flags & 1;
    func_019160(o);
    o->flags = (o->flags & -2) | keep;
    prepare = o->cls->vtbl->prepare;
    if (prepare != 0) {
        prepare(o);
    }
    func_087558(o);
    if (o->cls->step(o) != 0) {
        if (((Bits *)&o->flags)->b0 != 1) {
            if (o->cls != 0) {
                o->cls->count++;
            }
        }
        ((Bits *)&o->flags)->b0 = 1;
        D_0020B11C++;
    }
}
