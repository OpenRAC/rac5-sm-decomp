/* LEVEL_05:0x134400 -- placement copy of LEVEL_01_138A98.c: looks up a hashed record in the shared table and publishes the start and end of its list (128-byte entries). */
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

extern Table *D_001F5E10;
extern char *D_001F616C;
extern char *D_001F6170;

static __inline__ Item *Find(unsigned int hash)
{
    Table *t;
    unsigned int i;

    t = D_001F5E10;
    for (i = 0; i < t->count; i++) {
        if (t->items[i].hash == hash) {
            return &t->items[i];
        }
    }
    return 0;
}

void func_134400(void)
{
    Item *rec;
    int *count;

    rec = Find(0x355E8368u);
    count = &rec->count;
    D_001F616C = rec->list;
    D_001F6170 = rec->list + (*count << 7);
}
