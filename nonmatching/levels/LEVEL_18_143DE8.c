/* USA LEVEL_18.REL:0x143DE8, 192-byte candidate (14 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec { unsigned short h0; unsigned char b2; unsigned char b3; char pad04[0x40]; unsigned char b44; } Rec;
typedef struct Ent { char pad00[0x68]; } Ent;
typedef struct Slot { char pad00[0x18]; unsigned char b18; char pad19[3]; } Slot;
typedef struct Sub { char pad00[0x58]; char *w58; } Sub;
typedef struct Mid { char pad00[0x2C]; Sub *w2C; } Mid;
typedef struct Obj { char pad00[0x54]; Mid *f54; Rec *f58; } Obj;
extern Ent D_001DE778[];
extern void *memset(void *p, int c, unsigned n);
extern void func_085D88(Ent *e, unsigned int index);
extern void func_016D98(Obj *o);
void func_143DE8(Obj *o)
{
    Rec *r = o->f58;
    Slot *s;
    char *base;
    if (r->b44 != 0xFF) {
        base = o->f54->w2C->w58;
        s = (Slot *)(base + r->b44 * 0x1C);
        if (s->b18 & 1) base[0x408] = base[0x408] - 1;
        memset(s, 0, 0x1C);
        r->b44 = 0xFF;
    }
    if (r->h0 != 0xFFFF) func_085D88(&D_001DE778[r->b3], r->h0);
    r->h0 = 0xFFFF;
    func_016D98(o);
}
