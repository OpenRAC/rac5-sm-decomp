/* USA LEVEL_01.REL:0x03C520, 148-byte candidate (14 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { char pad00[0x64]; unsigned int flags; } Link;
typedef struct { char pad00[0x100]; unsigned short h100; unsigned short h102; char pad104[0x498]; Link *link; } Obj;
extern void func_025498(Obj *o);
extern void func_03F198(Obj *o);

static __inline__ unsigned char IsLow(int s)
{
    if (s > 0x33) {
        return 0;
    }
    if (s < 0x28) {
        return 1;
    }
    return 0;
}

void func_03C520(Obj *o, int state)
{
    func_025498(o);
    if (IsLow(state)) {
        return;
    }
    if ((unsigned int)(o->h100 - 0x29) < 10) {
        return;
    }
    if (o->link != 0) {
        o->link->flags |= 8;
    }
    o->h102 = state;
    func_03F198(o);
}
