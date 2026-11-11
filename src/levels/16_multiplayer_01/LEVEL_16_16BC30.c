/* LEVEL_16:0x16BC30 -- when the object's state is flagged and its owner matches the event's, publishes the two counters, formats the shared text buffer, plays the positional sound if one is set and registers the buffer under the event's slot. */
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

extern unsigned char D_002E58A0[0x40];
extern void *D_001BE098;
extern unsigned int D_001A1AE4;

extern void func_0A62C0(unsigned int index, unsigned int value);
extern void func_0A61C8(int index, int value);
extern void func_0218F8(Owner *owner, unsigned char *text, int a, int b, int c, int d);
extern void func_10F180(unsigned char *text, unsigned int count);
extern void func_0A7F28(void);
extern void func_0A7FD0(int index, char *name, int flag, int value);
extern void SND_PlayPositionalSound(void *snd, float *pos, float f12, void *out, unsigned int id)
    __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");

void func_16BC30(Obj *o, Event *ev)
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
    func_0A62C0(s->owner->wF4 - 1, info->w40);
    func_0A61C8(s->owner->wF4 - 1, 0x5A);
    func_0218F8(ev->owner, D_002E58A0, cfg->b18, info->w3C, cfg->b20, 0x40);
    func_10F180(D_002E58A0, 0x40);
    if (D_001BE098 != 0) {
        SND_PlayPositionalSound(D_001BE098, o->pos, 0.0f, 0, D_001A1AE4);
    }
    func_0A7F28();
    func_0A7FD0(ev->slot, (char *)D_002E58A0, 0, 0x5A);
}
