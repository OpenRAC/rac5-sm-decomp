/* LEVEL_17:0x033420 -- placement copy of LEVEL_16_033AD8.c: records whether the table has an entry tagged 0x36919224 (inline search helper) in a global flag byte, then runs two follow-up helpers on the argument. */
typedef struct Entry {
    unsigned char pad_00[0x24];
    unsigned int key_24;
    unsigned char pad_28[0x44 - 0x28];
} Entry;

typedef struct Table {
    unsigned char pad_00[0x34];
    Entry *entries_34;
    unsigned int count_38;
} Table;

extern Table *D_001A7EA0;
extern unsigned char D_0019571F;
extern void func_1119B0(void);
extern void func_0501C0(void);

static inline Entry *find_entry(Table *t, unsigned int key) {
    Entry *cur;
    unsigned int i;

    for (i = 0; i < t->count_38; i++) {
        cur = &t->entries_34[i];
        if (cur->key_24 == key) {
            return cur;
        }
    }
    return 0;
}

void func_033420(void *arg) {
    unsigned char *flag = &D_0019571F;
    Entry *found;

    found = find_entry(D_001A7EA0, 0x36919224);
    *flag = found != 0;
    ((void (*)(void *))func_1119B0)(arg);
    ((void (*)(void *))func_0501C0)(arg);
}
