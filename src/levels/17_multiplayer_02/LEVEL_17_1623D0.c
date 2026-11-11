/* LEVEL_17:0x1623D0 -- placement copy of LEVEL_16_16BC30.c: when the object's state is flagged and its owner matches the event's, publishes the two counters, formats the shared text buffer, plays the positional sound if one is set and registers the buffer under the event's slot. */
typedef struct {
    char pad00[0xF4];
    int wF4;
} Owner;

typedef struct {
    char pad00[0x3C];
    int w3C;
    int w40;
} Info;

typedef struct {
    Owner *owner;
    unsigned int flags;
    Info *info;
} State;

typedef struct {
    char pad00[0x18];
    unsigned char b18;
    char pad19[0x20 - 0x19];
    unsigned char b20;
} Cfg;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x54 - 0x3C];
    Cfg *cfg;
    State *state;
} Obj;

typedef struct {
    Owner *owner;
    char pad04[4];
    int slot;
} Event;

extern unsigned char D_002D6A08[0x40];
extern void *D_001B15D0;
extern unsigned int D_001950E4;

extern void func_0A57A0(unsigned int index, unsigned int value);
extern void func_0A56A8(int index, int value);
extern void func_021278(Owner *owner, unsigned char *text, int a, int b, int c, int d);
extern void func_10E6F8(unsigned char *text, unsigned int count);
extern void func_0A7468(void);
extern void func_0A7510(int index, char *name, int flag, int value);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_1623D0(Obj *o, Event *ev)
{
    State *s;
    Cfg *cfg;
    Info *info;

    s = o->state;
    cfg = o->cfg;
    info = s->info;
    if ((s->flags & 1) == 0) {
        return;
    }
    if (s->owner != ev->owner) {
        return;
    }
    func_0A57A0(s->owner->wF4 - 1, info->w40);
    func_0A56A8(s->owner->wF4 - 1, 0x5A);
    func_021278(ev->owner, D_002D6A08, cfg->b18, info->w3C, cfg->b20, 0x40);
    func_10E6F8(D_002D6A08, 0x40);
    if (D_001B15D0 != 0) {
        SND_PlayPositionalSound(D_001B15D0, o->pos, 0.0f, 0, D_001950E4);
    }
    func_0A7468();
    func_0A7510(ev->slot, (char *)D_002D6A08, 0, 0x5A);
}
