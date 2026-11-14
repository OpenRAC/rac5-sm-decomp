/* LEVEL_10:0x1A0EE8 -- finds the table entry tagged 0x3AB50B0C (inline search helper) and forwards it to a helper. */

typedef struct Entry {
    unsigned char pad_00[0x24];
    unsigned int key_24;
    unsigned char pad_28[0x44 - 0x28];
} Entry;

typedef struct Obj {
    unsigned char pad_00[0x34];
    Entry *entries_34;
    unsigned int count_38;
} Obj;

extern Obj *D_0020F9F0;
extern int func_07CB88(void *p, unsigned int key, int z, int w);

static inline Entry *find_entry(Obj *o, unsigned int key) {
    Entry *cur;
    unsigned int i;

    for (i = 0; i < o->count_38; i++) {
        cur = &o->entries_34[i];
        if (cur->key_24 == key) {
            return cur;
        }
    }
    return 0;
}

int func_1A0EE8(void) {
    Entry *found;
    unsigned int key;

    key = 0x3AB50B0C;
    found = find_entry(D_0020F9F0, key);
    if (found != 0) {
        return func_07CB88(found, key, 0, 0xFF);
    }
    return 0;
}
