/* LEVEL_04:0x06D7B8 -- placement copy of LEVEL_01_06BBD8.c: on first use creates a pool id, then spawns up to eight pooled objects of one kind into the owner's slot list and flags each. */
struct Rec { char pad[0x24]; unsigned magic; char pad2[0x1C]; };
struct L {
    char pad[0x34];
    struct Rec *arr;
    unsigned n;
};

typedef struct {
    char pad0[0x54];
    unsigned char *state;
} Spawned;

typedef struct {
    char pad0[0x1D4];
    Spawned *slots[8];
} Owner;

extern int D_0020DF1C;
extern struct L *D_002201B0;
extern int func_137648(unsigned int kind, int count);
extern Spawned *func_07F9D0(struct Rec *e, int a, int b, int c);

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

void func_06D7B8(Owner *owner)
{
    unsigned int i;
    struct Rec *e;
    Spawned *o;

    if (D_0020DF1C == -1) {
        D_0020DF1C = func_137648(0x38, 8);
    }
    for (i = 0; i < 8; i++) {
        e = Find(0x4AC0D376);
        if (e == 0) {
            o = 0;
        } else {
            o = func_07F9D0(e, 0, 0, 0xFF);
        }
        owner->slots[i] = o;
        if (o == 0) {
            return;
        }
        o->state[0x1A] = 1;
    }
}
