/* LEVEL_17:0x14FFC8 -- selects or keeps a target for an actor from nearby candidates. */
typedef struct Inner {
    char pad[0xF4];
    int ok;
} Inner;

typedef struct Link {
    Inner *inner;
} Link;

typedef struct Cand {
    char pad[0x30];
    float x;
    float pad1;
    float z;
    char pad2[0x58 - 0x3C];
    Link *link;
    char pad3[0x64 - 0x5C];
    unsigned int flags;
} Cand;

typedef struct Target {
    char pad[0x30];
    float x;
    float pad1;
    float z;
    char pad2[0x45 - 0x3C];
    unsigned char kind;
    char pad3[0x58 - 0x46];
    Link *link;
    char pad4[0x59C - 0x5C];
    struct Target *next;
} Target;

typedef struct State {
    Target *target;
    char pad[0x64 - 4];
    unsigned char locked;
} State;

typedef struct Actor {
    char pad[0x30];
    float x;
    float pad1;
    float z;
    char pad2[0x58 - 0x3C];
    State *state;
} Actor;

typedef struct Slot {
    char pad[0x30];
    float x;
    float pad1;
    float z;
    char pad2[0x45 - 0x3C];
    unsigned char kind;
    char pad3[0x80 - 0x46];
} Slot;

extern Slot *D_001B11BC;
extern Slot *D_001B11C0;
extern int func_076C28(void *a, void *b);
extern Target *func_111F10(float *pos, float *dist);
extern int func_037C08(Inner *i);

void func_14FFC8(Actor *self, void *pos)
{
    State *st = self->state;
    Target *old = st->target;
    Slot *e;
    Target *best = 0;
    float bestd = 1444.0f;
    float dist;

    for (e = D_001B11BC; e != D_001B11C0; e++) {
        if (e->kind == 1) {
            float *ep = &e->x;
            float *sp = &self->x;
            float dx = ep[0] - sp[0];
            float dz = ep[2] - sp[2];
            float d = dx * dx + dz * dz;
            if (d < bestd) {
                if (func_076C28(pos, ep)) {
                    bestd = d;
                    best = (Target *)e;
                }
            }
        }
    }
    if (best != 0) {
        st->target = best;
        st->locked = 0;
    }
    if (st->target == 0) {
        Target *p = func_111F10(&self->x, &dist);
        if (p != 0) {
            if (dist < 36.0f) {
                if (func_076C28(pos, &p->x)) {
                    st->target = p->next;
                    st->locked = 1;
                }
            }
        }
    }
    if (st->target == 0) {
        Cand *c = (Cand *)old;
        if (c != 0 && (c->flags & 1) && st->locked != 0) {
            if (func_037C08(c->link->inner) == 0) {
                if (c->link->inner->ok != 0) {
                    if (func_076C28(pos, &c->x))
                        st->target = (Target *)c;
                }
            }
        }
    }
}
