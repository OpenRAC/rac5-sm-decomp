/* LEVEL_17:0x150C60 -- finds the record with the wanted key word (+0x24) in the global table (0x44-byte records, count at +0x38) and publishes its base value, base plus index scaled by 0x80, and the results of two lookups of fixed ids. */
typedef struct {
    char pad_00[0x0C];
    int base_0C;
    char pad_10[0x14];
    unsigned int key_24;
    char pad_28[0x1C];
} Record;

typedef struct {
    char pad_00[0x34];
    Record *records_34;
    unsigned int count_38;
} Table;

extern Table *D_001A7EA0;
extern int D_001B11BC;
extern int D_001B11C0;
extern int D_001B11C8;
extern int D_001B11CC;

extern int func_106410(unsigned int value);

static __inline__ Record *Find(Table *t, unsigned int key)
{
    unsigned int i;

    for (i = 0; i < t->count_38; i++) {
        if (t->records_34[i].key_24 == key) {
            return &t->records_34[i];
        }
    }
    return 0;
}

void func_150C60(void)
{
    Record *rec;

    rec = Find(D_001A7EA0, 0xC9B607EEU);
    D_001B11BC = rec->base_0C;
    D_001B11C0 = D_001B11BC + *(int *)((char *)rec + 0x30) * 0x80;
    D_001B11C8 = func_106410(0x49D1AF92U);
    D_001B11CC = func_106410(0xEBF916E2U);
}
