/* LEVEL_01:0x138A98 -- looks up a hashed record in the shared table and publishes the start and end of its list (128-byte entries). */
typedef struct {
    char pad0[0xC];
    char *list;
    char pad10[0x24 - 0x10];
    unsigned int hash;
    char pad28[0x30 - 0x28];
    int count;
    char pad34[0x44 - 0x34];
} Item;

typedef struct {
    char pad0[0x34];
    Item *items;
    unsigned int count;
} Table;

extern Table *D_00206D90;
extern char *D_002070EC;
extern char *D_002070F0;

static __inline__ Item *Find(unsigned int hash)
{
    Table *t;
    unsigned int i;

    t = D_00206D90;
    for (i = 0; i < t->count; i++) {
        if (t->items[i].hash == hash) {
            return &t->items[i];
        }
    }
    return 0;
}

void func_138A98(void)
{
    Item *rec;
    int *count;

    rec = Find(0x355E8368u);
    count = &rec->count;
    D_002070EC = rec->list;
    D_002070F0 = rec->list + (*count << 7);
}
