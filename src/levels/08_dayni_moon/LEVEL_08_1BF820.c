/* LEVEL_08:0x1BF820 -- placement copy of LEVEL_01_193690.c: looks up a hashed record in the shared table and publishes the start and end of its list (128-byte entries) and a float made from the packed id. */
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

typedef struct {
    char pad0[0x148];
    int w148;
} Game;

extern Table *D_0024FC50;
extern Game D_002E7040;
extern char *D_00251E4C;
extern char *D_00251E50;
extern float D_00251E54;

extern int func_0EE198(unsigned int id);

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

void func_1BF820(void)
{
    Item *rec;
    int *count;

    rec = Find(0x702127E9u);
    count = &rec->count;
    D_00251E4C = rec->list;
    D_00251E50 = rec->list + (*count << 7);
    D_00251E54 = (float)func_0EE198((D_002E7040.w148 << 16) | 0xA00030C1u);
}
