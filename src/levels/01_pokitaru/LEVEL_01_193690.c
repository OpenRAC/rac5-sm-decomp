/* LEVEL_01:0x193690 -- looks up a hashed record in the shared table and publishes the start and end of its list (128-byte entries) and a float made from the packed id. */
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

extern Table *D_00206D90;
extern Game D_00297DC0;
extern char *D_00208774;
extern char *D_00208778;
extern float D_0020877C;

extern int func_0E31C8(unsigned int id);

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

void func_193690(void)
{
    Item *rec;
    int *count;

    rec = Find(0x702127E9u);
    count = &rec->count;
    D_00208774 = rec->list;
    D_00208778 = rec->list + (*count << 7);
    D_0020877C = (float)func_0E31C8((D_00297DC0.w148 << 16) | 0xA00030C1u);
}
