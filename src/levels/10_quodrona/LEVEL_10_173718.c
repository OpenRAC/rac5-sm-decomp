/* LEVEL_10:0x173718 -- steps a table-driven sequence on the owner while a flag is set, otherwise releases the owner sub-record and resets the step. */

typedef struct {
    char pad_00[0x28];
    float lim_28;
} Lim;

typedef struct {
    char pad_00[4];
    Lim *lim_04;
    float pos_08;
} Ctl;

typedef struct {
    char pad_00[4];
    char b_04;
    char pad_05[3];
} Sub;

typedef struct {
    char pad_00[0x48];
    void *p_48;
} Hook;

typedef struct {
    char pad_000[0x370];
    Sub sub_370;
    Ctl *ctl_378;
    char pad_37C[0x220];
    Hook *hook_59C;
} Owner;

typedef struct {
    char pad_00[4];
    Owner *owner_04;
    char pad_08[0x6C];
    unsigned int flags_74;
    char pad_78[0x78];
    int count_F0;
} Self;

extern int D_00210610;
extern float D_0022A608[];
extern void func_069E08(Owner *o, int a, int b, int c);
extern void func_069DF8(Owner *o);
extern int func_08C138(void *p, Sub *s);
extern int func_08C210(Sub *s, int n);
extern int func_08C178(void *p, Sub *s);
extern int func_173980(Self *s, int i);

void func_173718(Self *self)
{
    Owner *o;
    Ctl *c;
    float f;
    Sub *s;
    Sub *t;

    func_069E08(self->owner_04, 0xE, 0xFFFF, 8);
    if ((self->flags_74 & 0x2000) != 0 && self->count_F0 > 0) {
        o = self->owner_04;
        s = &o->sub_370;
        if (s->b_04 == -1) {
            func_08C138(o->hook_59C->p_48, s);
        }
        func_069DF8(self->owner_04);
        c = self->owner_04->ctl_378;
        if (c == 0) {
            return;
        }
        f = c->pos_08;
        if (c->lim_04->lim_28 <= f + 0.03333333507180214f) {
            D_00210610 = 0;
            return;
        }
        if (D_0022A608[D_00210610] <= f) {
            func_173980(self, D_00210610);
            D_00210610 = D_00210610 + 1;
        }
    } else {
        t = &self->owner_04->sub_370;
        if (func_08C210(t, 1) == 0) {
            func_08C178(self->owner_04->hook_59C->p_48, t);
        }
        D_00210610 = 0;
    }
}
