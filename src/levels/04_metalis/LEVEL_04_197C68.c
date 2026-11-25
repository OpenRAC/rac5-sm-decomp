/* LEVEL_04:0x197C68 -- finds the table entry tagged 0x66B80B74 (inline search helper) and forwards it with the argument to a helper. */

typedef struct Entry10_197C68 {
    unsigned char pad_00[0x24];
    unsigned int key_24;
    unsigned char pad_28[0x44 - 0x28];
} Entry10_197C68;

typedef struct Obj10_197C68 {
    unsigned char pad_00[0x34];
    Entry10_197C68 *entries_34;
    unsigned int count_38;
} Obj10_197C68;

extern Obj10_197C68 *D_002201B0;
extern int func_07F9D0(void *p, unsigned int key, void *z, int w);

static inline Entry10_197C68 *find_entry(Obj10_197C68 *o, unsigned int key) {
    Entry10_197C68 *cur;
    unsigned int i;

    for (i = 0; i < o->count_38; i++) {
        cur = &o->entries_34[i];
        if (cur->key_24 == key) {
            return cur;
        }
    }
    return 0;
}

int func_197C68(void *arg) {
    Entry10_197C68 *found;
    unsigned int key;

    key = 0x66B80B74;
    found = find_entry(D_002201B0, key);
    if (found != 0) {
        return func_07F9D0(found, key, arg, 0xFF);
    }
    return 0;
}
