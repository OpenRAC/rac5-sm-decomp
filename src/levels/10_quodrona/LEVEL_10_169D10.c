/* LEVEL_10:0x169D10 -- spawner tick: while active, keeps four spawned children alive, respawns each after its timer runs out, and hands them over to the owner when the object is released. */
typedef struct Obj Obj;

struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0xE];
    struct Cfg *cfg;
    struct Slots *slots;
    char pad_5C[8];
    unsigned int flags;
};

typedef struct Cfg {
    char pad_00[0x34];
    Obj *owner;
    float interval;
    int w3C;
} Cfg;

typedef struct Slots {
    Obj *child[4];
    float timer[4];
    char pad_20[3];
    unsigned char released;
} Slots;

extern int func_084D08(int a, char *pos);
typedef struct Probe {
    char pad_00[0x30];
    char pos[1];
} Probe;

extern Probe D_0023E540;
static __inline__ int Probed(int a, Probe *pr)
{
    return func_084D08(a, pr->pos);
}

extern void func_169FC8(Obj *o);
extern Obj *func_169EB8(Obj *o);
extern void func_169FE8(Obj *owner, Obj *child);

void func_169D10(Obj *o)
{
    Cfg *cfg;
    Slots *s;
    Obj **p;
    Obj **end;
    Obj *t;
    float f;
    int i;

    cfg = o->cfg;
    if (o->state == 0) {
        if (cfg->w3C != 0 && Probed(cfg->w3C, &D_0023E540) != 0)
            o->flags = o->flags | 0x200000;
        if (o->flags & 0x200000)
            func_169FC8(o);
    }
    if (o->state == 1) {
        s = o->slots;
        end = s->child + 4;
        p = s->child;
        do {
            if (*p != 0 && (((*p)->flags) & 6) != 0)
                *p = 0;
            if (*p == 0 && s->released == 0) {
                f = ((float *)p)[4] - 1.0f;
                ((float *)p)[4] = f;
                if (f <= 0.0f) {
                    *p = func_169EB8(o);
                    if (*p != 0)
                        ((float *)p)[4] = cfg->interval * 30.0f;
                }
            }
            p++;
        } while ((int)p < (int)end);
        if (s->released != 0) {
            o->state = 2;
            t = cfg->owner;
            if (t == 0)
                t = o;
            func_169FC8(t);
            if (t != o) {
                for (i = 0; i < 4; i++) {
                    if (s->child[i] != 0) {
                        func_169FE8(t, s->child[i]);
                        s->child[i] = 0;
                    }
                }
            }
        }
    }
}
