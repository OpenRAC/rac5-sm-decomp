/* LEVEL_19:0x032E68 -- placement copy of LEVEL_16_033AD8.c: records whether the table has an entry tagged 0x36919224 (inline search helper) in a global flag byte, then runs two follow-up helpers on the argument. */
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

extern Table *D_001B5A20;
extern unsigned char D_001A329F;
extern void func_112AD8(void);
extern void func_04FBF0(void);

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

void func_032E68(void *arg) {
    unsigned char *flag = &D_001A329F;
    Entry *found;

    found = find_entry(D_001B5A20, 0x36919224);
    *flag = found != 0;
    ((void (*)(void *))func_112AD8)(arg);
    ((void (*)(void *))func_04FBF0)(arg);
}
