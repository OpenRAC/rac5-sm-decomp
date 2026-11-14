/* LEVEL_08:0x189710 -- finds the table entry tagged 0x75CAA72C (inline search helper) and forwards it with the caller's argument to a helper. */
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

extern Table *D_0024FC50;
extern int func_0844E0(Entry *e, unsigned int key, char *arg, int d);

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

int func_189710(char *arg) {
    Entry *found;
    unsigned int key;

    key = 0x75CAA72C;
    found = find_entry(D_0024FC50, key);
    if (found != 0) {
        return func_0844E0(found, key, arg, 0xFF);
    }
    return 0;
}
