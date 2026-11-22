/* LEVEL_17:0x1525E0 -- placement copy of LEVEL_16_15A1F8.c: like the neighbouring handler, with the flag and owner in the second slot of the linked record. */
typedef struct Owner { char pad00[0xF4]; int w_F4; } Owner;
typedef struct Rec { char pad00[0x18]; unsigned int flags; Owner *owner; } Rec;
typedef struct Obj { char pad00[0x58]; Rec *f58; } Obj;
extern char D_001C72A0[];
extern void func_0A1660(unsigned int mode, void *first, int second, unsigned int third);
void func_1525E0(Obj *o, Owner **pp)
{
    Rec *r = o->f58;
    if (r->flags & 1) {
        Owner *w = r->owner;
        if (w == *pp) {
            do {
                func_0A1660(w->w_F4 - 1, D_001C72A0, -0x63, 0xFFFFFFFFu);
            } while (0);
        }
    }
}
