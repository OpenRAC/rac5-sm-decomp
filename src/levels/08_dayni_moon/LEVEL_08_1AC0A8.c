/* LEVEL_08:0x1AC0A8 -- resolves the record's offset fields into pointers (five validated slots, one more validated slot, one plain offset and a last validated slot; any failure returns 0), then flags the object, clears its state and installs the update callback. */
typedef struct State {
    int w0;
} State;

typedef struct Handler {
    char pad_00[0xDC];
    void (*update)(void);
} Handler;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char b45;
    char pad_46[0x2];
    Handler *handler;
    char pad_4C[8];
    int *rec;
    State *state;
    char pad_5C[8];
    unsigned int flags;
} Obj;

extern char *D_0024FC54;
extern void func_1AC538(void);

static __inline__ int Resolve(int *slot)
{
    char *entry;

    if (*slot == 0) {
        return 0;
    }
    entry = D_0024FC54 + *slot;
    if (*(int *)(entry + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)entry;
    return 1;
}

int func_1AC0A8(Obj *o)
{
    int *r;
    unsigned int i;
    int ok;

    r = o->rec;
    for (i = 0; i < 5; i++) {
        if (!Resolve(&r[i])) {
            return 0;
        }
    }
    if (!Resolve(&r[5])) {
        return 0;
    }
    if (r[6] == 0) {
        ok = 0;
    } else {
        r[6] = (int)D_0024FC54 + r[6];
        ok = 1;
    }
    if (!ok) {
        return 0;
    }
    if (!Resolve(&r[7])) {
        return 0;
    }
    o->flags |= 0x20;
    o->b45 = 0;
    o->state->w0 = 0;
    o->handler->update = func_1AC538;
    return 1;
}
