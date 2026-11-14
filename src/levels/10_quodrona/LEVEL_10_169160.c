/* LEVEL_10:0x169160 -- finds the table entry tagged 0x1DFB824B (inline search helper) and forwards it to a helper. */

typedef struct Entry10_169160 {
    unsigned char pad_00[0x24];
    unsigned int key_24;
    unsigned char pad_28[0x44 - 0x28];
} Entry10_169160;

typedef struct Obj10_169160 {
    unsigned char pad_00[0x34];
    Entry10_169160 *entries_34;
    unsigned int count_38;
} Obj10_169160;

extern Obj10_169160 *D_0020F9F0;
extern int func_07CB88(void *p, unsigned int key, int z, int w);

static inline Entry10_169160 *find_entry(Obj10_169160 *o, unsigned int key) {
    Entry10_169160 *cur;
    unsigned int i;

    for (i = 0; i < o->count_38; i++) {
        cur = &o->entries_34[i];
        if (cur->key_24 == key) {
            return cur;
        }
    }
    return 0;
}

int func_169160(void) {
    Entry10_169160 *found;
    unsigned int key;

    key = 0x1DFB824B;
    found = find_entry(D_0020F9F0, key);
    if (found != 0) {
        return func_07CB88(found, key, 0, 0xFF);
    }
    return 0;
}
