/* USA LEVEL_05.REL:0x199E90, 132-byte candidate (14 November 2026).
 * Measured pinned: 13 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec { unsigned short h0; unsigned char b2; unsigned char b3; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; char pad5C[8]; unsigned int w64; } Obj;
typedef struct Ent { char pad00[0x68]; } Ent;
extern Ent D_0021B3F8[];
extern void func_092F50(Ent *e, unsigned int index);
extern void func_018BF8(Obj *o);
void func_199E90(Obj *o)
{
    Rec *r = o->f58;
    Ent *e = &D_0021B3F8[r->b3];
    if (r->h0 != 0xFFFF) { func_092F50(e, r->h0); }
    r->h0 = 0xFFFF;
    o->w64 = o->w64 & ~0x08000000;
    func_018BF8(o);
}
