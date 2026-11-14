/* LEVEL_04:0x163F60 -- placement copy of LEVEL_01_156E20.c: finds the table entry tagged 0xD70D1864 (inline search helper) and runs a helper on it. */

typedef struct Entry10_156E20 {
    unsigned char pad_00[0x24];
    unsigned int key_24;
    unsigned char pad_28[0x44 - 0x28];
} Entry10_156E20;

typedef struct Obj10_156E20 {
    unsigned char pad_00[0x34];
    Entry10_156E20 *entries_34;
    unsigned int count_38;
} Obj10_156E20;

extern Obj10_156E20 *D_002201B0;
extern void func_07F9D0(void *p, int y, int z, int w);

static inline Entry10_156E20 *find_entry(Obj10_156E20 *o, unsigned int key) {
    Entry10_156E20 *cur;
    unsigned int i;

    for (i = 0; i < o->count_38; i++) {
        cur = &o->entries_34[i];
        if (cur->key_24 == key) {
            return cur;
        }
    }
    return 0;
}

void func_163F60(void) {
    Entry10_156E20 *found;

    found = find_entry(D_002201B0, 0xD70D1864);
    if (found != 0) {
        func_07F9D0(found, 0, 0, 0xFF);
    }
}
