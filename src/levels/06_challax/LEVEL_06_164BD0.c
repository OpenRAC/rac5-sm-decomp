/* LEVEL_06:0x164BD0 -- placement copy of LEVEL_01_175FA0.c: collects the sound handles of the model's optional channels into the state record, scales the fade length by the tick rate, flags the object and halves the frame counter; always returns 1. */
typedef struct {
    unsigned int w00;
    int w04;
    char bytes[0x10];
    int count;
} State;

typedef struct {
    char pad0[0x34];
    unsigned int frames;
    float fade;
    char pad3C[6];
} Cfg;

typedef struct {
    char pad0[0x54];
    Cfg *cfg;
    State *state;
    char pad5C[8];
    unsigned int flags;
    char pad68[0x0F];
    char b77;
} Obj;

extern int func_07B948(Obj *o, int hash);

static __inline__ void Add(Obj *o, State *s, unsigned int hash)
{
    int c = func_07B948(o, hash);

    s->bytes[s->count] = c;
    if ((signed char)c != -1) {
        s->count = s->count + 1;
    }
}

int func_164BD0(Obj *o)
{
    State *s = o->state;
    Cfg *c = o->cfg;
    unsigned char *k = (unsigned char *)c;

    s->count = 0;
    if (k[0x3C] != 0) {
        Add(o, s, 0x7C1D3EC0);
    }
    if (k[0x3D] != 0) {
        Add(o, s, 0xD200B95F);
    }
    if (k[0x3E] != 0) {
        Add(o, s, 0xA50789C9);
    }
    if (k[0x3F] != 0) {
        Add(o, s, 0x2F1E61FF);
    }
    if (k[0x40] != 0) {
        Add(o, s, 0xAC1FC630);
    }
    if (k[0x41] != 0) {
        Add(o, s, 0x19510EBA);
    }
    c->fade = c->fade * 0.016666999086737633f * 30.0f;
    o->b77 = 0;
    o->flags |= 0x20;
    s->w00 = 0xFFFFFFFF;
    s->w04 = 1;
    c->frames >>= 1;
    return 1;
}
