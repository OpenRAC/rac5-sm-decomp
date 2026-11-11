/* LEVEL_02:0x1D3880 -- relocates the record's stored offset, looks up a tagged entry in the global table, spawns an object from it through func_082E40, stores it in the slot, marks both objects with 0x32 and installs the hook; returns whether the object was created. */
typedef struct {
    char pad00[0x77];
    unsigned char b77;
} Spawned;

typedef struct {
    int w0;
} Rec;

typedef struct {
    Spawned *w0;
} Slot;

typedef struct {
    char pad00[0x48];
    int w48;
    char pad4C[0x54 - 0x4C];
    Rec *rec;
    Slot *slot;
    char pad5C[0x77 - 0x5C];
    unsigned char b77;
} Obj;

struct Ent {
    char pad0[0x24];
    int f24;
    char pad28[0x44 - 0x28];
};

struct Mgr {
    char pad0[0x34];
    struct Ent *f34;
    unsigned int f38;
};

extern struct Mgr *D_0021BD50;
extern int D_0021BD54;
extern Spawned *func_082E40(struct Ent *e, int key, Obj *o, int a);
extern void func_1D3B00(void);

int func_1D3880(Obj *o)
{
    Rec *rec;
    Slot *slot;
    struct Mgr *m;
    struct Ent *cur;
    Spawned *made;
    unsigned int i;
    int v;
    int ok;
    int key;

    rec = o->rec;
    v = rec->w0;
    if (v == 0) {
        ok = 0;
    } else {
        rec->w0 = D_0021BD54 + v;
        ok = 1;
    }
    if (!ok)
        return 0;
    key = 0xD01ABD86;
    slot = o->slot;
    m = D_0021BD50;
    for (i = 0; i < m->f38; i++) {
        if (m->f34[i].f24 == key) {
            cur = &m->f34[i];
            goto found;
        }
    }
    cur = 0;
found:
    if (cur == 0)
        made = 0;
    else
        made = func_082E40(cur, 0xE6064001, o, 0xFF);
    slot->w0 = made;
    if (made == 0)
        return 0;
    made->b77 = 0x32;
    o->b77 = 0x32;
    *(int *)(o->w48 + 0xDC) = (int)func_1D3B00;
    return 1;
}
