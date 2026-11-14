/* LEVEL_08:0x149E90 -- placement copy of LEVEL_01_138A98.c: looks up a hashed record in the shared table and publishes the start and end of its list (128-byte entries). */
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

extern Table *D_0024FC50;
extern char *D_0024FFAC;
extern char *D_0024FFB0;

static __inline__ Item *Find(unsigned int hash)
{
    Table *t;
    unsigned int i;

    t = D_0024FC50;
    for (i = 0; i < t->count; i++) {
        if (t->items[i].hash == hash) {
            return &t->items[i];
        }
    }
    return 0;
}

void func_149E90(void)
{
    Item *rec;
    int *count;

    rec = Find(0x355E8368u);
    count = &rec->count;
    D_0024FFAC = rec->list;
    D_0024FFB0 = rec->list + (*count << 7);
}
