/* USA LEVEL_02.REL:0x1745D8, 68-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x20.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { char pad00[0x10]; unsigned char b10; } Rec;
typedef struct { char pad00[0x54]; Rec *rec; char pad58[0xC]; unsigned int flags; char pad68[8]; int timer; } Obj;
extern char D_003ACB10[];
extern void func_1E2128(char *data, Obj *o, Rec *rec);

int func_1745D8(Obj *o)
{
    Rec *rec;

    o->timer = 0;
    rec = o->rec;
    o->flags |= 0x40;
    rec->b10 = 0;
    func_1E2128(D_003ACB10, o, rec);
    return 1;
}
