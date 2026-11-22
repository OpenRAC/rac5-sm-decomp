/* LEVEL_16:0x1590B8 -- when the linked record's flag is set and the passed owner matches its owner, starts the effect with the owner's id minus one. */
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
            do {
                func_0A2180(w->w_F4 - 1, D_001D4B38, -0x3F, 0xFFFFFFFFu);
            } while (0);
        }
    }
}
