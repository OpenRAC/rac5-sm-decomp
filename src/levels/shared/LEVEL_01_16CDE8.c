/* LEVEL_01:0x16CDE8 -- looks the owner up in the level's twelve-slot table and,
   when it is not there yet, claims a free slot for it. */
typedef struct {
    void *owner;
    int extra;
    char pad[8];
    float f10;
    float f14;
    char pad2[4];
} Entry;

typedef struct {
    char pad[0x58];
    Entry *table;
} Obj;

typedef struct {
    char pad[0x64];
    unsigned int flags;
} Owner;

int func_16CDE8(Obj *self, Owner *owner, int extra, float f10, float f14)
{
    Entry *t = self->table;
    unsigned int i;

    for (i = 0; i < 12; i++) {
        if (owner == t[i].owner)
            return i;
    }
    for (i = 0; i < 12; i++) {
        if (t[i].owner == 0) {
            t[i].f14 = f14;
            t[i].extra = extra;
            t[i].f10 = f10;
            t[i].owner = owner;
            owner->flags |= 0x10;
            return i;
        }
    }
    return 255;
}
