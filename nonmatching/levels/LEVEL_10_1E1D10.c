/* USA LEVEL_10.REL:0x1E1D10 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_1D2168 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct { unsigned char c[4]; } Col;

typedef struct Methods {
    char pad_00[4];
    void (*notify)(void *self, int code);
} Methods;

typedef struct Ctl {
    Methods *methods;
    char pad_04[0x24];
    char state[1];
} Ctl;

typedef struct Self {
    char pad_00[0x46];
    unsigned char state;
    char pad_47[0x11];
    Ctl *ctl;
} Self;

extern Col D_00234308;
extern int func_1D2168(void *a0, Self *o, unsigned char *st, Col c, float f);

void func_1E1D10(Self *self)
{
    Ctl *ctl;
    Col c;

    c = D_00234308;
    ctl = self->ctl;
    if (func_1D2168(&ctl->state, self, &self->state, c, 0.6000000238418579f))
        ctl->methods->notify(self, 9);
}
