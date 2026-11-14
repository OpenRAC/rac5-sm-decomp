/* LEVEL_04:0x032800 -- finds the table entry tagged 0x370B4473 (inline search helper) and forwards it with the argument to a helper. */

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

extern Obj10_165480 *D_002201B0;
extern int func_07F9D0(void *p, unsigned int key, int arg, int w);

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

int func_032800(int arg) {
    Entry10_165480 *found;
    unsigned int key;

    key = 0x370B4473u;
    found = find_entry(D_002201B0, key);
    if (found != 0) {
        return func_07F9D0(found, key, arg, 0xFF);
    }
    return 0;
}
