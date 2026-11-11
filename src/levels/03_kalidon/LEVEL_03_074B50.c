/* LEVEL_03:0x074B50 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00254CA0[];
extern int D_0020E734;

Entry *func_074B50(void *key)
{
    Entry *item;
    Entry *end = D_00254CA0 + D_0020E734;

    for (item = D_00254CA0; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
