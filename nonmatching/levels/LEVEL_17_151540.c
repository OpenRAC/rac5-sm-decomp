/* USA LEVEL_17.REL:0x151540, 392-byte candidate (21 November 2026).
 * Measured pinned --as: 5 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0x24];
    unsigned int key;
    char pad_28[0x1C];
} Entry;

typedef struct {
    char pad_00[0x34];
    Entry *items;
    unsigned int count;
} List;

typedef struct {
    char pad_00[0x64];
    unsigned int flags;
} Spawn;

typedef struct {
    int tag;
    float timer;
    Spawn *spawn;
} Slot;

typedef struct {
    Slot slots[32];
    unsigned int count;
} Block;

typedef struct {
    char pad_00[0x58];
    Block *block;
} Owner;

extern List *D_001A7EA0;
extern int rand(void);
extern Spawn *func_06FE68(Entry *e, unsigned int key, int tag, int flags);

static __inline__ Entry *FindEntry(unsigned int key)
{
    unsigned int i;

    for (i = 0; i < D_001A7EA0->count; i++) {
        if (D_001A7EA0->items[i].key == key) {
            return &D_001A7EA0->items[i];
        }
    }
    return 0;
}

static __inline__ Spawn *SpawnKeyed(unsigned int key, int tag, int flags)
{
    Entry *found;

    found = FindEntry(key);
    if (found == 0) {
        return 0;
    }
    return func_06FE68(found, key, tag, flags);
}

void func_151540(Owner *o, float dt)
{
    Block *b;
    Slot *s;
    Spawn *n;
    unsigned int i;

    b = o->block;
    for (i = 0; i < b->count; i++) {
        s = &b->slots[i];
        if (s->spawn == 0) {
            s->timer = s->timer - dt;
            if (s->timer <= 0.0f) {
                n = SpawnKeyed(0x50C45F32u, s->tag, 0xFF);
                if (n != 0) {
                    s->spawn = n;
                }
            }
        } else if ((s->spawn->flags & 1) == 0) {
            s->spawn = 0;
            s->timer = (float)rand() * 4.656613e-10f * 5.0f + 5.0f;
        }
    }
}
