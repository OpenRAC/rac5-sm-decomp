/* LEVEL_01:0x074D60 -- finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00239E20[];
extern int D_001F60B4;

Entry *func_074D60(void *key)
{
    Entry *item;
    Entry *end = D_00239E20 + D_001F60B4;

    for (item = D_00239E20; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
