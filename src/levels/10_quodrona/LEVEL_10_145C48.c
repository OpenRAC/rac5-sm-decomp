/* LEVEL_10:0x145C48 -- looks up the entry with a fixed key in the global table and, when found, forwards it with the argument and 0xFF to the helper. */

typedef struct Entry10_165480 {
    unsigned char pad_00[0x24];
    unsigned int key_24;
    unsigned char pad_28[0x44 - 0x28];
} Entry10_165480;

typedef struct Obj10_165480 {
    unsigned char pad_00[0x34];
    Entry10_165480 *entries_34;
    unsigned int count_38;
} Obj10_165480;

extern Obj10_165480 *D_0020F9F0;
extern int func_07CB88(void *p, unsigned int key, int z, int w);

static inline Entry10_165480 *find_entry(Obj10_165480 *o, unsigned int key) {
    Entry10_165480 *cur;
    unsigned int i;

    for (i = 0; i < o->count_38; i++) {
        cur = &o->entries_34[i];
        if (cur->key_24 == key) {
            return cur;
        }
    }
    return 0;
}

int func_145C48(int z) {
    Entry10_165480 *found;
    unsigned int key;

    key = 0x1A7AA36E;
    found = find_entry(D_0020F9F0, key);
    if (found != 0) {
        return func_07CB88(found, key, z, 0xFF);
    }
    return 0;
}
