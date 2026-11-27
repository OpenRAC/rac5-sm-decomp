/* USA LEVEL_18:143DE8, 192-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 192 bytes: 6 differing words; first difference +0x28. No matching credit.
 * Remaining issue: register choice in the slot release (16 -> 6 words): an inline
 * ReleaseHandle(entry, &h) evaluates both arguments before the 0xFFFF test and stores 0xFFFF
 * only on release, matching the whole second half; left: retail loads the 0x1C stride into v0
 * after the chain loads and reuses a0 for o->f54 and ->w2C, ours puts 0x1C in a1 in the beq slot
 * and w2C in v0; inline FreeSlot variants, locals, profiles and flags tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_18:0x143DE8 -- releases the object's slot entry (clearing it and dropping the owner's count), then its handle record entry, and runs the finish step. */
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
static __inline__ void ReleaseHandle(Ent *e, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_085D88(e, *h);
        *h = 0xFFFF;
    }
}
static __inline__ void FreeSlot(char *base, unsigned int i)
{
    Slot *s = &((Slot *)base)[i];

    if (s->b18 & 1) {
        base[0x408] = base[0x408] - 1;
    }
    memset(s, 0, sizeof(Slot));
}
void func_143DE8(Obj *o)
{
    Rec *r = o->f58;

    if (r->b44 != 0xFF) {
        FreeSlot(o->f54->w2C->w58, r->b44);
        r->b44 = 0xFF;
    }
    ReleaseHandle(&D_001DE778[r->b3], &r->h0);
    func_016D98(o);
}
