/* LEVEL_16:0x15A1F8 -- like the neighbouring handler, with the flag and owner in the second slot of the linked record. */
typedef struct Owner { char pad00[0xF4]; int w_F4; } Owner;
typedef struct Rec { char pad00[0x18]; unsigned int flags; Owner *owner; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; } Obj;
extern char D_001D4F58[];
extern void func_0A2180(unsigned int mode, void *first, int second, unsigned int third);
void func_15A1F8(Obj *o, Owner **pp)
{
    Rec *r = o->f58;
    if (r->flags & 1) {
        Owner *w = r->owner;
        if (w == *pp) {
            do {
                func_0A2180(w->w_F4 - 1, D_001D4F58, -0x63, 0xFFFFFFFFu);
            } while (0);
        }
    }
}
