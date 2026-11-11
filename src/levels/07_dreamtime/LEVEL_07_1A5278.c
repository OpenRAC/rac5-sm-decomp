/* LEVEL_07:0x1A5278 -- placement copy of LEVEL_01_193690.c: looks up a hashed record in the shared table and publishes the start and end of its list (128-byte entries) and a float made from the packed id. */
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

extern Table *D_0021B090;
extern Game D_002AD6C0;
extern char *D_0021D374;
extern char *D_0021D378;
extern float D_0021D37C;

extern int func_0E4860(unsigned int id);

static __inline__ Item *Find(unsigned int hash)
{
    Table *t;
    unsigned int i;

    t = D_0021B090;
    for (i = 0; i < t->count; i++) {
        if (t->items[i].hash == hash) {
            return &t->items[i];
        }
    }
    return 0;
}

void func_1A5278(void)
{
    Item *rec;
    int *count;

    rec = Find(0x702127E9u);
    count = &rec->count;
    D_0021D374 = rec->list;
    D_0021D378 = rec->list + (*count << 7);
    D_0021D37C = (float)func_0E4860((D_002AD6C0.w148 << 16) | 0xA00030C1u);
}
