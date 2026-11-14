/* USA LEVEL_16.REL:0x1590B8, 88-byte candidate (14 November 2026).
 * Measured pinned: 5 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Owner { char pad00[0xF4]; int w_F4; } Owner;
typedef struct Rec { char pad00[0xC]; unsigned int flags; Owner *owner; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; } Obj;
extern char D_001D4B38[];
extern void func_0A2180(unsigned int mode, void *first, int second, unsigned int third);
void func_1590B8(Obj *o, Owner **pp)
{
    Rec *r = o->f58;
    Owner *w;
    if (r->flags & 1) {
        w = *pp;
        if (w == r->owner) {
            func_0A2180(w->w_F4 - 1, D_001D4B38, -0x3F, 0xFFFFFFFFu);
        }
    }
}
