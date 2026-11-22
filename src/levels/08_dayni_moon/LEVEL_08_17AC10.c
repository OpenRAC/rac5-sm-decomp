/* LEVEL_08:0x17AC10 -- placement copy of LEVEL_04_16F868.c: picks a random effect id from a short list (the last entry only when a roll beats the object's level), spawns the matching record and tags it with the id. */
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

extern struct L *D_0024FC50;
extern int D_0026AA90[];
extern int rand(void);
extern int func_20E9A0(void);
extern Spawn *func_0844E0(struct Rec *e, int a, void *b, int c);

static __inline__ struct Rec *Find(unsigned magic)
{
    unsigned i;

    for (i = 0; i < D_0024FC50->n; i++) {
        if (D_0024FC50->arr[i].magic == magic) {
            return &D_0024FC50->arr[i];
        }
    }
    return 0;
}

Spawn *func_17AC10(Obj *o, void *arg)
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
    if (func_20E9A0() < need) {
        ids[2] = 0;
        n = 3;
    }
    if (n != 0) {
        idx = rand() % n;
    } else {
        idx = 0;
    }
    kind = ids[idx];
    key = D_0026AA90[kind];
    e = Find(0xD0FE82B5);
    if (e == 0) {
        s = 0;
    } else {
        s = func_0844E0(e, key, arg, 0xFF);
    }
    s->sub->w1C = kind;
    return s;
}
