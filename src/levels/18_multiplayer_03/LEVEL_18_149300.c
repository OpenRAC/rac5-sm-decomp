/* LEVEL_18:0x149300 -- placement copy of LEVEL_16_14AAC8.c: spawns the object for a slot once and hands it to the placement routine. */
typedef struct {
    void *arg;
    char pad4[0x14];
    unsigned char flags;
    char pad19[3];
} Slot;

typedef struct Thing {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x1C];
    struct { struct { char pad0[0x2DC]; float h; } *info; } *ext;
} Thing;

typedef struct {
    Slot slots[12];
    Thing *(*make[12])(void *arg);
    char pad180[0x288];
    unsigned char used;
} Mgr;

typedef struct {
    char pad0[0x15];
    unsigned char limit;
} Cfg;

typedef struct {
    char pad0[0x54];
    Cfg *cfg;
    Mgr *mgr;
} Owner;

extern int func_014D50(Thing *t);
extern void func_14AA98(Mgr *m, Cfg *c, Thing *t, float *v);

void func_149300(Owner *o, int idx)
{
    Mgr *m = o->mgr;
    Cfg *c = o->cfg;
    Slot *s = &m->slots[idx];
    Thing *t;
    float v[3];
    float *p;

    if (s->flags & 1)
        return;
    s->flags |= 1;
    m->used++;
    if (c->limit < m->used)
        return;
    s->flags |= 2;
    t = m->make[idx](s->arg);
    p = t->pos;
    v[0] = t->pos[0];
    v[1] = p[1];
    v[2] = p[2];
    if (func_014D50(t) != 0)
        v[1] = t->ext->info->h;
    func_14AA98(m, c, t, v);
}
