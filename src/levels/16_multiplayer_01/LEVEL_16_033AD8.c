/* LEVEL_16:0x033AD8 -- records whether the table has an entry tagged 0x36919224 (inline search helper) in a global flag byte, then runs two follow-up helpers on the argument. */
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

extern Table *D_001B48A0;
extern unsigned char D_001A211F;
extern void func_112438(void);
extern void func_050790(void);

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

void func_033AD8(void *arg) {
    unsigned char *flag = &D_001A211F;
    Entry *found;

    found = find_entry(D_001B48A0, 0x36919224);
    *flag = found != 0;
    ((void (*)(void *))func_112438)(arg);
    ((void (*)(void *))func_050790)(arg);
}
