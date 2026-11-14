/* USA LEVEL_24.REL:0x199B90, 108-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 6 differing words; first difference at 28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec { unsigned short h0; unsigned char b2; unsigned char b3; char pad04[4]; int w8; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; } Obj;
typedef struct Ent { char pad00[0x68]; } Ent;
extern Ent D_001FB5F8[];
extern void func_076D68(int handle, int flag);
extern void func_08E658(Ent *e, unsigned int index);
void func_199B90(Obj *o)
{
    Rec *r = o->f58;
    Ent *e;
    unsigned int h;
    if (r->w8 != 0) { func_076D68(r->w8, 1); }
    h = r->h0;
    e = &D_001FB5F8[r->b3];
    if (h != 0xFFFF) { func_08E658(e, h); }
    r->h0 = 0xFFFF;
}
