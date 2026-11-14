/* LEVEL_08:0x1B5828 -- finds a keyed record in a global list, then runs a helper on each of its sub-entries with the given argument; returns 1. */
struct Entry {
    char pad_00[0x20];
    int w20;
    char pad_24[0x34 - 0x24];
};

struct Rec44 {
    char pad_00[4];
    struct Entry *entries;
    char pad_08[0x24 - 8];
    int key;
    char pad_28[0x14];
    unsigned char count;
    char pad_3D[7];
};

struct Gbl {
    char pad_00[0x34];
    struct Rec44 *items;
    unsigned int count;
};

extern struct Gbl *D_0024FC50;
extern void func_0844E0(struct Rec44 *q, int w, int a, int b);

int func_1B5828(int a0)
{
    struct Gbl *g;
    struct Rec44 *q;
    struct Entry *e;
    struct Entry *end;
    unsigned int i;
    int key;

    key = (int)0xAE268FFE;
    g = D_0024FC50;
    for (i = 0; i < g->count; i++) {
        if (g->items[i].key == key) {
            q = &g->items[i];
            goto found;
        }
    }
    q = 0;
found:
    end = q->entries + q->count;
    e = q->entries;
    if (e != end) {
        do {
            func_0844E0(q, e->w20, a0, 0xFF);
            e++;
        } while (e != end);
    }
    return 1;
}
