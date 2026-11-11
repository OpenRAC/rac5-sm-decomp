/* LEVEL_24:0x19A080 -- finds the table entry tagged 0x8563E449 (inline search helper) and forwards it to a helper. */

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

extern Obj10_165480 *D_001D7A10;
extern int func_076C50(void *p, unsigned int key, int z, int w);

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

int func_19A080(void) {
    Entry10_165480 *found;
    unsigned int key;

    key = 0x8563E449;
    found = find_entry(D_001D7A10, key);
    if (found != 0) {
        return func_076C50(found, key, 0, 0xFF);
    }
    return 0;
}
