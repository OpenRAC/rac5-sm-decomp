/* LEVEL_17:0x164910 -- placement copy of LEVEL_16_16E170.c: advances the level of the first usable slot of a player's list, attaches a follower on the first step and resets the object's timer. */

struct Entry {
    char pad[0x24];
    int hash;
    char pad28[0x1C];
};
struct Table {
    char pad[0x34];
    struct Entry *entries;
    unsigned count;
};
struct Spawn {
    char pad[0x58];
    int *link;
    char pad5C[8];
    unsigned flags;
    char pad68[0xC];
    char sub[1];
};
struct Owner {
    char pad_00[0xF4];
    int w_F4;
    int ctx;
    char pad_FC[0x4A0];
    int w_59C;
    char pad_5A0[4];
    int link_id;
    struct Spawn *spawn;
    char pad_5AC[0x3F4];
    unsigned int state;
};

typedef struct {
    char data[0x54];
} Cell;

typedef struct Slot {
    char pad_00[0x3C];
    unsigned int level;
} Slot;

typedef struct Tag {
    int id;
    unsigned int color;
    int pad[2];
} Tag;

typedef struct Cfg {
    char pad_00[0x14];
    float f14;
    float f18;
    float f1c;
    float f20;
} Cfg;

typedef struct Sub {
    char pad_00[4];
    float scale_src[1];
    char pad_08[0x54];
    float timer;
} Sub;

typedef struct Ent {
    char pad_00[0x45];
    unsigned char mode;
    char pad_46[0x12];
    Sub *sub;
} Ent;

extern Cfg *D_001B172C;

extern void func_181650(Tag *t);
extern void func_0CC550(float scale, float *p, unsigned int color);
extern void func_073C48(Ent *self, Cfg *cfg, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern char *func_020FA0(char *item);
extern int func_020FF0(char *item, void *other);
extern Cell *func_021A48(unsigned int row, int column);
extern struct Spawn *func_12CE30(int unused, struct Owner *owner);
extern void func_12B5F8(char *object, int value);
extern void func_014ED0(char *o, int mode);

static __inline__ unsigned int *MinPtr(unsigned int *a, unsigned int *b)
{
    if (*a < *b)
        return a;
    return b;
}

void func_164910(Ent *self, struct Owner *own)
{
    Tag tag;
    unsigned int lo;
    unsigned int hi;
    Sub *sub;
    Cfg *cfg;
    Slot *slot;
    struct Spawn *sp;
    unsigned int state;
    unsigned int prev;
    unsigned int level;
    unsigned int i;

    tag.id = own->w_59C;
    tag.color = 0xFF80FFFF;
    sub = self->sub;
    func_181650(&tag);
    func_0CC550(1.5f, &sub->scale_src[0], 0x80FFFF);
    cfg = D_001B172C;
    if (cfg != 0)
        func_073C48(self, cfg, cfg->f14, cfg->f18, cfg->f1c, cfg->f20, 0, 0, 0, 0, 0, 1);
    slot = (Slot *)func_020FA0((char *)own);
    state = own->state;
    if (state - 2 >= 14 || slot->level == 2) {
        state = 0;
        for (i = 2; i < 15; i++) {
            if (func_020FF0((char *)own, (void *)i) == 0)
                continue;
            if (((Slot *)func_021A48(i, own->ctx))->level == 2)
                continue;
            slot = (Slot *)func_021A48(i, own->ctx);
            state = i;
            break;
        }
    }
    if (state != 0) {
        prev = slot->level;
        lo = prev + 1;
        hi = 2;
        level = *MinPtr(&lo, &hi);
        slot->level = level;
        if (prev != level) {
            if (state == 2 && own->state == state && level == state) {
                sp = func_12CE30(own->link_id, own);
                if (sp != 0) {
                    func_12B5F8((char *)own->link_id, (int)sp);
                    *sp->link = (int)own;
                }
            }
            func_014ED0((char *)own, state);
        }
    }
    self->mode = 5;
    sub->timer = 36.00071716308594f;
}
