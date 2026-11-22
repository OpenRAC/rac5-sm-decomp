/* LEVEL_04:0x16F868 -- picks a random effect id from a short list (the last entry only when a roll beats the object's level), spawns the matching record and tags it with the id. */
struct Rec { char pad[0x24]; unsigned magic; char pad2[0x1C]; };
struct L {
    char pad[0x34];
    struct Rec *arr;
    unsigned n;
};

typedef struct {
    char pad0[0x1C];
    int w1C;
} Sub;

typedef struct {
    char pad0[0x58];
    Sub *sub;
} Spawn;

typedef struct {
    char pad0[0x47];
    unsigned char level;
} Prop;

typedef struct {
    char pad0[0x58];
    Prop *prop;
} Obj;

extern struct L *D_002201B0;
extern int D_002396F8[];
extern int rand(void);
extern int func_1E6DD0(void);
extern Spawn *func_07F9D0(struct Rec *e, int a, void *b, int c);

static __inline__ struct Rec *Find(unsigned magic)
{
    unsigned i;

    for (i = 0; i < D_002201B0->n; i++) {
        if (D_002201B0->arr[i].magic == magic) {
            return &D_002201B0->arr[i];
        }
    }
    return 0;
}

Spawn *func_16F868(Obj *o, void *arg)
{
    int ids[3];
    int n;
    int need;
    int kind;
    int idx;
    int key;
    struct Rec *e;
    Spawn *s;

    ids[0] = 1;
    ids[1] = 2;
    n = 2;
    need = 16 - o->prop->level;
    if (func_1E6DD0() < need) {
        ids[2] = 0;
        n = 3;
    }
    if (n != 0) {
        idx = rand() % n;
    } else {
        idx = 0;
    }
    kind = ids[idx];
    key = D_002396F8[kind];
    e = Find(0xD0FE82B5);
    if (e == 0) {
        s = 0;
    } else {
        s = func_07F9D0(e, key, arg, 0xFF);
    }
    s->sub->w1C = kind;
    return s;
}
