/* USA LEVEL_02.REL:0x1B7610, 480-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 20 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Ent;

typedef struct {
    char pad00[0x20];
    void (*fire)(float f, struct Ent *e, int a, int b, void *pos, int c, void *src);
    char pad24[0x3F - 0x24];
    unsigned char b3F;
} Type;

typedef struct Ent {
    char pad00[0x40];
    Type *type;
    char pad44[0x64 - 0x44];
    unsigned int flags;
} Ent;

typedef struct {
    struct Ent *ent;
    int pad[3];
} Slot;

typedef struct {
    char pad00[0x54];
    Slot *slots;
} Link;

typedef struct {
    char pad00[0x60];
    Link *link;
    unsigned int w64;
    char pad68;
    unsigned char b69;
    unsigned char b6a;
} Own;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x45 - 0x3C];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Own *owner;
} Obj;

extern float func_083378();
extern void func_1D9698(Link *l);
extern int func_014DA0(Obj *o, float a, float b, float c);
extern void func_01AE10(float f0, float f1, int a, int b, float *pos, int c, Obj *o);
extern void func_167A78(unsigned int a, int b);
extern int func_0833A0(Obj *o, int z);
extern unsigned int func_1B6650(Obj *o);
extern void func_1B5FC0(Obj *o, int mode, int arg);

static __inline__ int Usable(Own *own)
{
    Ent *e;
    int r;

    r = 0;
    if (own->b69 != 0xFF) {
        e = own->link->slots[own->b69].ent;
        if (e == 0)
            r = 0;
        else
            r = (e->flags & 0x20) == 0;
    }
    return r;
}

void func_1B7610(Obj *self)
{
    Own *own;
    Ent *e;
    unsigned char ok;
    unsigned int r;
    float phase;
    float one;

    phase = func_083378();
    own = self->owner;
    if (0.5666666626930237f <= phase && phase < 0.699999988079071f) {
        ok = Usable(own);
        if (ok) {
            one = 1.0f;
            func_1D9698(own->link);
            if (func_014DA0(self, one, 2.0f, 0.699999988079071f) != 0) {
                e = own->link->slots[own->b69].ent;
                if (e->type->b3F == 3) {
                    func_01AE10(one, 0.0f, 2, 1, self->pos, 0, self);
                } else {
                    if (e->type->fire != 0)
                        e->type->fire(one, e, 2, 1, self->pos, 0, self);
                    if ((e->flags & 8) != 0) {
                        func_167A78(own->w64, own->b6a);
                        own->b69 = 0xFF;
                    }
                }
            }
        }
    }
    if (func_0833A0(self, 0) != 0) {
        r = func_1B6650(self);
        if (r == 0xD)
            func_1B5FC0(self, self->b45, 0xE);
        else
            func_1B5FC0(self, self->b45, r & 0xFF);
    }
}
