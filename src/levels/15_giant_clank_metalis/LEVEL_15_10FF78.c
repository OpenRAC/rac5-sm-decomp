/* LEVEL_15:0x10FF78 -- per-frame update of the actor: ticks down its three timers, rebuilds its transform chain, and when the state timer runs out leaves the current state and enters the next one through the state table. */
typedef struct Rec {
    float e[9];
} Rec;

typedef struct State {
    int id;
    int pad_04;
    int next;
    float k;
} State;

typedef struct Obj Obj;

typedef struct Entry {
    char pad_00[8];
    void (*enter)(Obj *);
    void (*exit)(Obj *);
    char pad_10[0xC];
} Entry;

typedef struct Table {
    Entry *entries;
    int pad_04;
} Table;

struct Obj {
    char pad_00[4];
    int state;
    char pad_08[4];
    float t[3];
    char pad_18[0x24];
    float m3C[12];
    float m6C[12];
    float m9C[12];
    float mCC[12];
    char pad_FC[0x134];
    float scale;
    float timer;
    char pad_238[0x9C];
    State *st;
};

extern Table D_00170198[];
extern float D_001700A8[];
extern float D_002EFE1C[];
extern char D_002ECBA8[];
extern void func_10D440(Obj *o, void *p);
extern void func_0EC3A0(float *out, float *a, float *b);
extern void func_0ECE10(int flag, Rec *v, float m0, float m1, float m2);
extern void func_0EC9F8(float *destination, void *unused, const float *source, float x, float y, float z);

void func_10FF78(Obj *o)
{
    State *st = o->st;
    int i;
    int next;
    Entry *e;
    Entry *e2;
    float k;

    for (i = 0; i < 3; i++)
        o->t[i] = o->t[i] - 1.0f;
    func_10D440(o, D_002ECBA8);
    func_0EC3A0(o->m9C, o->m6C, o->m3C);
    func_0ECE10(0, (Rec *)o->m9C, o->scale, o->scale, o->scale);
    k = D_002EFE1C[11];
    func_0EC9F8(o->mCC, 0, o->m9C, D_001700A8[0], D_001700A8[1], D_001700A8[2]);
    func_0ECE10(0, (Rec *)o->mCC, k, k, k);
    if (o->timer < 0.0f) {
        next = st->next;
        e = &D_00170198[o->st->id].entries[o->state];
        if (e->exit != 0)
            e->exit(o);
        o->state = next;
        e2 = &D_00170198[o->st->id].entries[next];
        if (e2->enter != 0)
            e2->enter(o);
    }
}
