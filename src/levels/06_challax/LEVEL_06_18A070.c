/* LEVEL_06:0x18A070 -- placement copy of LEVEL_01_193690.c: looks up a hashed record in the shared table and publishes the start and end of its list (128-byte entries) and a float made from the packed id. */
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

extern Table *D_001F5990;
extern Game D_00284B40;
extern char *D_001F781C;
extern char *D_001F7820;
extern float D_001F7824;

extern int func_0DDAC8(unsigned int id);

static __inline__ Item *Find(unsigned int hash)
{
    Table *t;
    unsigned int i;

    t = D_001F5990;
    for (i = 0; i < t->count; i++) {
        if (t->items[i].hash == hash) {
            return &t->items[i];
        }
    }
    return 0;
}

void func_18A070(void)
{
    Item *rec;
    int *count;

    rec = Find(0x702127E9u);
    count = &rec->count;
    D_001F781C = rec->list;
    D_001F7820 = rec->list + (*count << 7);
    D_001F7824 = (float)func_0DDAC8((D_00284B40.w148 << 16) | 0xA00030C1u);
}
